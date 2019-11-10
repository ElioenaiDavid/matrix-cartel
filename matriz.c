#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "matri.h"
#include "fsl_debug_console.h"

int O[][8] =
{	{{0},{0},{0},{0},{0},{0},{0},{0}},
	{{1},{1},{1},{1},{1},{1},{1},{0}},
	{{0},{0},{0},{1},{1},{0},{1},{0}},
	{{1},{1},{1},{1},{1},{0},{1},{0}},
	{{0},{0},{0},{0},{1},{0},{1},{0}},
	{{1},{1},{1},{0},{1},{0},{1},{0}},
	{{0},{0},{1},{0},{1},{0},{1},{0}},
	{{0},{0},{1},{0},{1},{0},{1},{0}}};

int main(void) {
	Matrixinit();



	while (1){
		 MatrixDraw(O);
		Matrixscrollrigth("KLK");
		Matrixscrollleft("KLK");
		Matrixscrollup("KLK");
		Matrixscrolldown("KLK");


}

}











