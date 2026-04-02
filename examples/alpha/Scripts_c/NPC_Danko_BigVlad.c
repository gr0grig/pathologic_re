// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		func_9734();
		bool var_41_bool;
		func_7792(var_41_bool);
		if(!var_41_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_7857("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_41_object;
		var_40_bool = var_41_object;
		func_9738(var_41_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_42_object;
		var_40_bool = var_42_object;
		bool var_41_bool;
		func_7780(var_41_bool, var_42_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_40_string == 467) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8513();
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(402, 471, 468); //@t
				var_0_object->AddReply(403, 472, 469); //@t
				var_0_object->AddReply(404, -1, 470); //@t
				return 0;
			}
			if(var_40_string == 472) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(406); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(413, 475, 480); //@t
				var_0_object->AddReply(414, -1, 481); //@t
				return 0;
			}
			if(var_40_string == 471) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(407, 475, 473); //@t
				var_0_object->AddReply(408, 475, 474); //@t
				return 0;
			}
			if(var_40_string == 475) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(409); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(410, -1, 477); //@t
				var_0_object->AddReply(411, -1, 478); //@t
				var_0_object->AddReply(412, -1, 479); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_7949(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 13245) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8507();
			}
			if(var_41_bool == 13253) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_8549();
			}
			if(var_41_bool == 13885) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_8549();
			}
			if(var_41_bool == 13673) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_8501();
			}
			if(var_41_bool == 13683) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_8720();
			}
			if(var_40_string == 11787) {
				bool var_129_bool = false;
				bool var_130_bool;
				func_9290(var_1_object);
				if(!var_130_bool) { //@nz
					bool var_139_bool;
					func_9386(var_1_object);
					if(var_139_bool != 0)
						var_129_bool = true;
				}
				if(var_129_bool != 0) {
					object var_145_object; object var_146_object;
					var_145_object = var_1_object;
					var_146_object = var_0_object;
					func_8543();
					object var_149_object; object var_150_object;
					var_149_object = var_1_object;
					var_150_object = var_0_object;
					func_8736();
					func_551(var_41_bool, "Neutral");
					var_0_object->SetMessage(10676); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10688, 11789, 11801); //@t
					return 0;
				}
				bool var_172_bool;
				func_9434(var_1_object);
				if(var_172_bool != 0) {
					func_551(var_41_bool, "Neutral");
					var_0_object->SetMessage(12502); //@t
					var_0_object->ClearReplies(); //@t
					bool var_180_bool = false;
					bool var_181_bool;
					func_9290(var_1_object);
					if(var_181_bool != 0) {
						bool var_183_bool;
						func_9302(var_1_object);
						if(var_183_bool != 0)
							var_180_bool = true;
					}
					if(var_180_bool != 0)
						var_0_object->AddReply(12027, 13248, 13245); //@t
					bool var_192_bool = false;
					bool var_193_bool = false;
					bool var_194_bool = false;
					bool var_195_bool = false;
					bool var_196_bool;
					func_9254(var_1_object);
					if(var_196_bool != 0) {
						bool var_202_bool;
						func_9266(var_1_object);
						if(var_202_bool != 0)
							var_195_bool = true;
					}
					if(var_195_bool != 0) {
						bool var_208_bool;
						func_9230(var_1_object);
						if(!var_208_bool) //@nz
							var_194_bool = true;
					}
					if(var_194_bool != 0) {
						bool var_215_bool;
						func_9242(var_1_object);
						if(!var_215_bool) //@nz
							var_193_bool = true;
					}
					if(var_193_bool != 0) {
						bool var_222_bool;
						func_9278(var_1_object);
						if(!var_222_bool) //@nz
							var_192_bool = true;
					}
					if(var_192_bool != 0)
						var_0_object->AddReply(12503, 13674, 13673); //@t
					var_0_object->AddReply(12514, -1, 13684); //@t
					return 0;
				}
			}
			if(var_40_string == 13674) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12505, 13676, 13675); //@t
				return 0;
			}
			if(var_40_string == 13676) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12507, 13678, 13677); //@t
				return 0;
			}
			if(var_40_string == 13678) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12509, 13680, 13679); //@t
				return 0;
			}
			if(var_40_string == 13680) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12511, 13682, 13681); //@t
				return 0;
			}
			if(var_40_string == 13682) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12513, -1, 13683); //@t
				return 0;
			}
			if(var_40_string == 13248) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12031, 13250, 13249); //@t
				var_0_object->AddReply(12692, 3597, 13882); //@t
				return 0;
			}
			if(var_40_string == 3597) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3322, 3599, 3598); //@t
				var_0_object->AddReply(3535, 3817, 3816); //@t
				return 0;
			}
			if(var_40_string == 3817) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3537, 3604, 3818); //@t
				var_0_object->AddReply(3538, 3599, 3819); //@t
				return 0;
			}
			if(var_40_string == 3599) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3324, 3604, 3600); //@t
				var_0_object->AddReply(3325, 3604, 3601); //@t
				return 0;
			}
			if(var_40_string == 3604) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3330, 3815, 3607); //@t
				return 0;
			}
			if(var_40_string == 13250) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12033, 13252, 13251); //@t
				var_0_object->AddReply(3539, 3823, 3822); //@t
				return 0;
			}
			if(var_40_string == 3823) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3540); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3541, 13252, 3824); //@t
				var_0_object->AddReply(3533, 3815, 3814); //@t
				return 0;
			}
			if(var_40_string == 3815) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(3534); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12694, -1, 13885); //@t
				return 0;
			}
			if(var_40_string == 13252) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(12034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12035, -1, 13253); //@t
				return 0;
			}
			if(var_40_string == 11789) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(10678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10679, 11791, 11790); //@t
				var_0_object->AddReply(10687, -1, 11800); //@t
				return 0;
			}
			if(var_40_string == 11791) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(10680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10681, 11793, 11792); //@t
				var_0_object->AddReply(10685, 11793, 11796); //@t
				var_0_object->AddReply(10686, 11793, 11798); //@t
				return 0;
			}
			if(var_40_string == 11793) {
				func_551(var_41_bool, "Neutral");
				var_0_object->SetMessage(10682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10683, -1, 11794); //@t
				var_0_object->AddReply(10684, -1, 11795); //@t
				return 0;
			}
			var_3_string = true;
			bool var_384_bool;
			func_7949(var_384_bool);
			if(var_384_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x238";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 6488) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8748();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_8033();
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 6485) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_8748();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_8033();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 6484) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_8748();
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_8033();
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 6474) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_8748();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_8033();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 6481) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_8748();
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_8033();
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 6471) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_8748();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_8033();
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_8058();
			}
			if(var_41_bool == 5793) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_8754();
			}
			if(var_41_bool == 5794) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_8754();
			}
			if(var_41_bool == 5799) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_8754();
			}
			if(var_41_bool == 5796) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_8754();
			}
			if(var_41_bool == 5785) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_8760();
			}
			if(var_41_bool == 5782) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_8760();
			}
			if(var_41_bool == 8364) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_7997();
			}
			if(var_41_bool == 8365) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_7997();
			}
			if(var_41_bool == 8375) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_8003();
			}
			if(var_41_bool == 8390) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_8009();
			}
			if(var_41_bool == 8391) {
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_8009();
			}
			if(var_41_bool == 8400) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_object;
				func_8015();
			}
			if(var_41_bool == 8411) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_8015();
			}
			if(var_41_bool == 8415) {
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_object;
				func_8021();
			}
			if(var_41_bool == 8406) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_8021();
			}
			if(var_41_bool == 8409) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_object;
				func_8027();
			}
			if(var_40_string == 5773) {
				bool var_199_bool;
				func_9458(var_1_object);
				if(var_199_bool != 0) {
					object var_207_object; object var_208_object;
					var_207_object = var_1_object;
					var_208_object = var_0_object;
					func_8742();
					func_1432(var_41_bool, "Neutral");
					var_0_object->SetMessage(5238); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5240, 6468, 5775); //@t
					var_0_object->AddReply(5239, 6465, 5774); //@t
					return 0;
				}
				bool var_233_bool = false;
				bool var_234_bool;
				func_9470(var_1_object);
				if(var_234_bool != 0) {
					bool var_240_bool;
					func_8766(var_1_object);
					if(!var_240_bool) //@nz
						var_233_bool = true;
				}
				if(var_233_bool != 0) {
					func_1432(var_41_bool, "Neutral");
					var_0_object->SetMessage(5253); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5254, 5792, 5791); //@t
					var_0_object->AddReply(5260, 5798, 5797); //@t
					var_0_object->AddReply(5259, -1, 5796); //@t
					return 0;
				}
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7539); //@t
				var_0_object->ClearReplies(); //@t
				bool var_260_bool = false;
				bool var_261_bool;
				func_9482(var_1_object);
				if(var_261_bool != 0) {
					bool var_267_bool;
					func_8766(var_1_object);
					if(var_267_bool != 0)
						var_260_bool = true;
				}
				if(var_260_bool != 0)
					var_0_object->AddReply(7540, 5777, 8322); //@t
				bool var_272_bool = false;
				bool var_273_bool;
				func_9398(var_1_object);
				if(var_273_bool != 0) {
					bool var_279_bool;
					func_8872(var_1_object);
					if(var_279_bool != 0)
						var_272_bool = true;
				}
				if(var_272_bool != 0)
					var_0_object->AddReply(7548, 8354, 8330); //@t
				bool var_288_bool = false;
				bool var_289_bool;
				func_9374(var_1_object);
				if(var_289_bool != 0) {
					bool var_295_bool;
					func_8884(var_1_object);
					if(var_295_bool != 0)
						var_288_bool = true;
				}
				if(var_288_bool != 0)
					var_0_object->AddReply(7552, 8349, 8334); //@t
				bool var_304_bool = false;
				bool var_305_bool;
				func_9410(var_1_object);
				if(var_305_bool != 0) {
					bool var_311_bool;
					func_8896(var_1_object);
					if(var_311_bool != 0)
						var_304_bool = true;
				}
				if(var_304_bool != 0)
					var_0_object->AddReply(7553, 8350, 8335); //@t
				bool var_320_bool = false;
				bool var_321_bool;
				func_9422(var_1_object);
				if(var_321_bool != 0) {
					bool var_327_bool;
					func_8908(var_1_object);
					if(var_327_bool != 0)
						var_320_bool = true;
				}
				if(var_320_bool != 0)
					var_0_object->AddReply(7556, 8351, 8338); //@t
				bool var_336_bool = false;
				bool var_337_bool;
				func_9004(var_1_object);
				if(var_337_bool != 0) {
					bool var_343_bool;
					func_8920(var_1_object);
					if(var_343_bool != 0)
						var_336_bool = true;
				}
				if(var_336_bool != 0)
					var_0_object->AddReply(7560, 8352, 8342); //@t
				bool var_352_bool = false;
				bool var_353_bool;
				func_9446(var_1_object);
				if(var_353_bool != 0) {
					bool var_359_bool;
					func_8932(var_1_object);
					if(var_359_bool != 0)
						var_352_bool = true;
				}
				if(var_352_bool != 0)
					var_0_object->AddReply(7561, 8353, 8343); //@t
				var_0_object->AddReply(7590, -1, 8376); //@t
				return 0;
			}
			if(var_40_string == 8353) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7618, 8408, 8407); //@t
				return 0;
			}
			if(var_40_string == 8408) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7620, -1, 8409); //@t
				return 0;
			}
			if(var_40_string == 8352) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7570); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7612, 8402, 8401); //@t
				return 0;
			}
			if(var_40_string == 8402) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7614, 8404, 8403); //@t
				return 0;
			}
			if(var_40_string == 8404) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7615); //@t
				var_0_object->ClearReplies(); //@t
				bool var_403_bool;
				func_8944(var_1_object);
				if(!var_403_bool) //@nz
					var_0_object->AddReply(7616, 8412, 8405); //@t
				bool var_413_bool;
				func_8944(var_1_object);
				if(var_413_bool != 0)
					var_0_object->AddReply(7617, -1, 8406); //@t
				return 0;
			}
			if(var_40_string == 8412) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7623); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7624, 8414, 8413); //@t
				return 0;
			}
			if(var_40_string == 8414) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7626, -1, 8415); //@t
				return 0;
			}
			if(var_40_string == 8351) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7604, 8396, 8392); //@t
				var_0_object->AddReply(7605, 8394, 8393); //@t
				return 0;
			}
			if(var_40_string == 8394) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7607, 8396, 8395); //@t
				return 0;
			}
			if(var_40_string == 8396) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7609, 8398, 8397); //@t
				return 0;
			}
			if(var_40_string == 8398) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7611, -1, 8400); //@t
				var_0_object->AddReply(7622, -1, 8411); //@t
				return 0;
			}
			if(var_40_string == 8350) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7591, 8378, 8377); //@t
				var_0_object->AddReply(7598, 8386, 8385); //@t
				return 0;
			}
			if(var_40_string == 8386) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7600, 8388, 8387); //@t
				return 0;
			}
			if(var_40_string == 8388) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7603, -1, 8391); //@t
				return 0;
			}
			if(var_40_string == 8378) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7593, 8381, 8379); //@t
				var_0_object->AddReply(7594, 8381, 8380); //@t
				return 0;
			}
			if(var_40_string == 8381) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7596, 8383, 8382); //@t
				return 0;
			}
			if(var_40_string == 8383) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7602, -1, 8390); //@t
				return 0;
			}
			if(var_40_string == 8349) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7582, 8367, 8366); //@t
				return 0;
			}
			if(var_40_string == 8367) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7584, 8370, 8368); //@t
				var_0_object->AddReply(7585, 8370, 8369); //@t
				return 0;
			}
			if(var_40_string == 8370) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7587, 8374, 8373); //@t
				return 0;
			}
			if(var_40_string == 8374) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7588); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7589, -1, 8375); //@t
				return 0;
			}
			if(var_40_string == 8354) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7573, 8348, 8355); //@t
				var_0_object->AddReply(7574, 8348, 8356); //@t
				return 0;
			}
			if(var_40_string == 8348) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7575, 8359, 8358); //@t
				var_0_object->AddReply(7577, 8359, 8360); //@t
				return 0;
			}
			if(var_40_string == 8359) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7578, 8363, 8362); //@t
				return 0;
			}
			if(var_40_string == 8363) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(7579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7580, -1, 8364); //@t
				var_0_object->AddReply(7581, -1, 8365); //@t
				return 0;
			}
			if(var_40_string == 5777) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5243, 5779, 5778); //@t
				var_0_object->AddReply(5252, 5779, 5788); //@t
				return 0;
			}
			if(var_40_string == 5779) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5245, 5781, 5780); //@t
				var_0_object->AddReply(5251, 5781, 5786); //@t
				return 0;
			}
			if(var_40_string == 5781) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5248, 5784, 5783); //@t
				var_0_object->AddReply(5247, -1, 5782); //@t
				return 0;
			}
			if(var_40_string == 5784) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5250, -1, 5785); //@t
				return 0;
			}
			if(var_40_string == 5798) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5261); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5262, -1, 5799); //@t
				return 0;
			}
			if(var_40_string == 5792) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5256, -1, 5793); //@t
				var_0_object->AddReply(5257, -1, 5794); //@t
				return 0;
			}
			if(var_40_string == 6465) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5873); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5874, 6469, 6466); //@t
				var_0_object->AddReply(5875, 6469, 6467); //@t
				return 0;
			}
			if(var_40_string == 6469) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5880, 6473, 6472); //@t
				var_0_object->AddReply(5879, -1, 6471); //@t
				return 0;
			}
			if(var_40_string == 6473) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5882, -1, 6474); //@t
				var_0_object->AddReply(5887, -1, 6481); //@t
				return 0;
			}
			if(var_40_string == 6468) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5883, 6477, 6476); //@t
				var_0_object->AddReply(5888, 6483, 6482); //@t
				return 0;
			}
			if(var_40_string == 6483) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5891, -1, 6485); //@t
				var_0_object->AddReply(5890, -1, 6484); //@t
				return 0;
			}
			if(var_40_string == 6477) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5885, 6469, 6478); //@t
				var_0_object->AddReply(5892, 6487, 6486); //@t
				return 0;
			}
			if(var_40_string == 6487) {
				func_1432(var_41_bool, "Neutral");
				var_0_object->SetMessage(5893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5894, -1, 6488); //@t
				var_0_object->AddReply(5895, 6469, 6489); //@t
				return 0;
			}
			var_3_string = true;
			bool var_706_bool;
			func_7949(var_706_bool);
			if(var_706_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5a9";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 7496) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7967();
			}
			if(var_41_bool == 7497) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7967();
			}
			if(var_41_bool == 7828) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_7967();
			}
			if(var_41_bool == 7831) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_7967();
			}
			if(var_41_bool == 7460) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_7973();
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_7991();
			}
			if(var_41_bool == 7461) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_7973();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_7991();
			}
			if(var_41_bool == 7465) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_7973();
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_7991();
			}
			if(var_41_bool == 7466) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_7973();
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_7991();
			}
			if(var_41_bool == 7814) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_7979();
			}
			if(var_41_bool == 7815) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_7979();
			}
			if(var_41_bool == 7477) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_7985();
			}
			if(var_41_bool == 7478) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_7985();
			}
			if(var_41_bool == 7474) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_7985();
			}
			if(var_41_bool == 7479) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_7985();
			}
			if(var_40_string == 7489) {
				bool var_120_bool = false;
				bool var_121_bool;
				func_8790(var_1_object);
				if(var_121_bool != 0) {
					bool var_129_bool;
					func_8848(var_1_object);
					if(var_129_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0) {
					func_2937(var_41_bool, "Neutral");
					var_0_object->SetMessage(6797); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6798, 7491, 7490); //@t
					var_0_object->AddReply(6809, 7491, 7503); //@t
					var_0_object->AddReply(6810, 7493, 7505); //@t
					return 0;
				}
				bool var_160_bool = false;
				bool var_161_bool;
				func_8802(var_1_object);
				if(var_161_bool != 0) {
					bool var_167_bool;
					func_8860(var_1_object);
					if(var_167_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0) {
					func_2937(var_41_bool, "Neutral");
					var_0_object->SetMessage(6765); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6777, 7457, 7467); //@t
					var_0_object->AddReply(6766, 7459, 7456); //@t
					return 0;
				}
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6794); //@t
				var_0_object->ClearReplies(); //@t
				bool var_183_bool = false;
				bool var_184_bool;
				func_8814(var_1_object);
				if(var_184_bool != 0) {
					bool var_190_bool;
					func_8848(var_1_object);
					if(var_190_bool != 0)
						var_183_bool = true;
				}
				if(var_183_bool != 0)
					var_0_object->AddReply(7084, 7809, 7807); //@t
				bool var_195_bool;
				func_8826(var_1_object);
				if(var_195_bool != 0)
					var_0_object->AddReply(6795, 7469, 7487); //@t
				var_0_object->AddReply(7535, -1, 8317); //@t
				return 0;
			}
			if(var_40_string == 7469) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6779, 7471, 7470); //@t
				var_0_object->AddReply(6793, 7476, 7485); //@t
				return 0;
			}
			if(var_40_string == 7471) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6781, 7473, 7472); //@t
				var_0_object->AddReply(6788, -1, 7479); //@t
				return 0;
			}
			if(var_40_string == 7473) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6784, 7476, 7475); //@t
				var_0_object->AddReply(6783, -1, 7474); //@t
				return 0;
			}
			if(var_40_string == 7476) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6786, -1, 7477); //@t
				var_0_object->AddReply(6787, -1, 7478); //@t
				return 0;
			}
			if(var_40_string == 7809) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7085); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7086, 7811, 7810); //@t
				var_0_object->AddReply(7096, 7813, 7822); //@t
				return 0;
			}
			if(var_40_string == 7811) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7088, 7813, 7812); //@t
				var_0_object->AddReply(7092, 7813, 7816); //@t
				var_0_object->AddReply(7093, 7819, 7818); //@t
				return 0;
			}
			if(var_40_string == 7819) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7095, 7813, 7820); //@t
				return 0;
			}
			if(var_40_string == 7813) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7090, -1, 7814); //@t
				var_0_object->AddReply(7091, -1, 7815); //@t
				return 0;
			}
			if(var_40_string == 7457) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6768, 7459, 7458); //@t
				var_0_object->AddReply(6773, 7464, 7463); //@t
				return 0;
			}
			if(var_40_string == 7464) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6775, -1, 7465); //@t
				var_0_object->AddReply(6776, -1, 7466); //@t
				return 0;
			}
			if(var_40_string == 7459) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6770, -1, 7460); //@t
				var_0_object->AddReply(6771, -1, 7461); //@t
				return 0;
			}
			if(var_40_string == 7491) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6800, 7493, 7492); //@t
				var_0_object->AddReply(6807, 7493, 7500); //@t
				return 0;
			}
			if(var_40_string == 7493) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6802, 7495, 7494); //@t
				var_0_object->AddReply(6806, 7495, 7498); //@t
				return 0;
			}
			if(var_40_string == 7495) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(6803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6804, -1, 7496); //@t
				var_0_object->AddReply(6805, -1, 7497); //@t
				var_0_object->AddReply(7097, 7825, 7824); //@t
				return 0;
			}
			if(var_40_string == 7825) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7099, 7827, 7826); //@t
				return 0;
			}
			if(var_40_string == 7827) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7101, -1, 7828); //@t
				var_0_object->AddReply(7102, 7830, 7829); //@t
				return 0;
			}
			if(var_40_string == 7830) {
				func_2937(var_41_bool, "Neutral");
				var_0_object->SetMessage(7103); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7104, -1, 7831); //@t
				return 0;
			}
			var_3_string = true;
			bool var_374_bool;
			func_7949(var_374_bool);
			if(var_374_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb8a";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 9874) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8064();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_8070();
				object var_100_object = var_1_object;
				func_7951(var_0_object);
			}
			if(var_41_bool == 9875) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_8064();
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_8070();
				object var_132_object = var_1_object;
				func_7951(var_0_object);
			}
			if(var_41_bool == 12339) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_8064();
			}
			if(var_41_bool == 9878) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_8102();
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_8070();
				object var_146_object = var_1_object;
				func_7951(var_0_object);
			}
			if(var_41_bool == 9891) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_8108();
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_8114();
			}
			if(var_41_bool == 11436) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_object;
				func_8159();
				object var_177_object; object var_178_object;
				var_177_object = var_1_object;
				var_178_object = var_0_object;
				func_8165();
				object var_189_object = var_1_object;
				func_8185(var_0_object);
			}
			if(var_41_bool == 11437) {
				object var_198_object; object var_199_object;
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_8159();
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_8165();
				object var_202_object = var_1_object;
				func_8185(var_0_object);
			}
			if(var_41_bool == 11447) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_8201();
			}
			if(var_41_bool == 11448) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_8201();
			}
			if(var_40_string == 9791) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8926); //@t
				var_0_object->ClearReplies(); //@t
				bool var_232_bool = false;
				bool var_233_bool;
				func_8956(var_1_object);
				if(var_233_bool != 0) {
					bool var_241_bool;
					func_8968(var_1_object);
					if(var_241_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 0)
					var_0_object->AddReply(8977, 9847, 9846); //@t
				bool var_250_bool = false;
				bool var_251_bool = false;
				bool var_252_bool;
				func_8992(var_1_object);
				if(var_252_bool != 0) {
					bool var_258_bool;
					func_8956(var_1_object);
					if(var_258_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0) {
					bool var_260_bool;
					func_8968(var_1_object);
					if(!var_260_bool) //@nz
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(9005, 9877, 9876); //@t
				bool var_266_bool = false;
				bool var_267_bool;
				func_9028(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					func_9016(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0)
					var_0_object->AddReply(9008, 9880, 9879); //@t
				bool var_282_bool = false;
				bool var_283_bool;
				func_9040(var_1_object);
				if(var_283_bool != 0) {
					bool var_289_bool;
					func_9052(var_1_object);
					if(var_289_bool != 0)
						var_282_bool = true;
				}
				if(var_282_bool != 0)
					var_0_object->AddReply(10218, 11265, 11264); //@t
				bool var_298_bool = false;
				bool var_299_bool;
				func_9076(var_1_object);
				if(var_299_bool != 0) {
					bool var_305_bool;
					func_9064(var_1_object);
					if(var_305_bool != 0)
						var_298_bool = true;
				}
				if(var_298_bool != 0)
					var_0_object->AddReply(10373, 11439, 11438); //@t
				var_0_object->AddReply(8975, 9792, 9844); //@t
				var_0_object->AddReply(8976, 9815, 9845); //@t
				var_0_object->AddReply(9020, 9890, 9892); //@t
				var_0_object->AddReply(11139, -1, 12328); //@t
				return 0;
			}
			if(var_40_string == 9815) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8950, 9817, 9816); //@t
				var_0_object->AddReply(8963, 9832, 9829); //@t
				var_0_object->AddReply(8964, 9832, 9831); //@t
				var_0_object->AddReply(8972, 9841, 9840); //@t
				return 0;
			}
			if(var_40_string == 9841) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8974, 9817, 9842); //@t
				return 0;
			}
			if(var_40_string == 9832) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8966, 9834, 9833); //@t
				var_0_object->AddReply(8971, 9834, 9838); //@t
				return 0;
			}
			if(var_40_string == 9834) {
				func_3846(var_41_bool, "Rage");
				var_0_object->SetMessage(8967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8968, 9836, 9835); //@t
				var_0_object->AddReply(8970, -1, 9837); //@t
				return 0;
			}
			if(var_40_string == 9836) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8969); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_40_string == 9817) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8952, -1, 9818); //@t
				var_0_object->AddReply(8953, -1, 9819); //@t
				var_0_object->AddReply(8954, 9821, 9820); //@t
				return 0;
			}
			if(var_40_string == 9821) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8956, -1, 9822); //@t
				var_0_object->AddReply(8957, 9824, 9823); //@t
				return 0;
			}
			if(var_40_string == 9824) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8959, 9826, 9825); //@t
				var_0_object->AddReply(8962, -1, 9828); //@t
				return 0;
			}
			if(var_40_string == 9826) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8961, -1, 9827); //@t
				return 0;
			}
			if(var_40_string == 9792) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8928, 9794, 9793); //@t
				var_0_object->AddReply(8941, 9808, 9807); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xf06";
			EMIT "Pop(1)";
			EMIT "Push((int) 10085)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 10086)";
			EMIT "Push((int) 11117)";
			EMIT "Push((int) 11116)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 10106)";
			EMIT "Push((int) 11117)";
			EMIT "Push((int) 11139)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 10107)";
			EMIT "Push((int) 11142)";
			EMIT "Push((int) 11141)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_40_string == 11142) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10109, 11117, 11143); //@t
				var_0_object->AddReply(10110, 11117, 11145); //@t
				return 0;
			}
			if(var_40_string == 11117) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10088, 11119, 11118); //@t
				var_0_object->AddReply(10105, 11121, 11137); //@t
				return 0;
			}
			if(var_40_string == 11119) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10090, 11121, 11120); //@t
				var_0_object->AddReply(10101, 11132, 11131); //@t
				return 0;
			}
			if(var_40_string == 11132) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10103, 11121, 11133); //@t
				var_0_object->AddReply(10104, 11121, 11135); //@t
				return 0;
			}
			if(var_40_string == 11121) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10092, 11123, 11122); //@t
				var_0_object->AddReply(10097, 11128, 11127); //@t
				return 0;
			}
			if(var_40_string == 11128) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10099, -1, 11129); //@t
				var_0_object->AddReply(10100, -1, 11130); //@t
				return 0;
			}
			if(var_40_string == 11123) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10094, -1, 11124); //@t
				var_0_object->AddReply(10095, -1, 11125); //@t
				var_0_object->AddReply(10096, -1, 11126); //@t
				return 0;
			}
			if(var_40_string == 9808) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8943, 9810, 9809); //@t
				return 0;
			}
			if(var_40_string == 9810) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8945, -1, 9811); //@t
				var_0_object->AddReply(8946, 9813, 9812); //@t
				return 0;
			}
			if(var_40_string == 9813) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8948, -1, 9814); //@t
				return 0;
			}
			if(var_40_string == 9794) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8930, 9796, 9795); //@t
				var_0_object->AddReply(8938, 9804, 9803); //@t
				return 0;
			}
			if(var_40_string == 9804) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8940, 9796, 9805); //@t
				return 0;
			}
			if(var_40_string == 9796) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8932, -1, 9797); //@t
				var_0_object->AddReply(8933, -1, 9798); //@t
				var_0_object->AddReply(8934, 9800, 9799); //@t
				return 0;
			}
			if(var_40_string == 9800) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8936, -1, 9801); //@t
				var_0_object->AddReply(8937, -1, 9802); //@t
				return 0;
			}
			if(var_40_string == 11439) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10375, 11442, 11440); //@t
				var_0_object->AddReply(10376, -1, 11441); //@t
				return 0;
			}
			if(var_40_string == 11442) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10378, 11446, 11443); //@t
				var_0_object->AddReply(10379, 11445, 11444); //@t
				return 0;
			}
			if(var_40_string == 11445) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10383, -1, 11448); //@t
				return 0;
			}
			if(var_40_string == 11446) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10382, -1, 11447); //@t
				return 0;
			}
			if(var_40_string == 11265) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10361, 11410, 11423); //@t
				var_0_object->AddReply(10347, 11410, 11408); //@t
				var_0_object->AddReply(10348, 11410, 11409); //@t
				return 0;
			}
			if(var_40_string == 11410) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10350, 11413, 11412); //@t
				var_0_object->AddReply(10362, 11426, 11425); //@t
				return 0;
			}
			if(var_40_string == 11426) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10364, 11428, 11427); //@t
				return 0;
			}
			if(var_40_string == 11428) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10366, 11415, 11429); //@t
				return 0;
			}
			if(var_40_string == 11413) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10352, 11415, 11414); //@t
				return 0;
			}
			if(var_40_string == 11415) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10354, 11417, 11416); //@t
				return 0;
			}
			if(var_40_string == 11417) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10356, 11419, 11418); //@t
				return 0;
			}
			if(var_40_string == 11419) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10358, 11421, 11420); //@t
				var_0_object->AddReply(10367, 11432, 11431); //@t
				return 0;
			}
			if(var_40_string == 11432) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10369, 11434, 11433); //@t
				return 0;
			}
			if(var_40_string == 11421) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10360, 11434, 11422); //@t
				return 0;
			}
			if(var_40_string == 11434) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(10370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10371, -1, 11436); //@t
				var_0_object->AddReply(10372, -1, 11437); //@t
				return 0;
			}
			if(var_40_string == 9880) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9014, 9887, 9886); //@t
				return 0;
			}
			if(var_40_string == 9887) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9016, 9890, 9888); //@t
				var_0_object->AddReply(9017, 9890, 9889); //@t
				var_0_object->AddReply(9022, 9890, 9894); //@t
				return 0;
			}
			if(var_40_string == 9890) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9018); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9019, -1, 9891); //@t
				return 0;
			}
			if(var_40_string == 9877) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9006); //@t
				var_0_object->ClearReplies(); //@t
				bool var_717_bool = true;
				bool var_718_bool;
				func_8980(var_1_object);
				if(var_718_bool != 1) {
					bool var_724_bool;
					func_8992(var_1_object);
					if(var_724_bool != 1)
						var_717_bool = false;
				}
				if(var_717_bool != 0)
					var_0_object->AddReply(9007, -1, 9878); //@t
				return 0;
			}
			if(var_40_string == 9847) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8979, 9852, 9848); //@t
				var_0_object->AddReply(8980, 9850, 9849); //@t
				return 0;
			}
			if(var_40_string == 9850) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8982, -1, 9851); //@t
				return 0;
			}
			if(var_40_string == 9852) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8984, 9854, 9853); //@t
				var_0_object->AddReply(8987, 9857, 9856); //@t
				return 0;
			}
			if(var_40_string == 9857) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8989, 9860, 9858); //@t
				return 0;
			}
			if(var_40_string == 9860) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8992, 9863, 9861); //@t
				var_0_object->AddReply(8993, 9865, 9862); //@t
				return 0;
			}
			if(var_40_string == 9865) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8997, 9859, 9866); //@t
				return 0;
			}
			if(var_40_string == 9863) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8995, 9859, 9864); //@t
				return 0;
			}
			if(var_40_string == 9854) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8986, 9859, 9855); //@t
				return 0;
			}
			if(var_40_string == 9859) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8998, 9870, 9869); //@t
				return 0;
			}
			if(var_40_string == 9870) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(8999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9000, 9873, 9871); //@t
				var_0_object->AddReply(9011, 9883, 9882); //@t
				var_0_object->AddReply(11150, -1, 12339); //@t
				return 0;
			}
			if(var_40_string == 9883) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9013, 9873, 9884); //@t
				return 0;
			}
			if(var_40_string == 9873) {
				func_3846(var_41_bool, "Neutral");
				var_0_object->SetMessage(9002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9003, -1, 9874); //@t
				var_0_object->AddReply(9004, -1, 9875); //@t
				return 0;
			}
			var_3_string = true;
			bool var_831_bool;
			func_7949(var_831_bool);
			if(var_831_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf17";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 12081) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8207();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_8251();
				object var_114_object = var_1_object;
				func_8257(var_0_object);
			}
			if(var_41_bool == 12082) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_8207();
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_8251();
				object var_146_object = var_1_object;
				func_8257(var_0_object);
			}
			if(var_41_bool == 12079) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_8207();
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_8251();
				object var_154_object = var_1_object;
				func_8257(var_0_object);
			}
			if(var_41_bool == 11191) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_8207();
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_8251();
				object var_162_object = var_1_object;
				func_8257(var_0_object);
			}
			if(var_41_bool == 12096) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_8273();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_8279();
			}
			if(var_41_bool == 12097) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_8273();
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_8586();
			}
			if(var_41_bool == 12105) {
				object var_267_object; object var_268_object;
				var_267_object = var_1_object;
				var_268_object = var_0_object;
				func_8330();
				object var_271_object = var_1_object;
				func_8336(var_0_object);
			}
			if(var_41_bool == 10563) {
				object var_330_object; object var_331_object;
				var_330_object = var_1_object;
				var_331_object = var_0_object;
				func_8330();
				object var_332_object = var_1_object;
				func_8336(var_0_object);
			}
			if(var_41_bool == 12103) {
				object var_336_object; object var_337_object;
				var_336_object = var_1_object;
				var_337_object = var_0_object;
				func_8330();
				object var_338_object = var_1_object;
				func_8336(var_0_object);
			}
			if(var_41_bool == 10572) {
				object var_342_object; object var_343_object;
				var_342_object = var_1_object;
				var_343_object = var_0_object;
				func_8330();
				object var_344_object = var_1_object;
				func_8336(var_0_object);
			}
			if(var_41_bool == 10573) {
				object var_348_object; object var_349_object;
				var_348_object = var_1_object;
				var_349_object = var_0_object;
				func_8330();
				object var_350_object = var_1_object;
				func_8336(var_0_object);
			}
			if(var_40_string == 11951) {
				bool var_354_bool = false;
				bool var_355_bool;
				func_9088(var_1_object);
				if(var_355_bool != 0) {
					bool var_363_bool;
					func_9100(var_1_object);
					if(var_363_bool != 0)
						var_354_bool = true;
				}
				if(var_354_bool != 0) {
					object var_369_object; object var_370_object;
					var_369_object = var_1_object;
					var_370_object = var_0_object;
					func_8714();
					func_5568(var_41_bool, "Neutral");
					var_0_object->SetMessage(10811); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10812, 11147, 11952); //@t
					return 0;
				}
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10836); //@t
				var_0_object->ClearReplies(); //@t
				bool var_394_bool = false;
				bool var_395_bool;
				func_9112(var_1_object);
				if(var_395_bool != 0) {
					bool var_401_bool;
					func_9124(var_1_object);
					if(var_401_bool != 0)
						var_394_bool = true;
				}
				if(var_394_bool != 0)
					var_0_object->AddReply(10839, 11148, 11983); //@t
				bool var_410_bool;
				func_8838(var_410_bool, var_1_object);
				if(var_410_bool != 0)
					var_0_object->AddReply(10838, 10519, 11982); //@t
				bool var_417_bool;
				func_9136(var_417_bool, var_1_object);
				if(var_417_bool != 0)
					var_0_object->AddReply(11508, 12709, 12708); //@t
				bool var_439_bool = false;
				bool var_440_bool;
				func_9166(var_440_bool, var_1_object);
				if(var_440_bool != 0) {
					bool var_453_bool;
					func_9194(var_1_object);
					if(var_453_bool != 0)
						var_439_bool = true;
				}
				if(var_439_bool != 0)
					var_0_object->AddReply(10837, 10553, 11981); //@t
				var_0_object->AddReply(11480, -1, 12686); //@t
				return 0;
			}
			if(var_40_string == 10553) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9594); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9595, 10555, 10554); //@t
				var_0_object->AddReply(9612, 10555, 10574); //@t
				var_0_object->AddReply(9613, 10555, 10576); //@t
				return 0;
			}
			if(var_40_string == 10555) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9597, 10557, 10556); //@t
				var_0_object->AddReply(9608, 10571, 10570); //@t
				return 0;
			}
			if(var_40_string == 10571) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9610, -1, 10572); //@t
				var_0_object->AddReply(9611, -1, 10573); //@t
				return 0;
			}
			if(var_40_string == 10557) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9598); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9599, 10559, 10558); //@t
				var_0_object->AddReply(9607, 10559, 10568); //@t
				return 0;
			}
			if(var_40_string == 10559) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9600); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9601, 10561, 10560); //@t
				var_0_object->AddReply(9605, 10561, 10564); //@t
				var_0_object->AddReply(9606, 10561, 10566); //@t
				return 0;
			}
			if(var_40_string == 10561) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9603, 12104, 10562); //@t
				var_0_object->AddReply(9604, -1, 10563); //@t
				var_0_object->AddReply(10944, -1, 12103); //@t
				return 0;
			}
			if(var_40_string == 12104) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10946, -1, 12105); //@t
				return 0;
			}
			if(var_40_string == 12709) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(11509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11510, 12711, 12710); //@t
				var_0_object->AddReply(11512, 12713, 12712); //@t
				return 0;
			}
			if(var_40_string == 12713) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(11513); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11514, 12715, 12714); //@t
				return 0;
			}
			if(var_40_string == 12715) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(11515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11516, -1, 12716); //@t
				return 0;
			}
			if(var_40_string == 12711) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(11511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11517, 12718, 12717); //@t
				return 0;
			}
			if(var_40_string == 12718) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(11518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11519, -1, 12719); //@t
				return 0;
			}
			if(var_40_string == 10519) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9568, 10521, 10520); //@t
				var_0_object->AddReply(9589, 10521, 10545); //@t
				var_0_object->AddReply(9590, 10548, 10547); //@t
				return 0;
			}
			if(var_40_string == 10548) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9592, 10521, 10549); //@t
				var_0_object->AddReply(9593, 10521, 10551); //@t
				return 0;
			}
			if(var_40_string == 10521) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9572, 10525, 10524); //@t
				var_0_object->AddReply(9570, -1, 10522); //@t
				var_0_object->AddReply(9571, -1, 10523); //@t
				return 0;
			}
			if(var_40_string == 10525) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9574, 10527, 10526); //@t
				var_0_object->AddReply(9585, 10540, 10539); //@t
				return 0;
			}
			if(var_40_string == 10540) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9587, 10527, 10541); //@t
				var_0_object->AddReply(9588, 10527, 10543); //@t
				return 0;
			}
			if(var_40_string == 10527) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9577, 10530, 10529); //@t
				return 0;
			}
			if(var_40_string == 10530) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9579, 10532, 10531); //@t
				var_0_object->AddReply(9583, 10532, 10535); //@t
				var_0_object->AddReply(9584, 10532, 10537); //@t
				return 0;
			}
			if(var_40_string == 10532) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(9580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9581, -1, 10533); //@t
				var_0_object->AddReply(9582, -1, 10534); //@t
				return 0;
			}
			if(var_40_string == 11148) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10115, 11154, 11151); //@t
				return 0;
			}
			if(var_40_string == 11154) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10118); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10119, 11156, 11155); //@t
				var_0_object->AddReply(10933, 12088, 12087); //@t
				var_0_object->AddReply(10124, 11161, 11160); //@t
				return 0;
			}
			if(var_40_string == 11161) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10126, 11984, 11162); //@t
				var_0_object->AddReply(10127, 11984, 11163); //@t
				return 0;
			}
			if(var_40_string == 12088) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10935, 12090, 12089); //@t
				return 0;
			}
			if(var_40_string == 12090) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10939, 11156, 12093); //@t
				var_0_object->AddReply(10937, 12092, 12091); //@t
				return 0;
			}
			if(var_40_string == 12092) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10938); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10943, 11156, 12101); //@t
				return 0;
			}
			if(var_40_string == 11156) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10121, 11984, 11157); //@t
				var_0_object->AddReply(10123, 12094, 11159); //@t
				return 0;
			}
			if(var_40_string == 12094) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10940); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10122, 11984, 11158); //@t
				return 0;
			}
			if(var_40_string == 11984) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10941, -1, 12096); //@t
				var_0_object->AddReply(10942, -1, 12097); //@t
				return 0;
			}
			if(var_40_string == 11147) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10138, 11181, 11180); //@t
				var_0_object->AddReply(10140, 11183, 11182); //@t
				return 0;
			}
			if(var_40_string == 11183) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10141); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10142, 11186, 11184); //@t
				var_0_object->AddReply(10143, 12070, 11185); //@t
				return 0;
			}
			if(var_40_string == 12070) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10922, 11181, 12071); //@t
				var_0_object->AddReply(10923, 12073, 12072); //@t
				return 0;
			}
			if(var_40_string == 12073) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10925, 11181, 12074); //@t
				return 0;
			}
			if(var_40_string == 11186) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10919, 11175, 12068); //@t
				var_0_object->AddReply(10920, -1, 12069); //@t
				return 0;
			}
			if(var_40_string == 11181) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10139); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10145, 11188, 11187); //@t
				var_0_object->AddReply(10134, 11175, 11174); //@t
				return 0;
			}
			if(var_40_string == 11175) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10135); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10136, 12083, 11176); //@t
				var_0_object->AddReply(10137, 12083, 11178); //@t
				return 0;
			}
			if(var_40_string == 12083) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10932, 11188, 12085); //@t
				return 0;
			}
			if(var_40_string == 11188) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10146); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10147, 11190, 11189); //@t
				var_0_object->AddReply(10149, -1, 11191); //@t
				return 0;
			}
			if(var_40_string == 11190) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10926, 12080, 12078); //@t
				var_0_object->AddReply(10927, -1, 12079); //@t
				return 0;
			}
			if(var_40_string == 12080) {
				func_5568(var_41_bool, "Neutral");
				var_0_object->SetMessage(10928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10929, -1, 12081); //@t
				var_0_object->AddReply(10930, -1, 12082); //@t
				return 0;
			}
			var_3_string = true;
			bool var_850_bool;
			func_7949(var_850_bool);
			if(var_850_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x15d1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_bool == 12763) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8472();
				object var_91_object = var_1_object;
				func_8143(var_0_object);
			}
			if(var_41_bool == 12778) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_8495();
			}
			if(var_40_string == 12752) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11558); //@t
				var_0_object->ClearReplies(); //@t
				bool var_141_bool;
				func_9206(var_1_object);
				if(var_141_bool != 0)
					var_0_object->AddReply(11559, 12754, 12753); //@t
				bool var_152_bool;
				func_9218(var_1_object);
				if(var_152_bool != 0)
					var_0_object->AddReply(11570, 12765, 12764); //@t
				var_0_object->AddReply(11589, -1, 12784); //@t
				return 0;
			}
			if(var_40_string == 12765) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11572, 12767, 12766); //@t
				bool var_171_bool;
				func_8778(var_1_object);
				if(var_171_bool != 0)
					var_0_object->AddReply(11585, -1, 12779); //@t
				return 0;
			}
			if(var_40_string == 12767) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11574, 12769, 12768); //@t
				return 0;
			}
			if(var_40_string == 12769) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11576, 12771, 12770); //@t
				return 0;
			}
			if(var_40_string == 12771) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11578, 12773, 12772); //@t
				var_0_object->AddReply(11586, 12781, 12780); //@t
				return 0;
			}
			if(var_40_string == 12781) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11587); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11588, 12773, 12782); //@t
				return 0;
			}
			if(var_40_string == 12773) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11580, 12775, 12774); //@t
				return 0;
			}
			if(var_40_string == 12775) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11582, 12777, 12776); //@t
				return 0;
			}
			if(var_40_string == 12777) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11584, -1, 12778); //@t
				return 0;
			}
			if(var_40_string == 12754) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11561, 12756, 12755); //@t
				return 0;
			}
			if(var_40_string == 12756) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11563, 12758, 12757); //@t
				return 0;
			}
			if(var_40_string == 12758) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11564); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11565, 12760, 12759); //@t
				return 0;
			}
			if(var_40_string == 12760) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11567, 12762, 12761); //@t
				return 0;
			}
			if(var_40_string == 12762) {
				func_6907(var_41_bool, "Neutral");
				var_0_object->SetMessage(11568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11569, -1, 12763); //@t
				return 0;
			}
			var_3_string = true;
			bool var_267_bool;
			func_7949(var_267_bool);
			if(var_267_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b0c";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int)
	{
		if(1 != 0) {
			func_7875();
			if(var_41_int == 14919) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_8525();
			}
			if(var_41_int == 14927) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_8531();
			}
			if(var_41_int == 14931) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_8519();
			}
			if(var_41_int == 14943) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_8537();
			}
			if(var_40_int == 14918) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13660); //@t
				var_0_object->ClearReplies(); //@t
				bool var_86_bool = false;
				bool var_87_bool;
				func_9338(var_1_object);
				if(var_87_bool != 0) {
					bool var_95_bool;
					func_9314(var_1_object);
					if(var_95_bool != 0)
						var_86_bool = true;
				}
				if(var_86_bool != 0)
					var_0_object->AddReply(13661, 14920, 14919); //@t
				bool var_104_bool = false;
				bool var_105_bool = false;
				bool var_106_bool;
				func_9314(var_1_object);
				if(!var_106_bool) { //@nz
					bool var_109_bool;
					func_9350(var_1_object);
					if(var_109_bool != 0)
						var_105_bool = true;
				}
				if(var_105_bool != 0) {
					bool var_115_bool;
					func_9326(var_1_object);
					if(var_115_bool != 0)
						var_104_bool = true;
				}
				if(var_104_bool != 0)
					var_0_object->AddReply(13669, 14928, 14927); //@t
				bool var_124_bool = false;
				bool var_125_bool;
				func_9326(var_1_object);
				if(var_125_bool != 0) {
					bool var_127_bool;
					func_9362(var_1_object);
					if(var_127_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0)
					var_0_object->AddReply(13683, 14944, 14943); //@t
				var_0_object->AddReply(13674, -1, 14932); //@t
				return 0;
			}
			if(var_40_int == 14944) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13685, 14946, 14945); //@t
				return 0;
			}
			if(var_40_int == 14946) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13686); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13687, -1, 14947); //@t
				return 0;
			}
			if(var_40_int == 14928) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13671, 14930, 14929); //@t
				var_0_object->AddReply(13675, 14930, 14933); //@t
				return 0;
			}
			if(var_40_int == 14930) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13673, -1, 14931); //@t
				return 0;
			}
			if(var_40_int == 14920) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13663, 14922, 14921); //@t
				var_0_object->AddReply(13677, 14937, 14936); //@t
				return 0;
			}
			if(var_40_int == 14937) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13679, 14924, 14938); //@t
				var_0_object->AddReply(13680, -1, 14940); //@t
				return 0;
			}
			if(var_40_int == 14922) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13665, 14924, 14923); //@t
				return 0;
			}
			if(var_40_int == 14924) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13667, 14926, 14925); //@t
				return 0;
			}
			if(var_40_int == 14926) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13676, 14941, 14935); //@t
				return 0;
			}
			if(var_40_int == 14941) {
				func_7433(var_41_int, "Neutral");
				var_0_object->SetMessage(13681); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13682, -1, 14942); //@t
				return 0;
			}
			var_3_string = true;
			bool var_218_bool;
			func_7949(var_218_bool);
			if(var_218_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d1a";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_9218(bool var_152_bool)
{
	int var_154_int;
	func_7892(var_154_int, "ood5BigVlad1");
	if(var_154_int == 0) {
		var_152_bool = true;
		return 0;
	}
	var_152_bool = false;
}


void func_9734(void)
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_8201(void)
{
	@SetVariable("ood3BigVlad5", 1);
}


// @pe
void func_9738(object var_41_object)
{
	var_42_bool = GlobalVars[1];
	if(!var_42_bool) { //@nz
		int var_44_int; object var_45_object;
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_153_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_154_bool;
	func_7930(var_154_bool, 1);
	if(var_154_bool != 0) {
		int var_162_int; object var_163_object;
		var_41_object = var_163_object;
		TaskCall(6);
		func_1113(var_164_object, var_162_int, var_163_object);
		TaskReturn();
		return 0;
	}
	bool var_359_bool;
	func_7930(var_359_bool, 2);
	if(var_359_bool != 0) {
		int var_361_int; object var_362_object;
		var_41_object = var_362_object;
		TaskCall(8);
		func_2719(var_363_object, var_361_int, var_362_object);
		TaskReturn();
		return 0;
	}
	bool var_471_bool;
	func_7930(var_471_bool, 3);
	if(var_471_bool != 0) {
		int var_473_int; object var_474_object;
		var_41_object = var_474_object;
		TaskCall(10);
		func_3610(var_475_object, var_473_int, var_474_object);
		TaskReturn();
		return 0;
	}
	bool var_606_bool;
	func_7930(var_606_bool, 4);
	if(var_606_bool != 0) {
		int var_608_int; object var_609_object;
		var_41_object = var_609_object;
		TaskCall(12);
		func_5360(var_610_object, var_608_int, var_609_object);
		TaskReturn();
		return 0;
	}
	bool var_742_bool;
	func_7930(var_742_bool, 5);
	if(var_742_bool != 0) {
		int var_744_int; object var_745_object;
		var_41_object = var_745_object;
		TaskCall(14);
		func_6771(var_746_object, var_744_int, var_745_object);
		TaskReturn();
		return 0;
	}
	bool var_806_bool;
	func_7930(var_806_bool, 6);
	if(var_806_bool != 0) {
		int var_808_int; object var_809_object;
		var_41_object = var_809_object;
		TaskCall(4);
		func_322(var_810_object, var_808_int, var_809_object);
		TaskReturn();
		return 0;
	}
	bool var_937_bool;
	func_7930(var_937_bool, 8);
	if(var_937_bool != 0) {
		int var_939_int; object var_940_object;
		var_41_object = var_940_object;
		TaskCall(16);
		func_7250(var_941_object, var_939_int, var_940_object);
		TaskReturn();
		return 0;
	}
	bool var_1031_bool;
	func_7936(var_1031_bool);
}


// @pe
void func_8714(void)
{
	@SetVariable("d4BigVladVisit", 1);
}


// @pe
void func_9230(bool var_208_bool)
{
	int var_210_int;
	func_7892(var_210_int, "d6q02");
	if(var_210_int == 1000)
		var_208_bool = true;
	var_208_bool = false;
}


void func_8207(void)
{
	@SetVariable("d4q01", 1);
	object var_52_object;
	func_9539(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_7916(var_63_float);
	var_49_object->AddMark("d4q01BigVladGotoLara", "pt_map_lara", 1, 11481, var_63_float);
	float var_70_float;
	func_7916(var_70_float);
	var_49_object->AddMark("d4q01BigVladGotoSklad", "pt_map_warehouse_gangster", 1, 11482, var_70_float);
	float var_75_float;
	func_7916(var_75_float);
	var_49_object->AddMark("d4q01BigVladGotoLaraSelf", "pt_map_bigvlad", 1, 15320, var_75_float);
	func_9622();
	func_9638();
}
EMIT "Stack[-1] = 0";


void func_8720(void)
{
	object var_121_object;
	func_9539(var_121_object);
	object var_120_object;
	var_121_object = var_120_object;
	float var_126_float;
	func_7916(var_126_float);
	var_120_object->AddMark("d6q02BigVlad", "pt_map_bigvlad", 0, 15380, var_126_float);
}
EMIT "Stack[-1] = 0";


void func_3610(object var_0_object, int var_473_int, object var_474_object)
{
	var_0_object = var_474_object;
	bool var_484_bool; object var_485_object;
	var_474_object = var_485_object;
	func_7797(var_484_bool, var_485_object);
	if(!var_484_bool) { //@nz
		var_473_int = -2;
		return 8;
	}
	object var_480_object;
	@CreateDialog(var_480_object);
	int var_487_int;
	func_7945(var_487_int);
	var_480_object->SetNPCName(var_487_int);
	string var_488_string;
	func_7947(var_488_string);
	var_480_object->SetPhoto(var_488_string);
	int var_489_int;
	func_9589(var_489_int);
	var_480_object->SetPlayerName(var_489_int);
	bool var_481_bool;
	@IsOverrideActive(var_481_bool);
	if(var_481_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	@DoDialog(var_480_object);
	object var_491_object; object var_492_object;
	var_474_object = var_491_object;
	var_480_object = var_492_object;
	TaskCall(11);
	func_3673(var_493_object, var_494_object, var_495_string, var_496_bool, var_491_object, var_492_object);
	TaskReturn();
	bool var_483_bool;
	var_480_object->IsDialogEnd(var_483_bool);
	
	for(;;) {
		var_604_bool = !var_483_bool; //@nz
		if(var_604_bool == 0) goto Label_3662;
		@sync();
		var_480_object->IsDialogEnd(var_483_bool);
	}
	
Label_3662:
	object var_605_object;
	var_474_object = var_605_object;
	func_7853();
	@StopDialog(var_480_object);
	var_480_object->GetReturnValue(-1);
	int var_482_int = var_473_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9242(bool var_215_bool)
{
	int var_217_int;
	func_7892(var_217_int, "d6q02");
	if(var_217_int == -1)
		var_215_bool = true;
	var_215_bool = false;
}


// @pe
void func_8736(void)
{
	@SetVariable("d6BigVladVisit", 1);
}


// @pe
void func_9254(bool var_196_bool)
{
	int var_198_int;
	func_7892(var_198_int, "ood6BigVlad1");
	if(var_198_int == 0) {
		var_196_bool = true;
		return 0;
	}
	var_196_bool = false;
}


// @pe
void func_551(object var_2_object, string var_153_string)
{
	bool var_154_bool;
	func_7949(var_154_bool);
	if(!var_154_bool) //@nz
		return 0;
	if(var_153_string == var_2_object)
		return 0;
	string var_157_string;
	func_7857(var_157_string);
	var_2_object = var_157_string;
}


// @pe
void func_8742(void)
{
	@SetVariable("KnowTermitnik", 1);
}


// @pe
void func_8748(void)
{
	@SetVariable("ood1BigVlad1", 1);
}


void func_49(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_7797(var_55_bool, var_56_object);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_96_int;
	func_7945(var_96_int);
	var_51_object->SetNPCName(var_96_int);
	string var_97_string;
	func_7947(var_97_string);
	var_51_object->SetPhoto(var_97_string);
	int var_98_int;
	func_9589(var_98_int);
	var_51_object->SetPlayerName(var_98_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_107_object; object var_108_object;
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_151_bool = !var_54_bool; //@nz
		if(var_151_bool == 0) goto Label_101;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_101:
	object var_152_object;
	var_45_object = var_152_object;
	func_7853();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9266(bool var_202_bool)
{
	int var_204_int;
	func_7892(var_204_int, "d6q02KnowAboutAttack");
	if(var_204_int == 1)
		var_202_bool = true;
	var_202_bool = false;
}


// @pe
void func_8754(void)
{
	@SetVariable("ood1BigVlad2", 1);
}


// @pe
void func_8760(void)
{
	@SetVariable("ood1BigVlad3", 1);
}


// @pe
void func_8251(void)
{
	@SetVariable("ood4BigVlad1", 1);
}


// @pe
void func_9278(bool var_222_bool)
{
	int var_224_int;
	func_7892(var_224_int, "d6q02Trigger");
	if(var_224_int != 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


// @pe
void func_8766(bool var_240_bool)
{
	int var_242_int;
	func_7892(var_242_int, "d1q01FirstGeorgVisit");
	if(var_242_int == 1)
		var_240_bool = true;
	var_240_bool = false;
}


// @pe
void func_8257(object var_115_object)
{
	object var_119_object;
	func_9539(var_119_object);
	object var_116_object;
	var_119_object = var_116_object;
	func_9556(var_116_object, "pt_map_lara", (float)2);
	object var_139_object;
	func_9539(var_139_object);
	var_115_object->ShowMap(var_139_object);
}


// @pe
void func_9290(bool var_130_bool)
{
	int var_132_int;
	func_7892(var_132_int, "d6q01");
	if(var_132_int == 1)
		var_130_bool = true;
	var_130_bool = false;
}


// @pe
void func_8778(bool var_171_bool)
{
	int var_173_int;
	func_7892(var_173_int, "KnowMat");
	if(var_173_int == 1)
		var_171_bool = true;
	var_171_bool = false;
}


// @pe
void func_8273(void)
{
	@SetVariable("ood4BigVlad2", 1);
}


void func_7250(object var_0_object, int var_939_int, object var_940_object)
{
	var_0_object = var_940_object;
	bool var_950_bool; object var_951_object;
	var_940_object = var_951_object;
	func_7797(var_950_bool, var_951_object);
	if(!var_950_bool) { //@nz
		var_939_int = -2;
		return 8;
	}
	object var_946_object;
	@CreateDialog(var_946_object);
	int var_953_int;
	func_7945(var_953_int);
	var_946_object->SetNPCName(var_953_int);
	string var_954_string;
	func_7947(var_954_string);
	var_946_object->SetPhoto(var_954_string);
	int var_955_int;
	func_9589(var_955_int);
	var_946_object->SetPlayerName(var_955_int);
	bool var_947_bool;
	@IsOverrideActive(var_947_bool);
	if(var_947_bool != 0) {
		var_939_int = -2;
		return 8;
	}
	@DoDialog(var_946_object);
	object var_957_object; object var_958_object;
	var_940_object = var_957_object;
	var_946_object = var_958_object;
	TaskCall(17);
	func_7313(var_959_object, var_960_object, var_961_string, var_962_bool, var_957_object, var_958_object);
	TaskReturn();
	bool var_949_bool;
	var_946_object->IsDialogEnd(var_949_bool);
	
	for(;;) {
		var_1029_bool = !var_949_bool; //@nz
		if(var_1029_bool == 0) goto Label_7302;
		@sync();
		var_946_object->IsDialogEnd(var_949_bool);
	}
	
Label_7302:
	object var_1030_object;
	var_940_object = var_1030_object;
	func_7853();
	@StopDialog(var_946_object);
	var_946_object->GetReturnValue(-1);
	int var_948_int = var_939_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9302(bool var_183_bool)
{
	int var_185_int;
	func_7892(var_185_int, "ood6BigVlad2");
	if(var_185_int == 0) {
		var_183_bool = true;
		return 0;
	}
	var_183_bool = false;
}


// @pe
void func_8790(bool var_121_bool)
{
	int var_123_int;
	func_7892(var_123_int, "ood2BigVlad1");
	if(var_123_int == 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_8279(void)
{
	@SetVariable("d4q01", 4);
	object var_176_object;
	func_9539(var_176_object);
	object var_173_object;
	var_176_object = var_173_object;
	float var_181_float;
	func_7916(var_181_float);
	var_173_object->AddMark("d4q01BigVladGotoSobor", "pt_map_sobor", 1, 15325, var_181_float);
	float var_186_float;
	func_7916(var_186_float);
	var_173_object->AddMark("d4q01BigVladGotoSoborAndTheaterSelf", "pt_map_bigvlad", 1, 15327, var_186_float);
	float var_191_float;
	func_7916(var_191_float);
	var_173_object->AddMark("d4q01BigVladGotoTheater", "pt_map_theater", 1, 15326, var_191_float);
	func_9654();
	bool var_201_bool;
	func_7904(var_201_bool, "quest_d4_01", "pers");
	bool var_207_bool;
	func_7904(var_207_bool, "quest_d4_01", "key_actors");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3673(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_491_object, object var_492_object)
{
	var_0_object = var_492_object;
	var_1_object = var_491_object;
	var_3_object = false;
	if(1 != 0) {
		func_3846(var_492_object, "Neutral");
		var_0_object->SetMessage(8926); //@t
		var_0_object->ClearReplies(); //@t
		bool var_504_bool = false;
		bool var_505_bool;
		func_8956(var_1_object);
		if(var_505_bool != 0) {
			bool var_511_bool;
			func_8968(var_1_object);
			if(var_511_bool != 0)
				var_504_bool = true;
		}
		if(var_504_bool != 0)
			var_0_object->AddReply(8977, 9847, 9846); //@t
		bool var_520_bool = false;
		bool var_521_bool = false;
		bool var_522_bool;
		func_8992(var_1_object);
		if(var_522_bool != 0) {
			bool var_528_bool;
			func_8956(var_1_object);
			if(var_528_bool != 0)
				var_521_bool = true;
		}
		if(var_521_bool != 0) {
			bool var_530_bool;
			func_8968(var_1_object);
			if(!var_530_bool) //@nz
				var_520_bool = true;
		}
		if(var_520_bool != 0)
			var_0_object->AddReply(9005, 9877, 9876); //@t
		bool var_536_bool = false;
		bool var_537_bool;
		func_9028(var_1_object);
		if(var_537_bool != 0) {
			bool var_543_bool;
			func_9016(var_1_object);
			if(var_543_bool != 0)
				var_536_bool = true;
		}
		if(var_536_bool != 0)
			var_0_object->AddReply(9008, 9880, 9879); //@t
		bool var_552_bool = false;
		bool var_553_bool;
		func_9040(var_1_object);
		if(var_553_bool != 0) {
			bool var_559_bool;
			func_9052(var_1_object);
			if(var_559_bool != 0)
				var_552_bool = true;
		}
		if(var_552_bool != 0)
			var_0_object->AddReply(10218, 11265, 11264); //@t
		bool var_568_bool = false;
		bool var_569_bool;
		func_9076(var_1_object);
		if(var_569_bool != 0) {
			bool var_575_bool;
			func_9064(var_1_object);
			if(var_575_bool != 0)
				var_568_bool = true;
		}
		if(var_568_bool != 0)
			var_0_object->AddReply(10373, 11439, 11438); //@t
		var_0_object->AddReply(8975, 9792, 9844); //@t
		var_0_object->AddReply(8976, 9815, 9845); //@t
		var_0_object->AddReply(9020, 9890, 9892); //@t
		var_0_object->AddReply(11139, -1, 12328); //@t
		goto Label_3816;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe5d";
	}
Label_3816:
	bool var_596_bool;
	func_7949(var_596_bool);
	if(var_596_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7857(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3845;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3845:
		return 0;

	}
	
}


void func_1113(object var_0_object, int var_162_int, object var_163_object)
{
	var_0_object = var_163_object;
	bool var_173_bool; object var_174_object;
	var_163_object = var_174_object;
	func_7797(var_173_bool, var_174_object);
	if(!var_173_bool) { //@nz
		var_162_int = -2;
		return 8;
	}
	object var_169_object;
	@CreateDialog(var_169_object);
	int var_176_int;
	func_7945(var_176_int);
	var_169_object->SetNPCName(var_176_int);
	string var_177_string;
	func_7947(var_177_string);
	var_169_object->SetPhoto(var_177_string);
	int var_178_int;
	func_9589(var_178_int);
	var_169_object->SetPlayerName(var_178_int);
	bool var_170_bool;
	@IsOverrideActive(var_170_bool);
	if(var_170_bool != 0) {
		var_162_int = -2;
		return 8;
	}
	@DoDialog(var_169_object);
	object var_180_object; object var_181_object;
	var_163_object = var_180_object;
	var_169_object = var_181_object;
	TaskCall(7);
	func_1176(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object);
	TaskReturn();
	bool var_172_bool;
	var_169_object->IsDialogEnd(var_172_bool);
	
	for(;;) {
		var_357_bool = !var_172_bool; //@nz
		if(var_357_bool == 0) goto Label_1165;
		@sync();
		var_169_object->IsDialogEnd(var_172_bool);
	}
	
Label_1165:
	object var_358_object;
	var_163_object = var_358_object;
	func_7853();
	@StopDialog(var_169_object);
	var_169_object->GetReturnValue(-1);
	int var_171_int = var_162_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8802(bool var_161_bool)
{
	int var_163_int;
	func_7892(var_163_int, "ood2BigVlad2");
	if(var_163_int == 0) {
		var_161_bool = true;
		return 0;
	}
	var_161_bool = false;
}


// @pe
void func_9314(bool var_95_bool)
{
	int var_97_int;
	func_7892(var_97_int, "d8q01MladVladIsBad");
	if(var_97_int == 1)
		var_95_bool = true;
	var_95_bool = false;
}


void func_7780(bool var_41_bool, object var_42_object)
{
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	bool var_50_bool;
	@Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
}


// @pe
void func_8814(bool var_184_bool)
{
	int var_186_int;
	func_7892(var_186_int, "ood2BigVlad3");
	if(var_186_int == 0) {
		var_184_bool = true;
		return 0;
	}
	var_184_bool = false;
}


// @pe
void func_9326(bool var_115_bool)
{
	int var_117_int;
	func_7892(var_117_int, "d8q01BringBadBoy");
	if(var_117_int == 1)
		var_115_bool = true;
	var_115_bool = false;
}


void func_7792(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_107_object, object var_108_object)
{
	var_0_object = var_108_object;
	var_3_object = false;
	if(1 != 0) {
		object var_114_object; object var_115_object;
		var_114_object = var_107_object;
		var_115_object = var_0_object;
		func_8513();
		func_180(var_108_object, "Neutral");
		var_0_object->SetMessage(401); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(402, 471, 468); //@t
		var_0_object->AddReply(403, 472, 469); //@t
		var_0_object->AddReply(404, -1, 470); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_143_bool;
	func_7949(var_143_bool);
	if(var_143_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7857(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


void func_6771(object var_0_object, int var_744_int, object var_745_object)
{
	var_0_object = var_745_object;
	bool var_755_bool; object var_756_object;
	var_745_object = var_756_object;
	func_7797(var_755_bool, var_756_object);
	if(!var_755_bool) { //@nz
		var_744_int = -2;
		return 8;
	}
	object var_751_object;
	@CreateDialog(var_751_object);
	int var_758_int;
	func_7945(var_758_int);
	var_751_object->SetNPCName(var_758_int);
	string var_759_string;
	func_7947(var_759_string);
	var_751_object->SetPhoto(var_759_string);
	int var_760_int;
	func_9589(var_760_int);
	var_751_object->SetPlayerName(var_760_int);
	bool var_752_bool;
	@IsOverrideActive(var_752_bool);
	if(var_752_bool != 0) {
		var_744_int = -2;
		return 8;
	}
	@DoDialog(var_751_object);
	object var_762_object; object var_763_object;
	var_745_object = var_762_object;
	var_751_object = var_763_object;
	TaskCall(15);
	func_6834(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object);
	TaskReturn();
	bool var_754_bool;
	var_751_object->IsDialogEnd(var_754_bool);
	
	for(;;) {
		var_804_bool = !var_754_bool; //@nz
		if(var_804_bool == 0) goto Label_6823;
		@sync();
		var_751_object->IsDialogEnd(var_754_bool);
	}
	
Label_6823:
	object var_805_object;
	var_745_object = var_805_object;
	func_7853();
	@StopDialog(var_751_object);
	var_751_object->GetReturnValue(-1);
	int var_753_int = var_744_int;
}
EMIT "Stack[-4] = 0";


void func_7797(bool var_55_bool, object var_56_object)
{
	cvector var_66_cvector;
	var_56_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_56_object->GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_73_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_74_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_77_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_7882(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * 70) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
}


// @pe
void func_9338(bool var_87_bool)
{
	int var_89_int;
	func_7892(var_89_int, "ood8BigVlad1");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
}


// @pe
void func_8826(bool var_195_bool)
{
	int var_197_int;
	func_7892(var_197_int, "ood2BigVlad4");
	if(var_197_int == 0) {
		var_195_bool = true;
		return 0;
	}
	var_195_bool = false;
}


// @pe
void func_8838(bool var_410_bool, object var_411_object)
{
	object var_413_object;
	var_411_object = var_413_object;
	func_9494(var_413_object);
	bool var_412_bool;
	if(var_412_bool != 0) {
		var_410_bool = true;
		return 0;
	}
	var_410_bool = false;
}


// @pe
void func_9350(bool var_109_bool)
{
	int var_111_int;
	func_7892(var_111_int, "ood8BigVlad2");
	if(var_111_int == 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


// @pe
void func_8330(void)
{
	@SetVariable("ood4BigVlad3", 1);
}


// @pe
void func_8848(bool var_129_bool)
{
	int var_131_int;
	func_7892(var_131_int, "d2q01");
	if(var_131_int == 0) {
		var_129_bool = true;
		return 0;
	}
	var_129_bool = false;
}


void func_8336(object var_271_object)
{
	object var_279_object;
	func_9539(var_279_object);
	object var_276_object;
	var_279_object = var_276_object;
	object var_277_object;
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoLara");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoLaraSelf");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoSklad");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoSobor");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01BigVladGotoTheater");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01LaraGotoMladVlad");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01LaraGotoMladVladSelf");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01LaraGotoOspina");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01LaraGotoOspinaSelf");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01MladVladGotoBigVlad");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01MladVladGotoBigVladSelf");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01MladVladGotoOspina");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01OspinaGotoLara");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01WastedMale");
	if(var_277_object != 0)
		var_277_object->Remove();
	var_276_object->FindMark(var_277_object, "d4q01Whitemask");
	if(var_277_object != 0)
		var_277_object->Remove();
	func_9670();
	bool var_321_bool;
	func_7904(var_321_bool, "quest_d4_01", "completed");
	int var_278_int;
	var_271_object->RemoveItemByType(var_278_int, "d4q01_sobor_key", 1);
	var_271_object->RemoveItemByType(var_278_int, "d4q01_theater_key", 1);
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_7313(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_957_object, object var_958_object)
{
	var_0_object = var_958_object;
	var_1_object = var_957_object;
	var_3_object = false;
	if(1 != 0) {
		func_7433(var_958_object, "Neutral");
		var_0_object->SetMessage(13660); //@t
		var_0_object->ClearReplies(); //@t
		bool var_970_bool = false;
		bool var_971_bool;
		func_9338(var_1_object);
		if(var_971_bool != 0) {
			bool var_977_bool;
			func_9314(var_1_object);
			if(var_977_bool != 0)
				var_970_bool = true;
		}
		if(var_970_bool != 0)
			var_0_object->AddReply(13661, 14920, 14919); //@t
		bool var_986_bool = false;
		bool var_987_bool = false;
		bool var_988_bool;
		func_9314(var_1_object);
		if(!var_988_bool) { //@nz
			bool var_991_bool;
			func_9350(var_1_object);
			if(var_991_bool != 0)
				var_987_bool = true;
		}
		if(var_987_bool != 0) {
			bool var_997_bool;
			func_9326(var_1_object);
			if(var_997_bool != 0)
				var_986_bool = true;
		}
		if(var_986_bool != 0)
			var_0_object->AddReply(13669, 14928, 14927); //@t
		bool var_1006_bool = false;
		bool var_1007_bool;
		func_9326(var_1_object);
		if(var_1007_bool != 0) {
			bool var_1009_bool;
			func_9362(var_1_object);
			if(var_1009_bool != 0)
				var_1006_bool = true;
		}
		if(var_1006_bool != 0)
			var_0_object->AddReply(13683, 14944, 14943); //@t
		var_0_object->AddReply(13674, -1, 14932); //@t
		goto Label_7403;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c95";
	}
Label_7403:
	bool var_1021_bool;
	func_7949(var_1021_bool);
	if(var_1021_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7857(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_7432;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7432:
		return 0;

	}
	
}


// @pe
void func_9362(bool var_127_bool)
{
	int var_129_int;
	func_7892(var_129_int, "ood8BigVlad3");
	if(var_129_int == 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


// @pe
void func_1176(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_180_object, object var_181_object)
{
	var_0_object = var_181_object;
	var_1_object = var_180_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_187_bool;
		func_9458(var_1_object);
		if(var_187_bool != 0) {
			object var_195_object; object var_196_object;
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_8742();
			func_1432(var_181_object, "Neutral");
			var_0_object->SetMessage(5238); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5240, 6468, 5775); //@t
			var_0_object->AddReply(5239, 6465, 5774); //@t
		} else {
					bool var_219_bool = false;
					bool var_220_bool;
					func_9470(var_1_object);
					if(var_220_bool != 0) {
						bool var_226_bool;
						func_8766(var_1_object);
						if(!var_226_bool) //@nz
							var_219_bool = true;
					}
					if(var_219_bool == 0) goto Label_1252;
					func_1432(var_181_object, "Neutral");
					var_0_object->SetMessage(5253); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5254, 5792, 5791); //@t
					var_0_object->AddReply(5260, 5798, 5797); //@t
					var_0_object->AddReply(5259, -1, 5796); //@t
		}
	}
Label_1402:
	for(;;) {
		bool var_211_bool;
		func_7949(var_211_bool);
		if(var_211_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7857(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1431;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1431:
			return 0;

		}

	}
	
Label_1252:
	func_1432(var_181_object, "Neutral");
	var_0_object->SetMessage(7539); //@t
	var_0_object->ClearReplies(); //@t
	bool var_246_bool = false;
	bool var_247_bool;
	func_9482(var_1_object);
	if(var_247_bool != 0) {
		bool var_253_bool;
		func_8766(var_1_object);
		if(var_253_bool != 0)
			var_246_bool = true;
	}
	if(var_246_bool != 0)
		var_0_object->AddReply(7540, 5777, 8322); //@t
	bool var_258_bool = false;
	bool var_259_bool;
	func_9398(var_1_object);
	if(var_259_bool != 0) {
		bool var_265_bool;
		func_8872(var_1_object);
		if(var_265_bool != 0)
			var_258_bool = true;
	}
	if(var_258_bool != 0)
		var_0_object->AddReply(7548, 8354, 8330); //@t
	bool var_274_bool = false;
	bool var_275_bool;
	func_9374(var_1_object);
	if(var_275_bool != 0) {
		bool var_281_bool;
		func_8884(var_1_object);
		if(var_281_bool != 0)
			var_274_bool = true;
	}
	if(var_274_bool != 0)
		var_0_object->AddReply(7552, 8349, 8334); //@t
	bool var_290_bool = false;
	bool var_291_bool;
	func_9410(var_1_object);
	if(var_291_bool != 0) {
		bool var_297_bool;
		func_8896(var_1_object);
		if(var_297_bool != 0)
			var_290_bool = true;
	}
	if(var_290_bool != 0)
		var_0_object->AddReply(7553, 8350, 8335); //@t
	bool var_306_bool = false;
	bool var_307_bool;
	func_9422(var_1_object);
	if(var_307_bool != 0) {
		bool var_313_bool;
		func_8908(var_1_object);
		if(var_313_bool != 0)
			var_306_bool = true;
	}
	if(var_306_bool != 0)
		var_0_object->AddReply(7556, 8351, 8338); //@t
	bool var_322_bool = false;
	bool var_323_bool;
	func_9004(var_1_object);
	if(var_323_bool != 0) {
		bool var_329_bool;
		func_8920(var_1_object);
		if(var_329_bool != 0)
			var_322_bool = true;
	}
	if(var_322_bool != 0)
		var_0_object->AddReply(7560, 8352, 8342); //@t
	bool var_338_bool = false;
	bool var_339_bool;
	func_9446(var_1_object);
	if(var_339_bool != 0) {
		bool var_345_bool;
		func_8932(var_1_object);
		if(var_345_bool != 0)
			var_338_bool = true;
	}
	if(var_338_bool != 0)
		var_0_object->AddReply(7561, 8353, 8343); //@t
	var_0_object->AddReply(7590, -1, 8376); //@t
	goto Label_1402;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x49c";


// @pe
void func_8860(bool var_167_bool)
{
	int var_169_int;
	func_7892(var_169_int, "d2q01");
	if(var_169_int == 6)
		var_167_bool = true;
	var_167_bool = false;
}


// @pe
void func_9374(bool var_289_bool)
{
	int var_291_int;
	func_7892(var_291_int, "KnowAlexandr");
	if(var_291_int == 1)
		var_289_bool = true;
	var_289_bool = false;
}


void func_2719(object var_0_object, int var_361_int, object var_362_object)
{
	var_0_object = var_362_object;
	bool var_372_bool; object var_373_object;
	var_362_object = var_373_object;
	func_7797(var_372_bool, var_373_object);
	if(!var_372_bool) { //@nz
		var_361_int = -2;
		return 8;
	}
	object var_368_object;
	@CreateDialog(var_368_object);
	int var_375_int;
	func_7945(var_375_int);
	var_368_object->SetNPCName(var_375_int);
	string var_376_string;
	func_7947(var_376_string);
	var_368_object->SetPhoto(var_376_string);
	int var_377_int;
	func_9589(var_377_int);
	var_368_object->SetPlayerName(var_377_int);
	bool var_369_bool;
	@IsOverrideActive(var_369_bool);
	if(var_369_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	@DoDialog(var_368_object);
	object var_379_object; object var_380_object;
	var_362_object = var_379_object;
	var_368_object = var_380_object;
	TaskCall(9);
	func_2782(var_381_object, var_382_object, var_383_string, var_384_bool, var_379_object, var_380_object);
	TaskReturn();
	bool var_371_bool;
	var_368_object->IsDialogEnd(var_371_bool);
	
	for(;;) {
		var_469_bool = !var_371_bool; //@nz
		if(var_469_bool == 0) goto Label_2771;
		@sync();
		var_368_object->IsDialogEnd(var_371_bool);
	}
	
Label_2771:
	object var_470_object;
	var_362_object = var_470_object;
	func_7853();
	@StopDialog(var_368_object);
	var_368_object->GetReturnValue(-1);
	int var_370_int = var_361_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8872(bool var_279_bool)
{
	int var_281_int;
	func_7892(var_281_int, "ood1BigVlad4");
	if(var_281_int == 0) {
		var_279_bool = true;
		return 0;
	}
	var_279_bool = false;
}


// @pe
void func_9386(bool var_139_bool)
{
	int var_141_int;
	func_7892(var_141_int, "ood6BigVlad3");
	if(var_141_int == 0) {
		var_139_bool = true;
		return 0;
	}
	var_139_bool = false;
}


// @pe
void func_7853(void)
{
	@CameraSwitchToNormal();
}


void func_7857(string var_45_string)
{
	@Trace("playing " + var_45_string);
	float var_48_float;
	float var_49_float;
	@lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	@lshPlayAnimation(var_48_float, var_49_float);
	@Trace("start: " + var_48_float);
	@Trace("end: " + var_49_float);
}


// @pe
void func_6834(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_762_object, object var_763_object)
{
	var_0_object = var_763_object;
	var_1_object = var_762_object;
	var_3_object = false;
	if(1 != 0) {
		func_6907(var_763_object, "Neutral");
		var_0_object->SetMessage(11558); //@t
		var_0_object->ClearReplies(); //@t
		bool var_775_bool;
		func_9206(var_1_object);
		if(var_775_bool != 0)
			var_0_object->AddReply(11559, 12754, 12753); //@t
		bool var_784_bool;
		func_9218(var_1_object);
		if(var_784_bool != 0)
			var_0_object->AddReply(11570, 12765, 12764); //@t
		var_0_object->AddReply(11589, -1, 12784); //@t
		goto Label_6877;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ab6";
	}
Label_6877:
	bool var_796_bool;
	func_7949(var_796_bool);
	if(var_796_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_7857(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_6906;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6906:
		return 0;

	}
	
}


// @pe
void func_180(object var_2_object, string var_50_string)
{
	bool var_51_bool;
	func_7949(var_51_bool);
	if(!var_51_bool) //@nz
		return 0;
	if(var_50_string == var_2_object)
		return 0;
	string var_54_string;
	func_7857(var_54_string);
	var_2_object = var_54_string;
}


// @pe
void func_8884(bool var_295_bool)
{
	int var_297_int;
	func_7892(var_297_int, "ood1BigVlad5");
	if(var_297_int == 0) {
		var_295_bool = true;
		return 0;
	}
	var_295_bool = false;
}


// @pe
void func_9398(bool var_273_bool)
{
	int var_275_int;
	func_7892(var_275_int, "KnowAnna");
	if(var_275_int == 1)
		var_273_bool = true;
	var_273_bool = false;
}


// @pe
void func_8896(bool var_311_bool)
{
	int var_313_int;
	func_7892(var_313_int, "ood1BigVlad6");
	if(var_313_int == 0) {
		var_311_bool = true;
		return 0;
	}
	var_311_bool = false;
}


// @pe
void func_9410(bool var_305_bool)
{
	int var_307_int;
	func_7892(var_307_int, "KnowGeorg");
	if(var_307_int == 1)
		var_305_bool = true;
	var_305_bool = false;
}


void func_7875(void)
{
	bool var_43_bool;
	func_7949(var_43_bool);
	if(var_43_bool != 0)
		@lshStopSpeech();
}


void func_7882(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


// @pe
void func_8908(bool var_327_bool)
{
	int var_329_int;
	func_7892(var_329_int, "ood1BigVlad7");
	if(var_329_int == 0) {
		var_327_bool = true;
		return 0;
	}
	var_327_bool = false;
}


// @pe
void func_9422(bool var_321_bool)
{
	int var_323_int;
	func_7892(var_323_int, "KnowMladVlad");
	if(var_323_int == 1)
		var_321_bool = true;
	var_321_bool = false;
}


void func_7892(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
}


// @pe
void func_8920(bool var_343_bool)
{
	int var_345_int;
	func_7892(var_345_int, "ood1BigVlad8");
	if(var_345_int == 0) {
		var_343_bool = true;
		return 0;
	}
	var_343_bool = false;
}


void func_7897(bool var_420_bool, object var_421_object, string var_422_string)
{
	int var_425_int;
	@GetInvItemByName(var_425_int, var_422_string);
	bool var_426_bool;
	var_421_object->HasItem(var_425_int, var_426_bool);
	var_426_bool = var_420_bool;
}


// @pe
void func_9434(bool var_172_bool)
{
	int var_174_int;
	func_7892(var_174_int, "d6BigVladVisit");
	if(var_174_int == 1)
		var_172_bool = true;
	var_172_bool = false;
}


// @pe
void func_2782(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_379_object, object var_380_object)
{
	var_0_object = var_380_object;
	var_1_object = var_379_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_386_bool = false;
		bool var_387_bool;
		func_8790(var_1_object);
		if(var_387_bool != 0) {
			bool var_393_bool;
			func_8848(var_1_object);
			if(var_393_bool != 0)
				var_386_bool = true;
		}
		if(var_386_bool != 0) {
			func_2937(var_380_object, "Neutral");
			var_0_object->SetMessage(6797); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6798, 7491, 7490); //@t
			var_0_object->AddReply(6809, 7491, 7503); //@t
			var_0_object->AddReply(6810, 7493, 7505); //@t
		} else {
					bool var_422_bool = false;
					bool var_423_bool;
					func_8802(var_1_object);
					if(var_423_bool != 0) {
						bool var_429_bool;
						func_8860(var_1_object);
						if(var_429_bool != 0)
							var_422_bool = true;
					}
					if(var_422_bool == 0) goto Label_2861;
					func_2937(var_380_object, "Neutral");
					var_0_object->SetMessage(6765); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6777, 7457, 7467); //@t
					var_0_object->AddReply(6766, 7459, 7456); //@t
		}
	}
Label_2907:
	for(;;) {
		bool var_414_bool;
		func_7949(var_414_bool);
		if(var_414_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7857(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2936;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2936:
			return 0;

		}

	}
	
Label_2861:
	func_2937(var_380_object, "Neutral");
	var_0_object->SetMessage(6794); //@t
	var_0_object->ClearReplies(); //@t
	bool var_445_bool = false;
	bool var_446_bool;
	func_8814(var_1_object);
	if(var_446_bool != 0) {
		bool var_452_bool;
		func_8848(var_1_object);
		if(var_452_bool != 0)
			var_445_bool = true;
	}
	if(var_445_bool != 0)
		var_0_object->AddReply(7084, 7809, 7807); //@t
	bool var_457_bool;
	func_8826(var_1_object);
	if(var_457_bool != 0)
		var_0_object->AddReply(6795, 7469, 7487); //@t
	var_0_object->AddReply(7535, -1, 8317); //@t
	goto Label_2907;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xae2";


void func_7904(bool var_201_bool, string var_202_string, string var_203_string)
{
	object var_205_object;
	@FindActor(var_205_object, var_202_string);
	if(var_205_object == null)
		var_201_bool = false;
	@Trigger(var_205_object, var_203_string);
	var_201_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8932(bool var_359_bool)
{
	int var_361_int;
	func_7892(var_361_int, "ood1BigVlad9");
	if(var_361_int == 0) {
		var_359_bool = true;
		return 0;
	}
	var_359_bool = false;
}


// @pe
void func_9446(bool var_353_bool)
{
	int var_355_int;
	func_7892(var_355_int, "KnowKapella");
	if(var_355_int == 1)
		var_353_bool = true;
	var_353_bool = false;
}


void func_7916(float var_63_float)
{
	float var_65_float;
	@GetGameTime(var_65_float);
	var_65_float = var_63_float;
}


// @pe
void func_8944(bool var_403_bool)
{
	int var_405_int;
	func_7892(var_405_int, "KnowBurahDead");
	if(var_405_int == 1)
		var_403_bool = true;
	var_403_bool = false;
}


void func_7921(int var_156_int)
{
	float var_158_float;
	@GetGameTime(var_158_float);
	var_156_int = 1 + (var_158_float / 24);
}


// @pe
void func_9458(bool var_199_bool)
{
	int var_201_int;
	func_7892(var_201_int, "ood1BigVlad1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_5360(object var_0_object, int var_608_int, object var_609_object)
{
	var_0_object = var_609_object;
	bool var_619_bool; object var_620_object;
	var_609_object = var_620_object;
	func_7797(var_619_bool, var_620_object);
	if(!var_619_bool) { //@nz
		var_608_int = -2;
		return 8;
	}
	object var_615_object;
	@CreateDialog(var_615_object);
	int var_622_int;
	func_7945(var_622_int);
	var_615_object->SetNPCName(var_622_int);
	string var_623_string;
	func_7947(var_623_string);
	var_615_object->SetPhoto(var_623_string);
	int var_624_int;
	func_9589(var_624_int);
	var_615_object->SetPlayerName(var_624_int);
	bool var_616_bool;
	@IsOverrideActive(var_616_bool);
	if(var_616_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	@DoDialog(var_615_object);
	object var_626_object; object var_627_object;
	var_609_object = var_626_object;
	var_615_object = var_627_object;
	TaskCall(13);
	func_5423(var_628_object, var_629_object, var_630_string, var_631_bool, var_626_object, var_627_object);
	TaskReturn();
	bool var_618_bool;
	var_615_object->IsDialogEnd(var_618_bool);
	
	for(;;) {
		var_740_bool = !var_618_bool; //@nz
		if(var_740_bool == 0) goto Label_5412;
		@sync();
		var_615_object->IsDialogEnd(var_618_bool);
	}
	
Label_5412:
	object var_741_object;
	var_609_object = var_741_object;
	func_7853();
	@StopDialog(var_615_object);
	var_615_object->GetReturnValue(-1);
	int var_617_int = var_608_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7930(bool var_154_bool, int var_155_int)
{
	int var_156_int;
	func_7921(var_156_int);
	var_154_bool = var_156_int == var_155_int;
}


// @pe
void func_6907(object var_2_object, string var_125_string)
{
	bool var_126_bool;
	func_7949(var_126_bool);
	if(!var_126_bool) //@nz
		return 0;
	if(var_125_string == var_2_object)
		return 0;
	string var_129_string;
	func_7857(var_129_string);
	var_2_object = var_129_string;
}


// @pe
void func_8956(bool var_233_bool)
{
	int var_235_int;
	func_7892(var_235_int, "d3q01");
	if(var_235_int == 3)
		var_233_bool = true;
	var_233_bool = false;
}


// @pe
void func_9470(bool var_234_bool)
{
	int var_236_int;
	func_7892(var_236_int, "ood1BigVlad2");
	if(var_236_int == 0) {
		var_234_bool = true;
		return 0;
	}
	var_234_bool = false;
}


void func_7936(bool var_1031_bool)
{
	func_7857("No");
	bool var_1033_bool;
	@lshWaitForAnimEnd(var_1033_bool);
	var_1033_bool = var_1031_bool;
}


// @pe
void func_3846(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_7949(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string;
	func_7857(var_220_string);
	var_2_object = var_220_string;
}


// @pe
void func_8968(bool var_241_bool)
{
	int var_243_int;
	func_7892(var_243_int, "ood3BigVlad1");
	if(var_243_int == 0) {
		var_241_bool = true;
		return 0;
	}
	var_241_bool = false;
}


void func_7945(int var_96_int)
{
	var_96_int = 2857;
}


// @pe
void func_9482(bool var_261_bool)
{
	int var_263_int;
	func_7892(var_263_int, "ood1BigVlad3");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_7947(string var_97_string)
{
	var_97_string = "ui/NPC_BigVlad.png";
}


// @pe
void func_7433(object var_2_object, string var_70_string)
{
	bool var_71_bool;
	func_7949(var_71_bool);
	if(!var_71_bool) //@nz
		return 0;
	if(var_70_string == var_2_object)
		return 0;
	string var_74_string;
	func_7857(var_74_string);
	var_2_object = var_74_string;
}


void func_7949(bool var_43_bool)
{
	var_43_bool = true;
}


// @pe
void func_7951(object var_101_object)
{
	object var_105_object;
	func_9539(var_105_object);
	object var_102_object;
	var_105_object = var_102_object;
	func_9556(var_102_object, "pt_map_georg", (float)2);
	object var_125_object;
	func_9539(var_125_object);
	var_101_object->ShowMap(var_125_object);
}


// @pe
void func_8980(bool var_718_bool)
{
	int var_720_int;
	func_7892(var_720_int, "d3q01");
	if(var_720_int == 4)
		var_718_bool = true;
	var_718_bool = false;
}


// @pe
void func_9494(bool var_412_bool)
{
	var_412_bool = false;
}


void func_8472(void)
{
	@SetVariable("d5q01", 2);
	object var_52_object;
	func_9539(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_7916(var_63_float);
	var_49_object->AddMark("d5q01BigVladGotoAlexandr", "pt_map_alexandr", 1, 11957, var_63_float);
	func_9702();
}
EMIT "Stack[-1] = 0";


void func_9497(object var_81_object)
{
	object var_83_object;
	@GetDiaryRoot(var_83_object);
	if(!var_83_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_81_object = false;
	}
	var_83_object = var_81_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7967(void)
{
	@SetVariable("ood2BigVlad1", 1);
}


// @pe
void func_8992(bool var_252_bool)
{
	int var_254_int;
	func_7892(var_254_int, "ood3BigVlad2");
	if(var_254_int == 0) {
		var_252_bool = true;
		return 0;
	}
	var_252_bool = false;
}


// @pe
void func_7973(void)
{
	@SetVariable("ood2BigVlad2", 1);
}


void func_9510(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_9497(var_81_object);
	object var_78_object;
	var_81_object = var_78_object;
	object var_79_object;
	var_78_object->Find(var_74_int, var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_74_int);
		var_72_bool = false;
	}
	var_79_object->AddChild(var_73_object);
	@SetVariable("player_diary", 1);
	int var_80_int;
	var_73_object->GetCategory(var_80_int);
	@SetDiarySection(var_80_int);
	var_72_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_7979(void)
{
	@SetVariable("ood2BigVlad3", 1);
}


// @pe
void func_9004(bool var_337_bool)
{
	int var_339_int;
	func_7892(var_339_int, "KnowRubin");
	if(var_339_int == 1)
		var_337_bool = true;
	var_337_bool = false;
}


// @pe
void func_5423(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_626_object, object var_627_object)
{
	var_0_object = var_627_object;
	var_1_object = var_626_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_633_bool = false;
		bool var_634_bool;
		func_9088(var_1_object);
		if(var_634_bool != 0) {
			bool var_640_bool;
			func_9100(var_1_object);
			if(var_640_bool != 0)
				var_633_bool = true;
		}
		if(var_633_bool != 0) {
			object var_646_object; object var_647_object;
			var_646_object = var_1_object;
			var_647_object = var_0_object;
			func_8714();
			func_5568(var_627_object, "Neutral");
			var_0_object->SetMessage(10811); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10812, 11147, 11952); //@t
		} else {
					func_5568(var_627_object, "Neutral");
					var_0_object->SetMessage(10836); //@t
					var_0_object->ClearReplies(); //@t
					bool var_669_bool = false;
					bool var_670_bool;
					func_9112(var_1_object);
					if(var_670_bool != 0) {
						bool var_676_bool;
						func_9124(var_1_object);
						if(var_676_bool != 0)
							var_669_bool = true;
					}
					if(var_669_bool != 0)
						var_0_object->AddReply(10839, 11148, 11983); //@t
					bool var_685_bool;
					func_8838(var_685_bool, var_1_object);
					if(var_685_bool != 0)
						var_0_object->AddReply(10838, 10519, 11982); //@t
					bool var_692_bool;
					func_9136(var_692_bool, var_1_object);
					if(var_692_bool != 0)
						var_0_object->AddReply(11508, 12709, 12708); //@t
					bool var_714_bool = false;
					bool var_715_bool;
					func_9166(var_715_bool, var_1_object);
					if(var_715_bool != 0) {
						bool var_728_bool;
						func_9194(var_1_object);
						if(var_728_bool != 0)
							var_714_bool = true;
					}
					if(var_714_bool != 0)
						var_0_object->AddReply(10837, 10553, 11981); //@t
					var_0_object->AddReply(11480, -1, 12686); //@t
		}
	}
	for(;;) {
		bool var_659_bool;
		func_7949(var_659_bool);
		if(var_659_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7857(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5567;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5567:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1533";


// @pe
void func_8495(void)
{
	@SetVariable("ood5BigVlad1", 1);
}


// @pe
void func_7985(void)
{
	@SetVariable("ood2BigVlad4", 1);
}


// @pe
void func_8501(void)
{
	@SetVariable("ood6BigVlad1", 1);
}


// @pe
void func_7991(void)
{
	@SetVariable("d2q01BigVladVisit", 1);
}


// @pe
void func_9016(bool var_273_bool)
{
	int var_275_int;
	func_7892(var_275_int, "d3q01");
	if(var_275_int == 5)
		var_273_bool = true;
	var_273_bool = false;
}


// @pe
void func_8507(void)
{
	@SetVariable("ood6BigVlad2", 1);
}


// @pe
void func_7997(void)
{
	@SetVariable("ood1BigVlad4", 1);
}


// @pe
void func_8513(void)
{
	@SetVariable("KnowBigVlad", 1);
}


void func_322(object var_0_object, int var_808_int, object var_809_object)
{
	var_0_object = var_809_object;
	bool var_819_bool; object var_820_object;
	var_809_object = var_820_object;
	func_7797(var_819_bool, var_820_object);
	if(!var_819_bool) { //@nz
		var_808_int = -2;
		return 8;
	}
	object var_815_object;
	@CreateDialog(var_815_object);
	int var_822_int;
	func_7945(var_822_int);
	var_815_object->SetNPCName(var_822_int);
	string var_823_string;
	func_7947(var_823_string);
	var_815_object->SetPhoto(var_823_string);
	int var_824_int;
	func_9589(var_824_int);
	var_815_object->SetPlayerName(var_824_int);
	bool var_816_bool;
	@IsOverrideActive(var_816_bool);
	if(var_816_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	@DoDialog(var_815_object);
	object var_826_object; object var_827_object;
	var_809_object = var_826_object;
	var_815_object = var_827_object;
	TaskCall(5);
	func_385(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object);
	TaskReturn();
	bool var_818_bool;
	var_815_object->IsDialogEnd(var_818_bool);
	
	for(;;) {
		var_935_bool = !var_818_bool; //@nz
		if(var_935_bool == 0) goto Label_374;
		@sync();
		var_815_object->IsDialogEnd(var_818_bool);
	}
	
Label_374:
	object var_936_object;
	var_809_object = var_936_object;
	func_7853();
	@StopDialog(var_815_object);
	var_815_object->GetReturnValue(-1);
	int var_817_int = var_808_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8003(void)
{
	@SetVariable("ood1BigVlad5", 1);
}


// @pe
void func_9028(bool var_267_bool)
{
	int var_269_int;
	func_7892(var_269_int, "ood3BigVlad3");
	if(var_269_int == 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


void func_9539(object var_52_object)
{
	object var_55_object; object var_56_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_56_object = null;
		var_56_object = var_52_object;
	}
	var_55_object->GetMap(var_56_object);
	var_56_object = var_52_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_8519(void)
{
	@SetVariable("d8q01BigVladIsVictim", 1);
}


// @pe
void func_8009(void)
{
	@SetVariable("ood1BigVlad6", 1);
}


// @pe
void func_8525(void)
{
	@SetVariable("ood8BigVlad1", 1);
}


// @pe
void func_8015(void)
{
	@SetVariable("ood1BigVlad7", 1);
}


// @pe
void func_9040(bool var_283_bool)
{
	int var_285_int;
	func_7892(var_285_int, "d3q02");
	if(var_285_int == 2)
		var_283_bool = true;
	var_283_bool = false;
}


// @pe
void func_8531(void)
{
	@SetVariable("ood8BigVlad2", 1);
}


void func_9556(object var_93_object, string var_94_string, float var_95_float)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	if(var_103_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_101_cvector;
	cvector var_102_cvector;
	bool var_104_bool;
	var_103_object->GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	if(!var_104_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_94_string) + " doesnt exist");
	var_103_object->GetMap(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_93_object->SetMapParams(var_114_float, var_115_float, var_95_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_8021(void)
{
	@SetVariable("ood1BigVlad8", 1);
}


// @pe
void func_8537(void)
{
	@SetVariable("ood8BigVlad3", 1);
}


// @pe
void func_8027(void)
{
	@SetVariable("ood1BigVlad9", 1);
}


// @pe
void func_9052(bool var_289_bool)
{
	int var_291_int;
	func_7892(var_291_int, "ood3BigVlad4");
	if(var_291_int == 0) {
		var_289_bool = true;
		return 0;
	}
	var_289_bool = false;
}


// @pe
void func_8543(void)
{
	@SetVariable("ood6BigVlad3", 1);
}


void func_8033(void)
{
	object var_54_object;
	func_9539(var_54_object);
	object var_53_object;
	var_54_object = var_53_object;
	float var_65_float;
	func_7916(var_65_float);
	var_53_object->AddMark("d1BigVladAboutKapella", "pt_map_kapella", 3, 8638, var_65_float);
	float var_72_float;
	func_7916(var_72_float);
	var_53_object->AddMark("d1BigVladAboutMladVlad", "pt_map_mladvlad", 3, 8689, var_72_float);
}
EMIT "Stack[-1] = 0";


void func_8549(void)
{
	object var_56_object;
	func_9539(var_56_object);
	object var_55_object;
	var_56_object = var_55_object;
	float var_67_float;
	func_7916(var_67_float);
	var_55_object->AddMark("d6q01BigVladGotoAnna", "pt_map_anna", 1, 15390, var_67_float);
	float var_74_float;
	func_7916(var_74_float);
	var_55_object->AddMark("d6q01BigVladGotoOspina", "pt_map_ospina", 1, 15389, var_74_float);
	float var_79_float;
	func_7916(var_79_float);
	var_55_object->AddMark("d6q01BigVladGotoAnnaOspinaSelf", "pt_map_bigvlad", 1, 15391, var_79_float);
	func_9718();
}
EMIT "Stack[-1] = 0";


// @pe
void func_9064(bool var_305_bool)
{
	int var_307_int;
	func_7892(var_307_int, "d3q02");
	if(var_307_int == 6)
		var_305_bool = true;
	var_305_bool = false;
}


// @pe
void func_9076(bool var_299_bool)
{
	int var_301_int;
	func_7892(var_301_int, "ood3BigVlad5");
	if(var_301_int == 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


void func_9589(int var_98_int)
{
	int var_100_int;
	@GetVariable("player", var_100_int);
	if(var_100_int == 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x2584";
	}
	if(var_100_int == 1) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
}


// @pe
void func_2937(object var_2_object, string var_135_string)
{
	bool var_136_bool;
	func_7949(var_136_bool);
	if(!var_136_bool) //@nz
		return 0;
	if(var_135_string == var_2_object)
		return 0;
	string var_139_string;
	func_7857(var_139_string);
	var_2_object = var_139_string;
}


// @pe
void func_8058(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_8064(void)
{
	@SetVariable("ood3BigVlad1", 1);
}


// @pe
void func_385(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_826_object, object var_827_object)
{
	var_0_object = var_827_object;
	var_1_object = var_826_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_833_bool = false;
		bool var_834_bool;
		func_9290(var_1_object);
		if(!var_834_bool) { //@nz
			bool var_841_bool;
			func_9386(var_1_object);
			if(var_841_bool != 0)
				var_833_bool = true;
		}
		if(var_833_bool != 0) {
			object var_847_object; object var_848_object;
			var_847_object = var_1_object;
			var_848_object = var_0_object;
			func_8543();
			object var_851_object; object var_852_object;
			var_851_object = var_1_object;
			var_852_object = var_0_object;
			func_8736();
			func_551(var_827_object, "Neutral");
			var_0_object->SetMessage(10676); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10688, 11789, 11801); //@t
		} else {
					bool var_872_bool;
					func_9434(var_1_object);
					if(var_872_bool == 0) goto Label_519;
					func_551(var_827_object, "Neutral");
					var_0_object->SetMessage(12502); //@t
					var_0_object->ClearReplies(); //@t
					bool var_880_bool = false;
					bool var_881_bool;
					func_9290(var_1_object);
					if(var_881_bool != 0) {
						bool var_883_bool;
						func_9302(var_1_object);
						if(var_883_bool != 0)
							var_880_bool = true;
					}
					if(var_880_bool != 0)
						var_0_object->AddReply(12027, 13248, 13245); //@t
					bool var_892_bool = false;
					bool var_893_bool = false;
					bool var_894_bool = false;
					bool var_895_bool = false;
					bool var_896_bool;
					func_9254(var_1_object);
					if(var_896_bool != 0) {
						bool var_902_bool;
						func_9266(var_1_object);
						if(var_902_bool != 0)
							var_895_bool = true;
					}
					if(var_895_bool != 0) {
						bool var_908_bool;
						func_9230(var_1_object);
						if(!var_908_bool) //@nz
							var_894_bool = true;
					}
					if(var_894_bool != 0) {
						bool var_915_bool;
						func_9242(var_1_object);
						if(!var_915_bool) //@nz
							var_893_bool = true;
					}
					if(var_893_bool != 0) {
						bool var_922_bool;
						func_9278(var_1_object);
						if(!var_922_bool) //@nz
							var_892_bool = true;
					}
					if(var_892_bool != 0)
						var_0_object->AddReply(12503, 13674, 13673); //@t
					var_0_object->AddReply(12514, -1, 13684); //@t
		}
	}
	for(;;) {
		bool var_864_bool;
		func_7949(var_864_bool);
		if(var_864_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_7857(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_550;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_550:
			return 0;

		}

	}
	
Label_519:
}
EMIT "GOTO 0x185";


// @pe
void func_9088(bool var_355_bool)
{
	int var_357_int;
	func_7892(var_357_int, "d4q01");
	if(var_357_int == 0) {
		var_355_bool = true;
		return 0;
	}
	var_355_bool = false;
}


void func_8070(void)
{
	@SetVariable("d3q01", 4);
	object var_56_object;
	func_9539(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	float var_67_float;
	func_7916(var_67_float);
	var_53_object->AddMark("d3q01BigVladGotoGeorg", "pt_map_georg", 1, 11153, var_67_float);
	float var_74_float;
	func_7916(var_74_float);
	var_53_object->AddMark("d3q01BigVladGotoGeorgSelf", "pt_map_bigvlad", 1, 15297, var_74_float);
	func_9606();
}
EMIT "Stack[-1] = 0";


void func_9606(void)
{
	@Trace("Adding diary entry");
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 135, 1, 15298);
	bool var_81_bool; object var_82_object;
	var_76_object = var_82_object;
	func_9510(var_81_bool, var_82_object, 25);
}
EMIT "Stack[-1] = 0";


void func_8586(void)
{
	object var_220_object;
	func_9539(var_220_object);
	object var_218_object;
	var_220_object = var_218_object;
	object var_219_object;
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoLara");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoLaraSelf");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoSklad");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoSobor");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01BigVladGotoTheater");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01LaraGotoMladVlad");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01LaraGotoMladVladSelf");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01LaraGotoOspina");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01LaraGotoOspinaSelf");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01MladVladGotoBigVlad");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01MladVladGotoBigVladSelf");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01MladVladGotoOspina");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01OspinaGotoLara");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01WastedMale");
	if(var_219_object != 0)
		var_219_object->Remove();
	var_218_object->FindMark(var_219_object, "d4q01Whitemask");
	if(var_219_object != 0)
		var_219_object->Remove();
	func_9686();
	bool var_262_bool;
	func_7904(var_262_bool, "quest_d4_01", "failed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9100(bool var_363_bool)
{
	int var_365_int;
	func_7892(var_365_int, "ood4BigVlad1");
	if(var_365_int == 0) {
		var_363_bool = true;
		return 0;
	}
	var_363_bool = false;
}


void func_9622(void)
{
	@Trace("Adding diary entry");
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 20, 1, 3360);
	bool var_82_bool; object var_83_object;
	var_77_object = var_83_object;
	func_9510(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1432(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_7949(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string;
	func_7857(var_215_string);
	var_2_object = var_215_string;
}


// @pe
void func_9112(bool var_395_bool)
{
	int var_397_int;
	func_7892(var_397_int, "d4q01");
	if(var_397_int == 3)
		var_395_bool = true;
	var_395_bool = false;
}


// @pe
void func_9124(bool var_401_bool)
{
	int var_403_int;
	func_7892(var_403_int, "ood4BigVlad2");
	if(var_403_int == 0) {
		var_401_bool = true;
		return 0;
	}
	var_401_bool = false;
}


// @pe
void func_8102(void)
{
	@SetVariable("ood3BigVlad2", 1);
}


void func_9638(void)
{
	@Trace("Adding diary entry");
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 87, 1, 12169);
	bool var_107_bool; object var_108_object;
	var_102_object = var_108_object;
	func_9510(var_107_bool, var_108_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8108(void)
{
	@SetVariable("ood3BigVlad3", 1);
}


// @pe
void func_9136(bool var_417_bool, object var_418_object)
{
	bool var_419_bool = true;
	bool var_420_bool; object var_421_object;
	var_418_object = var_421_object;
	func_7897(var_420_bool, var_421_object, "d4q01_sobor_key");
	var_427_bool = !var_420_bool; //@nz
	if(var_427_bool != 1) {
		bool var_428_bool; object var_429_object;
		var_418_object = var_429_object;
		func_7897(var_428_bool, var_429_object, "d4q01_theater_key");
		var_431_bool = !var_428_bool; //@nz
		if(var_431_bool != 1)
			var_419_bool = false;
	}
	if(var_419_bool != 0) {
		int var_432_int;
		func_7892(var_432_int, "d4q01");
		if(var_432_int == 4) {
			var_417_bool = true;
			return 0;
		}
	}
	var_417_bool = false;
}


void func_8114(void)
{
	@SetVariable("d3q01", 6);
	object var_160_object;
	func_9539(var_160_object);
	object var_157_object;
	var_160_object = var_157_object;
	float var_165_float;
	func_7916(var_165_float);
	var_157_object->AddMark("d3q01BigVladAgreedSelf", "pt_map_bigvlad", 1, 11155, var_165_float);
	float var_170_float;
	func_7916(var_170_float);
	var_157_object->AddMark("d3q01BigVladAgreed", "pt_map_ospina", 1, 15300, var_170_float);
}
EMIT "Stack[-1] = 0";


void func_9654(void)
{
	@Trace("Adding diary entry");
	object var_193_object;
	@CreateDiaryEntry(var_193_object, 89, 1, 12171);
	bool var_198_bool; object var_199_object;
	var_193_object = var_199_object;
	func_9510(var_198_bool, var_199_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5568(object var_2_object, string var_373_string)
{
	bool var_374_bool;
	func_7949(var_374_bool);
	if(!var_374_bool) //@nz
		return 0;
	if(var_373_string == var_2_object)
		return 0;
	string var_377_string;
	func_7857(var_377_string);
	var_2_object = var_377_string;
}


void func_9670(void)
{
	@Trace("Adding diary entry");
	object var_313_object;
	@CreateDiaryEntry(var_313_object, 90, 1, 12172);
	bool var_318_bool; object var_319_object;
	var_313_object = var_319_object;
	func_9510(var_318_bool, var_319_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9166(bool var_440_bool, object var_441_object)
{
	bool var_442_bool = false;
	bool var_443_bool; object var_444_object;
	var_441_object = var_444_object;
	func_7897(var_443_bool, var_444_object, "d4q01_sobor_key");
	if(var_443_bool != 0) {
		bool var_446_bool; object var_447_object;
		var_441_object = var_447_object;
		func_7897(var_446_bool, var_447_object, "d4q01_theater_key");
		if(var_446_bool != 0)
			var_442_bool = true;
	}
	if(var_442_bool != 0) {
		int var_449_int;
		func_7892(var_449_int, "d4q01");
		if(var_449_int == 4) {
			var_440_bool = true;
			return 0;
		}
	}
	var_440_bool = false;
}


// @pe
void func_8143(object var_92_object)
{
	object var_96_object;
	func_9539(var_96_object);
	object var_93_object;
	var_96_object = var_93_object;
	func_9556(var_93_object, "pt_map_alexandr", (float)2);
	object var_116_object;
	func_9539(var_116_object);
	var_92_object->ShowMap(var_116_object);
}


void func_9686(void)
{
	@Trace("Adding diary entry");
	object var_254_object;
	@CreateDiaryEntry(var_254_object, 91, 1, 12173);
	bool var_259_bool; object var_260_object;
	var_254_object = var_260_object;
	func_9510(var_259_bool, var_260_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8159(void)
{
	@SetVariable("ood3BigVlad4", 1);
}


void func_8165(void)
{
	@SetVariable("d3q02", 3);
	object var_183_object;
	func_9539(var_183_object);
	object var_180_object;
	var_183_object = var_180_object;
	float var_188_float;
	func_7916(var_188_float);
	var_180_object->AddMark("d3q02BigVladGotoHan", "pt_map_han", 0, 11385, var_188_float);
}
EMIT "Stack[-1] = 0";


void func_9702(void)
{
	@Trace("Adding diary entry");
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 141, 1, 15341);
	bool var_72_bool; object var_73_object;
	var_67_object = var_73_object;
	func_9510(var_72_bool, var_73_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9194(bool var_453_bool)
{
	int var_455_int;
	func_7892(var_455_int, "ood4BigVlad3");
	if(var_455_int == 0) {
		var_453_bool = true;
		return 0;
	}
	var_453_bool = false;
}


// @pe
void func_9206(bool var_141_bool)
{
	int var_143_int;
	func_7892(var_143_int, "d5q01");
	if(var_143_int == 1)
		var_141_bool = true;
	var_141_bool = false;
}


void func_9718(void)
{
	@Trace("Adding diary entry");
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 115, 1, 13738);
	bool var_86_bool; object var_87_object;
	var_81_object = var_87_object;
	func_9510(var_86_bool, var_87_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8185(object var_190_object)
{
	object var_194_object;
	func_9539(var_194_object);
	object var_191_object;
	var_194_object = var_191_object;
	func_9556(var_191_object, "pt_map_han", (float)2);
	object var_195_object;
	func_9539(var_195_object);
	var_190_object->ShowMap(var_195_object);
}


