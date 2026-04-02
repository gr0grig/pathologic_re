// @GLOBALS: 0:int:Region

task task_0
{
}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object)
	{
		@PutOnGrid();
		@SetTimer(20, 1);
	
		for(;;) {
			TaskCall(2);
			func_120(var_6_bool, var_7_bool);
			TaskReturn();
			TaskCall(3);
			func_202();
			TaskReturn();
		}
	}
	EMIT "Return(); Pop(0)";

}


task task_2
{
	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, bool var_3_bool, object var_4_object)
	{
		int var_5_int;
		var_4_object = var_5_int;
		func_659(var_5_int);
		if(var_4_object == 20) {
			bool var_10_bool; object var_11_object;
			object var_12_object;
			func_448(var_12_object);
			var_12_object = var_11_object;
			func_666(var_10_bool, var_11_object);
			if(var_10_bool != 0)
				func_184(var_3_bool, var_4_object);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object)
	{
		bool var_5_bool; object var_6_object;
		func_638(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			func_184(var_3_bool, var_6_object);
			object var_44_object;
			var_4_object = var_44_object;
			func_651(var_44_object);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object)
	{
		@RequestClearPath(var_4_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object)
	{
		func_184(var_3_bool, var_4_object);
		object var_5_object;
		var_4_object = var_5_object;
		func_695();
	}

}


task task_3
{
	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int)
	{
		int var_5_int;
		var_4_int = var_5_int;
		func_659(var_5_int);
		int var_8_int;
		var_4_int = var_8_int;
		func_372(var_3_object, var_4_int, var_8_int);
		if(var_4_int == 20) {
			bool var_64_bool; object var_65_object;
			object var_66_object;
			func_448(var_66_object);
			var_66_object = var_65_object;
			func_666(var_64_bool, var_65_object);
			if(!var_64_bool) //@nz
				func_394(var_4_int);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
	{
		bool var_5_bool; object var_6_object;
		func_638(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			func_394(var_6_object);
			object var_45_object;
			var_4_object = var_45_object;
			func_651(var_45_object);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
	{
		@RequestClearPath(var_4_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
	{
		func_394(var_4_object);
		object var_6_object;
		var_4_object = var_6_object;
		func_695();
	}

}


task task_4
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
	{
		object var_6_object;
		var_4_object = var_6_object;
		bool var_5_bool;
		func_638(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			object var_44_object;
			var_4_object = var_44_object;
			func_651(var_44_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int)
	{
		int var_5_int;
		var_4_int = var_5_int;
		func_659(var_5_int);
	}

}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
{
}


void func_0(object var_45_object)
{
	float var_53_float;
	@FogLinear(1, 1);
	float var_50_float;
	@GetHeight(var_50_float);
	cvector var_51_cvector = [0.0, 0.0, 0.0];
	var_56_float = GetByIndex(var_51_cvector, 1);
	var_50_float = var_56_float;
	SetByIndex(var_51_cvector, 1) = var_56_float;
	@PlayGlobalSound("breath", var_51_cvector);
	cvector var_52_cvector;
	var_45_object->GetPFPosition(var_52_cvector);
	@MovePoint(var_52_cvector, 500);
	bool var_59_bool; object var_60_object;
	var_45_object = var_60_object;
	func_593(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
		cvector var_64_cvector;
		func_438(var_64_cvector);
		var_64_cvector = var_62_cvector;
		cvector var_67_cvector; object var_68_object;
		var_45_object = var_68_object;
		func_443(var_67_cvector, var_68_object);
		var_67_cvector = var_63_cvector;
		func_623(var_61_float, var_62_cvector, var_63_cvector);
		if(var_61_float <= 90000.0) {
			@PlaySound("attack");
			float var_76_float; object var_77_object;
			func_489(var_76_float, var_77_object, 0.2);
			var_76_float = var_53_float;
			@ReportHit(var_77_object, 5, var_53_float, 0.2);
		}
	}
	@SetVisirVisibility(false);
	@FogLinear(0, 2);
	@Sleep(5);
	object var_132_object;
	func_617(var_132_object);
	@RemoveActor(var_132_object);
}


// @pe
void func_263(bool var_114_bool, object var_115_object)
{
	object var_117_object;
	var_115_object = var_117_object;
	bool var_116_bool;
	func_666(var_116_bool, var_117_object);
	var_116_bool = var_114_bool;
}


void func_394(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_651(object var_44_object)
{
	object var_45_object;
	var_44_object = var_45_object;
	TaskCall(0);
	func_0(var_45_object);
	TaskReturn();
}


void func_270(bool var_0_bool, bool var_1_bool, bool var_92_bool, object var_93_object, float var_94_float, float var_95_float, bool var_96_bool, bool var_97_bool)
{
	bool var_106_bool; object var_108_object; cvector var_109_cvector; cvector var_110_cvector; float var_112_float; object var_113_object;
	var_0_bool = false;
	var_1_bool = var_93_object;
	bool var_107_bool;
	var_97_bool = var_107_bool;
	
	for(;;) {
		bool var_114_bool; object var_115_object;
		var_93_object = var_115_object;
		func_263(var_114_bool, var_115_object);
		if(!var_114_bool) { //@nz
			var_92_bool = false;
			return 16;
		}
		var_93_object->GetPosition(var_109_cvector);
		@GetPosition(var_110_cvector);
		var_112_float = (var_109_cvector - var_110_cvector) | (var_109_cvector - var_110_cvector);
		bool var_119_bool = false;
		if(var_95_float > 0) {
			if(var_112_float > (var_95_float * var_95_float))
				var_119_bool = true;
		}
		if(var_119_bool != 0) {
			@Stop();
			var_92_bool = false;
			return 16;
		}
		if(var_112_float > (var_94_float * var_94_float)) {
			var_93_object->GetPFPosition(var_109_cvector);
			@FindPathTo(var_113_object, var_109_cvector);
			if(var_113_object != null) {
				var_113_object = var_108_object;
				var_113_object = null;
			}
			if(var_108_object != null) {
				if(var_107_bool == 0) goto Label_323;
				var_107_bool = false;
				@RotatePath(var_108_object, var_106_bool);
				if(!var_106_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_132_string;
						func_410(var_132_string);
						string var_133_string;
						func_412(var_133_string);
						@FollowPath(var_108_object, var_96_bool, var_106_bool, var_132_string, var_133_string);
						if(!var_106_bool) { //@nz
							if(var_0_bool == 0) goto Label_342;
							var_108_object = null;
						}
					EMIT "GOTO 0x157";

					Label_342:
						} else {
					var_108_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_106_bool);
					if(!var_106_bool) { //@nz
						if(var_0_bool != 0) {
							var_108_object = null;
							goto Label_370;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_370;
		}
			var_113_object = null;
			goto Label_368;

		Label_368:
			var_108_object = null;

		}
	Label_370:
		for(;;) {
			var_92_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_659(int var_5_int)
{
	if(var_5_int == 20)
		@ResetAAS();
}


void func_666(bool var_44_bool, object var_45_object)
{
	int var_49_int;
	object var_51_object;
	var_45_object = var_51_object;
	bool var_50_bool;
	func_593(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_44_bool = false;
		return 4;
	}
	object var_48_object;
	@GetActiveScene(var_48_object);
	bool var_85_bool = false;
	if(var_48_object != null) {
		var_89_bool = IsFuncExist(var_48_object, "GetCurrentRegion", 1);
		if(var_89_bool != 0)
			var_85_bool = true;
	}
	if(var_85_bool != 0) {
		var_48_object->GetCurrentRegion(var_49_int);
		var_90_int = GlobalVars[0];
		var_44_bool = var_49_int == var_90_int;
		return 4;
	}
	var_44_bool = false;
}
EMIT "Stack[-2] = 0";


void func_410(string var_132_string)
{
	var_132_string = "walk";
}


void func_412(string var_133_string)
{
	var_133_string = "run";
}


void func_414(void)
{
	float var_32_float;
	@rand(var_32_float, 30);
	@Sleep(var_32_float);
}


void func_552(bool var_65_bool, object var_66_object)
{
	bool var_68_bool;
	var_66_object->IsDead(var_68_bool);
	var_68_bool = var_65_bool;
}


void func_557(bool var_54_bool, object var_55_object)
{
	if(var_55_object == null) {
		var_54_bool = false;
		return 4;
	}
	bool var_61_bool = false;
	var_64_bool = IsFuncExist(var_55_object, "IsDead", 1);
	if(var_64_bool != 0) {
		bool var_65_bool; object var_66_object;
		var_55_object = var_66_object;
		func_552(var_65_bool, var_66_object);
		if(var_65_bool != 0)
			var_61_bool = true;
	}
	if(var_61_bool != 0) {
		var_54_bool = false;
		return 4;
	}
	object var_58_object;
	@GetScene(var_58_object);
	if(var_58_object == null) {
		var_54_bool = false;
		return 4;
	}
	object var_59_object;
	var_55_object->GetScene(var_59_object);
	if(var_58_object != var_59_object) {
		var_54_bool = false;
		return 4;
	}
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_438(cvector var_64_cvector)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	var_66_cvector = var_64_cvector;
}


void func_184(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_443(cvector var_67_cvector, object var_68_object)
{
	cvector var_70_cvector;
	var_68_object->GetPosition(var_70_cvector);
	var_70_cvector = var_67_cvector;
}


void func_448(object var_40_object)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_455(bool var_72_bool, object var_73_object, string var_74_string)
{
	var_79_bool = IsFuncExist(var_73_object, "HasProperty", 2);
	if(!var_79_bool) { //@nz
		var_72_bool = false;
		return 2;
	}
	bool var_76_bool;
	var_73_object->HasProperty(var_74_string, var_76_bool);
	var_76_bool = var_72_bool;
}


void func_200(bool var_29_bool)
{
	var_29_bool = false;
}


void func_202(void)
{
	object var_40_object;
	func_448(var_40_object);
	object var_39_object;
	var_40_object = var_39_object;
	bool var_44_bool; object var_45_object;
	var_39_object = var_45_object;
	func_666(var_44_bool, var_45_object);
	if(!var_44_bool) { //@nz
	}
	bool var_92_bool; object var_93_object;
	object var_38_object;
	func_270(var_38_object, var_93_object, var_92_bool, var_93_object, (float)100, (float)0, false, false);
}
EMIT "Stack[-1] = 0";


void func_593(bool var_50_bool, object var_51_object)
{
	object var_55_object;
	var_51_object = var_55_object;
	bool var_54_bool;
	func_557(var_54_bool, var_55_object);
	if(!var_54_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_72_bool; object var_73_object;
	func_455(var_72_bool, var_73_object, "noaccess");
	if(!var_72_bool) { //@nz
		var_50_bool = true;
		return 2;
	}
	int var_53_int;
	var_73_object->GetProperty("noaccess", var_53_int);
	var_50_bool = var_53_int == 0;
}


void func_467(bool var_106_bool, object var_107_object, string var_108_string, float var_109_float, float var_110_float, float var_111_float)
{
	object var_115_object;
	var_107_object = var_115_object;
	string var_116_string;
	var_108_string = var_116_string;
	bool var_114_bool;
	func_455(var_114_bool, var_115_object, var_116_string);
	if(!var_114_bool) //@nz
		var_106_bool = false;
	float var_113_float;
	var_107_object->GetProperty(var_108_string, var_113_float);
	float var_118_float; float var_120_float; float var_121_float;
	var_110_float = var_120_float;
	var_111_float = var_121_float;
	func_627(var_118_float, (var_113_float + var_109_float), var_120_float, var_121_float);
	var_107_object->SetProperty(var_108_string, var_118_float);
	var_106_bool = true;
}


void func_489(float var_76_float, object var_77_object, float var_78_float)
{
	int var_82_int; float var_83_float; float var_84_float;
	object var_86_object;
	var_77_object = var_86_object;
	bool var_85_bool;
	func_455(var_85_bool, var_86_object, "disease");
	if(!var_85_bool) { //@nz
		var_76_float = 0;
		return 6;
	}
	bool var_89_bool; object var_90_object;
	func_455(var_89_bool, var_90_object, "armor_disease");
	if(var_89_bool != 0) {
		var_90_object->GetProperty("armor_disease", var_82_int);
		if(var_82_int < 100) {
			var_78_float *= (1 - (var_82_int / 100.0));
		} else {
					var_76_float = 0;
					return 6;
		}
	}
	bool var_99_bool; object var_100_object;
	var_77_object = var_100_object;
	func_455(var_99_bool, var_100_object, "immunity");
	if(var_99_bool != 0) {
		var_77_object->GetProperty("immunity", var_84_float);
		if(var_84_float < var_78_float) {
			var_77_object->SetProperty("immunity", 0);
			var_83_float = var_78_float - var_84_float;
		} else {
			var_77_object->SetProperty("immunity", (var_84_float - var_78_float));
			var_78_float = var_76_float;
			return 6;

		}
	}
	bool var_106_bool; object var_107_object; float var_109_float;
	var_77_object = var_107_object;
	var_83_float = var_109_float;
	func_467(var_106_bool, var_107_object, "disease", var_109_float, (float)0, (float)1);
	var_78_float = var_76_float;
	
}


void func_617(object var_132_object)
{
	object var_134_object;
	@self(var_134_object);
	var_134_object = var_132_object;
}
EMIT "Stack[-1] = 0";


void func_623(float var_61_float, cvector var_62_cvector, cvector var_63_cvector)
{
	var_61_float = (var_63_cvector - var_62_cvector) | (var_63_cvector - var_62_cvector);
}


// @pe
void func_627(float var_118_float, float var_119_float, float var_120_float, float var_121_float)
{
	if(var_119_float < var_120_float) {
		var_120_float = var_118_float;
		return 0;
	}
	if(var_119_float > var_121_float) {
		var_121_float = var_118_float;
		return 0;
	}
	var_119_float = var_118_float;
}


// @pe
void func_372(bool var_0_bool, bool var_1_bool, int var_8_int)
{
	if(var_8_int != 0)
		return 0;
	bool var_11_bool;
	func_263(var_11_bool, var_1_bool);
	if(!var_11_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_120(bool var_0_bool, bool var_1_bool)
{
	float var_15_float; cvector var_16_cvector; cvector var_17_cvector; float var_18_float; bool var_19_bool; object var_20_object; bool var_21_bool;
	@rand(var_15_float, 0.5);
	@Sleep(var_15_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_132:
				@GetPosition(var_17_cvector);
				@GetCameraFarDistance(var_18_float);
				@GetRandomPFPointInCircle(var_16_cvector, var_17_cvector, (var_18_float * 2.5), var_19_bool);
				if(var_19_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_132;
			}
				var_1_bool = false;
		}
		}
		goto Label_149;

	Label_149:
		@FindShiftedPathTo(var_20_object, var_16_cvector);
		if(var_20_object != null) {
			@RotatePath(var_20_object, var_21_bool);
			if(var_21_bool != 0) {
				bool var_29_bool;
				func_200(var_29_bool);
				@FollowPath(var_20_object, var_29_bool, var_21_bool);
				var_20_object = null;
				if(var_21_bool != 0) {
					TaskCall(4);
					func_414();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_20_object = null;
	}
	
}


void func_638(bool var_5_bool, object var_6_object)
{
	bool var_8_bool;
	@IsPlayerActor(var_6_object, var_8_bool);
	var_5_bool = false;
	if(var_8_bool != 0) {
		bool var_10_bool; object var_11_object;
		var_6_object = var_11_object;
		func_593(var_10_bool, var_11_object);
		if(var_10_bool != 0)
			var_5_bool = true;
	}
}


