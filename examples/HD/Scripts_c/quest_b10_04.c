// @IMPORTS: GetMainOutdoorScene/1,GetScene/1,GetSceneByName/2,GetVariable/2,Trace/1,Trigger/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6,FindActor/2
// @STRINGS: W:pt_b10q04_bull|W:pers_avrox|W:b10q04_bull.xml|W:termitnik_mat|W:b8q03MladVladIsVictim|W:pt_b10q04_prisoner|W:NPC_MladVlad|W:b10q04_mladvlad.xml|W:NPC_BigVlad|W:b10q04_bigvlad.xml|W:place_morloks|W:pt_b10q04_morlok|W:pers_morlok|W:b10q04_morlok.xml|A:add|W:pt_b10q04_morlok_mishka|W:b10q04_morlok_mishka.xml|W:pt_b10q04_morlok_laska|W:b10q04_morlok_laska.xml|W:pt_b10q04_morlok_spi4ka|W:b10q04_morlok_spi4ka.xml|W:init_storojka|W:nolaska|W:pt_b10q04_girl|W:pers_girl|W:b10q04_girl_laska.xml|W:uprava_admin|W:pt_b10q04_klara|W:NPC_Klara|W:b10q04_klara.xml|W:vagon_army@door1|W:vagon_army|W:pt_b10q04_laska|W:NPC_Laska|W:b10q04_laska.xml|W:pt_b10q04_officer|W:pers_soldat|W:b10q04_officer.xml|W:restore_laska|W:cleanup|W:fail|W:completed|W:b10q04|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object params=0
// @EVENT_26: op=0x34 vars=string
// @EVENT_9: op=0x126 vars=int,float
// @PE: 0x126

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj();
	Trace(var_7_string);
	var_15_bool = var_7_string == "place_morloks";
	if(var_15_bool != 0) {
		GetMainOutdoorScene(var_11_object);
		var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = "";
		var_11_object = var_17_object;
		func_311(var_16_object, var_17_object, "pt_b10q04_morlok", "pers_morlok", "b10q04_morlok.xml");
		@@@var_0_object:add(var_16_object);
		var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
		var_11_object = var_35_object;
		func_311(var_34_object, var_35_object, "pt_b10q04_morlok_mishka", "pers_morlok", "b10q04_morlok_mishka.xml");
		@@@var_0_object:add(var_34_object);
		var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
		var_11_object = var_40_object;
		func_311(var_39_object, var_40_object, "pt_b10q04_morlok_laska", "pers_morlok", "b10q04_morlok_laska.xml");
		@@@var_0_object:add(var_39_object);
		var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
		var_11_object = var_45_object;
		func_311(var_44_object, var_45_object, "pt_b10q04_morlok_spi4ka", "pers_morlok", "b10q04_morlok_spi4ka.xml");
		@@@var_0_object:add(var_44_object);
		var_11_object = 0;
	}
	var_50_bool = var_7_string == "init_storojka";
	if(var_50_bool != 0) {
		GetSceneByName(var_12_object, "storojka");
		Trigger(var_12_object, "nolaska");
		var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = "";
		var_12_object = var_54_object;
		func_311(var_53_object, var_54_object, "pt_b10q04_girl", "pers_girl", "b10q04_girl_laska.xml");
		var_2_object = var_53_object;
		GetSceneByName(var_12_object, "uprava_admin");
		var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = "";
		var_12_object = var_60_object;
		func_311(var_59_object, var_60_object, "pt_b10q04_klara", "NPC_Klara", "b10q04_klara.xml");
		var_4_object = var_59_object;
		var_64_string = ""; var_65_bool = 0;
		func_329("vagon_army@door1", (bool)0);
		GetSceneByName(var_12_object, "vagon_army");
		var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = "";
		var_12_object = var_76_object;
		func_311(var_75_object, var_76_object, "pt_b10q04_laska", "NPC_Laska", "b10q04_laska.xml");
		var_3_object = var_75_object;
		var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = "";
		var_12_object = var_81_object;
		func_311(var_80_object, var_81_object, "pt_b10q04_officer", "pers_soldat", "b10q04_officer.xml");
		var_5_object = var_80_object;
		var_12_object = 0;
	} else {
		var_86_bool = var_7_string == "restore_laska";
		if(var_86_bool != 0) {
			var_87_object = var_3_object;
			if(var_87_object != 0) {
				Trigger(var_3_object, "cleanup");
			}
			var_89_object = var_2_object;
			if(var_89_object != 0) {
				Trigger(var_2_object, "cleanup");
			}
			GetSceneByName(var_13_object, "storojka");
			Trigger(var_13_object, "laska");
			var_13_object = 0;
			goto Label_185;
		}
		var_94_bool = var_7_string == "fail";
		if(var_94_bool != 0) {
			func_200();
			goto Label_185;
		}
		var_112_bool = var_7_string == "completed";
		if(var_112_bool == 0) goto Label_185;
		func_208();
	}
