// @IMPORTS: Hold/0,sync/0,GetLocator/4,AddActor/6,self/1,CreateObjectVector/1,RemoveActor/1
// @STRINGS: W:pt_rat|W:pers_rat|W:rat_indoor.xml|A:add|A:size|A:get|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x7 vars=
// @EVENT_6: op=0xe vars=
// @PE: 0x0,0xe,0x14,0x17

task_0_event_5(var_0_object)
{
	var_1_string = "";
	func_36(var_0_object, "pt_rat");
	sync();
	return 0;
}


task_0_event_6(var_0_object)
{
	func_31(var_0_object);
	sync();
	return 0;
}


main(var_0_object)
{
	func_26(var_0_object);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_36(var_0_object, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0);
	func_31(var_9_cvector);
	
Label_41:
	var_21_int = var_1_string + (int)1;
	GetLocator(var_21_int, var_7_bool, var_8_cvector, var_9_cvector);
	var_22_bool = var_7_bool == 0; //@nz
	if(var_22_bool != 0) {
	} else {
		var_23_object = Obj(); var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
		var_6_int = var_24_int;
		var_8_cvector = var_25_cvector;
		var_9_cvector = var_26_cvector;
		func_59(var_23_object, var_24_int, var_25_cvector, var_26_cvector);
		@@@var_0_object:add(var_23_object);
		var_6_int = var_6_int + (int)1;
		goto Label_41;
	}
	return 8;
	
}


func_76(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	self(var_33_object);
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_82(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_20(var_29_string)
{
	var_29_string = "pers_rat";
	return 0;
}


func_23(var_34_string)
{
	var_34_string = "rat_indoor.xml";
	return 0;
}


func_88(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		@@var_1_object:size(var_5_int);
		var_6_int = 0;

	Label_94:
		var_9_bool = var_6_int < var_5_int;
		if(var_9_bool != 0) {
			@@var_1_object:get(var_7_object, var_6_int);
			var_10_object = var_7_object;
			if(var_10_object != 0) {
				RemoveActor(var_7_object);
			}
			var_7_object = 0;
			var_6_int = var_6_int + (int)1;
			goto Label_94;
		}
		@@var_1_object:clear();
	}
	return 6;
}


func_26(var_0_object)
{
	var_1_object = Obj();
	func_82(var_1_object);
	var_0_object = var_1_object;
	return 0;
}


func_59(var_23_object, var_24_int, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj();
	var_29_string = ""; var_30_int = 0;
	var_24_int = var_30_int;
	func_20(var_30_int);
	var_31_object = Obj();
	func_76(var_31_object);
	var_34_string = ""; var_35_int = 0;
	var_24_int = var_35_int;
	func_23(var_35_int);
	AddActor(var_28_object, var_29_string, var_31_object, var_25_cvector, var_26_cvector, var_34_string);
	var_28_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_31(var_0_object)
{
	var_1_object = Obj();
	var_1_object = var_0_object;
	func_88(var_1_object);
	return 0;
}


