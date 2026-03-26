// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,FindActor/2,RemoveActor/1,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:cot_eva|W:icot_eva_door|W:danko|W:boiny@door1|W:usable_stone|W:b10q01_stone|W:enable_use|W:place_butchers|W:pt_b10q01_butcher1|W:pers_butcher|W:b10q01_butcher.xml|W:pt_b10q01_butcher2|W:pt_b10q01_butcher3|W:b9q01BurahGotoButcher1|A:AddMark|W:b9q01BurahGotoButcher2|W:b9q01BurahGotoButcher3|W:butcher_dead|W:b10q01Butchers|W:player|W:b10q01_stop|W:cleanup|W:b10q01|W:fail|W:completed|A:Remove|W:disable_use|A:FindMark|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:Close|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x16 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_int = 0;
	Trace(var_3_string);
	var_15_bool = var_3_string == "usable_stone";
	if(var_15_bool != 0) {
		var_16_bool = 0; var_17_string = ""; var_18_string = "";
		func_292(var_16_bool, "b10q01_stone", "enable_use");
	} else {
		var_23_bool = var_3_string == "place_butchers";
		if(var_23_bool != 0) {
			GetMainOutdoorScene(var_9_object);
			var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
			var_9_object = var_25_object;
			func_236(var_24_object, var_25_object, "pt_b10q01_butcher1", "pers_butcher", "b10q01_butcher.xml");
			var_0_object = var_24_object;
			var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
			var_9_object = var_43_object;
			func_236(var_42_object, var_43_object, "pt_b10q01_butcher2", "pers_butcher", "b10q01_butcher.xml");
			var_1_object = var_42_object;
			var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
			var_9_object = var_48_object;
			func_236(var_47_object, var_48_object, "pt_b10q01_butcher3", "pers_butcher", "b10q01_butcher.xml");
			var_2_object = var_47_object;
			func_376(Obj());
			var_52_object = var_10_object;
			var_63_float = 0;
			func_304(var_63_float);
			@@var_10_object:AddMark("b9q01BurahGotoButcher1", "pt_b10q01_butcher1", (int)1, (int)101000, var_63_float);
			var_70_float = 0;
			func_304(var_70_float);
			@@var_10_object:AddMark("b9q01BurahGotoButcher2", "pt_b10q01_butcher2", (int)1, (int)101000, var_70_float);
			var_75_float = 0;
			func_304(var_75_float);
			@@var_10_object:AddMark("b9q01BurahGotoButcher3", "pt_b10q01_butcher3", (int)1, (int)101000, var_75_float);
			func_322();
			var_10_object = 0;
			var_9_object = 0;
			goto Label_157;
		}
		var_100_bool = var_3_string == "butcher_dead";
		if(var_100_bool != 0) {
			GetVariable("b10q01Butchers", var_11_int);
			var_104_int = var_11_int + (int)1;
			SetVariable("b10q01Butchers", var_104_int);
			var_106_int = var_11_int + (int)1;
			var_108_bool = var_106_int == (int)3;
			if(var_108_bool != 0) {
				func_309();
				FindActor(var_12_object, "player");
				Trigger(var_12_object, "b10q01_stop");
			}
			goto Label_157;
		}
		var_120_bool = var_3_string == "cleanup";
		if(var_120_bool != 0) {
			GetVariable("b10q01", var_13_int);
			var_123_bool = var_13_int != (int)1000;
			if(var_123_bool != 0) {
				func_158();
			} else {
				func_174(var_11_int, Obj(), var_13_int);
		}
			var_157_bool = var_3_string == "fail";
			if(var_157_bool != 0) {
				func_158();
				goto Label_157;
			}
			var_159_bool = var_3_string == "completed";
			if(var_159_bool == 0) goto Label_157;
			func_166();
		}
		goto Label_157;
	}
