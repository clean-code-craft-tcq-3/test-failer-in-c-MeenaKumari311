#ifndef __ALERTSTUB_H_
#define __ALERTSTUB_H_
int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
  if(celcius>100)
  {
    return 500;
  }
  else
  {
    return 200;
  }
}
#endif
