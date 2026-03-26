// @IMPORTS: FindActor/2,CreateSmoke/3,Sleep/1,SetDeathStateAndRemove/0,sync/0
// @STRINGS: W:player|A:GetDirection|W:smoke|A:AddSource|A:SetOpacity|A:SetSpeed|A:SetLifeTime|A:Enable|A:Fade
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0x2d vars=

task_0_event_6()
{
	SetDeathStateAndRemove();
	sync();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_cvector = CVector(0,0,0); var_2_object = Obj(); var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_object = Obj();
	FindActor(var_3_object, "player");
	var_7_bool = var_3_object == 0; //@ne
	if(var_7_bool != 0) {
		return 6;
	}
	@@var_3_object:GetDirection(var_4_cvector);
	CreateSmoke(var_5_object, "smoke", (int)20);
	var_11_float = var_4_cvector * (int)100;
	@@var_5_object:AddSource(var_11_float, var_4_cvector);
	@@var_5_object:SetOpacity((float)0.800000011920929);
	@@var_5_object:SetSpeed((int)500, (int)100);
	@@var_5_object:SetLifeTime((float)1.5);
	@@var_5_object:Enable();
	@@var_5_object:Fade((bool)0);
	Sleep((float)1.5);
	@@var_5_object:Fade();
	Sleep((float)1.5);
	SetDeathStateAndRemove();
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-3] = 0";


