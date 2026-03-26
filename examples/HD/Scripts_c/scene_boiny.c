// @IMPORTS: Hold/0,GetLocator/2,Trace/1,CreateIntVector/1,irand/2,self/1,CreateObjectVector/1,AddActor/6,RemoveActor/1
// @STRINGS: W:pt_spawn|W:Not enough spawn points|A:add|A:get|A:remove|W:pers_butcher|W:boiny_butcher.xml|W:pers_morlok|W:boiny_morlok.xml|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x8 vars=
// @EVENT_6: op=0x61 vars=

task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0;
	var_11_int = 0;
	
Label_10:
	var_23_int = var_11_int + (int)1;
	var_24_int = "pt_spawn" + var_23_int;
	GetLocator(var_24_int, var_12_bool);
	var_25_bool = var_12_bool == 0; //@nz
	if(var_25_bool != 0) {
	} else {
		var_11_int = var_11_int + (int)1;
		goto Label_10;
	}
	var_27_bool = var_11_int < (int)18;
	if(var_27_bool != 0) {
		Trace("Not enough spawn points");
		return 20;
	}
	CreateIntVector(var_13_object);
	var_14_int = 1;
	
Label_32:
	var_29_bool = var_14_int <= var_11_int;
	if(var_29_bool != 0) {
		@@var_13_object:add(var_14_int);
		var_14_int = var_14_int + (int)1;
		goto Label_32;
	}
	var_15_int = 0;
	
Label_40:
	var_32_bool = var_15_int < (int)12;
	if(var_32_bool != 0) {
		irand(var_16_int, var_11_int);
		@@var_13_object:get(var_17_int, var_16_int);
		@@var_13_object:remove(var_16_int);
		var_11_int = var_11_int + (int)-1;
		var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
		func_102(Obj());
		var_39_object = var_35_object;
		var_36_string = "pt_spawn" + var_17_int;
		func_114(var_34_object, var_35_object, var_36_string, "pers_butcher", "boiny_butcher.xml");
		@@@var_0_object:add(var_34_object);
		var_15_int = var_15_int + (int)1;
		goto Label_40;
	}
	var_18_int = 0;
	
Label_68:
	var_58_bool = var_18_int < (int)6;
	if(var_58_bool != 0) {
		irand(var_19_int, var_11_int);
		@@var_13_object:get(var_20_int, var_19_int);
		@@var_13_object:remove(var_19_int);
		var_11_int = var_11_int + (int)-1;
		var_60_object = Obj(); var_61_object = Obj(); var_62_string = ""; var_63_string = ""; var_64_string = "";
		func_102(Obj());
		var_65_object = var_61_object;
		var_62_string = "pt_spawn" + var_20_int;
		func_114(var_60_object, var_61_object, var_62_string, "pers_morlok", "boiny_morlok.xml");
		@@@var_0_object:add(var_60_object);
		var_18_int = var_18_int + (int)1;
		goto Label_68;
	}
	return 20;
	
}
EMIT "Stack[-8] = 0";


task_0_event_6(var_0_object)
{
	var_1_object = Obj();
	var_1_object = var_0_object;
	func_132(var_1_object);
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj();
	func_108(var_1_object);
	var_0_object = var_1_object;
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_132(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		@@var_1_object:size(var_5_int);
		var_6_int = 0;

	Label_138:
		var_9_bool = var_6_int < var_5_int;
		if(var_9_bool != 0) {
			@@var_1_object:get(var_7_object, var_6_int);
			var_10_object = var_7_object;
			if(var_10_object != 0) {
				RemoveActor(var_7_object);
			}
			var_7_object = 0;
			var_6_int = var_6_int + (int)1;
			goto Label_138;
		}
		@@var_1_object:clear();
	}
	return 6;
}


func_114(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj();
	@@var_35_object:GetLocator(var_36_string, var_47_bool, var_48_cvector, var_49_cvector);
	var_51_bool = var_47_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = "Locator " + var_36_string;
		var_55_int = var_53_int + " doesn't exist";
		Trace(var_55_int);
	} else {
		AddActor(Obj(), var_37_string, var_35_object, var_48_cvector, var_49_cvector, var_38_string);
	}
	var_50_object = var_34_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_108(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_102(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj();
	self(var_41_object);
	var_41_object = var_39_object;
	return 2;
}
EMIT "Stack[-1] = 0";


