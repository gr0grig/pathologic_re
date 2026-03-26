// @IMPORTS: SetTimer/2,FindParticleSystem/2,Trace/1,Hold/0,KillTimer/1,Sleep/1,RemoveActor/1,StopGroup0/0,self/1
// @STRINGS: W:fire|W:Can't find fire particle system|A:AddSource|A:Enable|A:Fade|W:continue
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_7: op=0x4f vars=int
// @EVENT_26: op=0x56 vars=string
// @PE: 0x4f,0x56

task_0_event_7(var_0_int)
{
	var_2_bool = var_0_int == (int)1;
	if(var_2_bool != 0) {
		StopGroup0();
	}
	return 0;
}


task_0_event_26(var_0_string)
{
	var_2_bool = var_0_string == "continue";
	if(var_2_bool != 0) {
		SetTimer((int)1, (float)5.0);
	}
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	SetTimer((int)1, (float)5.0);
	FindParticleSystem("fire", var_1_object);
	var_5_bool = var_1_object == 0; //@ne
	if(var_5_bool != 0) {
		Trace("Can't find fire particle system");
		return 2;
	}
	@@var_1_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(10.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(0.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(-10.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(0.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(10.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(-10.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(-10.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:AddSource(CVector(10.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:Enable();
	Hold();
	KillTimer((int)1);
	@@var_1_object:Fade((bool)1);
	Sleep((int)2);
	var_37_object = Obj();
	func_95(var_37_object);
	RemoveActor(var_37_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_95(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	self(var_39_object);
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


