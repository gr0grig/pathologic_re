// @IMPORTS: Trace/1,SetSaveProperty/2,sync/0,AddBlankActorFromXml/4,Hold/0,FindActor/2,GetSceneByName/2,Teleport/4,RemoveWorld/0,GameOver/1,Trigger/2
// @STRINGS: W:World inited|W:final_quest_actor|W:final_quest_actor.xml|W:player|W:final_theater|W:Final scene not found|W:birth|A:GetLocator|W:world trigger |W:open|W:exit|W:gameover_credits.xml|A:GetGroupActors|W:door begin|A:Next|W:door|W:exiting from game|W:whiten
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x2c vars=string
// @PE: 0x2c

task_0_event_26(var_0_object, var_1_string)
{
	var_3_int = "world trigger " + var_1_string;
	Trace(var_3_int);
	var_5_bool = var_1_string == "open";
	if(var_5_bool != 0) {
		func_88();
	} else {
		var_26_bool = var_1_string == "exit";
		if(var_26_bool == 0) goto Label_64;
		RemoveWorld();
		GameOver("gameover_credits.xml");
	}
Label_64:
	return 0;
	
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	Trace("World inited");
	SetSaveProperty((int)0, (int)4);
	func_22(var_2_object);
	sync();
	AddBlankActorFromXml(var_2_object, var_0_object, "final_quest_actor", "final_quest_actor.xml");
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_88()
{
	Trace("exiting from game");
	func_65(var_1_string);
	var_19_bool = 0; var_20_string = ""; var_21_string = "";
	func_100(var_19_bool, "final_quest_actor", "whiten");
	return 0;
}


func_65(var_0_object)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_bool = 0;
	@@@var_0_object:GetGroupActors(var_10_object, (int)0);
	Trace("door begin");
	
Label_72:
	@@var_10_object:Next(var_12_bool, var_11_object);
	var_15_bool = var_12_bool;
	if(var_15_bool != 0) {
		var_16_object = var_10_object;
		if(var_16_object != 0) {
			Trace("door");
			Trigger(var_11_object, "open");
		}
		goto Label_72;
	}
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_100(var_19_bool, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, var_20_string);
	var_24_bool = var_23_object == 0; //@ne
	if(var_24_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	Trigger(var_23_object, var_21_string);
	var_19_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_22(var_0_object)
{
	var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	FindActor(var_10_object, "player");
	GetSceneByName(var_0_object, "final_theater");
	var_16_bool = var_0_object == 0; //@nz
	if(var_16_bool != 0) {
		Trace("Final scene not found");
		return 8;
	}
	@@@var_0_object:GetLocator("birth", var_11_bool, var_12_cvector, var_13_cvector);
	var_19_bool = var_11_bool;
	if(var_19_bool != 0) {
		Teleport(var_10_object, var_0_object, var_12_cvector, var_13_cvector);
	}
	return 8;
}
EMIT "Stack[-4] = 0";


