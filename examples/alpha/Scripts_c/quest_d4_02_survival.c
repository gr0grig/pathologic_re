// @IMPORTS: GameSleep/1,RemoveActor/1,self/1,FindActor/2,Trigger/2
// @STRINGS: W:quest_d4_02|W:survived
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	GameSleep((float)1.0);
	var_1_bool = 0; var_2_string = ""; var_3_string = "";
	func_20(var_1_bool, "quest_d4_02", "survived");
	var_7_object = Obj();
	func_14(var_7_object);
	RemoveActor(var_7_object);
	return 0;
}


func_20(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@ne
	if(var_6_bool != 0) {
		var_1_bool = 0;
		return 2;
	}
	Trigger(var_5_object, var_3_string);
	var_1_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_14(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	self(var_9_object);
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


