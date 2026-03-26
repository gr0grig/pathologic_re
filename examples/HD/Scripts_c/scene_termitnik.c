// @IMPORTS: GetLocator/2,Trace/1,CreateIntVector/1,irand/2,Hold/0,RemoveActor/1,self/1,CreateObjectVector/1,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:quest_d8_04|W:termitnik_load|W:quest_d8_03|W:pt_spawn|W:Not enough spawn points|A:add|A:get|A:remove|W:pers_butcher|W:termitnik_butcher.xml|W:pers_morlok|W:termitnik_morlok.xml|W:pt_agony|W:agony1_morlok.xml|A:size|A:IsDead|W:ToDie|W:HasProperty|A:HasProperty|A:GetLocator|W:Locator |W: doesn't exist|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_5: op=0x8 vars=
// @EVENT_6: op=0x6e vars=
// @PE: 0x8b,0x8f,0x92

task_0_event_5(var_0_object, var_1_object, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_318(var_23_bool, "quest_d8_04", "termitnik_load");
	var_29_bool = 0; var_30_string = ""; var_31_string = "";
	func_318(var_29_bool, "quest_d8_03", "termitnik_load");
	var_13_int = 0;
	
Label_20:
	var_34_int = var_13_int + (int)1;
	var_35_int = "pt_spawn" + var_34_int;
	GetLocator(var_35_int, var_14_bool);
	var_36_bool = var_14_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
			var_13_int = var_13_int + (int)1;
			goto Label_20;
	}
	var_38_bool = var_13_int < (int)18;
	if(var_38_bool != 0) {
		Trace("Not enough spawn points");
	} else {
		CreateIntVector(var_15_object);
		var_16_int = 1;

	Label_42:
		var_109_bool = var_16_int <= var_13_int;
		if(var_109_bool != 0) {
			@@var_15_object:add(var_16_int);
			var_16_int = var_16_int + (int)1;
			goto Label_42;
		}
		var_17_int = 0;

	Label_50:
		var_112_bool = var_17_int < (int)12;
		if(var_112_bool != 0) {
			irand(var_18_int, var_13_int);
			@@var_15_object:get(var_19_int, var_18_int);
			@@var_15_object:remove(var_18_int);
			var_13_int = var_13_int + (int)-1;
			var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = "";
			func_288(Obj());
			var_119_object = var_115_object;
			var_116_string = "pt_spawn" + var_19_int;
			func_300(var_114_object, var_115_object, var_116_string, "pers_butcher", "termitnik_butcher.xml");
			@@@var_2_object:add(var_114_object);
			var_17_int = var_17_int + (int)1;
			goto Label_50;
		}
		var_20_int = 0;

	Label_78:
		var_123_bool = var_20_int < (int)6;
		if(var_123_bool != 0) {
			irand(var_21_int, var_13_int);
			@@var_15_object:get(var_22_int, var_21_int);
			@@var_15_object:remove(var_21_int);
			var_13_int = var_13_int + (int)-1;
			var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = "";
			func_288(Obj());
			var_130_object = var_126_object;
			var_127_string = "pt_spawn" + var_22_int;
			func_300(var_125_object, var_126_object, var_127_string, "pers_morlok", "termitnik_morlok.xml");
			@@@var_2_object:add(var_125_object);
			var_20_int = var_20_int + (int)1;
			goto Label_78;
		}
		var_15_object = 0;

	}
	func_167(var_21_int, var_22_int);
	return 20;
	
}


