#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <pru.h>
//#include <pru_dump.h>
#include <BBB/all_structs.h>

using namespace std;

int main(int argc, char **argv) {
	if (geteuid() > 0) {
		cout << "ATENTION: This program should be run as root, it may fail as is." << endl;
	}
	
#if 0 // Testing code is not yet supported
	cout<<sizeof(pwmss_epwm_regs_t::TBCTL)<<endl;
	cout<<"Testing structures..."<<endl;
	if (test_tscadc_offsets()) { return 1; }
	if (test_pwmss_offsets()) { return 1; }
	if (test_pwmss_ecap_offsets()) { return 1; }
	if (test_pwmss_eqep_offsets()) { return 1; }
	if (test_pwmss_epwm_offsets()) { return 1; }
	cout<<"Ok"<<endl;
#endif

#if 1 // EPWM, ECAP, EQEP and ADC uio access test
	cout<<"Requesting raw memory access... "<<flush;
	int memfd = open("/dev/mem", O_RDWR);
	if (memfd == -1) {
		cout << "Fail." << endl;
		return 1;
	}
	cout<<"Ok."<<endl;
	
	cout<<"Mapping adc... "<<flush;
	tscadcss_regs_t *adc = (tscadcss_regs_t *) mmap(
		0, sizeof(tscadcss_regs_t),
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x44E0D000
	);
	if (MAP_FAILED == adc) {
		cout << "Fail." << endl;
	} else cout << "Ok." << endl;
	
	cout<<"Mapping pwm0ss... "<<flush;
	pwmss_regs_t *pwm0ss = (pwmss_regs_t *) mmap(
		0, 4*1024,
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48300000 
	);
	if (MAP_FAILED == pwm0ss) {
		cout << "Fail." << endl;
	} else cout << "Ok." << endl;
	
	pwmss_ecap_regs_t *pwm0ss_ecap = (pwmss_ecap_regs_t *) ((uint8_t*)pwm0ss+0x100);
	pwmss_eqep_regs_t *pwm0ss_eqep = (pwmss_eqep_regs_t *) ((uint8_t*)pwm0ss+0x180);
	pwmss_epwm_regs_t *pwm0ss_epwm = (pwmss_epwm_regs_t *) ((uint8_t*)pwm0ss+0x200);
	
	cout<<"Mapping pwm1ss... "<<flush;
	pwmss_regs_t *pwm1ss = (pwmss_regs_t *) mmap(
		0, 4*1024,
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48302000 
	);
	if (MAP_FAILED == pwm1ss) {
		cout << "Fail." << endl;
	} else cout << "Ok." << endl;
	
	pwmss_ecap_regs_t *pwm1ss_ecap = (pwmss_ecap_regs_t *) ((uint8_t*)pwm1ss+0x100);
	pwmss_eqep_regs_t *pwm1ss_eqep = (pwmss_eqep_regs_t *) ((uint8_t*)pwm1ss+0x180);
	pwmss_epwm_regs_t *pwm1ss_epwm = (pwmss_epwm_regs_t *) ((uint8_t*)pwm1ss+0x200);
	
	cout<<"Mapping pwm2ss... "<<flush;
	pwmss_regs_t *pwm2ss = (pwmss_regs_t *) mmap(
		0, 4*1024,
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48304000 
	);
	if (MAP_FAILED == pwm2ss) {
		cout << "Fail." << endl;
	} else cout << "Ok." << endl;
	
	pwmss_ecap_regs_t *pwm2ss_ecap = (pwmss_ecap_regs_t *) ((uint8_t*)pwm2ss+0x100);
	pwmss_eqep_regs_t *pwm2ss_eqep = (pwmss_eqep_regs_t *) ((uint8_t*)pwm2ss+0x180);
	pwmss_epwm_regs_t *pwm2ss_epwm = (pwmss_epwm_regs_t *) ((uint8_t*)pwm2ss+0x200);
	
	if (
		(MAP_FAILED == adc        ) |
		(MAP_FAILED == pwm0ss     ) |
		(MAP_FAILED == pwm0ss_ecap) |
		(MAP_FAILED == pwm0ss_eqep) |
		(MAP_FAILED == pwm0ss_epwm) |
		(MAP_FAILED == pwm1ss     ) |
		(MAP_FAILED == pwm1ss_ecap) |
		(MAP_FAILED == pwm1ss_eqep) |
		(MAP_FAILED == pwm1ss_epwm) |
		(MAP_FAILED == pwm2ss     ) |
		(MAP_FAILED == pwm2ss_ecap) |
		(MAP_FAILED == pwm2ss_eqep) |
		(MAP_FAILED == pwm2ss_epwm)
	) {
		cout << "Some mapping failed." << endl;
		return 2;
	}
	
// 	cout << "ADC REVISION @" << hex << &adc->REVISION.all << endl;
// 	cout << "ADC REVISION " << hex << adc->REVISION.all << endl;
	
	cout << "PWM0 @" << hex << pwm0ss << endl;
	cout << "PWM0 IDVER @" << hex << &(pwm0ss->IDVER) << endl;
	cout << "PWM0 IDVER " << hex << pwm0ss->IDVER.all << endl;
	
	pwm0ss->CLKCONFIG.bit.ePWMCLK_EN = 1;
	while (!pwm0ss->CLKSTATUS.bit.ePWM_CLK_EN_ACK);

	pwm0ss_epwm->TBPRD = 0xFFFF;
	pwm0ss_epwm->TBCTL.all = 0xFFFF;
	pwm0ss_epwm->AQCTLA.bit.ZRO = 2; // SET
	pwm0ss_epwm->AQCTLA.bit.CAU = 1; // CLEAR
	pwm0ss_epwm->AQCTLA.bit.CAD = 1; // CLEAR
	pwm0ss_epwm->AQCTLA.bit.PRD = 2; // SET
	pwm0ss_epwm->AQCTLA.bit.CBU = 0; // Do nothing
	pwm0ss_epwm->AQCTLA.bit.CBD = 0; // Do nothing
	pwm0ss_epwm->CMPA.all = 0x4000;
	for (int i=0; i<1000; ++i) {
		cout << hex << pwm0ss_epwm->TBCNT << endl;
	}

	cout << "All maps ok." << endl;
#endif

#if 0 // Prutest
	cout << "Requesting PRU access... " << flush;
	int prufd = open("/dev/uio1", O_RDWR);
	if (prufd == -1) {
		cout << "Failed." << endl;
		return 1;
	}
	cout << "Ok." << endl;

	cout << "Mapping PRU memory... " << flush;
	prumem_t *pru = pruMapRegisters(prufd);
	if (pru == MAP_FAILED) {
		cout << "Failed." << endl;
		return 1;
	}
	cout << "Ok." << endl;
	
/*	if (true) {
		cout << "Dumping initial register values to prudump.0.txt... " << flush;
		ofstream out("prudump.0.txt", ios::out|ios::trunc);
		if (!out) {
			cout << "Failed." << endl;
		} else {
			pru_dump(out, *pru, 0);
			cout << "Ok." << endl;
		}
	} */
	
	cout << "Halting PRUs... " << flush;
	pruHalt(pru,0);
	pruHalt(pru,1);
	if (!pruWaitForHalt(pru,0)) {
		cout << " Failed halting PRU0." << endl;
		return 1;
	}
	if (!pruWaitForHalt(pru,1)) {
		cout << " Failed halting PRU1." << endl;
		return 1;
	}
	cout << "Ok." << endl;
	
	cout << "Resetting PRUs... " << flush;
	if (!pruReset(pru,0)) {
		cout << " Failed resetting PRU0" << endl;
		return 1;
	}
	if (!pruReset(pru,1)) {
		cout << " Failed resetting PRU0" << endl;
		return 1;
	}
	cout << "Ok." << endl;
	
	cout << "Reconfiguring PRU interrupts... " << flush;
	pruInterruptConfig(pru);
	cout << "Ok." << endl;

	cout << "Loading PRU programs... " << flush;
	if (pruLoadProgram(pru, "pru0_text.bin", "pru0_data.bin", "pru1_text.bin", "pru1_data.bin", "pru_data.bin")) {
		cout << "Failed." << endl;
		return 1;
	}
	cout << "Ok." << endl;
	
	cout << "Running PRU0... " << flush;
	pruRun(pru, 0);
	pruWaitForHalt(pru,0);
	cout << "Done." << endl;
	
	
/*	if (true) {
		cout << "Dumping final register values to prudump.1.txt... " << flush;
		ofstream out("prudump.1.txt", ios::out|ios::trunc);
		if (!out) {
			cout << "Failed." << endl;
		} else {
			pru_dump(out, *pru, 0);
			cout << "Ok." << endl;
		}
	} */

	ofstream out("DRAMS.img", ios::out | ios::trunc | ios::binary);
	out.write((char*)&pru->DRAMS, sizeof(pru->DRAMS));
	
#endif
	
}
