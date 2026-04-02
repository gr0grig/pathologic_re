// @GLOBALS: 0:object:Owner,1:cvector:StartVelocity,2:float:DamageAmount,3:int:DamageType,4:object:,5:object:,6:object:

maintask task_0
{
	void init(void)
	{
		var_8_cvector = GlobalVars[1];
		var_10_object = GlobalVars[0];
		object var_3_object;
		@CreateRigidBody(var_3_object, [0.0, 0.0, 0.0], 50, var_8_cvector, [2.0, 2.0, 2.0], var_10_object);
		var_3_object->Enable(true);
		var_12_object = GlobalVars[6];
		GlobalVars[6] = var_12_object;
		object var_4_object;
		@FindParticleSystem("smoke", var_4_object);
		var_4_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		var_4_object->Enable(true);
		var_4_object->Fade(false);
		var_19_object = GlobalVars[5];
		var_4_object = var_19_object;
		GlobalVars[5] = var_19_object;
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
		object var_19_object; cvector var_21_cvector; float var_22_float; float var_23_float;
		disable OnCollision;
		var_26_object = GlobalVars[6];
		var_26_object->Enable(false);
		@PlayGlobalSound("bottle", [0.0, 0.0, 0.0], 1, 300);
		object var_15_object;
		@PlayLoopedGlobalSound(var_15_object, "fire_loop", [0.0, 10.0, 0.0], 200);
		if(var_15_object != null)
			var_15_object->FadeIn(1.0);
		object var_16_object;
		@GetScene(var_16_object);
		object var_17_object;
		bool var_18_bool;
		@Intersect(var_2_cvector, 300.0, var_18_bool, var_17_object);
		cvector var_38_cvector;
		func_229(var_38_cvector);
		cvector var_20_cvector;
		var_38_cvector = var_20_cvector;
	
		for(;;) {
			var_17_object->Next(var_18_bool, var_19_object);
			if(var_18_bool == 0) goto Label_82;
			cvector var_42_cvector; object var_43_object;
			var_19_object = var_43_object;
			func_234(var_42_cvector, var_43_object);
			var_42_cvector = var_21_cvector;
			float var_47_float; cvector var_48_cvector; cvector var_49_cvector;
			var_21_cvector = var_48_cvector;
			var_20_cvector = var_49_cvector;
			func_315(var_47_float, var_48_cvector, var_49_cvector);
			if((1.0 - (var_47_float / 300.0)) < 0.4)
				var_22_float = 0.4;
			if(var_22_float > 0.8)
				var_22_float = 1;
			var_59_float = GlobalVars[2];
			var_22_float *= var_59_float;
			float var_60_float; object var_61_object; float var_62_float; int var_63_int;
			var_19_object = var_61_object;
			var_64_int = GlobalVars[3];
			var_64_int = var_63_int;
			func_251(var_60_float, var_61_object, var_62_float, var_63_int);
			var_60_float = var_23_float;
			var_117_object = GlobalVars[0];
			if(var_19_object != var_117_object) {
				var_119_object = GlobalVars[0];
				@ReportAttack(var_119_object, var_19_object);
				var_120_object = GlobalVars[0];
				@ReportHit(var_19_object, var_120_object, 3, var_23_float, var_62_float);
				var_122_object = GlobalVars[0];
				@BroadcastPlayerDamage(var_19_object, var_16_object, var_122_object);
			}
		}
	
	Label_82:
		var_17_object = null;
		@SetPosition(var_2_cvector);
		object var_24_object;
		@FindGeometry("grenade", var_24_object);
		var_24_object->Enable(false);
		object var_25_object;
		@FindParticleSystem("fire", var_25_object);
		var_25_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([-50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([-50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([-25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([-25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		var_25_object->AddSource([25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		var_25_object->Enable();
		var_25_object->Fade(false);
		var_154_object = GlobalVars[5];
		var_154_object->Fade(true);
		@Sleep(12.0);
		var_25_object->Fade();
		if(var_15_object != null)
			var_15_object->FadeOut(1.0);
		@Sleep(2.0);
		@SetDeathStateAndRemove();
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";
	EMIT "Stack[-11] = 0";

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}

}


// @pe
void func_320(float var_100_float, float var_101_float, float var_102_float)
{
	if(var_101_float < var_102_float)
		var_101_float = var_100_float;
	else
		var_102_float = var_100_float;
	
}


void func_229(cvector var_38_cvector)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	var_40_cvector = var_38_cvector;
}


// @pe
void func_327(float var_110_float, float var_111_float, float var_112_float, float var_113_float)
{
	if(var_111_float < var_112_float) {
		var_112_float = var_110_float;
		return 0;
	}
	if(var_111_float > var_113_float) {
		var_113_float = var_110_float;
		return 0;
	}
	var_111_float = var_110_float;
}


void func_234(cvector var_42_cvector, object var_43_object)
{
	cvector var_45_cvector;
	var_43_object->GetPosition(var_45_cvector);
	var_45_cvector = var_42_cvector;
}


void func_239(bool var_77_bool, object var_78_object, string var_79_string)
{
	var_84_bool = IsFuncExist(var_78_object, "HasProperty", 2);
	if(!var_84_bool) { //@nz
		var_77_bool = false;
		return 2;
	}
	bool var_81_bool;
	var_78_object->HasProperty(var_79_string, var_81_bool);
	var_81_bool = var_77_bool;
}


void func_251(float var_60_float, object var_61_object, float var_62_float, int var_63_int)
{
	int var_71_int; int var_73_int;
	object var_78_object;
	var_61_object = var_78_object;
	bool var_77_bool;
	func_239(var_77_bool, var_78_object, "health");
	if(!var_77_bool) //@nz
		var_60_float = 0.0;
	bool var_87_bool; object var_88_object;
	func_239(var_87_bool, var_88_object, "armor");
	if(!var_87_bool) //@nz
		var_71_int = 0;
	else
		var_88_object->GetProperty("armor", var_71_int);
	string var_92_string; int var_93_int;
	var_63_int = var_93_int;
	func_221(var_92_string, var_93_int);
	string var_72_string = "armor_" + var_92_string;
	bool var_96_bool; object var_97_object; string var_98_string;
	var_61_object = var_97_object;
	func_239(var_96_bool, var_97_object, var_98_string);
	if(!var_96_bool) //@nz
		var_73_int = 0;
	else
		var_61_object->GetProperty(var_98_string, var_73_int);

	float var_100_float;
	func_320(var_100_float, ((var_71_int + var_73_int) / 100.0), (float)1);
	float var_74_float;
	var_100_float = var_74_float;
	float var_75_float;
	var_61_object->GetProperty("health", var_75_float);
	float var_110_float;
	func_327(var_110_float, (var_75_float - (var_62_float * (1 - var_74_float))), (float)0, (float)1);
	var_61_object->SetProperty("health", var_110_float);
	float var_76_float = var_60_float;
	
}


void func_315(float var_47_float, cvector var_48_cvector, cvector var_49_cvector)
{
	var_47_float = sqrt((var_49_cvector - var_48_cvector) | (var_49_cvector - var_48_cvector));
}


// @pe
void func_221(string var_92_string, int var_93_int)
{
	if(var_93_int == 1)
		var_92_string = "fire";
	var_92_string = "phys";
}


