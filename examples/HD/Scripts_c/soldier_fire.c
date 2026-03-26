// @IMPORTS: IsLoaded/1,sync/0,Trace/1,RemoveActor/1,self/1
// @STRINGS: W:Unloaded dynamic light
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_bool = 0; var_1_bool = 0;
	IsLoaded(var_1_bool);
	var_2_bool = var_1_bool;
	if(var_2_bool != 0) {
		sync();
		sync();
	} else {
		Trace("Unloaded dynamic light");
	}
	var_3_object = Obj();
	func_19(var_3_object);
	RemoveActor(var_3_object);
	return 2;
	
}


func_19(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	self(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