Label_157:
	return 10;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	GetSceneByName(var_4_object, "cot_eva");
	var_6_string = ""; var_7_bool = 0;
	func_271("icot_eva_door", (bool)0);
	Trigger(var_4_object, "danko");
	var_18_string = ""; var_19_bool = 0;
	func_254("boiny@door1", (bool)0);
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_322()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)312, (int)1, (int)521963);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_348(var_81_bool, var_82_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_292(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_17_string);
	var_21_bool = var_20_object == 0; //@ne
	if(var_21_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	Trigger(var_20_object, var_18_string);
	var_16_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_166()
{
	SetVariable("b10q01", (int)1000);
	func_174(var_11_int, var_12_object, var_13_int);
	return 0;
}


func_230(var_153_object)
{
	var_154_object = Obj(); var_155_object = Obj();
	self(var_155_object);
	var_155_object = var_153_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_236(var_24_object, var_25_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj();
	@@var_25_object:GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	var_37_bool = var_33_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Locator " + var_26_string;
		var_41_int = var_39_int + " doesn't exist";
		Trace(var_41_int);
	} else {
		@@var_25_object:AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string);
	}
	var_36_object = var_24_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_174(var_0_object, var_1_object, var_2_object)
{
	var_126_object = Obj(); var_127_object = Obj(); var_128_object = Obj(); var_129_object = Obj();
	var_130_object = var_0_object;
	if(var_130_object != 0) {
		@@@var_0_object:Remove();
	}
	var_131_object = var_1_object;
	if(var_131_object != 0) {
		@@@var_1_object:Remove();
	}
	var_132_object = var_2_object;
	if(var_132_object != 0) {
		@@@var_2_object:Remove();
	}
	var_133_bool = 0; var_134_string = ""; var_135_string = "";
	func_292(var_133_bool, "b10q01_stone", "disable_use");
	func_376(Obj());
	var_136_object = var_128_object;
	@@var_128_object:FindMark(var_129_object, "b9q01BurahGotoButcher1");
	var_138_object = var_129_object;
	if(var_138_object != 0) {
		@@var_129_object:Remove();
	}
	@@var_128_object:FindMark(var_129_object, "b9q01BurahGotoButcher2");
	var_140_object = var_129_object;
	if(var_140_object != 0) {
		@@var_129_object:Remove();
	}
	@@var_128_object:FindMark(var_129_object, "b9q01BurahGotoButcher3");
	var_142_object = var_129_object;
	if(var_142_object != 0) {
		@@var_129_object:Remove();
	}
	var_143_string = ""; var_144_bool = 0;
	func_254("boiny@door1", (bool)1);
	var_153_object = Obj();
	func_230(var_153_object);
	RemoveActor(var_153_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_271(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, var_6_string);
	var_10_bool = var_9_object == 0; //@nz
	if(var_10_bool != 0) {
		var_12_int = "Door " + var_6_string;
		var_14_int = var_12_int + " not found";
		Trace(var_14_int);
	} else {
		var_15_bool = var_7_bool;
		if(var_15_bool != 0) {
			@@var_9_object:Close();
		}
		@@var_9_object:SetProperty("locked", var_7_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_304(var_63_float)
{
	var_64_float = 0; var_65_float = 0;
	GetGameTime(var_65_float);
	var_65_float = var_63_float;
	return 2;
}


func_335(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj();
	GetDiaryRoot(var_92_object);
	var_93_bool = var_92_object == 0; //@nz
	if(var_93_bool != 0) {
		Trace("Can't retrieve diary root");
		var_90_object = 0;
		return 2;
	}
	var_92_object = var_90_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_309()
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateDiaryEntry(var_110_object, (int)308, (int)1, (int)521959);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_110_object = var_115_object;
	func_348(var_114_bool, var_115_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_254(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, var_18_string);
	var_22_bool = var_21_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Door " + var_18_string;
		var_26_int = var_24_int + " not found";
		Trace(var_26_int);
	} else {
		@@var_21_object:SetProperty("locked", var_19_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_376(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
	GetMainOutdoorScene(var_55_object);
	var_57_bool = var_55_object == 0; //@ne
	if(var_57_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_56_object = 0;
		var_56_object = var_52_object;
		return 4;
	}
	@@var_55_object:GetMap(var_56_object);
	var_56_object = var_52_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_348(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0;
	func_335(Obj());
	var_90_object = var_87_object;
	@@var_87_object:Find(var_83_int, var_88_object);
	var_95_bool = var_88_object == 0; //@nz
	if(var_95_bool != 0) {
		var_97_int = "Can't find diary parent with id: " + var_83_int;
		Trace(var_97_int);
		var_81_bool = 0;
		return 6;
	}
	@@var_88_object:AddChild(var_82_object);
	SendWorldWndMessage((int)7);
	@@var_82_object:GetCategory(var_89_int);
	SetDiarySection(var_89_int);
	var_81_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_158()
{
	SetVariable("b10q01", (int)-1);
	func_174(var_11_int, var_12_object, var_13_int);
	return 0;
}


