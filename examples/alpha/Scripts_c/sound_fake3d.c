// @GLOBALS: 0:float:reference_distance,1:float:sound_distance,2:float:min_repeat_delay,3:float:max_repeat_delay,4:int:num_sounds,5:int:night,6:int:day,7:int:evening,8:int:morning,9:int:play_in_dregion,10:int:play_in_region

task task_0
{
	void OnLoad(int var_0_int)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(int var_0_int)
	{
		float var_5_float; float var_6_float; int var_7_int; float var_8_float;
		var_9_int = GlobalVars[4];
		if(var_9_int <= 0) {
		}
		bool var_12_bool;
		func_241(var_12_bool);
		if(!var_12_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
	
		for(;;) {
			float var_16_float;
			TaskCall(2);
			func_92(var_16_float);
			TaskReturn();
			var_16_float = var_5_float;
			var_132_float = GlobalVars[0];
			if(var_132_float == 0) {
				var_6_float = 1.0;
			} else {
			var_165_float = GlobalVars[0];
			var_167_float = GlobalVars[0];
			}
			var_7_int = 0;
			var_135_int = GlobalVars[4];
			if(var_135_int > 1) {
				var_138_int = GlobalVars[4];
				@irand(var_7_int, (var_138_int - 1));
				var_144_int = GlobalVars[4];
				var_0_int = (((0 + var_7_int) + 1) % var_144_int);
			}
			string var_145_string; int var_146_int;
			var_7_int = var_146_int;
			func_292(var_145_string, var_146_int);
			@WaitForSoundToLoad(var_145_string);
			string var_157_string; int var_158_int;
			var_7_int = var_158_int;
			func_292(var_157_string, var_158_int);
			@PlaySound(var_157_string, false, (1.0 / (1 + (((var_5_float * var_5_float) / var_165_float) / var_167_float))));
			var_160_float = GlobalVars[2];
			var_161_float = GlobalVars[3];
			@rand(var_8_float, var_160_float, var_161_float);
			@Sleep(var_8_float);
		}
	
	}
	EMIT "Return(); Pop(8)";

	void OnUnload(int var_0_int)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
		float var_1_float;
		TaskCall(2);
		func_92(var_1_float);
		TaskReturn();
	}

}


