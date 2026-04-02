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
			func_215();
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
		func_701(var_5_int);
		if(var_4_object == 20) {
			bool var_10_bool; object var_11_object;
			object var_12_object;
			func_469(var_12_object);
			var_12_object = var_11_object;
			func_708(var_10_bool, var_11_object);
			if(var_10_bool != 0)
				func_191(var_3_bool, var_4_object);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object)
	{
		bool var_5_bool; object var_6_object;
		func_680(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			func_191(var_3_bool, var_6_object);
			object var_44_object;
			var_4_object = var_44_object;
			func_693(var_44_object);
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
		func_191(var_3_bool, var_4_object);
		object var_5_object;
		var_4_object = var_5_object;
		func_747();
	}

}


task task_3
{
	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int)
	{
		int var_5_int;
		var_4_int = var_5_int;
		func_701(var_5_int);
		int var_8_int;
		var_4_int = var_8_int;
		func_385(var_3_object, var_4_int, var_8_int);
		if(var_4_int == 20) {
			bool var_75_bool; object var_76_object;
			object var_77_object;
			func_469(var_77_object);
			var_77_object = var_76_object;
			func_708(var_75_bool, var_76_object);
			if(!var_75_bool) //@nz
				func_407(var_4_int);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object)
	{
		bool var_5_bool; object var_6_object;
		func_680(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			func_407(var_6_object);
			object var_45_object;
			var_4_object = var_45_object;
			func_693(var_45_object);
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
		func_407(var_4_object);
		object var_6_object;
		var_4_object = var_6_object;
		func_747();
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
		func_680(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			object var_44_object;
			var_4_object = var_44_object;
			func_693(var_44_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int)
	{
		int var_5_int;
		var_4_int = var_5_int;
		func_701(var_5_int);
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
	func_625(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
		cvector var_64_cvector;
		func_451(var_64_cvector);
		var_64_cvector = var_62_cvector;
		cvector var_67_cvector; object var_68_object;
		var_45_object = var_68_object;
		func_456(var_67_cvector, var_68_object);
		var_67_cvector = var_63_cvector;
		func_655(var_61_float, var_62_cvector, var_63_cvector);
		if(var_61_float <= 90000.0) {
			@PlaySound("attack");
			float var_76_float; object var_77_object;
			func_515(var_76_float, var_77_object, 0.25);
			var_76_float = var_53_float;
			@ReportHit(var_77_object, 5, var_53_float, 0.25);
		}
	}
	@SetVisirVisibility(false);
	@FogLinear(0, 2);
	@Sleep(5);
	object var_140_object;
	func_649(var_140_object);
	@RemoveActor(var_140_object);
}


// @pe
void func_385(bool var_0_bool, bool var_1_bool, int var_8_int)
{
	if(var_8_int != 0)
		return 0;
	bool var_11_bool;
	func_276(var_11_bool, var_1_bool);
	if(!var_11_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_515(float var_76_float, object var_77_object, float var_78_float)
{
	float var_82_float;
	object var_84_object;
	var_77_object = var_84_object;
	bool var_83_bool;
	func_481(var_83_bool, var_84_object, "disease");
	if(!var_83_bool) { //@nz
		var_76_float = 0;
		return 4;
	}
	float var_81_float = 0;
	bool var_87_bool; object var_88_object;
	func_481(var_87_bool, var_88_object, "armor_disease");
	if(var_87_bool != 0) {
		var_88_object->GetProperty("armor_disease", var_81_float);
		var_81_float /= 100;
	}
	bool var_92_bool; object var_93_object;
	func_481(var_92_bool, var_93_object, "immunity");
	if(var_92_bool != 0) {
		var_93_object->GetProperty("immunity", var_82_float);
		var_81_float += var_82_float;
		bool var_96_bool; object var_97_object; float var_99_float;
		var_77_object = var_97_object;
		var_99_float = -var_78_float;
		func_493(var_96_bool, var_97_object, "immunity", var_99_float, (float)0, (float)1);
	}
	if(var_81_float >= 1) {
		var_76_float = 0.0;
		return 4;
	}
	var_78_float *= ((1 - var_81_float) / 2);
	bool var_120_bool; object var_121_object; float var_123_float;
	var_77_object = var_121_object;
	var_78_float = var_123_float;
	func_493(var_120_bool, var_121_object, "disease", var_123_float, (float)0, (float)1);
	bool var_126_bool; object var_127_object;
	var_77_object = var_127_object;
	func_476(var_126_bool, var_127_object);
	if(var_126_bool != 0) {
		float var_130_float;
		var_78_float = var_130_float;
		func_670(var_130_float);
	}
	var_78_float = var_76_float;
}


void func_649(object var_140_object)
{
	object var_142_object;
	@self(var_142_object);
	var_142_object = var_140_object;
}
EMIT "Stack[-1] = 0";


void func_655(float var_61_float, cvector var_62_cvector, cvector var_63_cvector)
{
	var_61_float = (var_63_cvector - var_62_cvector) | (var_63_cvector - var_62_cvector);
}


// @pe
void func_659(float var_108_float, float var_109_float, float var_110_float, float var_111_float)
{
	if(var_109_float < var_110_float) {
		var_110_float = var_108_float;
		return 0;
	}
	if(var_109_float > var_111_float) {
		var_111_float = var_108_float;
		return 0;
	}
	var_109_float = var_108_float;
}


// @pe
void func_276(bool var_129_bool, object var_130_object)
{
	object var_132_object;
	var_130_object = var_132_object;
	bool var_131_bool;
	func_708(var_131_bool, var_132_object);
	var_131_bool = var_129_bool;
}


void func_407(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_283(bool var_0_bool, bool var_1_bool, bool var_107_bool, object var_108_object, float var_109_float, float var_110_float, bool var_111_bool, bool var_112_bool)
{
	bool var_121_bool; object var_123_object; cvector var_124_cvector; cvector var_125_cvector; float var_127_float; object var_128_object;
	var_0_bool = false;
	var_1_bool = var_108_object;
	bool var_122_bool;
	var_112_bool = var_122_bool;
	
	for(;;) {
		bool var_129_bool; object var_130_object;
		var_108_object = var_130_object;
		func_276(var_129_bool, var_130_object);
		if(!var_129_bool) { //@nz
			var_107_bool = false;
			return 16;
		}
		var_108_object->GetPosition(var_124_cvector);
		@GetPosition(var_125_cvector);
		var_127_float = (var_124_cvector - var_125_cvector) | (var_124_cvector - var_125_cvector);
		bool var_134_bool = false;
		if(var_110_float > 0) {
			if(var_127_float > (var_110_float * var_110_float))
				var_134_bool = true;
		}
		if(var_134_bool != 0) {
			@Stop();
			var_107_bool = false;
			return 16;
		}
		if(var_127_float > (var_109_float * var_109_float)) {
			var_108_object->GetPFPosition(var_124_cvector);
			@FindPathTo(var_128_object, var_124_cvector);
			if(var_128_object != null) {
				var_128_object = var_123_object;
				var_128_object = null;
			}
			if(var_123_object != null) {
				if(var_122_bool == 0) goto Label_336;
				var_122_bool = false;
				@RotatePath(var_123_object, var_121_bool);
				if(!var_121_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_147_string;
						func_423(var_147_string);
						string var_148_string;
						func_425(var_148_string);
						@FollowPath(var_123_object, var_111_bool, var_121_bool, var_147_string, var_148_string);
						if(!var_121_bool) { //@nz
							if(var_0_bool == 0) goto Label_355;
							var_123_object = null;
						}
					EMIT "GOTO 0x164";

					Label_355:
						} else {
					var_123_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_121_bool);
					if(!var_121_bool) { //@nz
						if(var_0_bool != 0) {
							var_123_object = null;
							goto Label_383;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_383;
		}
			var_128_object = null;
			goto Label_381;

		Label_381:
			var_123_object = null;

		}
	Label_383:
		for(;;) {
			var_107_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_670(float var_130_float)
{
	object var_132_object;
	@CreateFloatVector(var_132_object);
	var_132_object->add(var_130_float);
	@SendWorldWndMessage(14, var_132_object);
}
EMIT "Stack[-1] = 0";


void func_423(string var_147_string)
{
	var_147_string = "walk";
}


void func_680(bool var_5_bool, object var_6_object)
{
	bool var_8_bool;
	@IsPlayerActor(var_6_object, var_8_bool);
	var_5_bool = false;
	if(var_8_bool != 0) {
		bool var_10_bool; object var_11_object;
		var_6_object = var_11_object;
		func_625(var_10_bool, var_11_object);
		if(var_10_bool != 0)
			var_5_bool = true;
	}
}


void func_425(string var_148_string)
{
	var_148_string = "run";
}


void func_427(void)
{
	float var_36_float;
	@rand(var_36_float, 30);
	@Sleep(var_36_float);
}


void func_179(float var_23_float)
{
	float var_25_float;
	@GetCameraFarDistance(var_25_float);
	var_25_float = var_23_float;
}


// @pe
void func_693(object var_44_object)
{
	object var_45_object;
	var_44_object = var_45_object;
	TaskCall(0);
	func_0(var_45_object);
	TaskReturn();
}


// @pe
void func_701(int var_5_int)
{
	if(var_5_int == 20)
		@ResetAAS();
}


void func_191(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_451(cvector var_64_cvector)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	var_66_cvector = var_64_cvector;
}


void func_708(bool var_48_bool, object var_49_object)
{
	int var_53_int;
	object var_55_object;
	var_49_object = var_55_object;
	bool var_54_bool;
	func_625(var_54_bool, var_55_object);
	if(!var_54_bool) { //@nz
		var_48_bool = false;
		return 4;
	}
	object var_52_object;
	@GetActiveScene(var_52_object);
	bool var_89_bool = false;
	if(var_52_object != null) {
		var_93_bool = IsFuncExist(var_52_object, "GetCurrentRegion", 1);
		if(var_93_bool != 0)
			var_89_bool = true;
	}
	if(var_89_bool != 0) {
		var_52_object->GetCurrentRegion(var_53_int);
		var_48_bool = false;
		var_94_int = GlobalVars[0];
		if(var_53_int == var_94_int) {
			float var_96_float; object var_97_object;
			var_49_object = var_97_object;
			func_461(var_96_float, var_97_object);
			if(var_96_float < 4000000)
				var_48_bool = true;
		}
		return 4;
	}
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";


void func_456(cvector var_67_cvector, object var_68_object)
{
	cvector var_70_cvector;
	var_68_object->GetPosition(var_70_cvector);
	var_70_cvector = var_67_cvector;
}


void func_584(bool var_69_bool, object var_70_object)
{
	bool var_72_bool;
	var_70_object->IsDead(var_72_bool);
	var_72_bool = var_69_bool;
}


void func_589(bool var_58_bool, object var_59_object)
{
	if(var_59_object == null) {
		var_58_bool = false;
		return 4;
	}
	bool var_65_bool = false;
	var_68_bool = IsFuncExist(var_59_object, "IsDead", 1);
	if(var_68_bool != 0) {
		bool var_69_bool; object var_70_object;
		var_59_object = var_70_object;
		func_584(var_69_bool, var_70_object);
		if(var_69_bool != 0)
			var_65_bool = true;
	}
	if(var_65_bool != 0) {
		var_58_bool = false;
		return 4;
	}
	object var_62_object;
	@GetScene(var_62_object);
	if(var_62_object == null) {
		var_58_bool = false;
		return 4;
	}
	object var_63_object;
	var_59_object->GetScene(var_63_object);
	if(var_62_object != var_63_object) {
		var_58_bool = false;
		return 4;
	}
	var_58_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_461(float var_96_float, object var_97_object)
{
	cvector var_101_cvector;
	@GetPosition(var_101_cvector);
	cvector var_102_cvector;
	var_97_object->GetPosition(var_102_cvector);
	var_96_float = (var_102_cvector - var_101_cvector) | (var_102_cvector - var_101_cvector);
}


void func_207(bool var_33_bool)
{
	var_33_bool = false;
}


void func_209(object var_27_object, cvector var_28_cvector)
{
	object var_30_object;
	@FindShiftedPathTo(var_30_object, var_28_cvector);
	var_30_object = var_27_object;
}
EMIT "Stack[-1] = 0";


void func_469(object var_44_object)
{
	object var_46_object;
	@FindActor(var_46_object, "player");
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


void func_215(void)
{
	object var_44_object;
	func_469(var_44_object);
	object var_43_object;
	var_44_object = var_43_object;
	bool var_48_bool; object var_49_object;
	var_43_object = var_49_object;
	func_708(var_48_bool, var_49_object);
	if(!var_48_bool) { //@nz
	}
	bool var_107_bool; object var_108_object;
	object var_42_object;
	func_283(var_42_object, var_108_object, var_107_bool, var_108_object, (float)100, (float)0, false, false);
}
EMIT "Stack[-1] = 0";


void func_476(bool var_126_bool, object var_127_object)
{
	bool var_129_bool;
	@IsPlayerActor(var_127_object, var_129_bool);
	var_129_bool = var_126_bool;
}


void func_481(bool var_76_bool, object var_77_object, string var_78_string)
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


void func_493(bool var_96_bool, object var_97_object, string var_98_string, float var_99_float, float var_100_float, float var_101_float)
{
	object var_105_object;
	var_97_object = var_105_object;
	string var_106_string;
	var_98_string = var_106_string;
	bool var_104_bool;
	func_481(var_104_bool, var_105_object, var_106_string);
	if(!var_104_bool) //@nz
		var_96_bool = false;
	float var_103_float;
	var_97_object->GetProperty(var_98_string, var_103_float);
	float var_108_float; float var_110_float; float var_111_float;
	var_100_float = var_110_float;
	var_101_float = var_111_float;
	func_659(var_108_float, (var_103_float + var_99_float), var_110_float, var_111_float);
	var_97_object->SetProperty(var_98_string, var_108_float);
	var_96_bool = true;
}


void func_625(bool var_54_bool, object var_55_object)
{
	object var_59_object;
	var_55_object = var_59_object;
	bool var_58_bool;
	func_589(var_58_bool, var_59_object);
	if(!var_58_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_76_bool; object var_77_object;
	func_481(var_76_bool, var_77_object, "noaccess");
	if(!var_76_bool) { //@nz
		var_54_bool = true;
		return 2;
	}
	int var_57_int;
	var_77_object->GetProperty("noaccess", var_57_int);
	var_54_bool = var_57_int == 0;
}


void func_120(bool var_0_bool, bool var_1_bool)
{
	float var_14_float; cvector var_15_cvector; cvector var_16_cvector; bool var_17_bool; object var_18_object; bool var_19_bool;
	@rand(var_14_float, 0.5);
	@Sleep(var_14_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_132:
				@GetPosition(var_16_cvector);
				float var_23_float;
				func_179(var_23_float);
				@GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, var_23_float, var_17_bool);
				if(var_17_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_132;
			}
				var_1_bool = false;
		}
		}
		goto Label_148;

	Label_148:
		object var_27_object; cvector var_28_cvector;
		var_15_cvector = var_28_cvector;
		func_209(var_27_object, var_28_cvector);
		var_27_object = var_18_object;
		if(var_18_object != null) {
			@RotatePath(var_18_object, var_19_bool);
			if(var_19_bool != 0) {
				bool var_33_bool;
				func_207(var_33_bool);
				@FollowPath(var_18_object, var_33_bool, var_19_bool);
				var_18_object = null;
				if(var_19_bool != 0) {
					TaskCall(4);
					func_427();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_18_object = null;
	}
	
}


