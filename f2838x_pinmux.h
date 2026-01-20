//*****************************************************************************
//
//  f2838x_pinmux.h - Created using TI Pinmux 1.26.2+4477 on 1/21/2026 at 3:22:35 PM.
//
//*****************************************************************************
//
// Copyright (C) 2017 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
//
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the
//   distribution.
//
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************
//
//  These values will provide the functionality requested when written into
//  the registers for which the #defines are named.  For example, using the
//  C2000Ware device support header files, use the defines like in this
//  sample function:
//
//  void samplePinMuxFxn(void)
//  {
//      EALLOW;
//      //
//      // Write generated values to mux registers
//      //
//      GpioCtrlRegs.GPAMUX1.all  = GPAMUX1_VALUE;
//      GpioCtrlRegs.GPAMUX2.all  = GPAMUX2_VALUE;
//      GpioCtrlRegs.GPBMUX1.all  = GPBMUX1_VALUE;
//        . . .
//      EDIS;
//  }
//
//  NOTE:  These GPIO control registers are only available on CPU1.
//
//*****************************************************************************

//
// Port A mux register values
//
// Pin W11 (GPIO29) to ESC_SYNC0 (mode 14)
// Pin T11 (GPIO30) to ESC_SYNC1 (mode 14)
// Pin C8 (GPIO0) to EPWM1A (mode 1)
// Pin D8 (GPIO1) to EPWM1B (mode 1)
// Pin A7 (GPIO2) to EPWM2A (mode 1)
// Pin B7 (GPIO3) to EPWM2B (mode 1)
// Pin C7 (GPIO4) to EPWM3A (mode 1)
// Pin D7 (GPIO5) to EPWM3B (mode 1)
// Pin A6 (GPIO6) to EPWM4A (mode 1)
// Pin B6 (GPIO7) to EPWM4B (mode 1)
// Pin G2 (GPIO8) to EPWM5A (mode 1)
// Pin G3 (GPIO9) to EPWM5B (mode 1)
// Pin B2 (GPIO10) to EPWM6A (mode 1)
// Pin C1 (GPIO11) to EPWM6B (mode 1)
// Pin C2 (GPIO12) to EPWM7A (mode 1)
// Pin D1 (GPIO13) to EPWM7B (mode 1)
// Pin D2 (GPIO14) to EPWM8A (mode 1)
// Pin D3 (GPIO15) to EPWM8B (mode 1)
// Pin E1 (GPIO16) to EPWM9A (mode 5)
// Pin E2 (GPIO17) to EPWM9B (mode 5)
// Pin E3 (GPIO18) to EPWM10A (mode 5)
// Pin E4 (GPIO19) to EPWM10B (mode 5)
// Pin F2 (GPIO20) to EPWM11A (mode 5)
// Pin F3 (GPIO21) to EPWM11B (mode 5)
// Pin J4 (GPIO22) to EPWM12A (mode 5)
// Pin K4 (GPIO23) to EPWM12B (mode 5)
#define GPAMUX1_MASK		0xffffffff
#define GPAMUX2_MASK		0x3c00ffff
#define GPAMUX1_VALUE		0x55555555
#define GPAMUX2_VALUE		0x28005555
#define GPAGMUX1_VALUE		0x00000000
#define GPAGMUX2_VALUE		0x3c005555

//
// Port B mux register values
//
#define GPBMUX1_MASK		0x00000000
#define GPBMUX2_MASK		0x00000000
#define GPBMUX1_VALUE		0x00000000
#define GPBMUX2_VALUE		0x00000000
#define GPBGMUX1_VALUE		0x00000000
#define GPBGMUX2_VALUE		0x00000000

//
// Port C mux register values
//
#define GPCMUX1_MASK		0x00000000
#define GPCMUX2_MASK		0x00000000
#define GPCMUX1_VALUE		0x00000000
#define GPCMUX2_VALUE		0x00000000
#define GPCGMUX1_VALUE		0x00000000
#define GPCGMUX2_VALUE		0x00000000

//
// Port D mux register values
//
// Pin T9 (GPIO125) to ESC_LATCH0 (mode 14)
// Pin U9 (GPIO126) to ESC_LATCH1 (mode 14)
// Pin L3 (GPIO107) to GPIO107 (mode 0)
// Pin U15 (GPIO120) to GPIO120 (mode 0)
// Pin W16 (GPIO121) to GPIO121 (mode 0)
#define GPDMUX1_MASK		0x00c00000
#define GPDMUX2_MASK		0x3c0f0000
#define GPDMUX1_VALUE		0x00000000
#define GPDMUX2_VALUE		0x28000000
#define GPDGMUX1_VALUE		0x00000000
#define GPDGMUX2_VALUE		0x3c000000

