// @IMPORTS: RemoveActor/1,FindParticleSystem/2,sync/1,sync/0,IsLoaded/1,self/1
// @STRINGS: W:blood|A:Enable|A:AddSource|A:Fade
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=cvector,cvector params=0
// @EVENT_6: op=0x40 vars=

task_0_event_6(var_0_cvector, var_1_cvector)
{
	var_2_object = Obj();
	func_77(var_2_object);
	RemoveActor(var_2_object);
	sync();
	return 0;
}


main(var_0_cvector, var_1_cvector)
{
	var_2_object = Obj(); var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_object = Obj(); var_7_float = 0; var_8_float = 0; var_9_float = 0;
	var_10_bool = 0;
	func_72(var_10_bool);
	var_13_bool = var_10_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_77(var_14_object);
		RemoveActor(var_14_object);
		return 8;
	}
	FindParticleSystem("blood", var_6_object);
	@@var_6_object:Enable();
	var_0_cvector = CVector(0.0, 0.0, 0.0);
	var_1_cvector = CVector(-100.0, 100.0, 0.0);
	@@var_6_object:AddSource(var_0_cvector, var_1_cvector, (float)0.30000001192092896);
	var_7_float = 0.4000000059604645;
	
Label_23:
	var_20_bool = var_7_float > (int)0;
	if(var_20_bool != 0) {
		sync(var_8_float);
		var_7_float = var_7_float - var_8_float;
		var_21_float = GetByIndex(var_0_cvector, 1);
		var_23_float = (int)150 * var_8_float;
		var_21_float = var_21_float - var_23_float;
		SetByIndex(var_0_cvector, 1) = var_21_float;
		@@var_6_object:AddSource(var_0_cvector, var_1_cvector, (float)0.30000001192092896);
		goto Label_23;
	}
	@@var_6_object:Fade((bool)1);
	var_7_float = 0.4000000059604645;
	
Label_42:
	var_27_bool = var_7_float > (int)0;
	if(var_27_bool != 0) {
		sync(var_9_float);
		var_7_float = var_7_float - var_9_float;
		var_28_float = GetByIndex(var_0_cvector, 1);
		var_30_float = (int)150 * var_9_float;
		var_28_float = var_28_float - var_30_float;
		SetByIndex(var_0_cvector, 1) = var_28_float;
		@@var_6_object:AddSource(var_0_cvector, var_1_cvector, (float)0.30000001192092896);
		goto Label_42;
	}
	var_32_object = Obj();
	func_77(var_32_object);
	RemoveActor(var_32_object);
	return 8;
}
EMIT "Stack[-4] = 0";


func_72(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
	return 2;
}


func_77(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


