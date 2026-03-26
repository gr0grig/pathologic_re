// @IMPORTS: Hold/0,GetLocator/2,Trace/1,CreateIntVector/1,irand/2,self/1,CreateObjectVector/1,AddActor/6,RemoveActor/1
// @STRINGS: W:pt_spawn|W:Not enough spawn points|A:add|A:get|A:remove|W:pers_butcher|W:termitnik_butcher.xml|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x8 vars=
// @EVENT_6: op=0x45 vars=

task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_bool = 0; var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0;
	var_8_int = 0;
	
Label_10:
	var_17_int = var_8_int + (int)1;
	var_18_int = "pt_spawn" + var_17_int;
	GetLocator(var_18_int, var_9_bool);
	var_19_bool = var_9_bool == 0; //@nz
	if(var_19_bool != 0) {
	} else {
			var_8_int = var_8_int + (int)1;
			goto Label_10;
	}
	var_21_bool = var_8_int < (int)2;
	if(var_21_bool != 0) {
		Trace("Not enough spawn points");
	} else {
		CreateIntVector(var_10_object);
		var_11_int = 1;

	Label_32:
		var_23_bool = var_11_int <= var_8_int;
		if(var_23_bool != 0) {
			@@var_10_object:add(var_11_int);
			var_11_int = var_11_int + (int)1;
			goto Label_32;
		}
		var_12_int = 0;

	Label_40:
		var_26_bool = var_12_int < (int)2;
		if(var_26_bool != 0) {
			irand(var_13_int, var_8_int);
			@@var_10_object:get(var_14_int, var_13_int);
			@@var_10_object:remove(var_13_int);
			var_8_int = var_8_int + (int)-1;
			var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
			func_74(Obj());
			var_33_object = var_29_object;
			var_30_string = "pt_spawn" + var_14_int;
			func_86(var_28_object, var_29_object, var_30_string, "pers_butcher", "termitnik_butcher.xml");
			@@@var_0_object:add(var_28_object);
			var_12_int = var_12_int + (int)1;
			goto Label_40;
		}
		var_10_object = 0;

	}
	return 14;
	
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj();
	var_1_object = var_0_object;
	func_104(var_1_object);
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj();
	func_80(var_1_object);
	var_0_object = var_1_object;
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_80(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	self(var_35_object);
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_104(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		@@var_1_object:size(var_5_int);
		var_6_int = 0;

	Label_110:
		var_9_bool = var_6_int < var_5_int;
		if(var_9_bool != 0) {
			@@var_1_object:get(var_7_object, var_6_int);
			var_10_object = var_7_object;
			if(var_10_object != 0) {
				RemoveActor(var_7_object);
			}
			var_7_object = 0;
			var_6_int = var_6_int + (int)1;
			goto Label_110;
		}
		@@var_1_object:clear();
	}
	return 6;
}


func_86(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	@@var_29_object:GetLocator(var_30_string, var_41_bool, var_42_cvector, var_43_cvector);
	var_45_bool = var_41_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Locator " + var_30_string;
		var_49_int = var_47_int + " doesn't exist";
		Trace(var_49_int);
	} else {
		AddActor(Obj(), var_31_string, var_29_object, var_42_cvector, var_43_cvector, var_32_string);
	}
	var_44_object = var_28_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


