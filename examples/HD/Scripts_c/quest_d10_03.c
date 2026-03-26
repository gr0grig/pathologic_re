// @IMPORTS: GetMainOutdoorScene/1,Trace/1,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6,AddActorByType/6
// @STRINGS: W:pt_b10q04_bull|W:pers_avrox|W:b10q04_bull.xml|W:pt_d10q03_morlok1|W:pers_morlok|W:d10q03_morlok.xml|A:add|W:pt_d10q03_morlok2|W:pt_d10q03_morlok3|W:pt_d10q03_salesman|W:pers_salesman|W:d10q03_salesman.xml|W:pt_d10q03_people1|W:pers_worker|W:d10q03_worker.xml|W:pt_d10q03_people2|W:pers_dohodyaga|W:d10q03_dohodyaga.xml|W:pt_d10q03_people3|W:pers_unosha|W:d10q03_unosha.xml|W:pt_d10q03_people4|W:pers_alkash|W:d10q03_alkash.xml|W:place_sanitars|W:cleanup|W:pt_b11q04_sanitar|A:GetLocator|W:pers_sanitar|W:b11q04_sanitar.xml|W:pt_b11q04_corpse|W:scripted|W:b11q04_corpse.xml|W:fail|W:completed|W:d10q03|W:cleaunp|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:Remove|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x61 vars=string
// @EVENT_9: op=0xf4 vars=int,float
// @PE: 0xf4

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	Trace(var_4_string);
	var_16_bool = var_4_string == "place_sanitars";
	if(var_16_bool != 0) {
		var_17_object = Obj(); var_18_string = "";
		var_17_object = var_0_object;
		func_336(var_17_object, "cleanup");
		var_29_object = var_1_object;
		if(var_29_object != 0) {
			Trigger(var_1_object, "cleanup");
		}
		GetMainOutdoorScene(var_10_object);
		var_11_int = 1;

	Label_116:
		var_32_int = "pt_b11q04_sanitar" + var_11_int;
		@@var_10_object:GetLocator(var_32_int, var_12_bool, var_13_cvector, var_14_cvector);
		var_33_bool = var_12_bool == 0; //@nz
		if(var_33_bool != 0) {
		} else {
			var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = "";
			var_10_object = var_53_object;
			var_54_string = "pt_b11q04_sanitar" + var_11_int;
			func_297(var_52_object, var_53_object, var_54_string, "pers_sanitar", "b11q04_sanitar.xml");
			@@@var_2_object:add(var_52_object);
			var_11_int = var_11_int + (int)1;
			goto Label_116;
	}
		var_73_bool = var_4_string == "fail";
		if(var_73_bool != 0) {
			func_174();
			goto Label_159;
		}
		var_81_bool = var_4_string == "completed";
		if(var_81_bool == 0) goto Label_159;
		func_182();
	}
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
	var_10_object = var_35_object;
	func_279(var_34_object, var_35_object, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
	var_3_object = var_34_object;
	var_10_object = 0;
	goto Label_159;
	
Label_159:
	return 10;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_160();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	var_6_object = Obj();
	func_255(var_6_object);
	var_0_object = var_6_object;
	var_9_object = Obj();
	func_255(var_9_object);
	var_2_object = var_9_object;
	GetMainOutdoorScene(var_5_object);
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
	var_5_object = var_11_object;
	func_261(var_10_object, var_11_object, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
	var_1_object = var_10_object;
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
	var_5_object = var_29_object;
	func_261(var_28_object, var_29_object, "pt_d10q03_morlok1", "pers_morlok", "d10q03_morlok.xml");
	@@@var_0_object:add(var_28_object);
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = "";
	var_5_object = var_34_object;
	func_261(var_33_object, var_34_object, "pt_d10q03_morlok2", "pers_morlok", "d10q03_morlok.xml");
	@@@var_0_object:add(var_33_object);
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = "";
	var_5_object = var_39_object;
	func_261(var_38_object, var_39_object, "pt_d10q03_morlok3", "pers_morlok", "d10q03_morlok.xml");
	@@@var_0_object:add(var_38_object);
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_5_object = var_44_object;
	func_261(var_43_object, var_44_object, "pt_d10q03_salesman", "pers_salesman", "d10q03_salesman.xml");
	@@@var_0_object:add(var_43_object);
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = "";
	var_5_object = var_49_object;
	func_261(var_48_object, var_49_object, "pt_d10q03_people1", "pers_worker", "d10q03_worker.xml");
	@@@var_0_object:add(var_48_object);
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = "";
	var_5_object = var_54_object;
	func_261(var_53_object, var_54_object, "pt_d10q03_people2", "pers_dohodyaga", "d10q03_dohodyaga.xml");
	@@@var_0_object:add(var_53_object);
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
	var_5_object = var_59_object;
	func_261(var_58_object, var_59_object, "pt_d10q03_people3", "pers_unosha", "d10q03_unosha.xml");
	@@@var_0_object:add(var_58_object);
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = "";
	var_5_object = var_64_object;
	func_261(var_63_object, var_64_object, "pt_d10q03_people4", "pers_alkash", "d10q03_alkash.xml");
	@@@var_0_object:add(var_63_object);
	var_68_int = 0;
	func_225((int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_160()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("d10q03", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_174();
	}
	func_201(var_5_float, var_6_int, var_7_int);
	return 2;
}


func_225(var_68_int)
{
	var_69_float = 0; var_70_float = 0;
	GetGameTime(var_70_float);
	var_72_float = var_68_int * (int)24;
	var_73_bool = var_70_float >= var_72_float;
	if(var_73_bool != 0) {
		func_201(var_68_int, var_69_float, var_70_float);
	} else {
		var_108_float = var_68_int * (int)24;
		SetTimeEvent((int)0, var_108_float);
		Hold();
	}
	return 2;
	
}


func_261(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		AddActor(Obj(), var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_201(var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	func_190(var_69_float, var_70_float);
	var_88_object = Obj();
	var_88_object = var_2_object;
	func_315(var_88_object);
	var_99_object = var_3_object;
	if(var_99_object != 0) {
		Trigger(var_3_object, "cleaunp");
	}
	var_101_object = var_1_object;
	if(var_101_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_103_object = Obj();
	func_249(var_103_object);
	RemoveActor(var_103_object);
	return 0;
}


func_297(var_52_object, var_53_object, var_54_string, var_55_string, var_56_string)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj();
	@@var_53_object:GetLocator(var_54_string, var_62_bool, var_63_cvector, var_64_cvector);
	var_66_bool = var_62_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_68_int = "Locator " + var_54_string;
		var_70_int = var_68_int + " doesn't exist";
		Trace(var_70_int);
	} else {
		@@var_53_object:AddStationaryActor(Obj(), var_63_cvector, var_64_cvector, var_55_string, var_56_string);
	}
	var_65_object = var_52_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_174()
{
	SetVariable("d10q03", (int)-1);
	func_190(var_6_int, var_7_int);
	return 0;
}


func_336(var_74_object, var_75_string)
{
	var_76_int = 0; var_77_int = 0; var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_object = Obj();
	var_82_object = var_74_object;
	if(var_82_object != 0) {
		@@var_74_object:size(var_79_int);
		var_80_int = 0;

	Label_342:
		var_83_bool = var_80_int < var_79_int;
		if(var_83_bool != 0) {
			@@var_74_object:get(var_81_object, var_80_int);
			var_84_object = var_81_object;
			if(var_84_object != 0) {
				Trigger(var_81_object, var_75_string);
			}
			var_81_object = 0;
			var_80_int = var_80_int + (int)1;
			goto Label_342;
		}
	}
	return 6;
}


func_182()
{
	SetVariable("d10q03", (int)1000);
	func_190(var_13_cvector, var_14_cvector);
	return 0;
}


func_279(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
{
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj();
	@@var_35_object:GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector);
	var_47_bool = var_43_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_49_int = "Locator " + var_36_string;
		var_51_int = var_49_int + " doesn't exist";
		Trace(var_51_int);
	} else {
		AddActorByType(Obj(), var_37_string, var_35_object, var_44_cvector, var_45_cvector, var_38_string);
	}
	var_46_object = var_34_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_249(var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj();
	self(var_105_object);
	var_105_object = var_103_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_315(var_88_object)
{
	var_89_int = 0; var_90_int = 0; var_91_object = Obj(); var_92_int = 0; var_93_int = 0; var_94_object = Obj();
	var_95_object = var_88_object;
	if(var_95_object != 0) {
		@@var_88_object:size(var_92_int);
		var_93_int = 0;

	Label_321:
		var_96_bool = var_93_int < var_92_int;
		if(var_96_bool != 0) {
			@@var_88_object:get(var_94_object, var_93_int);
			var_97_object = var_94_object;
			if(var_97_object != 0) {
				@@var_94_object:Remove();
			}
			var_94_object = 0;
			var_93_int = var_93_int + (int)1;
			goto Label_321;
		}
		@@var_88_object:clear();
	}
	return 6;
}


func_190(var_0_object, var_1_object)
{
	var_74_object = Obj(); var_75_string = "";
	var_74_object = var_0_object;
	func_336(var_74_object, "cleanup");
	var_86_object = var_1_object;
	if(var_86_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	return 0;
}


func_255(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


