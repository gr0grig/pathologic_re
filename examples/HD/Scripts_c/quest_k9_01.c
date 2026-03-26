// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2
// @STRINGS: W:mnogogrannik_han@door1|W:init_termitnik2|W:burah_home|W:noburah|W:cot_eva|W:nodanko|W:warehouse_rubin|W:norubin|W:termitnik2@door1|W:pt_k9q01_burah|W:NPC_Bakalavr|W:k9q01_danko.xml|W:pt_k9q01_danko|W:NPC_Burah|W:k9q01_burah.xml|W:init_mnogogrannik|W:mnogogrannik@door1|W:mnogogrannik_han@door2|W:hidden_room@door1|W:hidden_room|W:pt_boy|W:pers_littleboy2|W:k9q01_littleboy.xml|W:pt_girl|W:pers_littlegirl2|W:k9q01_littlegirl.xml|W:fail|W:completed|W:cleanup|W:k9q01|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:klara2_npc_positioner|W:init
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x9 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0;
	Trace(var_4_string);
	var_12_bool = var_4_string == "init_termitnik2";
	if(var_12_bool != 0) {
		GetSceneByName(var_8_object, "burah_home");
		Trigger(var_8_object, "noburah");
		GetSceneByName(var_8_object, "cot_eva");
		Trigger(var_8_object, "nodanko");
		GetSceneByName(var_8_object, "warehouse_rubin");
		Trigger(var_8_object, "norubin");
		GetSceneByName(var_8_object, "termitnik2");
		var_20_string = ""; var_21_bool = 0;
		func_240("termitnik2@door1", (bool)0);
		var_30_object = Obj(); var_31_object = Obj(); var_32_string = ""; var_33_string = ""; var_34_string = "";
		var_8_object = var_31_object;
		func_222(var_30_object, var_31_object, "pt_k9q01_burah", "NPC_Bakalavr", "k9q01_danko.xml");
		var_1_object = var_30_object;
		var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = "";
		var_8_object = var_49_object;
		func_222(var_48_object, var_49_object, "pt_k9q01_danko", "NPC_Burah", "k9q01_burah.xml");
		var_0_object = var_48_object;
		var_8_object = 0;
	} else {
		var_54_bool = var_4_string == "init_mnogogrannik";
		if(var_54_bool != 0) {
			var_55_string = ""; var_56_bool = 0;
			func_240("mnogogrannik@door1", (bool)0);
			var_57_string = ""; var_58_bool = 0;
			func_240("mnogogrannik_han@door2", (bool)0);
			var_59_string = ""; var_60_bool = 0;
			func_240("hidden_room@door1", (bool)0);
			GetSceneByName(var_9_object, "hidden_room");
			var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = "";
			var_9_object = var_63_object;
			func_222(var_62_object, var_63_object, "pt_boy", "pers_littleboy2", "k9q01_littleboy.xml");
			var_2_object = var_62_object;
			var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = "";
			var_9_object = var_68_object;
			func_222(var_67_object, var_68_object, "pt_girl", "pers_littlegirl2", "k9q01_littlegirl.xml");
			var_3_object = var_67_object;
			var_9_object = 0;
			goto Label_139;
		}
		var_73_bool = var_4_string == "fail";
		if(var_73_bool != 0) {
			func_140();
			func_269();
			func_275();
			goto Label_139;
		}
		var_107_bool = var_4_string == "completed";
		if(var_107_bool != 0) {
			func_148();
			func_269();
			func_275();
			goto Label_139;
		}
		var_111_bool = var_4_string == "cleanup";
		if(var_111_bool == 0) goto Label_139;
		GetVariable("k9q01", var_10_int);
		var_114_bool = var_10_int != (int)1000;
		if(var_114_bool != 0) {
			func_140();
		}
		func_206();
	}
Label_139:
	return 6;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = ""; var_5_bool = 0;
	func_240("mnogogrannik_han@door1", (bool)0);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_257(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj();
	FindActor(var_100_object, var_97_string);
	var_101_bool = var_100_object == 0; //@ne
	if(var_101_bool != 0) {
		var_96_bool = 0;
		return 2;
	}
	Trigger(var_100_object, var_98_string);
	var_96_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_140()
{
	SetVariable("k9q01", (int)-1);
	func_156(var_7_int, var_8_object, var_9_object, var_10_int);
	return 0;
}


func_269()
{
	var_96_bool = 0; var_97_string = ""; var_98_string = "";
	func_257(var_96_bool, "klara2_npc_positioner", "init");
	return 0;
}


func_206()
{
	EventDisable(26);
	func_284();
	var_119_object = Obj();
	func_216(var_119_object);
	RemoveActor(var_119_object);
	return 0;
}


func_240(var_4_string, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj();
	FindActor(var_7_object, var_4_string);
	var_8_bool = var_7_object == 0; //@nz
	if(var_8_bool != 0) {
		var_10_int = "Door " + var_4_string;
		var_12_int = var_10_int + " not found";
		Trace(var_12_int);
	} else {
		@@var_7_object:SetProperty("locked", var_5_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_275()
{
	var_102_object = Obj(); var_103_object = Obj();
	GetSceneByName(var_103_object, "burah_home");
	Trigger(var_103_object, "noburah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_148()
{
	SetVariable("k9q01", (int)1000);
	func_156(var_7_int, var_8_object, var_9_object, var_10_int);
	return 0;
}


func_284()
{
	var_115_object = Obj(); var_116_object = Obj();
	GetSceneByName(var_116_object, "burah_home");
	Trigger(var_116_object, "burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_216(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj();
	self(var_121_object);
	var_121_object = var_119_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_156(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_76_object = Obj(); var_77_object = Obj();
	var_78_object = var_1_object;
	if(var_78_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_80_object = var_0_object;
	if(var_80_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_82_object = var_2_object;
	if(var_82_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_84_object = var_3_object;
	if(var_84_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	GetSceneByName(var_77_object, "cot_eva");
	Trigger(var_77_object, "danko");
	GetSceneByName(var_77_object, "warehouse_rubin");
	Trigger(var_77_object, "rubin");
	var_90_string = ""; var_91_bool = 0;
	func_240("mnogogrannik@door1", (bool)1);
	var_92_string = ""; var_93_bool = 0;
	func_240("mnogogrannik_han@door1", (bool)1);
	var_94_string = ""; var_95_bool = 0;
	func_240("hidden_room@door1", (bool)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_222(var_30_object, var_31_object, var_32_string, var_33_string, var_34_string)
{
	var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj();
	@@var_31_object:GetLocator(var_32_string, var_39_bool, var_40_cvector, var_41_cvector);
	var_43_bool = var_39_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_45_int = "Locator " + var_32_string;
		var_47_int = var_45_int + " doesn't exist";
		Trace(var_47_int);
	} else {
		AddActor(Obj(), var_33_string, var_31_object, var_40_cvector, var_41_cvector, var_34_string);
	}
	var_42_object = var_30_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


