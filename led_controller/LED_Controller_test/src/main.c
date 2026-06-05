#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "sleep.h"

#define LED_BASEADDR XPAR_LED_CONTROLLER_0_BASEADDR

int main()
{
    xil_printf("LED Controller test start\r\n");

    while (1)
    {
        for (int i = 0; i < 256; i++)
        {
            Xil_Out32(LED_BASEADDR, i);
            xil_printf("LED value: %d\r\n", i);
            sleep(1);
        }
    }

    return 0;
}