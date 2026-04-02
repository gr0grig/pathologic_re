// @GLOBALS: 0:object:Owner,1:cvector:StartVelocity,2:float:DamageAmount,3:int:DamageType,4:object:,5:object:

maintask task_0
{
	void init(void)
	{
		var_8_cvector = GlobalVars[1];
		var_10_object = GlobalVars[0];
		object var_3_object;
		@CreateRigidBody(var_3_object, [0.0, 0.0, 0.0], 50, var_8_cvector, [2.0, 2.0, 2.0], var_10_object);
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
		func_229(var_37_cvector);
		cvector var_18_cvector;
		var_37_cvector = var_18_cvector;
	
		for(;;) {
			var_15_object->Next(var_16_bool, var_17_object);
			if(var_16_bool == 0) goto Label_78;
			cvector var_41_cvector; object var_42_object;
			var_17_object = var_42_object;
			func_234(var_41_cvector, var_42_object);
			var_41_cvector = var_19_cvector;
			float var_46_float; cvector var_47_cvector; cvector var_48_cvector;
			var_19_cvector = var_47_cvector;
			var_18_cvector = var_48_cvector;
			func_315(var_46_float, var_47_cvector, var_48_cvector);
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
			func_251(var_59_float, var_60_object, var_61_float, var_62_int);
			var_59_float = var_21_float;
			var_116_object = GlobalVars[0];
			@ReportHit(var_17_object, var_116_object, 3, var_21_float, var_61_float);
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
		var_153_object = GlobalVars[4];
		var_153_object->Fade();
		@Sleep(10.0);
		var_23_object->Fade();
		if(var_14_object != null)
			var_14_object->FadeOut(1.0);
		@Sleep(2.0);
		@SetDeathStateAndRemove();
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}

}


// @pe
void func_320(float var_99_float, float var_100_float, float var_101_float)
{
	if(var_100_float < var_101_float)
		var_100_float = var_99_float;
	else
		var_101_float = var_99_float;
	
}


void func_229(cvector var_37_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	var_39_cvector = var_37_cvector;
}


// @pe
void func_327(float var_109_float, float var_110_float, float var_111_float, float var_112_float)
{
	if(var_110_float < var_111_float) {
		var_111_float = var_109_float;
		return 0;
	}
	if(var_110_float > var_112_float) {
		var_112_float = var_109_float;
		return 0;
	}
	var_110_float = var_109_float;
}


void func_234(cvector var_41_cvector, object var_42_object)
{
	cvector var_44_cvector;
	var_42_object->GetPosition(var_44_cvector);
	var_44_cvector = var_41_cvector;
}


void func_239(bool var_76_bool, object var_77_object, string var_78_string)
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


void func_251(float var_59_float, object var_60_object, float var_61_float, int var_62_int)
{
	int var_70_int; int var_72_int;
	object var_77_object;
	var_60_object = var_77_object;
	bool var_76_bool;
	func_239(var_76_bool, var_77_object, "health");
	if(!var_76_bool) //@nz
		var_59_float = 0.0;
	bool var_86_bool; object var_87_object;
	func_239(var_86_bool, var_87_object, "armor");
	if(!var_86_bool) //@nz
		var_70_int = 0;
	else
		var_87_object->GetProperty("armor", var_70_int);
	string var_91_string; int var_92_int;
	var_62_int = var_92_int;
	func_221(var_91_string, var_92_int);
	string var_71_string = "armor_" + var_91_string;
	bool var_95_bool; object var_96_object; string var_97_string;
	var_60_object = var_96_object;
	func_239(var_95_bool, var_96_object, var_97_string);
	if(!var_95_bool) //@nz
		var_72_int = 0;
	else
		var_60_object->GetProperty(var_97_string, var_72_int);

	float var_99_float;
	func_320(var_99_float, ((var_70_int + var_72_int) / 100.0), (float)1);
	float var_73_float;
	var_99_float = var_73_float;
	float var_74_float;
	var_60_object->GetProperty("health", var_74_float);
	float var_109_float;
	func_327(var_109_float, (var_74_float - (var_61_float * (1 - var_73_float))), (float)0, (float)1);
	var_60_object->SetProperty("health", var_109_float);
	float var_75_float = var_59_float;
	
}


void func_315(float var_46_float, cvector var_47_cvector, cvector var_48_cvector)
{
	var_46_float = sqrt((var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector));
}


// @pe
void func_221(string var_91_string, int var_92_int)
{
	if(var_92_int == 1)
		var_91_string = "fire";
	var_91_string = "phys";
}


