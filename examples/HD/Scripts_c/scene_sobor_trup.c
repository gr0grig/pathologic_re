// @IMPORTS: CreateObjectVector/1,Hold/0,SetVariable/2,self/1,Trace/1,AddActor/6,RemoveActor/1
// @STRINGS: W:noaglaja|W:sobor_aglaja|W:pt_d6q01_boy|W:pers_boy|W:d6q01_boy.xml|A:add|W:pt_d6q01_girl|W:pers_girl|W:d6q01_girl.xml|W:pt_d6q01_unosha|W:pers_unosha|W:d6q01_unosha.xml|W:pt_d6q01_wasted_male|W:pers_wasted_male|W:d6q01_wasted_male.xml|W:pt_d6q01_wasted_woman|W:pers_wasted_girl|W:d6q01_wasted_woman.xml|W:pt_d6q01_woman|W:pers_woman|W:d6q01_woman.xml|W:pt_d6q01_worker|W:pers_worker|W:d6q01_worker.xml|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:get|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x6 vars=string
// @EVENT_5: op=0x17 vars=
// @EVENT_6: op=0x6c vars=
// @PE: 0x6

task_0_event_26(var_0_object, var_1_string)
{
	var_3_bool = var_1_string == "noaglaja";
	if(var_3_bool != 0) {
		SetVariable("sobor_aglaja", (int)0);
	} else {
		var_7_bool = var_1_string == "aglaja";
		if(var_7_bool == 0) goto Label_22;
		SetVariable("sobor_aglaja", (int)1);
	}
Label_22:
	return 0;
	
}


task_0_event_5(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); var_3_string = ""; var_4_string = ""; var_5_string = "";
	func_113(Obj());
	var_6_object = var_2_object;
	func_119(var_1_object, var_2_object, "pt_d6q01_boy", "pers_boy", "d6q01_boy.xml");
	@@@var_0_object:add(var_1_object);
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
	func_113(Obj());
	var_27_object = var_23_object;
	func_119(var_22_object, var_23_object, "pt_d6q01_girl", "pers_girl", "d6q01_girl.xml");
	@@@var_0_object:add(var_22_object);
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
	func_113(Obj());
	var_33_object = var_29_object;
	func_119(var_28_object, var_29_object, "pt_d6q01_unosha", "pers_unosha", "d6q01_unosha.xml");
	@@@var_0_object:add(var_28_object);
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
	func_113(Obj());
	var_39_object = var_35_object;
	func_119(var_34_object, var_35_object, "pt_d6q01_wasted_male", "pers_wasted_male", "d6q01_wasted_male.xml");
	@@@var_0_object:add(var_34_object);
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
	func_113(Obj());
	var_45_object = var_41_object;
	func_119(var_40_object, var_41_object, "pt_d6q01_wasted_woman", "pers_wasted_girl", "d6q01_wasted_woman.xml");
	@@@var_0_object:add(var_40_object);
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
	func_113(Obj());
	var_51_object = var_47_object;
	func_119(var_46_object, var_47_object, "pt_d6q01_woman", "pers_woman", "d6q01_woman.xml");
	@@@var_0_object:add(var_46_object);
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = "";
	func_113(Obj());
	var_57_object = var_53_object;
	func_119(var_52_object, var_53_object, "pt_d6q01_worker", "pers_worker", "d6q01_worker.xml");
	@@@var_0_object:add(var_52_object);
	return 0;
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj();
	var_1_object = var_0_object;
	func_137(var_1_object);
	return 0;
}


main(var_0_object)
{
	CreateObjectVector(var_0_object);
	
Label_2:
	Hold();
	goto Label_2;
}
EMIT "Return(); Pop(0)";


func_113(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	self(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_137(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		@@var_1_object:size(var_5_int);
		var_6_int = 0;

	Label_143:
		var_9_bool = var_6_int < var_5_int;
		if(var_9_bool != 0) {
			@@var_1_object:get(var_7_object, var_6_int);
			var_10_object = var_7_object;
			if(var_10_object != 0) {
				RemoveActor(var_7_object);
			}
			var_7_object = 0;
			var_6_int = var_6_int + (int)1;
			goto Label_143;
		}
		@@var_1_object:clear();
	}
	return 6;
}


func_119(var_1_object, var_2_object, var_3_string, var_4_string, var_5_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj();
	@@var_2_object:GetLocator(var_3_string, var_13_bool, var_14_cvector, var_15_cvector);
	var_17_bool = var_13_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_19_int = "Locator " + var_3_string;
		var_21_int = var_19_int + " doesn't exist";
		Trace(var_21_int);
	} else {
		AddActor(Obj(), var_4_string, var_2_object, var_14_cvector, var_15_cvector, var_5_string);
	}
	var_16_object = var_1_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


