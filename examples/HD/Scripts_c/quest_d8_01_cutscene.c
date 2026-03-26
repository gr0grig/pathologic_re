// @IMPORTS: GetSceneByName/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,sync/0,ReplaceScene/2,Teleport/4,GetGameTime/1,AdvanceGameTime/1,RemoveActor/1,FindActor/2,self/1,CreateObjectVector/1,AddActor/6,AddScriptedActor/6,Trigger/2,SetSepia/2
// @STRINGS: W:boiny|W:cs_d8q01_bakalavr|W:cs_d8q01_bakalavr.xml|A:add|W:cs_d8q01_butcher1|W:cs_play_all.bin|W:cs_d8q01_butcher2|W:cs_d8q01_butcher3|W:cs_d8q01_butcher4|W:cs_d8q01_butcher5|A:size|A:get|A:ForceGeometryLoad|W:cs_d8q01_soldier1|W:cs_d8q01_soldier2|W:cs_d8q01_soldier3|W:cs_d8q01_soldier4|W:cs_d8q01_Block|W:cs_d8q01_Block.xml|W:space|W:cs_d8q01.mot|W:quest_d8_01|W:completed|W:uprava_admin|W:uprava_admin_army_danko.isc|W:pt_d8q01_boiny_teleport|A:GetLocator|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0xb9 vars=int
// @PE: 0xb9

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_float = 0;
	GetSceneByName(var_10_object, "boiny");
	func_245(Obj());
	var_21_object = var_11_object;
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = "";
	var_10_object = var_25_object;
	func_251(var_24_object, var_25_object, "cs_d8q01_bakalavr", "cs_d8q01_bakalavr.xml");
	@@var_11_object:add(var_24_object);
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = "";
	var_10_object = var_33_object;
	func_259(var_32_object, var_33_object, "cs_d8q01_butcher1", "cs_play_all.bin");
	@@var_11_object:add(var_32_object);
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = "";
	var_10_object = var_41_object;
	func_259(var_40_object, var_41_object, "cs_d8q01_butcher2", "cs_play_all.bin");
	@@var_11_object:add(var_40_object);
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = "";
	var_10_object = var_45_object;
	func_259(var_44_object, var_45_object, "cs_d8q01_butcher3", "cs_play_all.bin");
	@@var_11_object:add(var_44_object);
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = "";
	var_10_object = var_49_object;
	func_259(var_48_object, var_49_object, "cs_d8q01_butcher4", "cs_play_all.bin");
	@@var_11_object:add(var_48_object);
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = "";
	var_10_object = var_53_object;
	func_259(var_52_object, var_53_object, "cs_d8q01_butcher5", "cs_play_all.bin");
	@@var_11_object:add(var_52_object);
	@@var_11_object:size(var_12_int);
	var_13_int = 0;
	
