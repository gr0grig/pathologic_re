// @IMPORTS: GetSceneByName/2,CameraPlay/1,CameraWaitForPlayFinish/0,RemoveActor/1,CameraSwitchToNormal/0,FindActor/2,self/1,AddActor/6,Trigger/2,SetSepia/2,GetVariable/2
// @STRINGS: W:sobor|W:cs_d12_sobor_aglaja|W:cs_d12_aglaja.xml|W:cs_d12_sobor_block|W:cs_d12_block.xml|A:ForceGeometryLoad|W:cs_d12_sobor_aglaja_block.mot|W:cs_d12_sobor_klara|W:cs_d12_klara.xml|W:cs_d12_sobor_klara.mot|W:cs_d12_sobor_danko|W:cs_d12_danko.xml|W:cs_d12_sobor_danko.mot|W:cs_d12_sobor_kapella|W:cs_d12_kapella.xml|W:cs_d12_sobor_kapella.mot|W:quest_b12_01|W:sobor_cutscene_end|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|W:b12q01KlaraInSobor|W:b12q01DankoInSobor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x87 vars=int
// @PE: 0x87

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj();
	GetSceneByName(var_7_object, "sobor");
	func_139(Obj());
	var_15_object = var_8_object;
	func_215();
	var_21_object = Obj();
	var_8_object = var_21_object;
	func_146(var_21_object);
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = "";
	var_7_object = var_36_object;
	func_195(var_35_object, var_36_object, "cs_d12_sobor_aglaja", "cs_d12_aglaja.xml");
	var_35_object = var_9_object;
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = "";
	var_7_object = var_44_object;
	func_195(var_43_object, var_44_object, "cs_d12_sobor_block", "cs_d12_block.xml");
	var_43_object = var_10_object;
	@@var_9_object:ForceGeometryLoad();
	@@var_10_object:ForceGeometryLoad();
	CameraPlay("cs_d12_sobor_aglaja_block.mot");
	CameraWaitForPlayFinish();
	var_48_object = var_9_object;
	if(var_48_object != 0) {
		RemoveActor(var_9_object);
	}
	var_49_object = var_10_object;
	if(var_49_object != 0) {
		RemoveActor(var_10_object);
	}
	var_50_bool = 0;
	func_225(var_50_bool);
	if(var_50_bool != 0) {
		var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = "";
		var_7_object = var_56_object;
		func_195(var_55_object, var_56_object, "cs_d12_sobor_klara", "cs_d12_klara.xml");
		var_55_object = var_11_object;
		@@var_11_object:ForceGeometryLoad();
		CameraPlay("cs_d12_sobor_klara.mot");
		CameraWaitForPlayFinish();
		var_60_object = var_11_object;
		if(var_60_object != 0) {
			RemoveActor(var_11_object);
		}
		var_11_object = 0;
	}
	var_61_bool = 0;
	func_232(var_61_bool);
	if(var_61_bool != 0) {
		var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = "";
		var_7_object = var_67_object;
		func_195(var_66_object, var_67_object, "cs_d12_sobor_danko", "cs_d12_danko.xml");
		var_66_object = var_12_object;
		@@var_12_object:ForceGeometryLoad();
		CameraPlay("cs_d12_sobor_danko.mot");
		CameraWaitForPlayFinish();
		var_71_object = var_12_object;
		if(var_71_object != 0) {
			RemoveActor(var_12_object);
		}
		var_12_object = 0;
	}
	var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = "";
	var_7_object = var_73_object;
	func_195(var_72_object, var_73_object, "cs_d12_sobor_kapella", "cs_d12_kapella.xml");
	var_72_object = var_13_object;
	@@var_13_object:ForceGeometryLoad();
	CameraPlay("cs_d12_sobor_kapella.mot");
	CameraWaitForPlayFinish();
	var_77_object = Obj();
	var_8_object = var_77_object;
	func_169(var_77_object);
	func_220();
	CameraSwitchToNormal();
	var_90_object = var_13_object;
	if(var_90_object != 0) {
		RemoveActor(var_13_object);
	}
	var_91_bool = 0; var_92_string = ""; var_93_string = "";
	func_203(var_91_bool, "quest_b12_01", "sobor_cutscene_end");
	var_97_object = Obj();
	func_189(var_97_object);
	RemoveActor(var_97_object);
	return 14;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_225(var_50_bool)
{
	var_51_int = 0; var_52_int = 0;
	GetVariable("b12q01KlaraInSobor", var_52_int);
	var_50_bool = var_52_int != (int)0;
	return 2;
}


func_195(var_35_object, var_36_object, var_37_string, var_38_string)
{
	var_39_object = Obj(); var_40_object = Obj();
	AddActor(var_40_object, var_37_string, var_36_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_38_string);
	var_40_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_232(var_61_bool)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("b12q01DankoInSobor", var_63_int);
	var_61_bool = var_63_int != (int)0;
	return 2;
}


func_169(var_77_object)
{
	var_78_int = 0; var_79_int = 0;
	var_80_bool = var_77_object == 0; //@nz
	if(var_80_bool != 0) {
		return 2;
	}
	@@var_77_object:GetProperty("noaccess", var_79_int);
	var_83_bool = var_79_int > (int)1;
	if(var_83_bool != 0) {
		var_86_int = var_79_int - (int)1;
		@@var_77_object:SetProperty("noaccess", var_86_int);
	} else {
		@@var_77_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_139(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_203(var_91_bool, var_92_string, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj();
	FindActor(var_95_object, var_92_string);
	var_96_bool = var_95_object == 0; //@ne
	if(var_96_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	Trigger(var_95_object, var_93_string);
	var_91_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_146(var_21_object)
{
	var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0;
	var_26_bool = var_21_object == 0; //@nz
	if(var_26_bool != 0) {
		return 4;
	}
	@@var_21_object:HasProperty("noaccess", var_24_bool);
	var_28_bool = var_24_bool;
	if(var_28_bool != 0) {
		@@var_21_object:GetProperty("noaccess", var_25_int);
		var_32_int = var_25_int + (int)1;
		@@var_21_object:SetProperty("noaccess", var_32_int);
	} else {
		@@var_21_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_215()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_220()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_189(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj();
	self(var_99_object);
	var_99_object = var_97_object;
	return 2;
}
EMIT "Stack[-1] = 0";


