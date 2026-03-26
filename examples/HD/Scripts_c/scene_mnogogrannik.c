// @IMPORTS: Hold/0,GetLocator/2,Trace/1,CreateIntVector/1,irand/2,self/1,CreateObjectVector/1,AddActor/6,RemoveActor/1
// @STRINGS: W:pt_spawn|W:Not enough spawn points|A:add|A:get|A:remove|W:pers_littleboy|W:littleboy_mnogogrannik.xml|W:pers_littlegirl|W:littlegirl_mnogogrannik.xml|W:pers_doberman|W:pers_girl|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x8 vars=
// @EVENT_6: op=0x99 vars=

task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0;
	var_17_int = 0;
	
Label_10:
	var_35_int = var_17_int + (int)1;
	var_36_int = "pt_spawn" + var_35_int;
	GetLocator(var_36_int, var_18_bool);
	var_37_bool = var_18_bool == 0; //@nz
	if(var_37_bool != 0) {
	} else {
		var_17_int = var_17_int + (int)1;
		goto Label_10;
	}
	var_39_bool = var_17_int < (int)22;
	if(var_39_bool != 0) {
		Trace("Not enough spawn points");
		return 32;
	}
	CreateIntVector(var_19_object);
	var_20_int = 1;
	
Label_32:
	var_41_bool = var_20_int <= var_17_int;
	if(var_41_bool != 0) {
		@@var_19_object:add(var_20_int);
		var_20_int = var_20_int + (int)1;
		goto Label_32;
	}
	var_21_int = 0;
	
Label_40:
	var_44_bool = var_21_int < (int)6;
	if(var_44_bool != 0) {
		irand(var_22_int, var_17_int);
		@@var_19_object:get(var_23_int, var_22_int);
		@@var_19_object:remove(var_22_int);
		var_17_int = var_17_int + (int)-1;
		var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
		func_158(Obj());
		var_51_object = var_47_object;
		var_48_string = "pt_spawn" + var_23_int;
		func_170(var_46_object, var_47_object, var_48_string, "pers_littleboy", "littleboy_mnogogrannik.xml");
		@@@var_0_object:add(var_46_object);
		var_21_int = var_21_int + (int)1;
		goto Label_40;
	}
	var_24_int = 0;
	
Label_68:
	var_70_bool = var_24_int < (int)6;
	if(var_70_bool != 0) {
		irand(var_25_int, var_17_int);
		@@var_19_object:get(var_26_int, var_25_int);
		@@var_19_object:remove(var_25_int);
		var_17_int = var_17_int + (int)-1;
		var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; var_76_string = "";
		func_158(Obj());
		var_77_object = var_73_object;
		var_74_string = "pt_spawn" + var_26_int;
		func_170(var_72_object, var_73_object, var_74_string, "pers_littlegirl", "littlegirl_mnogogrannik.xml");
		@@@var_0_object:add(var_72_object);
		var_24_int = var_24_int + (int)1;
		goto Label_68;
	}
	var_27_int = 0;
	
Label_96:
	var_81_bool = var_27_int < (int)5;
	if(var_81_bool != 0) {
		irand(var_28_int, var_17_int);
		@@var_19_object:get(var_29_int, var_28_int);
		@@var_19_object:remove(var_28_int);
		var_17_int = var_17_int + (int)-1;
		var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = "";
		func_158(Obj());
		var_88_object = var_84_object;
		var_85_string = "pt_spawn" + var_29_int;
		func_170(var_83_object, var_84_object, var_85_string, "pers_doberman", "boy_mnogogrannik.xml");
		@@@var_0_object:add(var_83_object);
		var_27_int = var_27_int + (int)1;
		goto Label_96;
	}
	var_30_int = 0;
	
Label_124:
	var_92_bool = var_30_int < (int)5;
	if(var_92_bool != 0) {
		irand(var_31_int, var_17_int);
		@@var_19_object:get(var_32_int, var_31_int);
		@@var_19_object:remove(var_31_int);
		var_17_int = var_17_int + (int)-1;
		var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; var_98_string = "";
		func_158(Obj());
		var_99_object = var_95_object;
		var_96_string = "pt_spawn" + var_32_int;
		func_170(var_94_object, var_95_object, var_96_string, "pers_girl", "girl_mnogogrannik.xml");
		@@@var_0_object:add(var_94_object);
		var_30_int = var_30_int + (int)1;
		goto Label_124;
	}
	return 32;
	
}
EMIT "Stack[-14] = 0";


task_0_event_6(var_0_object)
{
	var_1_object = Obj();
	var_1_object = var_0_object;
	func_188(var_1_object);
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj();
	func_164(var_1_object);
	var_0_object = var_1_object;
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_170(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	@@var_47_object:GetLocator(var_48_string, var_59_bool, var_60_cvector, var_61_cvector);
	var_63_bool = var_59_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Locator " + var_48_string;
		var_67_int = var_65_int + " doesn't exist";
		Trace(var_67_int);
	} else {
		AddActor(Obj(), var_49_string, var_47_object, var_60_cvector, var_61_cvector, var_50_string);
	}
	var_62_object = var_46_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_188(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		@@var_1_object:size(var_5_int);
		var_6_int = 0;

	Label_194:
		var_9_bool = var_6_int < var_5_int;
		if(var_9_bool != 0) {
			@@var_1_object:get(var_7_object, var_6_int);
			var_10_object = var_7_object;
			if(var_10_object != 0) {
				RemoveActor(var_7_object);
			}
			var_7_object = 0;
			var_6_int = var_6_int + (int)1;
			goto Label_194;
		}
		@@var_1_object:clear();
	}
	return 6;
}


func_164(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_158(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	self(var_53_object);
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


