// @GLOBALS: 0:object:Owner,1:cvector:StartVelocity,2:float:DamageAmount,3:int:DamageType,4:object:,5:object:

maintask task_0
{
	void init(void)
	{
		var_8_cvector = GlobalVars[1];
		var_10_object = GlobalVars[0];
		object var_3_object;
		@CreateRigidBody(var_3_object, [0.0, 0.0, 0.0], 10, var_8_cvector, [2.0, 2.0, 2.0], var_10_object);
		var_3_object->Enable(true);
		var_12_object = GlobalVars[5];
		GlobalVars[5] = var_12_object;
		object var_4_object;
		@FindParticleSystem("smoke", var_4_object);
		var_4_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		var_4_object->Enable(true);
		var_4_object->Fade(false);
		var_19_object = GlobalVars[4];
		var_4_object = var_19_object;
		GlobalVars[4] = var_19_object;
		object var_5_object;
		@FindGeometry("grenade", var_5_object);
		var_5_object->Enable(true);
		@Attach(var_12_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(6)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";

	void OnCollision(object actor, object var_1_object, cvector var_2_cvector, cvector var_3_cvector)
	{
		object var_17_object; cvector var_19_cvector; float var_20_float; float var_21_float;
		disable OnCollision;
		@Trace("on collision");
		var_25_object = GlobalVars[5];
		var_25_object->Enable(false);
		@PlayGlobalSound("bottle", [0.0, 0.0, 0.0], 1, 300);
		object var_14_object;
		@PlayLoopedGlobalSound(var_14_object, "fire_loop", [0.0, 10.0, 0.0], 200);
		if(var_14_object != null)
			var_14_object->FadeIn(1.0);
		object var_15_object;
		bool var_16_bool;
		@Intersect(var_2_cvector, 300.0, var_16_bool, var_15_object);
		cvector var_37_cvector;
		func_241(var_37_cvector);
		cvector var_18_cvector;
		var_37_cvector = var_18_cvector;
	
		for(;;) {
			var_15_object->Next(var_16_bool, var_17_object);
			if(var_16_bool == 0) goto Label_78;
			cvector var_41_cvector; object var_42_object;
			var_17_object = var_42_object;
			func_246(var_41_cvector, var_42_object);
			var_41_cvector = var_19_cvector;
			float var_46_float; cvector var_47_cvector; cvector var_48_cvector;
			var_19_cvector = var_47_cvector;
			var_18_cvector = var_48_cvector;
			func_347(var_46_float, var_47_cvector, var_48_cvector);
			if((1.0 - (var_46_float / 300.0)) < 0.4)
				var_20_float = 0.4;
			if(var_20_float > 0.8)
				var_20_float = 1;
			var_58_float = GlobalVars[2];
			var_20_float *= var_58_float;
			float var_59_float; object var_60_object; float var_61_float; int var_62_int;
			var_17_object = var_60_object;
			var_63_int = GlobalVars[3];
			var_63_int = var_62_int;
			func_268(var_59_float, var_60_object, var_61_float, var_62_int);
			var_59_float = var_21_float;
			var_126_object = GlobalVars[0];
			@ReportHit(var_17_object, var_126_object, 3, var_21_float, var_61_float);
			@Trace("Hit: " + var_17_object);
		}
	
	Label_78:
		var_15_object = null;
		@SetPosition(var_2_cvector);
		object var_22_object;
		@FindGeometry("grenade", var_22_object);
		var_22_object->Enable(false);
		object var_23_object;
		@FindParticleSystem("grenadefire", var_23_object);
		if(var_23_object == null)
			@Trace("Can't find fire particle system");
		var_23_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([-50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([-50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([-25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([-25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		var_23_object->AddSource([25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		var_23_object->Enable();
		var_23_object->Fade(false);
		var_163_object = GlobalVars[4];
		var_163_object->Fade();
		@Sleep(10.0);
		var_23_object->Fade();
		if(var_14_object != null)
			var_14_object->FadeOut(1.0);
		@Sleep(2.0);
		object var_168_object;
		func_341(var_168_object);
		@RemoveActor(var_168_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";

	void OnUnload(void)
	{
		object var_0_object;
		func_341(var_0_object);
		@RemoveActor(var_0_object);
		@Hold();
	}

}


void func_256(bool var_76_bool, object var_77_object, string var_78_string)
{
	var_83_bool = IsFuncExist(var_77_object, "HasProperty", 2);
	if(!var_83_bool) { //@nz
		var_76_bool = false;
		return 2;
	}
	bool var_80_bool;
	var_77_object->HasProperty(var_78_string, var_80_bool);
	var_80_bool = var_76_bool;
}


// @pe
void func_352(float var_101_float, float var_102_float, float var_103_float)
{
	if(var_102_float < var_103_float)
		var_102_float = var_101_float;
	else
		var_103_float = var_101_float;
	
}


// @pe
void func_227(string var_91_string, int var_92_int)
{
	if(var_92_int == 2) {
		var_91_string = "fire";
		return 0;
	EMIT "GOTO 0xef";
	}
	if(var_92_int == 1) {
		var_91_string = "bullet";
		return 0;
	}
	var_91_string = "phys";
}


// @pe
void func_359(float var_111_float, float var_112_float, float var_113_float, float var_114_float)
{
	if(var_112_float < var_113_float) {
		var_113_float = var_111_float;
		return 0;
	}
	if(var_112_float > var_114_float) {
		var_114_float = var_111_float;
		return 0;
	}
	var_112_float = var_111_float;
}


void func_268(float var_59_float, object var_60_object, float var_61_float, int var_62_int)
{
	int var_70_int; int var_72_int;
	object var_77_object;
	var_60_object = var_77_object;
	bool var_76_bool;
	func_256(var_76_bool, var_77_object, "health");
	if(!var_76_bool) //@nz
		var_59_float = 0.0;
	bool var_86_bool; object var_87_object;
	func_256(var_86_bool, var_87_object, "armor");
	if(!var_86_bool) //@nz
		var_70_int = 0;
	else
		var_87_object->GetProperty("armor", var_70_int);
	string var_91_string; int var_92_int;
	var_62_int = var_92_int;
	func_227(var_91_string, var_92_int);
	string var_71_string = "armor_" + var_91_string;
	bool var_97_bool; object var_98_object; string var_99_string;
	var_60_object = var_98_object;
	func_256(var_97_bool, var_98_object, var_99_string);
	if(!var_97_bool) //@nz
		var_72_int = 0;
	else
		var_60_object->GetProperty(var_99_string, var_72_int);

	float var_101_float;
	func_352(var_101_float, ((var_70_int + var_72_int) / 100.0), (float)1);
	float var_73_float;
	var_101_float = var_73_float;
	float var_74_float;
	var_60_object->GetProperty("health", var_74_float);
	float var_75_float = var_61_float * (1 - var_73_float);
	float var_111_float;
	func_359(var_111_float, (var_74_float - var_75_float), (float)0, (float)1);
	var_60_object->SetProperty("health", var_111_float);
	bool var_117_bool; object var_118_object;
	var_60_object = var_118_object;
	func_251(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		float var_121_float = -var_75_float;
		func_370(var_121_float);
	}
	var_75_float = var_59_float;
	
}


void func_251(bool var_117_bool, object var_118_object)
{
	bool var_120_bool;
	@IsPlayerActor(var_118_object, var_120_bool);
	var_120_bool = var_117_bool;
}


void func_241(cvector var_37_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	var_39_cvector = var_37_cvector;
}


void func_370(float var_121_float)
{
	object var_123_object;
	@CreateFloatVector(var_123_object);
	var_123_object->add(var_121_float);
	@SendWorldWndMessage(15, var_123_object);
}
EMIT "Stack[-1] = 0";


void func_341(object var_0_object)
{
	object var_2_object;
	@self(var_2_object);
	var_2_object = var_0_object;
}
EMIT "Stack[-1] = 0";


void func_246(cvector var_41_cvector, object var_42_object)
{
	cvector var_44_cvector;
	var_42_object->GetPosition(var_44_cvector);
	var_44_cvector = var_41_cvector;
}


void func_347(float var_46_float, cvector var_47_cvector, cvector var_48_cvector)
{
	var_46_float = sqrt((var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector));
}