task task_2
{
	void OnUnload(int var_0_int)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_292(string var_145_string, int var_146_int)
{
	if((var_146_int + 1) < 10)
		var_145_string = "sound0" + (var_146_int + 1);
	var_145_string = "sound" + (var_146_int + 1);
}


void func_260(bool var_37_bool, int var_38_int)
{
	int var_42_int;
	var_38_int = var_42_int;
	string var_41_string;
	func_254(var_41_string, var_42_int);
	int var_40_int;
	@GetVariable(var_41_string, var_40_int);
	if((var_40_int & 3) == 0)
		var_37_bool = true;
	var_37_bool = false;
}


void func_327(bool var_99_bool)
{
	int var_102_int;
	func_246(var_102_int);
	int var_101_int;
	var_102_int = var_101_int;
	bool var_103_bool = false;
	if(var_101_int > 9) {
		if(var_101_int < 20)
			var_103_bool = true;
	}
	if(var_103_bool != 0)
		var_99_bool = true;
	var_99_bool = false;
}


void func_234(object var_23_object)
{
	object var_25_object;
	@FindActor(var_25_object, "player");
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_365(bool var_84_bool)
{
	int var_87_int;
	func_246(var_87_int);
	int var_86_int;
	var_87_int = var_86_int;
	bool var_92_bool = true;
	var_94_bool = var_86_int >= 0;
	if(var_94_bool != 1) {
		var_96_bool = var_86_int < 7;
		if(var_96_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 0)
		var_84_bool = true;
	var_84_bool = false;
}


void func_241(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_210(cvector var_34_cvector)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	var_36_cvector = var_34_cvector;
}


void func_276(bool var_54_bool, int var_55_int)
{
	int var_59_int;
	var_55_int = var_59_int;
	string var_58_string;
	func_254(var_58_string, var_59_int);
	int var_57_int;
	@GetVariable(var_58_string, var_57_int);
	if((var_57_int & 3) == 1)
		var_54_bool = true;
	var_54_bool = false;
}


void func_308(bool var_121_bool)
{
	int var_124_int;
	func_246(var_124_int);
	int var_123_int;
	var_124_int = var_123_int;
	bool var_125_bool = false;
	if(var_123_int >= 7) {
		if(var_123_int < 10)
			var_125_bool = true;
	}
	if(var_125_bool != 0)
		var_121_bool = true;
	var_121_bool = false;
}


void func_246(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	int var_90_int;
	var_89_float = var_90_int;
	var_87_int = var_90_int % 24;
}


void func_215(float var_68_float, object var_69_object)
{
	cvector var_73_cvector;
	@GetPosition(var_73_cvector);
	cvector var_74_cvector;
	var_69_object->GetPosition(var_74_cvector);
	var_68_float = (var_74_cvector - var_73_cvector) | (var_74_cvector - var_73_cvector);
}


void func_346(bool var_110_bool)
{
	int var_113_int;
	func_246(var_113_int);
	int var_112_int;
	var_113_int = var_112_int;
	bool var_114_bool = false;
	if(var_112_int >= 20) {
		if(var_112_int <= 23)
			var_114_bool = true;
	}
	if(var_114_bool != 0)
		var_110_bool = true;
	var_110_bool = false;
}


void func_92(float var_16_float)
{
	object var_20_object; int var_21_int; float var_22_float;
	
	for(;;) {
		object var_23_object;
		func_234(var_23_object);
		var_23_object = var_20_object;
		if(var_20_object == null) {
			@Sleep(10);
		} else {
		int var_29_int;
		func_223(var_29_int);
		var_29_int = var_21_int;
		bool var_37_bool; int var_38_int;
		var_21_int = var_38_int;
		func_260(var_37_bool, var_38_int);
		if(var_37_bool != 0) {
			var_50_int = GlobalVars[10];
			if(var_50_int == 0) {
				@Sleep(10);
				goto Label_201;
			}
		}
		bool var_54_bool; int var_55_int;
		var_21_int = var_55_int;
		func_276(var_54_bool, var_55_int);
		if(var_54_bool != 0) {
			var_64_int = GlobalVars[9];
			if(var_64_int == 0) {
				@Sleep(10);
				goto Label_201;
			}
		}
		float var_68_float; object var_69_object;
		var_20_object = var_69_object;
		func_215(var_68_float, var_69_object);
		var_68_float = var_22_float;
		var_76_float = GlobalVars[1];
		var_77_float = GlobalVars[1];
		if(var_22_float < (var_76_float * var_77_float)) {
			bool var_80_bool = true;
			bool var_81_bool = true;
			bool var_82_bool = true;
			bool var_83_bool = false;
			bool var_84_bool;
			func_365(var_84_bool);
			if(var_84_bool != 0) {
				var_97_int = GlobalVars[5];
				if(var_97_int != 0)
					var_83_bool = true;
			}
			if(var_83_bool != 1) {
				bool var_98_bool = false;
				bool var_99_bool;
				func_327(var_99_bool);
				if(var_99_bool != 0) {
					var_108_int = GlobalVars[6];
					if(var_108_int != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 1)
					var_82_bool = false;
			}
			if(var_82_bool != 1) {
				bool var_109_bool = false;
				bool var_110_bool;
				func_346(var_110_bool);
				if(var_110_bool != 0) {
					var_119_int = GlobalVars[7];
					if(var_119_int != 0)
						var_109_bool = true;
				}
				if(var_109_bool != 1)
					var_81_bool = false;
			}
			if(var_81_bool != 1) {
				bool var_120_bool = false;
				bool var_121_bool;
				func_308(var_121_bool);
				if(var_121_bool != 0) {
					var_130_int = GlobalVars[8];
					if(var_130_int != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 1)
					var_80_bool = false;
			}
			if(var_80_bool != 0) {
				var_16_float = sqrt(var_22_float);
				return 6;
			}
		}
		@Sleep(1);
		var_20_object = null;
		}
	Label_201:
	}
	
}
EMIT "Stack[-7] = (int) 0";
EMIT "Return(); Pop(6)";


// @pe
void func_254(string var_41_string, int var_42_int)
{
	var_41_string = ("Region" + var_42_int) + "State";
}


void func_223(int var_29_int)
{
	object var_32_object;
	@GetScene(var_32_object);
	cvector var_34_cvector;
	func_210(var_34_cvector);
	int var_33_int;
	var_32_object->GetRegionByPt(var_33_int, var_34_cvector);
	var_33_int = var_29_int;
}
EMIT "Stack[-2] = 0";


