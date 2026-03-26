// @IMPORTS: Hold/0,GetCurrentWeapon/1,GetGeometryLocator/3,SetLitColor/1,MakeBillboard/4,Sleep/1,RemoveBillboard/1
// @STRINGS: W:shot|W:samopal|W:rifle|W:revolver|W:_blast|W:_blast.tex
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x5 vars=string
// @PE: 0x5

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "shot";
	if(var_3_bool != 0) {
		func_13(var_1_string);
	}
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_13(var_0_bool)
{
	var_4_string = ""; var_5_float = 0; var_6_float = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_string = ""; var_10_float = 0; var_11_float = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0);
	var_14_bool = var_0_bool;
	if(var_14_bool != 0) {
		return 10;
	}
	GetCurrentWeapon(var_9_string);
	var_16_bool = var_9_string == "samopal";
	if(var_16_bool != 0) {
		var_10_float = 18;
		var_11_float = 0.03333333507180214;
	} else {
		var_27_bool = var_9_string == "rifle";
		if(var_27_bool != 0) {
			var_10_float = 18;
			var_11_float = 0.07500000298023224;
			goto Label_38;
		}
		var_29_bool = var_9_string == "revolver";
		if(var_29_bool != 0) {
			var_10_float = 15;
			var_11_float = 0.07500000298023224;
			goto Label_38;
		}
		return 10;
	}
Label_38:
	var_18_int = var_9_string + "_blast";
	GetGeometryLocator(var_18_int, var_12_bool, var_13_cvector);
	var_19_bool = var_12_bool;
	if(var_19_bool != 0) {
		var_0_bool = true;
		SetLitColor(CVector(0.4960784614086151, 0.4176470935344696, 0.16862745583057404));
		var_23_int = var_9_string + "_blast.tex";
		MakeBillboard("blast", var_23_int, var_13_cvector, var_10_float);
		Sleep(var_11_float);
		SetLitColor(CVector(0.0, 0.0, 0.0));
		RemoveBillboard("blast");
		var_0_bool = false;
	}
	return 10;
	
}


