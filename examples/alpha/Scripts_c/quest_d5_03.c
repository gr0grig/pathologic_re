// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,AddScriptedActor/5,FindActor/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,GetVariable/2,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6
// @STRINGS: W:d5q03|W:completed|W:uprava_prison|W:cs_uprava_prisoner1|W:cs_play_all.bin|W:cs_uprava_prisoner2|W:cs_uprava_prisoner3|W:cs_uprava_prisoner4|W:cs_uprava_prisoner5|A:ForceGeometryLoad|W:player|W:space|W:cs_uprava_prison1.mot|W:fail|W:place_prisoners|W:uprava_prison@door1|W:pt_guard|W:pers_birdmask|W:d5q03_birdmask.xml|W:pt_prisoner1|W:pers_unosha|W:d5q03_unosha.xml|A:add|W:pt_prisoner2|W:pers_worker|W:d5q03_worker.xml|W:pt_prisoner3|W:pers_wasted_male|W:d5q03_wastedmale.xml|W:pt_prisoner4|W:pers_alkash|W:d5q03_alkash.xml|W:pt_prisoner5|W:pt_prisoner6|W:cleanup|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:size|A:get|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_24: op=0xbf vars=int
// @EVENT_9: op=0x119 vars=int,float
// @PE: 0xbf,0x119

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	Trace(var_2_string);
	var_22_bool = var_2_string == "completed";
	if(var_22_bool != 0) {
		GetSceneByName(var_12_object, "uprava_prison");
		AddScriptedActor(var_13_object, "cs_uprava_prisoner1", "cs_play_all.bin", var_12_object, CVector(0.0, 0.0, 0.0));
		AddScriptedActor(var_14_object, "cs_uprava_prisoner2", "cs_play_all.bin", var_12_object, CVector(0.0, 0.0, 0.0));
		AddScriptedActor(var_15_object, "cs_uprava_prisoner3", "cs_play_all.bin", var_12_object, CVector(0.0, 0.0, 0.0));
		AddScriptedActor(var_16_object, "cs_uprava_prisoner4", "cs_play_all.bin", var_12_object, CVector(0.0, 0.0, 0.0));
		AddScriptedActor(var_17_object, "cs_uprava_prisoner5", "cs_play_all.bin", var_12_object, CVector(0.0, 0.0, 0.0));
		@@var_13_object:ForceGeometryLoad();
		@@var_14_object:ForceGeometryLoad();
		@@var_15_object:ForceGeometryLoad();
		@@var_16_object:ForceGeometryLoad();
		@@var_17_object:ForceGeometryLoad();
		FindActor(var_18_object, "player");
		var_40_object = Obj();
		var_18_object = var_40_object;
		func_286(var_40_object);
		RegisterKeyCallback("space");
		CameraPlay("cs_uprava_prison1.mot");
		CameraWaitForPlayFinish();
		UnregisterKeyCallback("space");
		var_57_object = Obj();
		var_18_object = var_57_object;
		func_309(var_57_object);
		RemoveActor(var_13_object);
		RemoveActor(var_14_object);
		RemoveActor(var_15_object);
		RemoveActor(var_16_object);
		RemoveActor(var_17_object);
		CameraSwitchToNormal();
		func_219();
		var_18_object = 0;
		var_17_object = 0;
		var_16_object = 0;
		var_15_object = 0;
		var_14_object = 0;
		var_13_object = 0;
		var_12_object = 0;
	} else {
		var_104_bool = var_2_string == "fail";
		if(var_104_bool != 0) {
			func_206();
			goto Label_190;
		}
		var_110_bool = var_2_string == "place_prisoners";
		if(var_110_bool == 0) goto Label_190;
		var_111_string = ""; var_112_bool = 0;
		func_359("uprava_prison@door1", (bool)0);
		GetSceneByName(var_19_object, "uprava_prison");
		var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = "";
		var_19_object = var_115_object;
		func_341(var_114_object, var_115_object, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
		var_1_object = var_114_object;
		var_132_object = Obj(); var_133_object = Obj(); var_134_string = ""; var_135_string = ""; var_136_string = "";
		var_19_object = var_133_object;
		func_341(var_132_object, var_133_object, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
		var_132_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_137_object = Obj(); var_138_object = Obj(); var_139_string = ""; var_140_string = ""; var_141_string = "";
		var_19_object = var_138_object;
		func_341(var_137_object, var_138_object, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
		var_137_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_142_object = Obj(); var_143_object = Obj(); var_144_string = ""; var_145_string = ""; var_146_string = "";
		var_19_object = var_143_object;
		func_341(var_142_object, var_143_object, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
		var_142_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_147_object = Obj(); var_148_object = Obj(); var_149_string = ""; var_150_string = ""; var_151_string = "";
		var_19_object = var_148_object;
		func_341(var_147_object, var_148_object, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
		var_147_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = "";
		var_19_object = var_153_object;
		func_341(var_152_object, var_153_object, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
		var_152_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_157_object = Obj(); var_158_object = Obj(); var_159_string = ""; var_160_string = ""; var_161_string = "";
		var_19_object = var_158_object;
		func_341(var_157_object, var_158_object, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
		var_157_object = var_20_object;
		@@@var_0_object:add(var_20_object);
		var_20_object = 0;
		var_19_object = 0;
	}
Label_190:
	return 18;
	
}


task_0_event_24(var_0_object, var_1_object, var_2_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_195();
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVariable("d5q03", (int)1);
	var_4_object = Obj();
	func_335(var_4_object);
	var_0_object = var_4_object;
	var_7_int = 0;
	func_262((int)5);
	return 0;
}


func_195()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d5q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_206();
	}
	return 2;
}


func_262(var_7_int)
{
	var_8_float = 0; var_9_float = 0;
	GetGameTime(var_9_float);
	var_11_float = var_7_int * (int)24;
	var_12_bool = var_9_float >= var_11_float;
	if(var_12_bool != 0) {
		func_246(var_8_float, var_9_float);
	} else {
		var_30_float = var_7_int * (int)24;
		SetTimeEvent((int)0, var_30_float);
		Hold();
	}
	return 2;
	
}


func_359(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@nz
	if(var_15_bool != 0) {
		var_17_int = "Door " + var_11_string;
		var_19_int = var_17_int + " not found";
		Trace(var_19_int);
	}
	@@var_14_object:SetProperty("locked", var_12_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_329(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	self(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_206()
{
	SetVariable("d5q03", (int)-1);
	var_11_string = ""; var_12_bool = 0;
	func_359("uprava_prison@door1", (bool)1);
	func_246(var_4_int, var_5_int);
	return 0;
}


func_335(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_309(var_57_object)
{
	var_58_int = 0; var_59_int = 0;
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		return 2;
	}
	@@var_57_object:GetProperty("noaccess", var_59_int);
	var_63_bool = var_59_int > (int)1;
	if(var_63_bool != 0) {
		var_66_int = var_59_int - (int)1;
		@@var_57_object:SetProperty("noaccess", var_66_int);
	} else {
		@@var_57_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_341(var_114_object, var_115_object, var_116_string, var_117_string, var_118_string)
{
	var_119_bool = 0; var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_object = Obj(); var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_object = Obj();
	@@var_115_object:GetLocator(var_116_string, var_123_bool, var_124_cvector, var_125_cvector);
	var_127_bool = var_123_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_129_int = "Locator " + var_116_string;
		var_131_int = var_129_int + " doesn't exist";
		Trace(var_131_int);
	} else {
		AddActor(Obj(), var_117_string, var_115_object, var_124_cvector, var_125_cvector, var_118_string);
	}
	var_126_object = var_114_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_246(var_0_object, var_1_object)
{
	EventDisable(26);
	var_13_object = Obj();
	var_13_object = var_0_object;
	func_375(var_13_object);
	var_23_object = var_1_object;
	if(var_23_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_25_object = Obj();
	func_329(var_25_object);
	RemoveActor(var_25_object);
	return 0;
}


func_219()
{
	var_68_int = 0; var_69_int = 0;
	GetVariable("d5q03", var_69_int);
	var_71_bool = 0;
	var_71_bool = 0;
	var_73_bool = var_69_int != (int)1000;
	if(var_73_bool != 0) {
		var_75_bool = var_69_int != (int)-1;
		if(var_75_bool != 0) {
			var_71_bool = 1;
		}
	}
	if(var_71_bool != 0) {
		SetVariable("d5q03", (int)1000);
		var_78_string = ""; var_79_bool = 0;
		func_359("uprava_prison@door1", (bool)1);
		func_246(var_68_int, var_69_int);
	}
	return 2;
}


func_286(var_40_object)
{
	var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0;
	var_45_bool = var_40_object == 0; //@nz
	if(var_45_bool != 0) {
		return 4;
	}
	@@var_40_object:HasProperty("noaccess", var_43_bool);
	var_47_bool = var_43_bool;
	if(var_47_bool != 0) {
		@@var_40_object:GetProperty("noaccess", var_44_int);
		var_51_int = var_44_int + (int)1;
		@@var_40_object:SetProperty("noaccess", var_51_int);
	} else {
		@@var_40_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_375(var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj();
	@@var_13_object:size(var_17_int);
	var_18_int = 0;
	
Label_379:
	var_20_bool = var_18_int < var_17_int;
	if(var_20_bool != 0) {
		@@var_13_object:get(var_19_object, var_18_int);
		var_21_object = var_19_object;
		if(var_21_object != 0) {
			RemoveActor(var_19_object);
		}
		var_19_object = 0;
		var_18_int = var_18_int + (int)1;
		goto Label_379;
	}
	@@var_13_object:clear();
	return 6;
}