Label_59:
	var_56_bool = var_13_int < var_12_int;
	if(var_56_bool != 0) {
		@@var_11_object:get(var_14_object, var_13_int);
		@@var_14_object:ForceGeometryLoad();
		var_14_object = 0;
		var_13_int = var_13_int + (int)1;
		goto Label_59;
	}
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = "";
	var_10_object = var_59_object;
	func_259(var_58_object, var_59_object, "cs_d8q01_soldier1", "cs_play_all.bin");
	@@var_11_object:add(var_58_object);
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = "";
	var_10_object = var_63_object;
	func_259(var_62_object, var_63_object, "cs_d8q01_soldier2", "cs_play_all.bin");
	@@var_11_object:add(var_62_object);
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = "";
	var_10_object = var_67_object;
	func_259(var_66_object, var_67_object, "cs_d8q01_soldier3", "cs_play_all.bin");
	@@var_11_object:add(var_66_object);
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = "";
	var_10_object = var_71_object;
	func_259(var_70_object, var_71_object, "cs_d8q01_soldier4", "cs_play_all.bin");
	@@var_11_object:add(var_70_object);
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = "";
	var_10_object = var_75_object;
	func_251(var_74_object, var_75_object, "cs_d8q01_Block", "cs_d8q01_Block.xml");
	@@var_11_object:add(var_74_object);
	func_189(Obj());
	var_78_object = var_15_object;
	func_300();
	var_84_object = Obj();
	var_15_object = var_84_object;
	func_196(var_84_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_d8q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_101_object = Obj();
	var_15_object = var_101_object;
	func_219(var_101_object);
	func_305();
	CameraSwitchToNormal();
	var_114_object = Obj();
	var_11_object = var_114_object;
	func_279(var_114_object);
	var_11_object = 0;
	var_125_bool = 0; var_126_string = ""; var_127_string = "";
	func_267(var_125_bool, "quest_d8_01", "completed");
	sync();
	GetSceneByName(var_10_object, "uprava_admin");
	ReplaceScene(var_10_object, "uprava_admin_army_danko.isc");
	sync();
	GetSceneByName(var_10_object, "uprava_admin");
	@@var_10_object:GetLocator("pt_d8q01_boiny_teleport", var_16_bool, var_17_cvector, var_18_cvector);
	Teleport(var_15_object, var_10_object, var_17_cvector, var_18_cvector);
	GetGameTime(var_19_float);
	var_136_int = (int)206 - var_19_float;
	AdvanceGameTime(var_136_int);
	sync();
	var_137_object = Obj();
	func_239(var_137_object);
	RemoveActor(var_137_object);
	return 20;
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


func_259(var_32_object, var_33_object, var_34_string, var_35_string)
{
	var_36_object = Obj(); var_37_object = Obj();
	AddScriptedActor(var_37_object, var_34_string, var_35_string, var_33_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_37_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_196(var_84_object)
{
	var_85_bool = 0; var_86_int = 0; var_87_bool = 0; var_88_int = 0;
	var_89_bool = var_84_object == 0; //@nz
	if(var_89_bool != 0) {
		return 4;
	}
	@@var_84_object:HasProperty("noaccess", var_87_bool);
	var_91_bool = var_87_bool;
	if(var_91_bool != 0) {
		@@var_84_object:GetProperty("noaccess", var_88_int);
		var_95_int = var_88_int + (int)1;
		@@var_84_object:SetProperty("noaccess", var_95_int);
	} else {
		@@var_84_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_267(var_125_bool, var_126_string, var_127_string)
{
	var_128_object = Obj(); var_129_object = Obj();
	FindActor(var_129_object, var_126_string);
	var_130_bool = var_129_object == 0; //@ne
	if(var_130_bool != 0) {
		var_125_bool = 0;
		return 2;
	}
	Trigger(var_129_object, var_127_string);
	var_125_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_300()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_219(var_101_object)
{
	var_102_int = 0; var_103_int = 0;
	var_104_bool = var_101_object == 0; //@nz
	if(var_104_bool != 0) {
		return 2;
	}
	@@var_101_object:GetProperty("noaccess", var_103_int);
	var_107_bool = var_103_int > (int)1;
	if(var_107_bool != 0) {
		var_110_int = var_103_int - (int)1;
		@@var_101_object:SetProperty("noaccess", var_110_int);
	} else {
		@@var_101_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_239(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj();
	self(var_139_object);
	var_139_object = var_137_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_305()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_245(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateObjectVector(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_279(var_114_object)
{
	var_115_int = 0; var_116_int = 0; var_117_object = Obj(); var_118_int = 0; var_119_int = 0; var_120_object = Obj();
	var_121_object = var_114_object;
	if(var_121_object != 0) {
		@@var_114_object:size(var_118_int);
		var_119_int = 0;

	Label_285:
		var_122_bool = var_119_int < var_118_int;
		if(var_122_bool != 0) {
			@@var_114_object:get(var_120_object, var_119_int);
			var_123_object = var_120_object;
			if(var_123_object != 0) {
				RemoveActor(var_120_object);
			}
			var_120_object = 0;
			var_119_int = var_119_int + (int)1;
			goto Label_285;
		}
		@@var_114_object:clear();
	}
	return 6;
}


func_251(var_24_object, var_25_object, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	AddActor(var_29_object, var_26_string, var_25_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_27_string);
	var_29_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_189(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, "player");
	var_80_object = var_78_object;
	return 2;
}
EMIT "Stack[-1] = 0";


