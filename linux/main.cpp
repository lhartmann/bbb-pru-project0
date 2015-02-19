#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <BBB/all_structs.h>

using namespace std;

int main(int argc, char **argv) {
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
	
	cout<<"Requesting raw memory access... "<<flush;
	int memfd = open("/dev/mem", O_RDWR);
	if (memfd == -1) return 1;
	cout<<"Ok."<<endl;
	
	cout<<"Mapping adc... "<<flush;
	tscadcss_regs_t *adc = (tscadcss_regs_t *) mmap(
		0, sizeof(tscadcss_regs_t),
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x44E0D000
	);
	if (MAP_FAILED == adc) {
		cout << "Fail." << endl;
	}else
	cout << "Ok." << endl;
	
	cout<<"Mapping pwm0ss... "<<flush;
	pwmss_regs_t *pwm0ss = (pwmss_regs_t *) mmap(
		0, 4*1024,
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48300000 
	);
	if (MAP_FAILED == pwm0ss) {
		cout << "Fail." << endl;
	}else
	cout << "Ok." << endl;
	
	pwmss_ecap_regs_t *pwm0ss_ecap = (pwmss_ecap_regs_t *) ((uint8_t*)pwm0ss+0x100);
 	pwmss_eqep_regs_t *pwm0ss_eqep = (pwmss_eqep_regs_t *) ((uint8_t*)pwm0ss+0x180);
 	pwmss_epwm_regs_t *pwm0ss_epwm = (pwmss_epwm_regs_t *) ((uint8_t*)pwm0ss+0x200);
	
	cout<<"Mapping pwm1ss... "<<flush;
	pwmss_regs_t *pwm1ss = (pwmss_regs_t *) mmap(
		0, sizeof(pwmss_regs_t),
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48302000 
	);
	if (MAP_FAILED == pwm1ss) {
		cout << "Fail." << endl;
	}else
	cout << "Ok." << endl;
	
	pwmss_ecap_regs_t *pwm1ss_ecap = (pwmss_ecap_regs_t *) ((uint8_t*)pwm1ss+0x100);
 	pwmss_eqep_regs_t *pwm1ss_eqep = (pwmss_eqep_regs_t *) ((uint8_t*)pwm1ss+0x180);
 	pwmss_epwm_regs_t *pwm1ss_epwm = (pwmss_epwm_regs_t *) ((uint8_t*)pwm1ss+0x200);
	
	cout<<"Mapping pwm2ss... "<<flush;
	pwmss_regs_t *pwm2ss = (pwmss_regs_t *) mmap(
		0, sizeof(pwmss_regs_t),
		PROT_READ | PROT_WRITE, MAP_SHARED,
		memfd, 0x48304000 
	);
	if (MAP_FAILED == pwm2ss) {
		cout << "Fail." << endl;
	}else
	cout << "Ok." << endl;
	
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
	
	cout << "PWM0 IDVER @" << hex << &pwm0ss->IDVER << endl;
	cout << "PWM0 IDVER " << hex << pwm0ss->IDVER.all << endl;
	
	pwm0ss->CLKCONFIG.bit.ePWMCLK_EN = 1;
	while (!pwm0ss->CLKSTATUS.bit.ePWM_CLK_EN_ACK);

	pwm0ss_epwm->TBPRD = 0xFFFF;
	pwm0ss_epwm->TBCTL.all = 0xFFFF;
	for (int i=0; i<1000; ++i) {
		cout << hex << pwm0ss_epwm->TBCNT << endl;
	}
	
	cout << "All maps ok." << endl;
}
