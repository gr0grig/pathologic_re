// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		func_3645();
		bool var_31_bool;
		func_2985(var_31_bool);
		if(!var_31_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_3050("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_31_object;
		var_30_bool = var_31_object;
		func_3649(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2973(var_31_bool, var_32_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3068();
			if(var_30_string == 243) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3210();
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(207, 256, 245); //@t
				var_0_object->AddReply(206, 246, 244); //@t
				return 0;
			}
			if(var_30_string == 246) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(209, 249, 247); //@t
				var_0_object->AddReply(210, 250, 248); //@t
				return 0;
			}
			if(var_30_string == 250) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(215, 249, 253); //@t
				return 0;
			}
			if(var_30_string == 249) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_3172();
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(213, 252, 251); //@t
				return 0;
			}
			if(var_30_string == 252) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(216, -1, 255); //@t
				return 0;
			}
			if(var_30_string == 256) {
				func_175(var_31_bool, "Neutral");
				var_0_object->SetMessage(217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(218, -1, 257); //@t
				var_0_object->AddReply(219, -1, 258); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_3643(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc0";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3068();
			if(var_31_bool == 9079) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3150();
			}
			if(var_31_bool == 9080) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3156();
			}
			if(var_31_bool == 6268) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3150();
			}
			if(var_31_bool == 9096) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_3216();
			}
			if(var_31_bool == 9097) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_3222();
			}
			if(var_31_bool == 9100) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_3228();
			}
			if(var_31_bool == 9102) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_3234();
			}
			if(var_31_bool == 9103) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_3240();
			}
			if(var_30_string == 9078) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8255); //@t
				var_0_object->ClearReplies(); //@t
				bool var_98_bool = false;
				bool var_99_bool;
				func_3330(var_1_object);
				if(var_99_bool != 0) {
					bool var_107_bool;
					func_3270(var_1_object);
					if(var_107_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_object->AddReply(8256, 6255, 9079); //@t
				bool var_116_bool = true;
				bool var_117_bool = false;
				bool var_118_bool;
				func_3374(var_118_bool, var_1_object);
				if(var_118_bool != 0) {
					bool var_133_bool;
					func_3282(var_1_object);
					if(var_133_bool != 0)
						var_117_bool = true;
				}
				if(var_117_bool != 1) {
					bool var_139_bool = false;
					bool var_140_bool;
					func_3352(var_140_bool, var_1_object);
					if(var_140_bool != 0) {
						bool var_147_bool;
						func_3282(var_1_object);
						if(var_147_bool != 0)
							var_139_bool = true;
					}
					if(var_139_bool != 1)
						var_116_bool = false;
				}
				if(var_116_bool != 0)
					var_0_object->AddReply(8257, 6264, 9080); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_3384(var_1_object);
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_3408(var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(8273, 9105, 9096); //@t
				bool var_168_bool = false;
				bool var_169_bool;
				func_3396(var_1_object);
				if(var_169_bool != 0) {
					bool var_175_bool;
					func_3420(var_1_object);
					if(var_175_bool != 0)
						var_168_bool = true;
				}
				if(var_168_bool != 0)
					var_0_object->AddReply(8274, 9106, 9097); //@t
				bool var_184_bool = false;
				bool var_185_bool;
				func_3528(var_1_object);
				if(var_185_bool != 0) {
					bool var_191_bool;
					func_3432(var_1_object);
					if(var_191_bool != 0)
						var_184_bool = true;
				}
				if(var_184_bool != 0)
					var_0_object->AddReply(8277, 9107, 9100); //@t
				bool var_200_bool = false;
				bool var_201_bool;
				func_3468(var_1_object);
				if(var_201_bool != 0) {
					bool var_207_bool;
					func_3444(var_1_object);
					if(var_207_bool != 0)
						var_200_bool = true;
				}
				if(var_200_bool != 0)
					var_0_object->AddReply(8279, 9108, 9102); //@t
				bool var_216_bool = false;
				bool var_217_bool;
				func_3516(var_1_object);
				if(var_217_bool != 0) {
					bool var_223_bool;
					func_3456(var_1_object);
					if(var_223_bool != 0)
						var_216_bool = true;
				}
				if(var_216_bool != 0)
					var_0_object->AddReply(8280, 9109, 9103); //@t
				var_0_object->AddReply(15221, -1, 16498); //@t
				return 0;
			}
			if(var_30_string == 9109) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15222, -1, 16499); //@t
				return 0;
			}
			if(var_30_string == 9108) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15223, -1, 16500); //@t
				return 0;
			}
			if(var_30_string == 9107) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15224, -1, 16501); //@t
				return 0;
			}
			if(var_30_string == 9106) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8283); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15225, -1, 16502); //@t
				return 0;
			}
			if(var_30_string == 9105) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(8282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15226, -1, 16503); //@t
				return 0;
			}
			if(var_30_string == 6264) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(5682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5683, 6266, 6265); //@t
				var_0_object->AddReply(5686, -1, 6268); //@t
				return 0;
			}
			if(var_30_string == 6266) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(5684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5685, -1, 6267); //@t
				return 0;
			}
			if(var_30_string == 6255) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(5674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5675, 6257, 6256); //@t
				var_0_object->AddReply(5681, 6257, 6262); //@t
				return 0;
			}
			if(var_30_string == 6257) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(5676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5677, 6259, 6258); //@t
				return 0;
			}
			if(var_30_string == 6259) {
				func_610(var_31_bool, "Neutral");
				var_0_object->SetMessage(5678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5679, -1, 6260); //@t
				var_0_object->AddReply(5680, -1, 6261); //@t
				return 0;
			}
			var_3_string = true;
			bool var_314_bool;
			func_3643(var_314_bool);
			if(var_314_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x273";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3068();
			if(var_31_bool == 6858) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3162();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_3143();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_3194();
				object var_70_object = var_1_object;
				func_3178(var_0_object);
			}
			if(var_31_bool == 6860) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_3162();
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_3143();
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_3194();
				object var_104_object = var_1_object;
				func_3178(var_0_object);
			}
			if(var_30_string == 6270) {
				bool var_108_bool = false;
				bool var_109_bool = false;
				bool var_110_bool;
				func_3294(var_1_object);
				if(var_110_bool != 0) {
					bool var_118_bool;
					func_3318(var_1_object);
					if(!var_118_bool) //@nz
						var_109_bool = true;
				}
				if(var_109_bool != 0) {
					bool var_125_bool;
					func_3306(var_1_object);
					if(!var_125_bool) //@nz
						var_108_bool = true;
				}
				if(var_108_bool != 0) {
					func_1230(var_31_bool, "Neutral");
					var_0_object->SetMessage(5688); //@t
					var_0_object->ClearReplies(); //@t
					bool var_148_bool;
					func_3258(var_1_object);
					if(!var_148_bool) //@nz
						var_0_object->AddReply(6198, 6852, 6851); //@t
					bool var_158_bool;
					func_3258(var_1_object);
					if(var_158_bool != 0)
						var_0_object->AddReply(5689, 6272, 6271); //@t
					return 0;
				}
			}
			if(var_30_string == 6272) {
				func_1230(var_31_bool, "Neutral");
				var_0_object->SetMessage(5690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5691, 6274, 6273); //@t
				return 0;
			}
			if(var_30_string == 6274) {
				func_1230(var_31_bool, "Neutral");
				var_0_object->SetMessage(5692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6203, 6857, 6856); //@t
				return 0;
			}
			if(var_30_string == 6852) {
				func_1230(var_31_bool, "Neutral");
				var_0_object->SetMessage(6199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6200, 6854, 6853); //@t
				return 0;
			}
			if(var_30_string == 6854) {
				func_1230(var_31_bool, "Neutral");
				var_0_object->SetMessage(6201); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6202, 6857, 6855); //@t
				return 0;
			}
			if(var_30_string == 6857) {
				func_1230(var_31_bool, "Neutral");
				var_0_object->SetMessage(6204); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6205, -1, 6858); //@t
				var_0_object->AddReply(6206, -1, 6860); //@t
				return 0;
			}
			var_3_string = true;
			bool var_201_bool;
			func_3643(var_201_bool);
			if(var_201_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4df";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3068();
			if(var_31_bool == 8255) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3170();
			}
			if(var_31_bool == 8256) {
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_3170();
			}
			if(var_31_bool == 8263) {
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_3170();
			}
			if(var_31_bool == 8264) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3170();
			}
			if(var_31_bool == 8242) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_3168();
			}
			if(var_31_bool == 8243) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_3168();
			}
			if(var_31_bool == 8234) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_3168();
			}
			if(var_31_bool == 8237) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_3168();
			}
			if(var_30_string == 8248) {
				bool var_68_bool;
				func_3347(var_1_object);
				if(var_68_bool != 0) {
					func_1646(var_31_bool, "Neutral");
					var_0_object->SetMessage(7472); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(7473, 8250, 8249); //@t
					var_0_object->AddReply(7488, 8252, 8265); //@t
					return 0;
				}
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(6943); //@t
				var_0_object->ClearReplies(); //@t
				bool var_94_bool;
				func_3342(var_1_object);
				if(var_94_bool != 0)
					var_0_object->AddReply(6944, 7651, 7650); //@t
				var_0_object->AddReply(7464, 8240, 8239); //@t
				var_0_object->AddReply(7504, 8267, 8285); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x66e";
			EMIT "Pop(1)";
			EMIT "Push((int) 9377)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9378)";
			EMIT "Push((int) 10304)";
			EMIT "Push((int) 10303)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9388)";
			EMIT "Push((int) 10304)";
			EMIT "Push((int) 10315)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9389)";
			EMIT "Push((int) 10318)";
			EMIT "Push((int) 10317)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_30_string == 10318) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(9390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9391, -1, 10319); //@t
				return 0;
			}
			if(var_30_string == 10304) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(9379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9380, 10306, 10305); //@t
				var_0_object->AddReply(9387, 10306, 10313); //@t
				return 0;
			}
			if(var_30_string == 10306) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(9381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9382, 10308, 10307); //@t
				var_0_object->AddReply(9386, 10308, 10311); //@t
				return 0;
			}
			if(var_30_string == 10308) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(9383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9384, -1, 10309); //@t
				var_0_object->AddReply(9385, -1, 10310); //@t
				return 0;
			}
			if(var_30_string == 8267) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7490, 8269, 8268); //@t
				var_0_object->AddReply(7500, 8269, 8280); //@t
				var_0_object->AddReply(7501, 8283, 8282); //@t
				return 0;
			}
			if(var_30_string == 8283) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7503, -1, 8284); //@t
				return 0;
			}
			if(var_30_string == 8269) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7492, 8271, 8270); //@t
				var_0_object->AddReply(7499, 8271, 8278); //@t
				return 0;
			}
			if(var_30_string == 8271) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7494, 8273, 8272); //@t
				var_0_object->AddReply(7498, 8273, 8276); //@t
				return 0;
			}
			if(var_30_string == 8273) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7496, -1, 8274); //@t
				var_0_object->AddReply(7497, -1, 8275); //@t
				return 0;
			}
			if(var_30_string == 8240) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7466, -1, 8241); //@t
				return 0;
			}
			if(var_30_string == 7651) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(6945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6946, 7653, 7652); //@t
				var_0_object->AddReply(7455, 8231, 8230); //@t
				return 0;
			}
			if(var_30_string == 8231) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7457, 8233, 8232); //@t
				return 0;
			}
			if(var_30_string == 8233) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7459, -1, 8234); //@t
				var_0_object->AddReply(7460, 8236, 8235); //@t
				return 0;
			}
			if(var_30_string == 8236) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7462, -1, 8237); //@t
				return 0;
			}
			if(var_30_string == 7653) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(6947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7454, 8238, 8229); //@t
				var_0_object->AddReply(7469, 8245, 8244); //@t
				return 0;
			}
			if(var_30_string == 8245) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7471, 8238, 8246); //@t
				return 0;
			}
			if(var_30_string == 8238) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7467, -1, 8242); //@t
				var_0_object->AddReply(7468, -1, 8243); //@t
				return 0;
			}
			if(var_30_string == 8250) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7475, 8252, 8251); //@t
				var_0_object->AddReply(7487, -1, 8264); //@t
				return 0;
			}
			if(var_30_string == 8252) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7477, 8254, 8253); //@t
				var_0_object->AddReply(7481, 8258, 8257); //@t
				return 0;
			}
			if(var_30_string == 8258) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7483, 8260, 8259); //@t
				var_0_object->AddReply(7486, -1, 8263); //@t
				return 0;
			}
			if(var_30_string == 8260) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7485, 8254, 8261); //@t
				return 0;
			}
			if(var_30_string == 8254) {
				func_1646(var_31_bool, "Neutral");
				var_0_object->SetMessage(7478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7479, -1, 8255); //@t
				var_0_object->AddReply(7480, -1, 8256); //@t
				return 0;
			}
			var_3_string = true;
			bool var_307_bool;
			func_3643(var_307_bool);
			if(var_307_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x67f";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_3068();
			if(var_30_string == 10996) {
				bool var_36_bool;
				func_3480(var_1_object);
				if(var_36_bool != 0) {
					object var_44_object; object var_45_object;
					var_44_object = var_1_object;
					var_45_object = var_0_object;
					func_3246();
					func_2455(var_31_bool, "Neutral");
					var_0_object->SetMessage(9978); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9979, 10998, 10997); //@t
					var_0_object->AddReply(9990, 10998, 11009); //@t
					var_0_object->AddReply(9991, 10998, 11011); //@t
					return 0;
				}
				func_2455(var_31_bool, "Neutral");
				var_0_object->SetMessage(15318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15319, -1, 16557); //@t
				return 0;
			}
			if(var_30_string == 10998) {
				func_2455(var_31_bool, "Neutral");
				var_0_object->SetMessage(9980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9981, 11000, 10999); //@t
				var_0_object->AddReply(9988, 11000, 11006); //@t
				var_0_object->AddReply(9989, -1, 11008); //@t
				return 0;
			}
			if(var_30_string == 11000) {
				func_2455(var_31_bool, "Neutral");
				var_0_object->SetMessage(9982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9983, -1, 11001); //@t
				var_0_object->AddReply(9984, 11003, 11002); //@t
				return 0;
			}
			if(var_30_string == 11003) {
				func_2455(var_31_bool, "Neutral");
				var_0_object->SetMessage(9985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9986, -1, 11004); //@t
				var_0_object->AddReply(9987, -1, 11005); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_3643(var_111_bool);
			if(var_111_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9a8";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int)
	{
		if(1 != 0) {
			func_3068();
			if(var_31_int == 12400) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_3252();
			}
			if(var_30_int == 12399) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11211); //@t
				var_0_object->ClearReplies(); //@t
				bool var_58_bool = true;
				bool var_59_bool = false;
				bool var_60_bool;
				func_3362(var_1_object);
				if(var_60_bool != 0) {
					bool var_68_bool;
					func_3504(var_1_object);
					if(var_68_bool != 0)
						var_59_bool = true;
				}
				if(var_59_bool != 1) {
					bool var_74_bool = false;
					bool var_75_bool;
					func_3492(var_1_object);
					if(var_75_bool != 0) {
						bool var_81_bool;
						func_3504(var_1_object);
						if(var_81_bool != 0)
							var_74_bool = true;
					}
					if(var_74_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_0_object->AddReply(11212, 12401, 12400); //@t
				var_0_object->AddReply(15335, -1, 16558); //@t
				return 0;
			}
			if(var_30_int == 12401) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11214, 12403, 12402); //@t
				var_0_object->AddReply(11223, 12413, 12412); //@t
				return 0;
			}
			if(var_30_int == 12413) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11225, 12405, 12414); //@t
				return 0;
			}
			if(var_30_int == 12403) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11216, 12405, 12404); //@t
				var_0_object->AddReply(11220, 12409, 12408); //@t
				return 0;
			}
			if(var_30_int == 12409) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11222, 12405, 12410); //@t
				return 0;
			}
			if(var_30_int == 12405) {
				func_2770(var_31_int, "Neutral");
				var_0_object->SetMessage(11217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11218, -1, 12406); //@t
				var_0_object->AddReply(11219, -1, 12407); //@t
				return 0;
			}
			var_3_string = true;
			bool var_133_bool;
			func_3643(var_133_bool);
			if(var_133_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xae3";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_2304(object var_0_object, int var_475_int, object var_476_object)
{
	var_0_object = var_476_object;
	bool var_486_bool; object var_487_object;
	var_476_object = var_487_object;
	func_2990(var_486_bool, var_487_object);
	if(!var_486_bool) { //@nz
		var_475_int = -2;
		return 8;
	}
	object var_482_object;
	@CreateDialog(var_482_object);
	int var_489_int;
	func_3639(var_489_int);
	var_482_object->SetNPCName(var_489_int);
	string var_490_string;
	func_3641(var_490_string);
	var_482_object->SetPhoto(var_490_string);
	int var_491_int;
	func_3622(var_491_int);
	var_482_object->SetPlayerName(var_491_int);
	bool var_483_bool;
	@IsOverrideActive(var_483_bool);
	if(var_483_bool != 0) {
		var_475_int = -2;
		return 8;
	}
	@DoDialog(var_482_object);
	object var_493_object; object var_494_object;
	var_476_object = var_493_object;
	var_482_object = var_494_object;
	TaskCall(11);
	func_2367(var_495_object, var_496_object, var_497_string, var_498_bool, var_493_object, var_494_object);
	TaskReturn();
	bool var_485_bool;
	var_482_object->IsDialogEnd(var_485_bool);
	
	for(;;) {
		var_538_bool = !var_485_bool; //@nz
		if(var_538_bool == 0) goto Label_2356;
		@sync();
		var_482_object->IsDialogEnd(var_485_bool);
	}
	
Label_2356:
	object var_539_object;
	var_476_object = var_539_object;
	func_3046();
	@StopDialog(var_482_object);
	var_482_object->GetReturnValue(-1);
	int var_484_int = var_475_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3330(bool var_99_bool)
{
	int var_101_int;
	func_3085(var_101_int, "d1q01FirstGeorgVisit");
	if(var_101_int == 1)
		var_99_bool = true;
	var_99_bool = false;
}


void func_3075(cvector var_70_cvector, cvector var_71_cvector)
{
	float var_74_float = sqrt(var_71_cvector | var_71_cvector);
	if(var_74_float < 0.000001)
		var_70_cvector = [0.0, 0.0, 0.0];
	var_70_cvector = var_71_cvector / var_74_float;
}


void func_3589(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_3085(int var_62_int, string var_63_string)
{
	int var_65_int;
	@GetVariable(var_63_string, var_65_int);
	var_65_int = var_62_int;
}


// @pe
void func_3342(bool var_94_bool)
{
	var_94_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_3090(string var_42_string, bool var_43_bool)
{
	object var_45_object;
	@FindActor(var_45_object, var_42_string);
	if(!var_45_object) //@nz
		@Trace(("Door " + var_42_string) + " not found");
	var_45_object->SetProperty("locked", var_43_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3347(bool var_68_bool)
{
	var_68_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_3352(bool var_140_bool, object var_141_object)
{
	object var_143_object;
	var_141_object = var_143_object;
	func_3540(var_143_object);
	bool var_142_bool;
	if(var_142_bool != 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


void func_3106(float var_67_float)
{
	float var_69_float;
	@GetGameTime(var_69_float);
	var_69_float = var_67_float;
}


// @pe
void func_3362(bool var_60_bool)
{
	int var_62_int;
	func_3085(var_62_int, "d4q03");
	if(var_62_int == 2)
		var_60_bool = true;
	var_60_bool = false;
}


void func_3622(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0xe35";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


void func_3111(int var_143_int)
{
	float var_145_float;
	@GetGameTime(var_145_float);
	var_143_int = 1 + (var_145_float / 24);
}


// @pe
void func_3374(bool var_118_bool, object var_119_object)
{
	object var_121_object;
	var_119_object = var_121_object;
	func_3551(var_121_object);
	bool var_120_bool;
	if(var_120_bool != 0) {
		var_118_bool = true;
		return 0;
	}
	var_118_bool = false;
}


void func_3120(int var_123_int)
{
	float var_125_float;
	@GetGameTime(var_125_float);
	int var_126_int;
	var_125_float = var_126_int;
	var_123_int = var_126_int % 24;
}


void func_49(object var_0_object, int var_34_int, object var_35_object)
{
	var_0_object = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_2990(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_3639(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_3641(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_3622(var_88_int);
	var_41_object->SetPlayerName(var_88_int);
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	@DoDialog(var_41_object);
	object var_97_object; object var_98_object;
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(3);
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	bool var_44_bool;
	var_41_object->IsDialogEnd(var_44_bool);
	
	for(;;) {
		var_138_bool = !var_44_bool; //@nz
		if(var_138_bool == 0) goto Label_101;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_101:
	object var_139_object;
	var_35_object = var_139_object;
	func_3046();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


void func_1073(object var_0_object, int var_155_int, object var_156_object)
{
	var_0_object = var_156_object;
	bool var_166_bool; object var_167_object;
	var_156_object = var_167_object;
	func_2990(var_166_bool, var_167_object);
	if(!var_166_bool) { //@nz
		var_155_int = -2;
		return 8;
	}
	object var_162_object;
	@CreateDialog(var_162_object);
	int var_169_int;
	func_3639(var_169_int);
	var_162_object->SetNPCName(var_169_int);
	string var_170_string;
	func_3641(var_170_string);
	var_162_object->SetPhoto(var_170_string);
	int var_171_int;
	func_3622(var_171_int);
	var_162_object->SetPlayerName(var_171_int);
	bool var_163_bool;
	@IsOverrideActive(var_163_bool);
	if(var_163_bool != 0) {
		var_155_int = -2;
		return 8;
	}
	@DoDialog(var_162_object);
	object var_173_object; object var_174_object;
	var_156_object = var_173_object;
	var_162_object = var_174_object;
	TaskCall(7);
	func_1136(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	bool var_165_bool;
	var_162_object->IsDialogEnd(var_165_bool);
	
	for(;;) {
		var_231_bool = !var_165_bool; //@nz
		if(var_231_bool == 0) goto Label_1125;
		@sync();
		var_162_object->IsDialogEnd(var_165_bool);
	}
	
Label_1125:
	object var_232_object;
	var_156_object = var_232_object;
	func_3046();
	@StopDialog(var_162_object);
	var_162_object->GetReturnValue(-1);
	int var_164_int = var_155_int;
}
EMIT "Stack[-4] = 0";


void func_3639(int var_86_int)
{
	var_86_int = 2873;
}


// @pe
void func_3128(bool var_141_bool, int var_142_int)
{
	int var_143_int;
	func_3111(var_143_int);
	var_141_bool = var_143_int == var_142_int;
}


void func_2617(object var_0_object, int var_542_int, object var_543_object)
{
	var_0_object = var_543_object;
	bool var_553_bool; object var_554_object;
	var_543_object = var_554_object;
	func_2990(var_553_bool, var_554_object);
	if(!var_553_bool) { //@nz
		var_542_int = -2;
		return 8;
	}
	object var_549_object;
	@CreateDialog(var_549_object);
	int var_556_int;
	func_3639(var_556_int);
	var_549_object->SetNPCName(var_556_int);
	string var_557_string;
	func_3641(var_557_string);
	var_549_object->SetPhoto(var_557_string);
	int var_558_int;
	func_3622(var_558_int);
	var_549_object->SetPlayerName(var_558_int);
	bool var_550_bool;
	@IsOverrideActive(var_550_bool);
	if(var_550_bool != 0) {
		var_542_int = -2;
		return 8;
	}
	@DoDialog(var_549_object);
	object var_560_object; object var_561_object;
	var_543_object = var_560_object;
	var_549_object = var_561_object;
	TaskCall(13);
	func_2680(var_562_object, var_563_object, var_564_string, var_565_bool, var_560_object, var_561_object);
	TaskReturn();
	bool var_552_bool;
	var_549_object->IsDialogEnd(var_552_bool);
	
	for(;;) {
		var_610_bool = !var_552_bool; //@nz
		if(var_610_bool == 0) goto Label_2669;
		@sync();
		var_549_object->IsDialogEnd(var_552_bool);
	}
	
Label_2669:
	object var_611_object;
	var_543_object = var_611_object;
	func_3046();
	@StopDialog(var_549_object);
	var_549_object->GetReturnValue(-1);
	int var_551_int = var_542_int;
}
EMIT "Stack[-4] = 0";


void func_3641(string var_87_string)
{
	var_87_string = "ui/NPC_Notkin.png";
}


void func_3643(bool var_33_bool)
{
	var_33_bool = true;
}


// @pe
void func_3384(bool var_153_bool)
{
	int var_155_int;
	func_3085(var_155_int, "KnowMark");
	if(var_155_int == 1)
		var_153_bool = true;
	var_153_bool = false;
}


void func_3645(void)
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_3134(bool var_612_bool)
{
	func_3050("No");
	bool var_614_bool;
	@lshWaitForAnimEnd(var_614_bool);
	var_614_bool = var_612_bool;
}


// @pe
void func_2367(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_493_object, object var_494_object)
{
	var_0_object = var_494_object;
	var_1_object = var_493_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_500_bool;
		func_3480(var_1_object);
		if(var_500_bool != 0) {
			object var_506_object; object var_507_object;
			var_506_object = var_1_object;
			var_507_object = var_0_object;
			func_3246();
			func_2455(var_494_object, "Neutral");
			var_0_object->SetMessage(9978); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9979, 10998, 10997); //@t
			var_0_object->AddReply(9990, 10998, 11009); //@t
			var_0_object->AddReply(9991, 10998, 11011); //@t
		} else {
					func_2455(var_494_object, "Neutral");
					var_0_object->SetMessage(15318); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15319, -1, 16557); //@t
		}
	}
	for(;;) {
		bool var_525_bool;
		func_3643(var_525_bool);
		if(var_525_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3050(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2454;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2454:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x943";


// @pe
void func_3649(object var_31_object)
{
	var_32_bool = GlobalVars[1];
	if(!var_32_bool) { //@nz
		int var_34_int; object var_35_object;
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_140_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_141_bool;
	func_3128(var_141_bool, 1);
	if(var_141_bool != 0) {
		int var_149_int;
		func_3085(var_149_int, "d1q01");
		if(var_149_int == 1) {
			int var_155_int; object var_156_object;
			var_31_object = var_156_object;
			TaskCall(6);
			func_1073(var_157_object, var_155_int, var_156_object);
			TaskReturn();
			return 0;
		}
		int var_233_int; object var_234_object;
		var_31_object = var_234_object;
		TaskCall(4);
		func_343(var_235_object, var_233_int, var_234_object);
		TaskReturn();
		return 0;
	}
	bool var_409_bool;
	func_3128(var_409_bool, 2);
	if(var_409_bool != 0) {
		int var_411_int; object var_412_object;
		var_31_object = var_412_object;
		TaskCall(8);
		func_1465(var_413_object, var_411_int, var_412_object);
		TaskReturn();
		return 0;
	}
	bool var_473_bool;
	func_3128(var_473_bool, 3);
	if(var_473_bool != 0) {
		int var_475_int; object var_476_object;
		var_31_object = var_476_object;
		TaskCall(10);
		func_2304(var_477_object, var_475_int, var_476_object);
		TaskReturn();
		return 0;
	}
	bool var_540_bool;
	func_3128(var_540_bool, 4);
	if(var_540_bool != 0) {
		int var_542_int; object var_543_object;
		var_31_object = var_543_object;
		TaskCall(12);
		func_2617(var_544_object, var_542_int, var_543_object);
		TaskReturn();
		return 0;
	}
	bool var_612_bool;
	func_3134(var_612_bool);
}


// @pe
void func_3396(bool var_169_bool)
{
	int var_171_int;
	func_3085(var_171_int, "KnowGrif");
	if(var_171_int == 1)
		var_169_bool = true;
	var_169_bool = false;
}


// @pe
void func_3143(void)
{
	func_3090("warehouse_rubin@door1", false);
}


// @pe
void func_3150(void)
{
	@SetVariable("ood1Notkin1", 1);
}


// @pe
void func_3408(bool var_159_bool)
{
	int var_161_int;
	func_3085(var_161_int, "ood1Notkin3");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


// @pe
void func_3156(void)
{
	@SetVariable("ood1Notkin2", 1);
}


void func_343(object var_0_object, int var_233_int, object var_234_object)
{
	var_0_object = var_234_object;
	bool var_244_bool; object var_245_object;
	var_234_object = var_245_object;
	func_2990(var_244_bool, var_245_object);
	if(!var_244_bool) { //@nz
		var_233_int = -2;
		return 8;
	}
	object var_240_object;
	@CreateDialog(var_240_object);
	int var_247_int;
	func_3639(var_247_int);
	var_240_object->SetNPCName(var_247_int);
	string var_248_string;
	func_3641(var_248_string);
	var_240_object->SetPhoto(var_248_string);
	int var_249_int;
	func_3622(var_249_int);
	var_240_object->SetPlayerName(var_249_int);
	bool var_241_bool;
	@IsOverrideActive(var_241_bool);
	if(var_241_bool != 0) {
		var_233_int = -2;
		return 8;
	}
	@DoDialog(var_240_object);
	object var_251_object; object var_252_object;
	var_234_object = var_251_object;
	var_240_object = var_252_object;
	TaskCall(5);
	func_406(var_253_object, var_254_object, var_255_string, var_256_bool, var_251_object, var_252_object);
	TaskReturn();
	bool var_243_bool;
	var_240_object->IsDialogEnd(var_243_bool);
	
	for(;;) {
		var_407_bool = !var_243_bool; //@nz
		if(var_407_bool == 0) goto Label_395;
		@sync();
		var_240_object->IsDialogEnd(var_243_bool);
	}
	
Label_395:
	object var_408_object;
	var_234_object = var_408_object;
	func_3046();
	@StopDialog(var_240_object);
	var_240_object->GetReturnValue(-1);
	int var_242_int = var_233_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3162(void)
{
	@SetVariable("ood1NotkinMQ1", 1);
}


// @pe
void func_3420(bool var_175_bool)
{
	int var_177_int;
	func_3085(var_177_int, "ood1Notkin4");
	if(var_177_int == 0) {
		var_175_bool = true;
		return 0;
	}
	var_175_bool = false;
}


// @pe
void func_3168(void)
{
}


// @pe
void func_610(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_3643(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_3050(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_3170(void)
{
}


// @pe
void func_3172(void)
{
	@SetVariable("KnowTwoSouls", 1);
}


// @pe
void func_3432(bool var_191_bool)
{
	int var_193_int;
	func_3085(var_193_int, "ood1Notkin5");
	if(var_193_int == 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


// @pe
void func_3178(object var_71_object)
{
	object var_75_object;
	func_3572(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_3589(var_72_object, "pt_map_rubin", (float)2);
	object var_95_object;
	func_3572(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


// @pe
void func_1646(object var_2_object, string var_70_string)
{
	bool var_71_bool;
	func_3643(var_71_bool);
	if(!var_71_bool) //@nz
		return 0;
	if(var_70_string == var_2_object)
		return 0;
	string var_74_string;
	func_3050(var_74_string);
	var_2_object = var_74_string;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_97_object, object var_98_object)
{
	var_0_object = var_98_object;
	var_3_object = false;
	if(1 != 0) {
		object var_104_object; object var_105_object;
		var_104_object = var_97_object;
		var_105_object = var_0_object;
		func_3210();
		func_175(var_98_object, "Neutral");
		var_0_object->SetMessage(205); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(207, 256, 245); //@t
		var_0_object->AddReply(206, 246, 244); //@t
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	bool var_130_bool;
	func_3643(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3050(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_174;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_174:
		return 0;

	}
	
}


// @pe
void func_1136(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_180_bool = false;
		bool var_181_bool = false;
		bool var_182_bool;
		func_3294(var_1_object);
		if(var_182_bool != 0) {
			bool var_188_bool;
			func_3318(var_1_object);
			if(!var_188_bool) //@nz
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			bool var_195_bool;
			func_3306(var_1_object);
			if(!var_195_bool) //@nz
				var_180_bool = true;
		}
		if(var_180_bool != 0) {
			func_1230(var_174_object, "Neutral");
			var_0_object->SetMessage(5688); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_3258(var_1_object);
			if(!var_208_bool) //@nz
				var_0_object->AddReply(6198, 6852, 6851); //@t
			bool var_218_bool;
			func_3258(var_1_object);
			if(var_218_bool != 0)
				var_0_object->AddReply(5689, 6272, 6271); //@t
		} else {
				return 0;
		}
	}
	bool var_223_bool;
	func_3643(var_223_bool);
	if(var_223_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3050(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1229;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_1229:
		return 0;

	}
	
}
EMIT "GOTO 0x474";


// @pe
void func_3444(bool var_207_bool)
{
	int var_209_int;
	func_3085(var_209_int, "ood1Notkin6");
	if(var_209_int == 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


// @pe
void func_2680(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_560_object, object var_561_object)
{
	var_0_object = var_561_object;
	var_1_object = var_560_object;
	var_3_object = false;
	if(1 != 0) {
		func_2770(var_561_object, "Neutral");
		var_0_object->SetMessage(11211); //@t
		var_0_object->ClearReplies(); //@t
		bool var_573_bool = true;
		bool var_574_bool = false;
		bool var_575_bool;
		func_3362(var_1_object);
		if(var_575_bool != 0) {
			bool var_581_bool;
			func_3504(var_1_object);
			if(var_581_bool != 0)
				var_574_bool = true;
		}
		if(var_574_bool != 1) {
			bool var_587_bool = false;
			bool var_588_bool;
			func_3492(var_1_object);
			if(var_588_bool != 0) {
				bool var_594_bool;
				func_3504(var_1_object);
				if(var_594_bool != 0)
					var_587_bool = true;
			}
			if(var_587_bool != 1)
				var_573_bool = false;
		}
		if(var_573_bool != 0)
			var_0_object->AddReply(11212, 12401, 12400); //@t
		var_0_object->AddReply(15335, -1, 16558); //@t
		goto Label_2740;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa7c";
	}
Label_2740:
	bool var_602_bool;
	func_3643(var_602_bool);
	if(var_602_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3050(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2769;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2769:
		return 0;

	}
	
}


void func_3194(void)
{
	object var_56_object;
	func_3572(var_56_object);
	object var_55_object;
	var_56_object = var_55_object;
	float var_67_float;
	func_3106(var_67_float);
	var_55_object->AddMark("d1q01NotkinAboutRubin", "pt_map_rubin", 1, 8648, var_67_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3456(bool var_223_bool)
{
	int var_225_int;
	func_3085(var_225_int, "ood1Notkin7");
	if(var_225_int == 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


// @pe
void func_3210(void)
{
	@SetVariable("KnowNotkin", 1);
}


// @pe
void func_3468(bool var_201_bool)
{
	int var_203_int;
	func_3085(var_203_int, "KnowMishka");
	if(var_203_int == 1)
		var_201_bool = true;
	var_201_bool = false;
}


// @pe
void func_3216(void)
{
	@SetVariable("ood1Notkin3", 1);
}


// @pe
void func_3222(void)
{
	@SetVariable("ood1Notkin4", 1);
}


// @pe
void func_406(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_251_object, object var_252_object)
{
	var_0_object = var_252_object;
	var_1_object = var_251_object;
	var_3_object = false;
	if(1 != 0) {
		func_610(var_252_object, "Neutral");
		var_0_object->SetMessage(8255); //@t
		var_0_object->ClearReplies(); //@t
		bool var_264_bool = false;
		bool var_265_bool;
		func_3330(var_1_object);
		if(var_265_bool != 0) {
			bool var_271_bool;
			func_3270(var_1_object);
			if(var_271_bool != 0)
				var_264_bool = true;
		}
		if(var_264_bool != 0)
			var_0_object->AddReply(8256, 6255, 9079); //@t
		bool var_280_bool = true;
		bool var_281_bool = false;
		bool var_282_bool;
		func_3374(var_282_bool, var_1_object);
		if(var_282_bool != 0) {
			bool var_297_bool;
			func_3282(var_1_object);
			if(var_297_bool != 0)
				var_281_bool = true;
		}
		if(var_281_bool != 1) {
			bool var_303_bool = false;
			bool var_304_bool;
			func_3352(var_304_bool, var_1_object);
			if(var_304_bool != 0) {
				bool var_311_bool;
				func_3282(var_1_object);
				if(var_311_bool != 0)
					var_303_bool = true;
			}
			if(var_303_bool != 1)
				var_280_bool = false;
		}
		if(var_280_bool != 0)
			var_0_object->AddReply(8257, 6264, 9080); //@t
		bool var_316_bool = false;
		bool var_317_bool;
		func_3384(var_1_object);
		if(var_317_bool != 0) {
			bool var_323_bool;
			func_3408(var_1_object);
			if(var_323_bool != 0)
				var_316_bool = true;
		}
		if(var_316_bool != 0)
			var_0_object->AddReply(8273, 9105, 9096); //@t
		bool var_332_bool = false;
		bool var_333_bool;
		func_3396(var_1_object);
		if(var_333_bool != 0) {
			bool var_339_bool;
			func_3420(var_1_object);
			if(var_339_bool != 0)
				var_332_bool = true;
		}
		if(var_332_bool != 0)
			var_0_object->AddReply(8274, 9106, 9097); //@t
		bool var_348_bool = false;
		bool var_349_bool;
		func_3528(var_1_object);
		if(var_349_bool != 0) {
			bool var_355_bool;
			func_3432(var_1_object);
			if(var_355_bool != 0)
				var_348_bool = true;
		}
		if(var_348_bool != 0)
			var_0_object->AddReply(8277, 9107, 9100); //@t
		bool var_364_bool = false;
		bool var_365_bool;
		func_3468(var_1_object);
		if(var_365_bool != 0) {
			bool var_371_bool;
			func_3444(var_1_object);
			if(var_371_bool != 0)
				var_364_bool = true;
		}
		if(var_364_bool != 0)
			var_0_object->AddReply(8279, 9108, 9102); //@t
		bool var_380_bool = false;
		bool var_381_bool;
		func_3516(var_1_object);
		if(var_381_bool != 0) {
			bool var_387_bool;
			func_3456(var_1_object);
			if(var_387_bool != 0)
				var_380_bool = true;
		}
		if(var_380_bool != 0)
			var_0_object->AddReply(8280, 9109, 9103); //@t
		var_0_object->AddReply(15221, -1, 16498); //@t
		goto Label_580;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19a";
	}
Label_580:
	bool var_399_bool;
	func_3643(var_399_bool);
	if(var_399_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3050(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_609;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_609:
		return 0;

	}
	
}


// @pe
void func_2455(object var_2_object, string var_48_string)
{
	bool var_49_bool;
	func_3643(var_49_bool);
	if(!var_49_bool) //@nz
		return 0;
	if(var_48_string == var_2_object)
		return 0;
	string var_52_string;
	func_3050(var_52_string);
	var_2_object = var_52_string;
}


// @pe
void func_3480(bool var_36_bool)
{
	int var_38_int;
	func_3085(var_38_int, "ood3Notkin1");
	if(var_38_int == 0) {
		var_36_bool = true;
		return 0;
	}
	var_36_bool = false;
}


// @pe
void func_3228(void)
{
	@SetVariable("ood1Notkin5", 1);
}


void func_2973(bool var_31_bool, object var_32_object)
{
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	bool var_40_bool;
	@Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
}


// @pe
void func_3234(void)
{
	@SetVariable("ood1Notkin6", 1);
}


// @pe
void func_3492(bool var_75_bool)
{
	int var_77_int;
	func_3085(var_77_int, "d4q03");
	if(var_77_int == 3)
		var_75_bool = true;
	var_75_bool = false;
}


// @pe
void func_3240(void)
{
	@SetVariable("ood1Notkin7", 1);
}


void func_2985(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


// @pe
void func_3246(void)
{
	@SetVariable("ood3Notkin1", 1);
}


// @pe
void func_175(object var_2_object, string var_40_string)
{
	bool var_41_bool;
	func_3643(var_41_bool);
	if(!var_41_bool) //@nz
		return 0;
	if(var_40_string == var_2_object)
		return 0;
	string var_44_string;
	func_3050(var_44_string);
	var_2_object = var_44_string;
}


void func_2990(bool var_45_bool, object var_46_object)
{
	cvector var_56_cvector;
	var_46_object->GetPosition(var_56_cvector);
	float var_55_float;
	var_46_object->GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_63_float + var_55_float);
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	@GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_55_float);
	cvector var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_67_float = sqrt(var_58_cvector | var_58_cvector);
	var_58_cvector /= var_67_float;
	cvector var_59_cvector = -var_58_cvector;
	cvector var_70_cvector;
	func_3075(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_60_cvector = ((var_58_cvector * 70) + (var_70_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0)
		var_45_bool = false;
	@StopWorld();
	@CameraTransit((var_57_cvector + var_60_cvector), var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_45_bool = true;
}


// @pe
void func_3504(bool var_68_bool)
{
	int var_70_int;
	func_3085(var_70_int, "ood4Notkin1");
	if(var_70_int == 0) {
		var_68_bool = true;
		return 0;
	}
	var_68_bool = false;
}


// @pe
void func_3252(void)
{
	@SetVariable("ood4Notkin1", 1);
}


void func_1465(object var_0_object, int var_411_int, object var_412_object)
{
	var_0_object = var_412_object;
	bool var_422_bool; object var_423_object;
	var_412_object = var_423_object;
	func_2990(var_422_bool, var_423_object);
	if(!var_422_bool) { //@nz
		var_411_int = -2;
		return 8;
	}
	object var_418_object;
	@CreateDialog(var_418_object);
	int var_425_int;
	func_3639(var_425_int);
	var_418_object->SetNPCName(var_425_int);
	string var_426_string;
	func_3641(var_426_string);
	var_418_object->SetPhoto(var_426_string);
	int var_427_int;
	func_3622(var_427_int);
	var_418_object->SetPlayerName(var_427_int);
	bool var_419_bool;
	@IsOverrideActive(var_419_bool);
	if(var_419_bool != 0) {
		var_411_int = -2;
		return 8;
	}
	@DoDialog(var_418_object);
	object var_429_object; object var_430_object;
	var_412_object = var_429_object;
	var_418_object = var_430_object;
	TaskCall(9);
	func_1528(var_431_object, var_432_object, var_433_string, var_434_bool, var_429_object, var_430_object);
	TaskReturn();
	bool var_421_bool;
	var_418_object->IsDialogEnd(var_421_bool);
	
	for(;;) {
		var_471_bool = !var_421_bool; //@nz
		if(var_471_bool == 0) goto Label_1517;
		@sync();
		var_418_object->IsDialogEnd(var_421_bool);
	}
	
Label_1517:
	object var_472_object;
	var_412_object = var_472_object;
	func_3046();
	@StopDialog(var_418_object);
	var_418_object->GetReturnValue(-1);
	int var_420_int = var_411_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3258(bool var_148_bool)
{
	int var_150_int;
	func_3085(var_150_int, "KnowEpidemic");
	if(var_150_int == 1)
		var_148_bool = true;
	var_148_bool = false;
}


// @pe
void func_3516(bool var_217_bool)
{
	int var_219_int;
	func_3085(var_219_int, "KnowSpi4ka");
	if(var_219_int == 1)
		var_217_bool = true;
	var_217_bool = false;
}


// @pe
void func_3270(bool var_107_bool)
{
	int var_109_int;
	func_3085(var_109_int, "ood1Notkin1");
	if(var_109_int == 0) {
		var_107_bool = true;
		return 0;
	}
	var_107_bool = false;
}


// @pe
void func_3528(bool var_185_bool)
{
	int var_187_int;
	func_3085(var_187_int, "KnowKapella");
	if(var_187_int == 1)
		var_185_bool = true;
	var_185_bool = false;
}


// @pe
void func_1230(object var_2_object, string var_132_string)
{
	bool var_133_bool;
	func_3643(var_133_bool);
	if(!var_133_bool) //@nz
		return 0;
	if(var_132_string == var_2_object)
		return 0;
	string var_136_string;
	func_3050(var_136_string);
	var_2_object = var_136_string;
}


// @pe
void func_3282(bool var_133_bool)
{
	int var_135_int;
	func_3085(var_135_int, "ood1Notkin2");
	if(var_135_int == 0) {
		var_133_bool = true;
		return 0;
	}
	var_133_bool = false;
}


// @pe
void func_2770(object var_2_object, string var_42_string)
{
	bool var_43_bool;
	func_3643(var_43_bool);
	if(!var_43_bool) //@nz
		return 0;
	if(var_42_string == var_2_object)
		return 0;
	string var_46_string;
	func_3050(var_46_string);
	var_2_object = var_46_string;
}


// @pe
void func_3540(bool var_142_bool)
{
	int var_144_int;
	func_3120(var_144_int);
	if(var_144_int >= 18)
		var_142_bool = true;
	var_142_bool = false;
}


// @pe
void func_3294(bool var_110_bool)
{
	int var_112_int;
	func_3085(var_112_int, "ood1NotkinMQ1");
	if(var_112_int == 0) {
		var_110_bool = true;
		return 0;
	}
	var_110_bool = false;
}


// @pe
void func_3551(bool var_120_bool)
{
	bool var_122_bool = false;
	int var_123_int;
	func_3120(var_123_int);
	if(var_123_int >= 12) {
		int var_130_int;
		func_3120(var_130_int);
		if(var_130_int < 18)
			var_122_bool = true;
	}
	if(var_122_bool != 0) {
		var_120_bool = true;
		return 0;
	}
	var_120_bool = false;
}


// @pe
void func_3046(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_3306(bool var_125_bool)
{
	int var_127_int;
	func_3085(var_127_int, "d1q01");
	if(var_127_int == 1000)
		var_125_bool = true;
	var_125_bool = false;
}


void func_3050(string var_35_string)
{
	@Trace("playing " + var_35_string);
	float var_38_float;
	float var_39_float;
	@lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	@lshPlayAnimation(var_38_float, var_39_float);
	@Trace("start: " + var_38_float);
	@Trace("end: " + var_39_float);
}


void func_3572(object var_56_object)
{
	object var_59_object; object var_60_object;
	@GetMainOutdoorScene(var_59_object);
	if(var_59_object == null) {
		@Trace("Can't find main outdoor scene");
		var_60_object = null;
		var_60_object = var_56_object;
	}
	var_59_object->GetMap(var_60_object);
	var_60_object = var_56_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3318(bool var_118_bool)
{
	int var_120_int;
	func_3085(var_120_int, "d1q01");
	if(var_120_int == 0) {
		var_118_bool = true;
		return 0;
	}
	var_118_bool = false;
}


// @pe
void func_1528(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_429_object, object var_430_object)
{
	var_0_object = var_430_object;
	var_1_object = var_429_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_436_bool;
		func_3347(var_1_object);
		if(var_436_bool != 0) {
			func_1646(var_430_object, "Neutral");
			var_0_object->SetMessage(7472); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(7473, 8250, 8249); //@t
			var_0_object->AddReply(7488, 8252, 8265); //@t
		} else {
					func_1646(var_430_object, "Neutral");
					var_0_object->SetMessage(6943); //@t
					var_0_object->ClearReplies(); //@t
					bool var_460_bool;
					func_3342(var_1_object);
					if(var_460_bool != 0)
						var_0_object->AddReply(6944, 7651, 7650); //@t
					var_0_object->AddReply(7464, 8240, 8239); //@t
					var_0_object->AddReply(7504, 8267, 8285); //@t
		}
	}
	for(;;) {
		bool var_450_bool;
		func_3643(var_450_bool);
		if(var_450_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3050(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1645;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1645:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x66e";
EMIT "Pop(1)";
EMIT "Push((int) 9377)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9378)";
EMIT "Push((int) 10304)";
EMIT "Push((int) 10303)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9388)";
EMIT "Push((int) 10304)";
EMIT "Push((int) 10315)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9389)";
EMIT "Push((int) 10318)";
EMIT "Push((int) 10317)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x650";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x5fc";


void func_3068(void)
{
	bool var_33_bool;
	func_3643(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


