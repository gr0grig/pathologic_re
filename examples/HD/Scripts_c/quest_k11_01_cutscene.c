// @IMPORTS: GetMainOutdoorScene/1,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,RemoveActor/1,FindActor/2,self/1,AddActor/6,AddScriptedActor/6,Trigger/2,SetSepia/2
// @STRINGS: W:cs_k11q01_soldat1|W:cs_play_all.bin|W:cs_k11q01_soldat2|W:cs_k11q01_soldat3|W:cs_k11q01_soldat4|W:cs_k11q01_soldat5|W:cs_k11q01_soldat6|W:cs_k11q01_soldat7|W:cs_k11q01_soldat8|W:cs_k11q01_soldat9|W:cs_k11q01_soldat10|W:cs_k11q01_klara|W:cs_k11q01_klara.xml|A:ForceGeometryLoad|W:space|W:cs_k11q01.mot|W:quest_k11_01|W:cutscene_end|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0xb3 vars=int
// @PE: 0xb3

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetMainOutdoorScene(var_13_object);
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = "";
	var_13_object = var_27_object;
	func_247(var_26_object, var_27_object, "cs_k11q01_soldat1", "cs_play_all.bin");
	var_26_object = var_14_object;
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = "";
	var_13_object = var_35_object;
	func_247(var_34_object, var_35_object, "cs_k11q01_soldat2", "cs_play_all.bin");
	var_34_object = var_15_object;
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = "";
	var_13_object = var_39_object;
	func_247(var_38_object, var_39_object, "cs_k11q01_soldat3", "cs_play_all.bin");
	var_38_object = var_16_object;
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = "";
	var_13_object = var_43_object;
	func_247(var_42_object, var_43_object, "cs_k11q01_soldat4", "cs_play_all.bin");
	var_42_object = var_17_object;
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = "";
	var_13_object = var_47_object;
	func_247(var_46_object, var_47_object, "cs_k11q01_soldat5", "cs_play_all.bin");
	var_46_object = var_18_object;
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = "";
	var_13_object = var_51_object;
	func_247(var_50_object, var_51_object, "cs_k11q01_soldat6", "cs_play_all.bin");
	var_50_object = var_19_object;
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = "";
	var_13_object = var_55_object;
	func_247(var_54_object, var_55_object, "cs_k11q01_soldat7", "cs_play_all.bin");
	var_54_object = var_20_object;
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = "";
	var_13_object = var_59_object;
	func_247(var_58_object, var_59_object, "cs_k11q01_soldat8", "cs_play_all.bin");
	var_58_object = var_21_object;
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = "";
	var_13_object = var_63_object;
	func_247(var_62_object, var_63_object, "cs_k11q01_soldat9", "cs_play_all.bin");
	var_62_object = var_22_object;
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = "";
	var_13_object = var_67_object;
	func_247(var_66_object, var_67_object, "cs_k11q01_soldat10", "cs_play_all.bin");
	var_66_object = var_23_object;
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = "";
	var_13_object = var_71_object;
	func_239(var_70_object, var_71_object, "cs_k11q01_klara", "cs_k11q01_klara.xml");
	var_70_object = var_24_object;
	@@var_14_object:ForceGeometryLoad();
	@@var_15_object:ForceGeometryLoad();
	@@var_16_object:ForceGeometryLoad();
	@@var_17_object:ForceGeometryLoad();
	@@var_18_object:ForceGeometryLoad();
	@@var_19_object:ForceGeometryLoad();
	@@var_20_object:ForceGeometryLoad();
	@@var_21_object:ForceGeometryLoad();
	@@var_22_object:ForceGeometryLoad();
	@@var_23_object:ForceGeometryLoad();
	@@var_24_object:ForceGeometryLoad();
	func_183(Obj());
	var_78_object = var_25_object;
	func_267();
	var_84_object = Obj();
	var_25_object = var_84_object;
	func_190(var_84_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_k11q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_101_object = Obj();
	var_25_object = var_101_object;
	func_213(var_101_object);
	func_272();
	CameraSwitchToNormal();
	RemoveActor(var_14_object);
	RemoveActor(var_15_object);
	RemoveActor(var_16_object);
	RemoveActor(var_17_object);
	RemoveActor(var_18_object);
	RemoveActor(var_19_object);
	RemoveActor(var_20_object);
	RemoveActor(var_21_object);
	RemoveActor(var_22_object);
	RemoveActor(var_23_object);
	RemoveActor(var_24_object);
	var_114_bool = 0; var_115_string = ""; var_116_string = "";
	func_255(var_114_bool, "quest_k11_01", "cutscene_end");
	var_120_object = Obj();
	func_233(var_120_object);
	RemoveActor(var_120_object);
	return 26;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";
EMIT "Stack[-12] = 0";
EMIT "Stack[-13] = 0";


func_233(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj();
	self(var_122_object);
	var_122_object = var_120_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_267()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_239(var_70_object, var_71_object, var_72_string, var_73_string)
{
	var_74_object = Obj(); var_75_object = Obj();
	AddActor(var_75_object, var_72_string, var_71_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_73_string);
	var_75_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_272()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_213(var_101_object)
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


func_183(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, "player");
	var_80_object = var_78_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_247(var_26_object, var_27_object, var_28_string, var_29_string)
{
	var_30_object = Obj(); var_31_object = Obj();
	AddScriptedActor(var_31_object, var_28_string, var_29_string, var_27_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_31_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_190(var_84_object)
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


func_255(var_114_bool, var_115_string, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj();
	FindActor(var_118_object, var_115_string);
	var_119_bool = var_118_object == 0; //@ne
	if(var_119_bool != 0) {
		var_114_bool = 0;
		return 2;
	}
	Trigger(var_118_object, var_116_string);
	var_114_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


