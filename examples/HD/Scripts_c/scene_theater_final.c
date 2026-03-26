// @IMPORTS: RegisterKeyCallback/1,CameraPlay/1,sync/0,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,Hold/0,self/1,AddActor/6,FindActor/2,Trigger/2,SetSepia/2
// @STRINGS: W:cs_final_theater_klara|W:cs_final_theater_klara.xml|W:cs_final_theater_danko|W:cs_final_theater_danko.xml|W:cs_final_theater_burah|W:cs_final_theater_burah.xml|A:ForceGeometryLoad|W:space|W:cs_final_theater.mot|W:final_quest_actor|W:voices
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x46 vars=int
// @PE: 0x46

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = "";
	func_74(Obj());
	var_10_object = var_7_object;
	func_80(var_6_object, var_7_object, "cs_final_theater_klara", "cs_final_theater_klara.xml");
	var_6_object = var_3_object;
	var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = "";
	func_74(Obj());
	var_21_object = var_18_object;
	func_80(var_17_object, var_18_object, "cs_final_theater_danko", "cs_final_theater_danko.xml");
	var_17_object = var_4_object;
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = "";
	func_74(Obj());
	var_26_object = var_23_object;
	func_80(var_22_object, var_23_object, "cs_final_theater_burah", "cs_final_theater_burah.xml");
	var_22_object = var_5_object;
	@@var_4_object:ForceGeometryLoad();
	@@var_3_object:ForceGeometryLoad();
	@@var_5_object:ForceGeometryLoad();
	func_100();
	RegisterKeyCallback("space");
	CameraPlay("cs_final_theater.mot");
	sync();
	var_31_bool = 0; var_32_string = ""; var_33_string = "";
	func_88(var_31_bool, "final_quest_actor", "voices");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	func_105();
	CameraSwitchToNormal();
	
Label_63:
	Hold();
	goto Label_63;
}
EMIT "Return(); Pop(6)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_100()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_105()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_74(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_80(var_6_object, var_7_object, var_8_string, var_9_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	AddActor(var_14_object, var_8_string, var_7_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_9_string);
	var_14_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_88(var_31_bool, var_32_string, var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj();
	FindActor(var_35_object, var_32_string);
	var_36_bool = var_35_object == 0; //@ne
	if(var_36_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	Trigger(var_35_object, var_33_string);
	var_31_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