task_0_event_6(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj();
	var_3_object = var_2_object;
	func_330(var_3_object);
	func_231(var_1_object, var_2_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj();
	func_294(var_3_object);
	var_2_object = var_3_object;
	func_149(var_1_object, var_2_object);
	return 0;
}


func_288(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj();
	self(var_94_object);
	var_94_object = var_92_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_294(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_167(var_0_object, var_1_object)
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_string = ""; var_46_string = ""; var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_string = ""; var_54_string = ""; var_55_string = "";
	var_56_bool = var_1_object == 0; //@nz
	if(var_56_bool != 0) {
		var_57_object = Obj();
		func_294(var_57_object);
		var_1_object = var_57_object;
	}
	var_60_bool = var_0_object == 0; //@nz
	if(var_60_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_61_object = Obj();
	var_61_object = var_1_object;
	func_330(var_61_object);
	@@@var_0_object:size(var_48_int);
	var_49_int = 0;
	
Label_185:
	var_72_bool = var_49_int < var_48_int;
	if(var_72_bool != 0) {
		@@@var_0_object:get(var_50_int, var_49_int);
		var_74_int = var_49_int + (int)1;
		@@@var_0_object:get(var_51_int, var_74_int);
		var_76_int = var_49_int + (int)2;
		@@@var_0_object:get(var_52_int, var_76_int);
		var_77_string = ""; var_78_int = 0; var_79_int = 0;
		var_50_int = var_78_int;
		var_51_int = var_79_int;
		func_139(var_78_int, var_79_int);
		var_77_string = var_53_string;
		var_81_string = ""; var_82_int = 0; var_83_int = 0;
		var_50_int = var_82_int;
		var_52_int = var_83_int;
		func_143(var_83_int);
		var_81_string = var_54_string;
		var_84_string = ""; var_85_int = 0; var_86_int = 0;
		var_50_int = var_85_int;
		var_52_int = var_86_int;
		func_146(var_86_int);
		var_84_string = var_55_string;
		var_87_object = Obj(); var_88_object = Obj(); var_89_string = ""; var_90_string = ""; var_91_string = "";
		func_288(Obj());
		var_92_object = var_88_object;
		var_53_string = var_89_string;
		var_54_string = var_90_string;
		var_55_string = var_91_string;
		func_300(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string);
		@@@var_1_object:add(var_87_object);
		var_49_int = var_49_int + (int)3;
		goto Label_185;
	}
	return 16;
}


func_231(var_0_object, var_1_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_bool = 0;
	@@@var_1_object:size(var_18_int);
	var_19_int = 0;
	
Label_235:
	var_22_bool = var_19_int < var_18_int;
	if(var_22_bool != 0) {
		@@@var_1_object:get(var_20_object, var_19_int);
		var_23_bool = var_20_object != 0; //@nn
		if(var_23_bool != 0) {
			@@var_20_object:IsDead(var_21_bool);
			var_24_bool = var_21_bool == 0; //@nz
			if(var_24_bool == 0) goto Label_255;
			var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
			var_20_object = var_26_object;
			func_276(var_25_bool, var_26_object, "ToDie");
			var_34_bool = var_25_bool == 0; //@nz
			if(var_34_bool != 0) {
				var_19_int = var_19_int + (int)1;
			} else {
				RemoveActor(var_20_object);
		}
			@@@var_1_object:remove(var_19_int);
			var_37_float = var_19_int * (int)3;
			var_39_int = var_19_int + (int)1;
			var_41_float = var_39_int * (int)3;
			@@@var_0_object:remove(var_37_float, var_41_float);
			var_18_int = var_18_int + (int)-1;
			var_20_object = 0;
	}
		var_43_object = Obj();
		var_43_object = var_1_object;
		func_330(var_43_object);
		goto Label_235;
	}
	return 8;
	
}


func_330(var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj();
	var_10_object = var_3_object;
	if(var_10_object != 0) {
		@@var_3_object:size(var_7_int);
		var_8_int = 0;

	Label_336:
		var_11_bool = var_8_int < var_7_int;
		if(var_11_bool != 0) {
			@@var_3_object:get(var_9_object, var_8_int);
			var_12_object = var_9_object;
			if(var_12_object != 0) {
				RemoveActor(var_9_object);
			}
			var_9_object = 0;
			var_8_int = var_8_int + (int)1;
			goto Label_336;
		}
		@@var_3_object:clear();
	}
	return 6;
}


func_139(var_77_string, var_79_int)
{
	var_77_string = "pt_agony" + var_79_int;
	return 0;
}


func_300(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string)
{
	var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_object = Obj();
	@@var_88_object:GetLocator(var_89_string, var_99_bool, var_100_cvector, var_101_cvector);
	var_103_bool = var_99_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_105_int = "Locator " + var_89_string;
		var_107_int = var_105_int + " doesn't exist";
		Trace(var_107_int);
	} else {
		AddActor(Obj(), var_90_string, var_88_object, var_100_cvector, var_101_cvector, var_91_string);
	}
	var_102_object = var_87_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_143(var_81_string)
{
	var_81_string = "pers_morlok";
	return 0;
}


func_146(var_84_string)
{
	var_84_string = "agony1_morlok.xml";
	return 0;
}


func_276(var_25_bool, var_26_object, var_27_string)
{
	var_28_bool = 0; var_29_bool = 0;
	var_32_bool = IsFuncExist(var_26_object, "HasProperty", (int)2);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	@@var_26_object:HasProperty(var_27_string, var_29_bool);
	var_29_bool = var_25_bool;
	return 2;
}


func_149(var_0_object, var_1_object)
{
	var_6_bool = var_1_object == 0; //@nz
	if(var_6_bool != 0) {
		var_7_object = Obj();
		func_294(var_7_object);
		var_1_object = var_7_object;
	}
	var_8_bool = var_0_object == 0; //@nz
	if(var_8_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_9_object = Obj();
	var_9_object = var_0_object;
	func_118(var_9_object);
	
Label_163:
	Hold();
	goto Label_163;
}
EMIT "Return(); Pop(0)";


func_118(var_9_object)
{
	var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_bool = 0;
	var_12_int = 1;
	
Label_120:
	var_15_int = "pt_agony" + var_12_int;
	GetLocator(var_15_int, var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
	} else {
		@@var_9_object:add((int)0);
		@@var_9_object:add(var_12_int);
		@@var_9_object:add((int)0);
		var_12_int = var_12_int + (int)1;
		goto Label_120;
	}
	return 4;
	
}


func_318(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_24_string);
	var_28_bool = var_27_object == 0; //@ne
	if(var_28_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	Trigger(var_27_object, var_25_string);
	var_23_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


