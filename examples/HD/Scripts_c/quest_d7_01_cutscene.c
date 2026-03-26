// @IMPORTS: GetSceneByName/2,AddActor/6,AddScriptedActor/5,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,FindActor/2,self/1,SetSepia/2
// @STRINGS: W:sobor|W:cs_d7q01_Aglaja|W:cs_d7q01_Aglaja.xml|W:cs_d7q01_birdmask|W:cs_play_all.bin|W:space|W:cs_d7q01.mot|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x3c vars=int
// @PE: 0x3c

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	GetSceneByName(var_4_object, "sobor");
	AddActor(var_5_object, "cs_d7q01_Aglaja", var_4_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "cs_d7q01_Aglaja.xml");
	AddScriptedActor(var_6_object, "cs_d7q01_birdmask", "cs_play_all.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	func_64(Obj());
	var_16_object = var_7_object;
	func_120();
	var_22_object = Obj();
	var_7_object = var_22_object;
	func_71(var_22_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_d7q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_39_object = Obj();
	var_7_object = var_39_object;
	func_94(var_39_object);
	func_125();
	RemoveActor(var_6_object);
	RemoveActor(var_5_object);
	CameraSwitchToNormal();
	var_52_object = Obj();
	func_114(var_52_object);
	RemoveActor(var_52_object);
	return 8;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_64(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, "player");
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_71(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	var_27_bool = var_22_object == 0; //@nz
	if(var_27_bool != 0) {
		return 4;
	}
	@@var_22_object:HasProperty("noaccess", var_25_bool);
	var_29_bool = var_25_bool;
	if(var_29_bool != 0) {
		@@var_22_object:GetProperty("noaccess", var_26_int);
		var_33_int = var_26_int + (int)1;
		@@var_22_object:SetProperty("noaccess", var_33_int);
	} else {
		@@var_22_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_114(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	self(var_54_object);
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_120()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_125()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_94(var_39_object)
{
	var_40_int = 0; var_41_int = 0;
	var_42_bool = var_39_object == 0; //@nz
	if(var_42_bool != 0) {
		return 2;
	}
	@@var_39_object:GetProperty("noaccess", var_41_int);
	var_45_bool = var_41_int > (int)1;
	if(var_45_bool != 0) {
		var_48_int = var_41_int - (int)1;
		@@var_39_object:SetProperty("noaccess", var_48_int);
	} else {
		@@var_39_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


