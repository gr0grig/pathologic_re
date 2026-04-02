// @GLOBALS: 0:object:Race,1:int:Index

maintask task_0
{
	void init(void)
	{
		bool var_12_bool; int var_15_int; bool var_16_bool; object var_17_object;
		@Sleep(1);
		cvector var_9_cvector;
		@GetPosition(var_9_cvector);
		cvector var_10_cvector;
		@GetDirection(var_10_cvector);
		TaskCall(1);
		func_118((var_9_cvector + (var_10_cvector * 100.0)), false);
		TaskReturn();
		int var_11_int = 0;
		var_61_object = GlobalVars[0];
		int var_13_int;
		var_61_object->size(var_13_int);
		int var_14_int = 0;
	
		for(;;) {
			if(var_14_int < var_13_int) {
				var_63_object = GlobalVars[0];
				var_63_object->get(var_15_int, var_14_int);
				if(var_15_int != var_11_int) {
					var_16_bool = false;
					if(var_15_int < var_11_int) {
						if(true != 0) {
							var_16_bool = true;
							var_12_bool = false;
						}
					} else {
					var_75_bool = !var_12_bool; //@nz
					if(var_75_bool == 0) goto Label_42;
					var_16_bool = true;
					var_12_bool = true;
				}
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
			}
			@GetScene(var_17_object);
			cvector var_84_cvector;
			cvector var_86_cvector; object var_87_object;
			var_17_object = var_87_object;
			var_90_int = GlobalVars[1];
			func_203(var_86_cvector, var_87_object, ("pt_ratf" + var_90_int));
			var_86_cvector = var_84_cvector;
			TaskCall(1);
			func_118(var_84_cvector, !var_12_bool);
			TaskReturn();
			bool var_100_bool;
			var_104_int = GlobalVars[1];
			func_218(var_100_bool, "rats_manager", ("race_over" + var_104_int));
			@Sleep(3);
			object var_109_object;
			func_187(var_109_object);
			@RemoveActor(var_109_object);
			}
		Label_42:
			bool var_68_bool;
			var_16_bool = var_68_bool;
			TaskCall(1);
			func_118((var_9_cvector + ((var_10_cvector * 100.0) * (var_15_int + 1))), var_68_bool);
			TaskReturn();
			var_15_int = var_11_int;
			goto Label_82;

		Label_82:
			var_14_int += 1;
		}
	
	}
	EMIT "Stack[-1] = 0";

}


task task_1
{
	// @pe
	void OnTimer(int iID)
	{
		if(iID == 0)
			@Stop();
	}

}


void OnUnload(void)
{
	object var_0_object;
	func_187(var_0_object);
	@RemoveActor(var_0_object);
	@Hold();
}


void func_193(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_56_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_56_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_56_float;
}


void func_203(cvector var_86_cvector, object var_87_object, string var_88_string)
{
	bool var_93_bool; cvector var_94_cvector;
	var_87_object->GetLocator(var_88_string, var_93_bool, var_94_cvector);
	if(!var_93_bool) { //@nz
		@Trace(("Locator '" + var_88_string) + "' doesn't exist");
		var_86_cvector = [0.0, 0.0, 0.0];
	}
	var_94_cvector = var_86_cvector;
}


void func_182(cvector var_52_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	var_54_cvector = var_52_cvector;
}


void func_118(cvector var_19_cvector, bool var_20_bool)
{
	cvector var_28_cvector; cvector var_29_cvector; bool var_30_bool; object var_32_object;
	if(var_20_bool != 0) {
		@WaitForAnimEnd();
		@GetPosition(var_28_cvector);
		var_29_cvector = var_19_cvector - var_28_cvector;
		var_34_float = GetByIndex(var_29_cvector, 0);
		var_35_float = GetByIndex(var_29_cvector, 2);
		@RotateAsync(var_34_float, var_35_float, 6.2831855, var_30_bool);
		if(var_30_bool != 0)
			var_39_string = "rotate_left";
		else
			var_60_string = "rotate_right";
		@PlayAnimation("all", var_39_string);
		@WaitForAnimEnd();
		@StopAsync();
		var_40_float = GetByIndex(var_29_cvector, 0);
		var_41_float = GetByIndex(var_29_cvector, 2);
		@Rotate(var_40_float, var_41_float);
	}
	@SetTimer(0, 10);
	bool var_31_bool;
	@MovePoint(var_19_cvector, true, var_31_bool);
	@KillTimer(0);
	if(!var_31_bool) { //@nz
		@GetScene(var_32_object);
		object var_47_object;
		func_187(var_47_object);
		cvector var_50_cvector;
		cvector var_52_cvector;
		func_182(var_52_cvector);
		func_193(var_50_cvector, (var_19_cvector - var_52_cvector));
		@Teleport(var_47_object, var_32_object, var_19_cvector, var_50_cvector);
		var_32_object = null;
	}
	
}


void func_218(bool var_100_bool, string var_101_string, string var_102_string)
{
	object var_106_object;
	@FindActor(var_106_object, var_101_string);
	if(var_106_object == null)
		var_100_bool = false;
	@Trigger(var_106_object, var_102_string);
	var_100_bool = true;
}
EMIT "Stack[-1] = 0";


void func_187(object var_47_object)
{
	object var_49_object;
	@self(var_49_object);
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