Label_185:
	return 6;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_float)
{
	func_186();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0;
	var_15_object = Obj();
	func_305(var_15_object);
	var_0_object = var_15_object;
	GetMainOutdoorScene(var_11_object);
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = "";
	var_11_object = var_19_object;
	func_311(var_18_object, var_19_object, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
	var_1_object = var_18_object;
	GetScene(var_13_object);
	GetSceneByName(var_12_object, "termitnik_mat");
	var_37_bool = var_13_object != var_12_object;
	if(var_37_bool != 0) {
		GetVariable("b8q03MladVladIsVictim", var_14_int);
		var_39_int = var_14_int;
		if(var_39_int != 0) {
			var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
			var_12_object = var_41_object;
			func_311(var_40_object, var_41_object, "pt_b10q04_prisoner", "NPC_MladVlad", "b10q04_mladvlad.xml");
			var_6_object = var_40_object;
		} else {
			var_95_object = Obj(); var_96_object = Obj(); var_97_string = ""; var_98_string = ""; var_99_string = "";
			var_12_object = var_96_object;
			func_311(var_95_object, var_96_object, "pt_b10q04_prisoner", "NPC_BigVlad", "b10q04_bigvlad.xml");
			var_6_object = var_95_object;
		}
	}
	var_45_int = 0;
	func_275((int)10);
	return 8;
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_200()
{
	SetVariable("b10q04", (int)-1);
	func_216(var_6_object, var_7_int, var_8_float, var_9_int, var_10_int);
	return 0;
}


func_329(var_77_string, var_78_bool)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, var_77_string);
	var_81_bool = var_80_object == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Door " + var_77_string;
		var_85_int = var_83_int + " not found";
		Trace(var_85_int);
	} else {
		@@var_80_object:SetProperty("locked", var_78_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_186()
{
	var_9_int = 0; var_10_int = 0;
	GetVariable("b10q04", var_10_int);
	var_13_bool = var_10_int != (int)1000;
	if(var_13_bool != 0) {
		func_200();
	}
	func_250(var_9_int, var_10_int);
	return 2;
}


func_299(var_89_object)
{
	var_90_object = Obj(); var_91_object = Obj();
	self(var_91_object);
	var_91_object = var_89_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_346(var_65_object, var_66_string)
{
	var_67_int = 0; var_68_int = 0; var_69_object = Obj(); var_70_int = 0; var_71_int = 0; var_72_object = Obj();
	var_73_object = var_65_object;
	if(var_73_object != 0) {
		@@var_65_object:size(var_70_int);
		var_71_int = 0;

	Label_352:
		var_74_bool = var_71_int < var_70_int;
		if(var_74_bool != 0) {
			@@var_65_object:get(var_72_object, var_71_int);
			var_75_object = var_72_object;
			if(var_75_object != 0) {
				Trigger(var_72_object, var_66_string);
			}
			var_72_object = 0;
			var_71_int = var_71_int + (int)1;
			goto Label_352;
		}
	}
	return 6;
}


func_208()
{
	SetVariable("b10q04", (int)1000);
	func_216(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object);
	return 0;
}


func_305(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_275(var_45_int)
{
	var_46_float = 0; var_47_float = 0;
	GetGameTime(var_47_float);
	var_49_float = var_45_int * (int)24;
	var_50_bool = var_47_float >= var_49_float;
	if(var_50_bool != 0) {
		func_250(var_46_float, var_47_float);
	} else {
		var_94_float = var_45_int * (int)24;
		SetTimeEvent((int)0, var_94_float);
		Hold();
	}
	return 2;
	
}


func_311(var_18_object, var_19_object, var_20_string, var_21_string, var_22_string)
{
	var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj();
	@@var_19_object:GetLocator(var_20_string, var_27_bool, var_28_cvector, var_29_cvector);
	var_31_bool = var_27_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_33_int = "Locator " + var_20_string;
		var_35_int = var_33_int + " doesn't exist";
		Trace(var_35_int);
	} else {
		AddActor(Obj(), var_21_string, var_19_object, var_28_cvector, var_29_cvector, var_22_string);
	}
	var_30_object = var_18_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_216(var_2_object, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	var_53_object = var_2_object;
	if(var_53_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_55_object = var_3_object;
	if(var_55_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_57_object = var_4_object;
	if(var_57_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_59_object = var_5_object;
	if(var_59_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_61_object = var_6_object;
	if(var_61_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	GetSceneByName(var_52_object, "storojka");
	Trigger(var_52_object, "laska");
	return 2;
}
EMIT "Stack[-1] = 0";


func_250(var_0_object, var_1_object)
{
	EventDisable(26);
	func_216(var_13_object, var_14_int, var_45_int, var_46_float, var_47_float);
	var_65_object = Obj(); var_66_string = "";
	var_65_object = var_0_object;
	func_346(var_65_object, "cleanup");
	var_77_string = ""; var_78_bool = 0;
	func_329("vagon_army@door1", (bool)1);
	var_87_object = var_1_object;
	if(var_87_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_89_object = Obj();
	func_299(var_89_object);
	RemoveActor(var_89_object);
	return 0;
}