//
// Port E mux register values
//
// Pin F18 (GPIO143) to ESC_LED_LINK0_ACTIVE (mode 14)
// Pin F17 (GPIO144) to ESC_LED_LINK1_ACTIVE (mode 14)
// Pin D18 (GPIO146) to ESC_LED_RUN (mode 14)
// Pin E17 (GPIO145) to ESC_LED_ERR (mode 14)
// Pin D17 (GPIO147) to ESC_LED_STATE_RUN (mode 14)
// Pin B13 (GPIO150) to ESC_I2C_SDA (mode 14)
// Pin C13 (GPIO151) to ESC_I2C_SCL (mode 14)
// Pin U18 (GPIO135) to ESC_TX1_DATA3 (mode 14)
// Pin V18 (GPIO134) to ESC_TX1_DATA2 (mode 14)
// Pin W18 (GPIO132) to ESC_TX1_DATA1 (mode 14)
// Pin V10 (GPIO131) to ESC_TX1_DATA0 (mode 14)
// Pin D13 (GPIO152) to ESC_MDIO_CLK (mode 14)
// Pin A12 (GPIO153) to ESC_MDIO_DATA (mode 14)
// Pin T10 (GPIO129) to ESC_TX1_ENA (mode 14)
// Pin T18 (GPIO137) to ESC_RX1_CLK (mode 14)
// Pin T17 (GPIO136) to ESC_RX1_DV (mode 14)
// Pin T19 (GPIO138) to ESC_RX1_ERR (mode 14)
// Pin N19 (GPIO139) to ESC_RX1_DATA0 (mode 14)
// Pin M19 (GPIO140) to ESC_RX1_DATA1 (mode 14)
// Pin M18 (GPIO141) to ESC_RX1_DATA2 (mode 14)
// Pin L19 (GPIO142) to ESC_RX1_DATA3 (mode 14)
// Pin C12 (GPIO155) to ESC_PHY_RESETn (mode 14)
// Pin B10 (GPIO157) to ESC_TX0_CLK (mode 14)
// Pin C10 (GPIO158) to ESC_TX0_DATA0 (mode 14)
// Pin D10 (GPIO159) to ESC_TX0_DATA1 (mode 14)
// Pin D12 (GPIO156) to ESC_TX0_ENA (mode 14)
// Pin U10 (GPIO130) to ESC_TX1_CLK (mode 14)
// Pin D14 (GPIO148) to ESC_PHY0_LINKSTATUS (mode 14)
// Pin A13 (GPIO149) to ESC_PHY1_LINKSTATUS (mode 14)
// Pin B12 (GPIO154) to GPIO154 (mode 0)
#define GPEMUX1_MASK		0xfffff3fc
#define GPEMUX2_MASK		0xffffffff
#define GPEMUX1_VALUE		0xaaaaa2a8
#define GPEMUX2_VALUE		0xaa8aaaaa
#define GPEGMUX1_VALUE		0xfffff3fc
#define GPEGMUX2_VALUE		0xffcfffff

//
// Port F mux register values
//
// Pin A8 (GPIO163) to ESC_RX0_CLK (mode 14)
// Pin D9 (GPIO162) to ESC_RX0_DV (mode 14)
// Pin B8 (GPIO164) to ESC_RX0_ERR (mode 14)
// Pin C5 (GPIO165) to ESC_RX0_DATA0 (mode 14)
// Pin D5 (GPIO166) to ESC_RX0_DATA1 (mode 14)
// Pin C4 (GPIO167) to ESC_RX0_DATA2 (mode 14)
// Pin D4 (GPIO168) to ESC_RX0_DATA3 (mode 14)
// Pin B9 (GPIO160) to ESC_TX0_DATA2 (mode 14)
// Pin C9 (GPIO161) to ESC_TX0_DATA3 (mode 14)
#define GPFMUX1_MASK		0x0003ffff
#define GPFMUX1_VALUE		0x0002aaaa
#define GPFGMUX1_VALUE		0x0003ffff

//
// Port B analog mode register values
//
#define GPBAMSEL_MASK		0x00000000
#define GPBAMSEL_VALUE		0x00000000

//*****************************************************************************
//
// Function prototype for function to write values above into their
// corresponding registers. This function is found in f2838x_pinmux.c. Its use
// is completely optional.
//
//*****************************************************************************
extern void GPIO_setPinMuxConfig(void);
