// @IMPORTS: FindActor/2,GetSceneByName/2,Teleport/4
// @STRINGS: W:player|W:test_scene|W:birth|A:GetLocator
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x0

main()
{
	func_4();
	return 0;
}


func_4()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0);
	FindActor(var_5_object, "player");
	GetSceneByName(var_6_object, "test_scene");
	@@var_6_object:GetLocator("birth", var_7_bool, var_8_cvector, var_9_cvector);
	var_13_bool = var_7_bool;
	if(var_13_bool != 0) {
		Teleport(var_5_object, var_6_object, var_8_cvector, var_9_cvector);
	}
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


