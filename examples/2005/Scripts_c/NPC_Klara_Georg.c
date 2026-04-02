// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_41_bool == 26836) {
				func_152(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525481, 27536, 26837); //@t
				var_0_object->AddReply(526263, 27536, 27537); //@t
				return 0;
			}
			if(var_41_bool == 27536) {
				func_152(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526264, 27540, 27539); //@t
				var_0_object->AddReply(526266, -1, 27541); //@t
				return 0;
			}
			if(var_41_bool == 27540) {
				func_152(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526265); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526267, -1, 27542); //@t
				var_0_object->AddReply(526268, -1, 27543); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_4000(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_42_cvector == 26943) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4045();
			}
			if(var_42_cvector == 26945) {
				object var_53_object = var_1_object;
				func_4104(var_0_object);
			}
			if(var_42_cvector == 42709) {
				object var_95_object = var_1_object;
				func_4111(var_0_object);
			}
			if(var_41_bool == 26941) {
				func_415(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525594); //@t
				var_0_object->ClearReplies(); //@t
				bool var_115_bool = false;
				bool var_116_bool;
				func_4158(var_1_object);
				if(var_116_bool != 0) {
					bool var_124_bool;
					func_4170(var_1_object);
					if(var_124_bool != 0)
						var_115_bool = true;
				}
				if(var_115_bool != 0)
					var_0_object->AddReply(525596, 26944, 26943); //@t
				var_0_object->AddReply(525595, -1, 26942); //@t
				return 0;
			}
			if(var_41_bool == 26944) {
				func_415(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540670, 42702, 42701); //@t
				var_0_object->AddReply(540672, 42702, 42703); //@t
				return 0;
			}
			if(var_41_bool == 42702) {
				func_415(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540671); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540673, 42706, 42704); //@t
				var_0_object->AddReply(540675, 42706, 42707); //@t
				return 0;
			}
			if(var_41_bool == 42706) {
				func_415(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525598, -1, 26945); //@t
				var_0_object->AddReply(540676, -1, 42709); //@t
				return 0;
			}
			var_3_string = true;
			bool var_166_bool;
			func_4000(var_166_bool);
			if(var_166_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b6";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_42_cvector == 27172) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4051();
			}
			if(var_41_bool == 27163) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525864); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_4182(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(525865, 30508, 27164); //@t
				var_0_object->AddReply(525874, -1, 27173); //@t
				return 0;
			}
			if(var_41_bool == 30508) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529066, 27165, 30509); //@t
				var_0_object->AddReply(540766, 27165, 42809); //@t
				return 0;
			}
			if(var_41_bool == 27165) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525868, 27168, 27167); //@t
				var_0_object->AddReply(529067, 30511, 30510); //@t
				return 0;
			}
			if(var_41_bool == 30511) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529069, 27171, 30512); //@t
				return 0;
			}
			if(var_41_bool == 27168) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525870, 27171, 27169); //@t
				return 0;
			}
			if(var_41_bool == 27171) {
				func_730(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525873, -1, 27172); //@t
				return 0;
			}
			var_3_string = true;
			bool var_144_bool;
			func_4000(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2f1";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_42_cvector == 30351) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4066();
				object var_80_object = var_1_object;
				func_4034(var_0_object);
			}
			if(var_42_cvector == 30371) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_4080();
			}
			if(var_41_bool == 27747) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526481); //@t
				var_0_object->ClearReplies(); //@t
				bool var_133_bool;
				func_4230(var_1_object);
				if(var_133_bool != 0)
					var_0_object->AddReply(526482, 30355, 27748); //@t
				bool var_144_bool;
				func_4242(var_1_object);
				if(var_144_bool != 0)
					var_0_object->AddReply(526504, 30366, 27770); //@t
				var_0_object->AddReply(526489, -1, 27755); //@t
				var_0_object->AddReply(528924, -1, 30354); //@t
				return 0;
			}
			if(var_41_bool == 30366) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528934, 27771, 30367); //@t
				return 0;
			}
			if(var_41_bool == 27771) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526506, 27773, 27772); //@t
				return 0;
			}
			if(var_41_bool == 27773) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526508, 27775, 27774); //@t
				return 0;
			}
			if(var_41_bool == 27775) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526510, 27777, 27776); //@t
				return 0;
			}
			if(var_41_bool == 27777) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526512, 30368, 27778); //@t
				return 0;
			}
			if(var_41_bool == 30368) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528936, 30370, 30369); //@t
				return 0;
			}
			if(var_41_bool == 30370) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528938, -1, 30371); //@t
				return 0;
			}
			if(var_41_bool == 30355) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528926, 30357, 30356); //@t
				return 0;
			}
			if(var_41_bool == 30357) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528928, 27749, 30358); //@t
				var_0_object->AddReply(528929, 27749, 30359); //@t
				return 0;
			}
			if(var_41_bool == 27749) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526484, 27751, 27750); //@t
				return 0;
			}
			if(var_41_bool == 27751) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526486, 27753, 27752); //@t
				var_0_object->AddReply(528930, 30363, 30362); //@t
				return 0;
			}
			if(var_41_bool == 30363) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528932, 27753, 30364); //@t
				return 0;
			}
			if(var_41_bool == 27753) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526488, 30348, 27754); //@t
				return 0;
			}
			if(var_41_bool == 30348) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528919, 30350, 30349); //@t
				return 0;
			}
			if(var_41_bool == 30350) {
				func_1066(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528921, -1, 30351); //@t
				return 0;
			}
			var_3_string = true;
			bool var_270_bool;
			func_4000(var_270_bool);
			if(var_270_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x441";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_42_cvector == 28246) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4060();
			}
			if(var_41_bool == 28245) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526953); //@t
				var_0_object->ClearReplies(); //@t
				bool var_66_bool = true;
				bool var_67_bool = false;
				bool var_68_bool;
				func_4194(var_1_object);
				if(var_68_bool != 0) {
					bool var_76_bool;
					func_4218(var_1_object);
					if(var_76_bool != 0)
						var_67_bool = true;
				}
				if(var_67_bool != 1) {
					bool var_82_bool = false;
					bool var_83_bool;
					func_4206(var_1_object);
					if(var_83_bool != 0) {
						bool var_89_bool;
						func_4218(var_1_object);
						if(var_89_bool != 0)
							var_82_bool = true;
					}
					if(var_82_bool != 1)
						var_66_bool = false;
				}
				if(var_66_bool != 0)
					var_0_object->AddReply(526954, 29329, 28246); //@t
				var_0_object->AddReply(526957, -1, 28249); //@t
				return 0;
			}
			if(var_41_bool == 29329) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527977, 29339, 29335); //@t
				var_0_object->AddReply(527978, 29337, 29336); //@t
				return 0;
			}
			if(var_41_bool == 29337) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527980, -1, 29338); //@t
				return 0;
			}
			if(var_41_bool == 29339) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527982, 29341, 29340); //@t
				return 0;
			}
			if(var_41_bool == 29341) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527988, 29347, 29346); //@t
				var_0_object->AddReply(527990, 29349, 29348); //@t
				return 0;
			}
			if(var_41_bool == 29349) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527992, 28247, 29350); //@t
				return 0;
			}
			if(var_41_bool == 29347) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527984, 28247, 29342); //@t
				var_0_object->AddReply(527986, 29345, 29344); //@t
				return 0;
			}
			if(var_41_bool == 29345) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527993, 28247, 29352); //@t
				return 0;
			}
			if(var_41_bool == 28247) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526956, 29354, 28248); //@t
				return 0;
			}
			if(var_41_bool == 29354) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527995, 29362, 29355); //@t
				var_0_object->AddReply(527996, 29357, 29356); //@t
				var_0_object->AddReply(528001, -1, 29361); //@t
				return 0;
			}
			if(var_41_bool == 29357) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527998, -1, 29358); //@t
				var_0_object->AddReply(527999, -1, 29359); //@t
				return 0;
			}
			if(var_41_bool == 29362) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528003, 29364, 29363); //@t
				return 0;
			}
			if(var_41_bool == 29364) {
				func_1622(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528005, -1, 29365); //@t
				return 0;
			}
			var_3_string = true;
			bool var_199_bool;
			func_4000(var_199_bool);
			if(var_199_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x66d";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_41_bool == 36906) {
				func_2116(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_41_bool == 36953) {
				func_2116(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_41_bool == 36957) {
				func_2116(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_89_bool;
			func_4000(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x85b";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_42_cvector == 28456) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4002();
				object var_90_object = var_1_object;
				func_4118(var_0_object);
			}
			if(var_42_cvector == 26079) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_4002();
				object var_120_object = var_1_object;
				func_4118(var_0_object);
			}
			if(var_42_cvector == 26091) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_4025();
			}
			if(var_42_cvector == 28475) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_4025();
			}
			if(var_42_cvector == 28220) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_4095();
			}
			if(var_42_cvector == 28221) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_4095();
			}
			if(var_42_cvector == 28218) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_4095();
			}
			if(var_42_cvector == 31738) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_4002();
				object var_166_object = var_1_object;
				func_4118(var_0_object);
			}
			if(var_41_bool == 26078) {
				bool var_170_bool = false;
				bool var_171_bool;
				func_4134(var_1_object);
				if(var_171_bool != 0) {
					bool var_179_bool;
					func_4254(var_1_object);
					if(var_179_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					object var_185_object; object var_186_object;
					var_185_object = var_1_object;
					var_186_object = var_0_object;
					func_4089();
					func_2419(var_42_cvector, "Neutral");
					var_0_object->SetMessage(524754); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526909, 28202, 28201); //@t
					return 0;
				}
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524756); //@t
				var_0_object->ClearReplies(); //@t
				bool var_207_bool;
				func_4146(var_1_object);
				if(var_207_bool != 0)
					var_0_object->AddReply(524763, 26088, 26087); //@t
				bool var_216_bool;
				func_4134(var_1_object);
				if(var_216_bool != 0)
					var_0_object->AddReply(530365, -1, 31738); //@t
				var_0_object->AddReply(524757, -1, 26081); //@t
				return 0;
			}
			if(var_41_bool == 26088) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524765, 26090, 26089); //@t
				var_0_object->AddReply(526923, 28216, 28215); //@t
				return 0;
			}
			if(var_41_bool == 28216) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526925, 28219, 28217); //@t
				var_0_object->AddReply(526926, -1, 28218); //@t
				return 0;
			}
			if(var_41_bool == 28219) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526928, -1, 28220); //@t
				var_0_object->AddReply(526929, -1, 28221); //@t
				return 0;
			}
			if(var_41_bool == 26090) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526915, 28208, 28207); //@t
				var_0_object->AddReply(526930, 28223, 28222); //@t
				return 0;
			}
			if(var_41_bool == 28223) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526932, 28208, 28224); //@t
				return 0;
			}
			if(var_41_bool == 28208) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526917, 28210, 28209); //@t
				var_0_object->AddReply(527156, 28460, 28459); //@t
				return 0;
			}
			if(var_41_bool == 28460) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527157); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527158, 28210, 28461); //@t
				return 0;
			}
			if(var_41_bool == 28210) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526919, 28212, 28211); //@t
				var_0_object->AddReply(527159, 28464, 28463); //@t
				return 0;
			}
			if(var_41_bool == 28464) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527161, 28214, 28465); //@t
				return 0;
			}
			if(var_41_bool == 28212) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526921, 28214, 28213); //@t
				var_0_object->AddReply(527166, 28214, 28471); //@t
				return 0;
			}
			if(var_41_bool == 28214) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527162, 28467, 28466); //@t
				var_0_object->AddReply(527167, 28467, 28473); //@t
				return 0;
			}
			if(var_41_bool == 28467) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527163); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527164, 28469, 28468); //@t
				var_0_object->AddReply(527169, 28477, 28476); //@t
				return 0;
			}
			if(var_41_bool == 28477) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527171, 28469, 28478); //@t
				return 0;
			}
			if(var_41_bool == 28469) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524767, -1, 26091); //@t
				var_0_object->AddReply(527168, -1, 28475); //@t
				return 0;
			}
			if(var_41_bool == 28202) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527148, 28450, 28448); //@t
				var_0_object->AddReply(527149, 28450, 28449); //@t
				return 0;
			}
			if(var_41_bool == 28450) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526911, 28452, 28203); //@t
				return 0;
			}
			if(var_41_bool == 28452) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527151); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527152, 28204, 28453); //@t
				var_0_object->AddReply(527153, 28204, 28454); //@t
				return 0;
			}
			if(var_41_bool == 28204) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527146, 28447, 28446); //@t
				var_0_object->AddReply(524755, -1, 26079); //@t
				return 0;
			}
			if(var_41_bool == 28447) {
				func_2419(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527154, -1, 28456); //@t
				var_0_object->AddReply(527155, -1, 28457); //@t
				return 0;
			}
			var_3_string = true;
			bool var_399_bool;
			func_4000(var_399_bool);
			if(var_399_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x98a";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_3808();
			if(var_41_int == 42554) {
				func_3162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_4000(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc71";
	
	}

}


maintask task_17
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		var_41_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_3233(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_3304();
			bool var_45_bool = false;
			bool var_46_bool;
			func_3552(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_3273(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_3253(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_3815(var_87_object);
					var_87_object = var_86_object;
					func_3700(var_85_bool, var_86_object);
				}
			} else {
				func_3268(var_41_int);
				func_3295();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_3486();
		func_3304();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
		{
		@StopGroup0();
		func_3304();
		func_3780("Neutral");
		func_3295();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_3295();
		else
			func_3780("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_3486();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_3543(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_4452(var_59_object);
			func_3780("Neutral");
			func_3304();
			func_3295();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_46_bool;
	func_3552(var_46_bool);
	if(!var_46_bool) goto Label_0; //@nz
}


void func_3842(int var_313_int, string var_314_string)
{
	int var_316_int;
	@GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
}


// @pe
void func_2053(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_688_object, object var_689_object)
{
	var_0_object = var_689_object;
	var_1_object = var_688_object;
	var_3_string = false;
	if(1 != 0) {
		func_2116(var_689_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_2086;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x809";
	}
Label_2086:
	bool var_713_bool;
	func_4000(var_713_bool);
	if(var_713_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2115;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2115:
		return 0;

	}
	
}


void func_4357(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_4344(var_81_object);
	object var_78_object;
	var_81_object = var_78_object;
	object var_79_object;
	var_78_object->Find(var_74_int, var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_74_int);
		var_72_bool = false;
	}
	var_79_object->AddChild(var_73_object);
	@SendWorldWndMessage(7);
	int var_80_int;
	var_73_object->GetCategory(var_80_int);
	@SetDiarySection(var_80_int);
	var_72_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_262(object var_0_object, int var_372_int, object var_373_object)
{
	var_0_object = var_373_object;
	bool var_383_bool; object var_384_object;
	object var_385_object;
	func_3815(var_385_object);
	var_385_object = var_384_object;
	func_3642(var_383_bool, var_384_object);
	bool var_386_bool; object var_387_object;
	var_373_object = var_387_object;
	func_3557(var_386_bool, var_387_object, 70.0);
	if(!var_386_bool) { //@nz
		var_372_int = -2;
		return 8;
	}
	object var_379_object;
	@CreateDialog(var_379_object);
	int var_390_int;
	func_3994(var_390_int);
	var_379_object->SetNPCName(var_390_int);
	int var_391_int;
	func_3992(var_391_int);
	var_379_object->SetNPCDescription(var_391_int);
	string var_392_string;
	func_3996(var_392_string);
	var_379_object->SetPhoto(var_392_string);
	string var_393_string;
	func_3998(var_393_string);
	var_379_object->SetPhoto2(var_393_string);
	int var_394_int;
	func_4435(var_394_int);
	var_379_object->SetPlayerName(var_394_int);
	bool var_380_bool;
	@IsOverrideActive(var_380_bool);
	if(var_380_bool != 0) {
		var_372_int = -2;
		return 8;
	}
	@DoDialog(var_379_object);
	object var_396_object; object var_397_object;
	var_373_object = var_396_object;
	var_379_object = var_397_object;
	TaskCall(4);
	func_343(var_398_object, var_399_object, var_400_string, var_401_bool, var_396_object, var_397_object);
	TaskReturn();
	bool var_382_bool;
	var_379_object->IsDialogEnd(var_382_bool);
	
	for(;;) {
		var_439_bool = !var_382_bool; //@nz
		if(var_439_bool == 0) goto Label_332;
		@sync();
		var_379_object->IsDialogEnd(var_382_bool);
	}
	
Label_332:
	object var_440_object;
	var_373_object = var_440_object;
	func_3625();
	@StopDialog(var_379_object);
	var_379_object->GetReturnValue(-1);
	int var_381_int = var_372_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4104(object var_53_object)
{
	object var_56_object;
	var_53_object = var_56_object;
	bool var_55_bool;
	func_3891(var_55_bool, var_56_object, -0.3);
}


void func_3847(int var_99_int, int var_100_int)
{
	object var_102_object;
	@CreateIntVector(var_102_object);
	var_102_object->add(var_99_int);
	var_102_object->add(var_100_int);
	@SendWorldWndMessage(3, var_102_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2312(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_303_object, object var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_310_bool = false;
		bool var_311_bool;
		func_4134(var_1_object);
		if(var_311_bool != 0) {
			bool var_319_bool;
			func_4254(var_1_object);
			if(var_319_bool != 0)
				var_310_bool = true;
		}
		if(var_310_bool != 0) {
			object var_325_object; object var_326_object;
			var_325_object = var_1_object;
			var_326_object = var_0_object;
			func_4089();
			func_2419(var_304_object, "Neutral");
			var_0_object->SetMessage(524754); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526909, 28202, 28201); //@t
		} else {
					func_2419(var_304_object, "Neutral");
					var_0_object->SetMessage(524756); //@t
					var_0_object->ClearReplies(); //@t
					bool var_351_bool;
					func_4146(var_1_object);
					if(var_351_bool != 0)
						var_0_object->AddReply(524763, 26088, 26087); //@t
					bool var_360_bool;
					func_4134(var_1_object);
					if(var_360_bool != 0)
						var_0_object->AddReply(530365, -1, 31738); //@t
					var_0_object->AddReply(524757, -1, 26081); //@t
		}
	}
	for(;;) {
		bool var_341_bool;
		func_4000(var_341_bool);
		if(var_341_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3780(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2418;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2418:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x90c";


void func_13(object var_0_object, int var_62_int, object var_63_object)
{
	var_0_object = var_63_object;
	bool var_73_bool; object var_74_object;
	object var_75_object;
	func_3815(var_75_object);
	var_75_object = var_74_object;
	func_3642(var_73_bool, var_74_object);
	bool var_168_bool; object var_169_object;
	var_63_object = var_169_object;
	func_3557(var_168_bool, var_169_object, 70.0);
	if(!var_168_bool) { //@nz
		var_62_int = -2;
		return 8;
	}
	object var_69_object;
	@CreateDialog(var_69_object);
	int var_215_int;
	func_3994(var_215_int);
	var_69_object->SetNPCName(var_215_int);
	int var_216_int;
	func_3992(var_216_int);
	var_69_object->SetNPCDescription(var_216_int);
	string var_217_string;
	func_3996(var_217_string);
	var_69_object->SetPhoto(var_217_string);
	string var_218_string;
	func_3998(var_218_string);
	var_69_object->SetPhoto2(var_218_string);
	int var_219_int;
	func_4435(var_219_int);
	var_69_object->SetPlayerName(var_219_int);
	bool var_70_bool;
	@IsOverrideActive(var_70_bool);
	if(var_70_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	@DoDialog(var_69_object);
	object var_228_object; object var_229_object;
	var_63_object = var_228_object;
	var_69_object = var_229_object;
	TaskCall(2);
	func_94(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	bool var_72_bool;
	var_69_object->IsDialogEnd(var_72_bool);
	
	for(;;) {
		var_267_bool = !var_72_bool; //@nz
		if(var_267_bool == 0) goto Label_83;
		@sync();
		var_69_object->IsDialogEnd(var_72_bool);
	}
	
Label_83:
	object var_268_object;
	var_63_object = var_268_object;
	func_3625();
	@StopDialog(var_69_object);
	var_69_object->GetReturnValue(-1);
	int var_71_int = var_62_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4111(object var_95_object)
{
	object var_98_object;
	var_95_object = var_98_object;
	bool var_97_bool;
	func_3891(var_97_bool, var_98_object, -0.5);
}


void func_3859(object var_88_object, object var_89_object, int var_90_int)
{
	int var_94_int;
	var_89_object->GetItemID(var_94_int);
	int var_95_int;
	@GetInvItemProperty(var_95_int, var_94_int, "Category");
	bool var_96_bool;
	var_88_object->AddItem(var_96_bool, var_89_object, var_95_int, var_90_int);
	if(!var_96_bool) { //@nz
		var_88_object->DropItems(var_89_object, var_90_int);
	} else {
		int var_99_int; int var_100_int;
		var_94_int = var_99_int;
		var_90_int = var_100_int;
		func_3847(var_99_int, var_100_int);
	}
	
}


// @pe
void func_4118(object var_91_object)
{
	object var_95_object;
	func_4385(var_95_object);
	object var_92_object;
	var_95_object = var_92_object;
	func_4402(var_92_object, "pt_map_maria", (float)2);
	object var_115_object;
	func_4385(var_115_object);
	var_91_object->ShowMap(var_115_object);
}


// @pe
void func_3104(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_747_object, object var_748_object)
{
	var_0_object = var_748_object;
	var_1_object = var_747_object;
	var_3_string = false;
	if(1 != 0) {
		func_3162(var_748_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_3132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc24";
	}
Label_3132:
	bool var_769_bool;
	func_4000(var_769_bool);
	if(var_769_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3161:
		return 0;

	}
	
}


void func_4385(object var_53_object)
{
	object var_56_object; object var_57_object;
	@GetMainOutdoorScene(var_56_object);
	if(var_56_object == null) {
		@Trace("Can't find main outdoor scene");
		var_57_object = null;
		var_57_object = var_53_object;
	}
	var_56_object->GetMap(var_57_object);
	var_57_object = var_53_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4134(bool var_311_bool)
{
	int var_313_int;
	func_3842(var_313_int, "k1q02");
	if(var_313_int == 2)
		var_311_bool = true;
	var_311_bool = false;
}


void func_3878(object var_83_object, string var_84_string, int var_85_int)
{
	object var_87_object;
	@CreateInvItem(var_87_object);
	var_87_object->SetItemName(var_84_string);
	object var_88_object; object var_89_object; int var_90_int;
	var_83_object = var_88_object;
	var_87_object = var_89_object;
	var_85_int = var_90_int;
	func_3859(var_88_object, var_89_object, var_90_int);
}
EMIT "Stack[-1] = 0";


void func_3625(void)
{
	bool var_270_bool;
	@CameraSwitchToNormal();
	bool var_271_bool;
	func_4000(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		@HasAnimationTrack(var_270_bool, "head");
		if(var_270_bool == 0) goto Label_3641;
		@UnlookAsync("head");
	}
Label_3641:
	
}


// @pe
void func_1066(object var_2_object, string var_538_string)
{
	bool var_539_bool;
	func_4000(var_539_bool);
	if(!var_539_bool) //@nz
		return 0;
	if(var_538_string == var_2_object)
		return 0;
	string var_542_string; bool var_543_bool;
	var_538_string = var_542_string;
	if(var_538_string == "")
		var_543_bool = false;
	else
		var_543_bool = true;
	func_3787(var_542_string, var_543_bool);
	var_2_object = var_538_string;
	
}


// @pe
void func_4146(bool var_351_bool)
{
	int var_353_int;
	func_3842(var_353_int, "k1q02");
	if(var_353_int == 4)
		var_351_bool = true;
	var_351_bool = false;
}


void func_4402(object var_92_object, string var_93_string, float var_94_float)
{
	object var_102_object;
	@GetMainOutdoorScene(var_102_object);
	if(var_102_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_100_cvector;
	cvector var_101_cvector;
	bool var_103_bool;
	var_102_object->GetLocator(var_93_string, var_103_bool, var_100_cvector, var_101_cvector);
	if(!var_103_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_93_string) + " doesnt exist");
	var_102_object->GetMap(var_92_object);
	if(var_92_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_113_float = GetByIndex(var_100_cvector, 0);
	var_114_float = GetByIndex(var_100_cvector, 2);
	var_92_object->SetMapParams(var_113_float, var_114_float, var_94_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3891(bool var_55_bool, object var_56_object, float var_57_float)
{
	if(!var_56_object) { //@nz
		var_55_bool = false;
		return 0;
	}
	if(var_57_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_57_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_62_float;
		var_57_float = var_62_float;
		func_3926(var_62_float);
		bool var_66_bool; object var_67_object; float var_69_float;
		var_56_object = var_67_object;
		var_57_float = var_69_float;
		func_3511(var_66_bool, var_67_object, "reputation", var_69_float, (float)0, (float)1);
		var_55_bool = true;
		return 0;

	}
	
	var_55_bool = false;
}


void func_3642(bool var_73_bool, object var_74_object)
{
	int var_80_int; int var_81_int;
	@GetVariable("voice_common", var_80_int);
	if(var_80_int != 0) {
		bool var_84_bool; object var_85_object;
		var_74_object = var_85_object;
		func_3700(var_84_bool, var_85_object);
		if(!var_84_bool) { //@nz
			bool var_115_bool; object var_116_object;
			var_74_object = var_116_object;
			func_3737(var_115_bool, var_116_object);
			if(!var_115_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@irand(var_81_int, 2);
		if(var_81_int != 0)
			@SetVariable("voice_common", ((var_80_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_160_bool; object var_161_object;
		var_74_object = var_161_object;
		func_3737(var_160_bool, var_161_object);
		if(!var_160_bool) { //@nz
			bool var_163_bool; object var_164_object;
			var_74_object = var_164_object;
			func_3700(var_163_bool, var_164_object);
			if(!var_163_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3698;
	
Label_3698:
	var_73_bool = true;
	
}


// @pe
void func_4158(bool var_413_bool)
{
	int var_415_int;
	func_3842(var_415_int, "k3q03");
	if(var_415_int == 1000)
		var_413_bool = true;
	var_413_bool = false;
}


// @pe
void func_2116(object var_2_object, string var_695_string)
{
	bool var_696_bool;
	func_4000(var_696_bool);
	if(!var_696_bool) //@nz
		return 0;
	if(var_695_string == var_2_object)
		return 0;
	string var_699_string; bool var_700_bool;
	var_695_string = var_699_string;
	if(var_695_string == "")
		var_700_bool = false;
	else
		var_700_bool = true;
	func_3787(var_699_string, var_700_bool);
	var_2_object = var_695_string;
	
}


// @pe
void func_4170(bool var_419_bool)
{
	int var_421_int;
	func_3842(var_421_int, "ook3Georg1");
	if(var_421_int == 0) {
		var_419_bool = true;
		return 0;
	}
	var_419_bool = false;
}


void func_586(object var_0_object, int var_443_int, object var_444_object)
{
	var_0_object = var_444_object;
	bool var_454_bool; object var_455_object;
	object var_456_object;
	func_3815(var_456_object);
	var_456_object = var_455_object;
	func_3642(var_454_bool, var_455_object);
	bool var_457_bool; object var_458_object;
	var_444_object = var_458_object;
	func_3557(var_457_bool, var_458_object, 70.0);
	if(!var_457_bool) { //@nz
		var_443_int = -2;
		return 8;
	}
	object var_450_object;
	@CreateDialog(var_450_object);
	int var_461_int;
	func_3994(var_461_int);
	var_450_object->SetNPCName(var_461_int);
	int var_462_int;
	func_3992(var_462_int);
	var_450_object->SetNPCDescription(var_462_int);
	string var_463_string;
	func_3996(var_463_string);
	var_450_object->SetPhoto(var_463_string);
	string var_464_string;
	func_3998(var_464_string);
	var_450_object->SetPhoto2(var_464_string);
	int var_465_int;
	func_4435(var_465_int);
	var_450_object->SetPlayerName(var_465_int);
	bool var_451_bool;
	@IsOverrideActive(var_451_bool);
	if(var_451_bool != 0) {
		var_443_int = -2;
		return 8;
	}
	@DoDialog(var_450_object);
	object var_467_object; object var_468_object;
	var_444_object = var_467_object;
	var_450_object = var_468_object;
	TaskCall(6);
	func_667(var_469_object, var_470_object, var_471_string, var_472_bool, var_467_object, var_468_object);
	TaskReturn();
	bool var_453_bool;
	var_450_object->IsDialogEnd(var_453_bool);
	
	for(;;) {
		var_503_bool = !var_453_bool; //@nz
		if(var_503_bool == 0) goto Label_656;
		@sync();
		var_450_object->IsDialogEnd(var_453_bool);
	}
	
Label_656:
	object var_504_object;
	var_444_object = var_504_object;
	func_3625();
	@StopDialog(var_450_object);
	var_450_object->GetReturnValue(-1);
	int var_452_int = var_443_int;
}
EMIT "Stack[-4] = 0";


void func_4435(int var_219_int)
{
	int var_221_int;
	@GetVariable("branch", var_221_int);
	if(var_221_int == 0) {
		var_219_int = 1;
		return 2;
	EMIT "GOTO 0x1162";
	}
	if(var_221_int == 1) {
		var_219_int = 2;
		return 2;
	}
	var_219_int = 3;
}


// @pe
void func_4182(bool var_483_bool)
{
	int var_485_int;
	func_3842(var_485_int, "k5q01");
	if(var_485_int == 2)
		var_483_bool = true;
	var_483_bool = false;
}


// @pe
void func_1622(object var_2_object, string var_614_string)
{
	bool var_615_bool;
	func_4000(var_615_bool);
	if(!var_615_bool) //@nz
		return 0;
	if(var_614_string == var_2_object)
		return 0;
	string var_618_string; bool var_619_bool;
	var_614_string = var_618_string;
	if(var_614_string == "")
		var_619_bool = false;
	else
		var_619_bool = true;
	func_3787(var_618_string, var_619_bool);
	var_2_object = var_614_string;
	
}


void func_3926(float var_62_float)
{
	object var_64_object;
	@CreateFloatVector(var_64_object);
	var_64_object->add(var_62_float);
	@SendWorldWndMessage(16, var_64_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_343(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_396_object, object var_397_object)
{
	var_0_object = var_397_object;
	var_1_object = var_396_object;
	var_3_string = false;
	if(1 != 0) {
		func_415(var_397_object, "Neutral");
		var_0_object->SetMessage(525594); //@t
		var_0_object->ClearReplies(); //@t
		bool var_412_bool = false;
		bool var_413_bool;
		func_4158(var_1_object);
		if(var_413_bool != 0) {
			bool var_419_bool;
			func_4170(var_1_object);
			if(var_419_bool != 0)
				var_412_bool = true;
		}
		if(var_412_bool != 0)
			var_0_object->AddReply(525596, 26944, 26943); //@t
		var_0_object->AddReply(525595, -1, 26942); //@t
		goto Label_385;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15b";
	}
Label_385:
	bool var_431_bool;
	func_4000(var_431_bool);
	if(var_431_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_414;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_414:
		return 0;

	}
	
}


// @pe
void func_3162(object var_2_object, string var_754_string)
{
	bool var_755_bool;
	func_4000(var_755_bool);
	if(!var_755_bool) //@nz
		return 0;
	if(var_754_string == var_2_object)
		return 0;
	string var_758_string; bool var_759_bool;
	var_754_string = var_758_string;
	if(var_754_string == "")
		var_759_bool = false;
	else
		var_759_bool = true;
	func_3787(var_758_string, var_759_bool);
	var_2_object = var_754_string;
	
}


void func_3415(void)
{
	bool var_68_bool; int var_69_int; int var_70_int; bool var_71_bool;
	@WaitForAnimEnd();
	bool var_72_bool;
	func_3552(var_72_bool);
	if(!var_72_bool) //@nz
		return 12;
	int var_74_int;
	func_3975(var_74_int);
	int var_66_int;
	var_74_int = var_66_int;
	int var_67_int = 0;
	
	for(;;) {
		bool var_87_bool = false;
		if(var_67_int < 5) {
			bool var_90_bool;
			func_3552(var_90_bool);
			if(var_90_bool != 0)
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			if(!var_66_int) { //@nz
				@Sleep(3, var_68_bool);
				if(!var_68_bool) { //@nz
				} else {
			} else {
			@irand(var_69_int, var_66_int);
			@irand(var_70_int, 5);
			if(var_70_int != 0)
				var_69_int = 0;
			string var_101_string; int var_102_int;
			var_69_int = var_102_int;
			func_3968(var_101_string, var_102_int);
			@PlayAnimation("all", var_101_string);
			@WaitForAnimEnd(var_71_bool);
			var_103_bool = !var_71_bool; //@nz
			if(var_103_bool == 0) goto Label_3470;
			goto Label_3481;
			}
				Label_3470:
					bool var_94_bool;
					func_3484(var_94_bool);
					var_95_bool = !var_94_bool; //@nz
					if(var_95_bool == 0) goto Label_3476;
			}
		}
	Label_3481:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3476:
		@ResetAAS();
		var_67_int += 1;
	}
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_228_object, object var_229_object)
{
	var_0_object = var_229_object;
	var_1_object = var_228_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_229_object, "Neutral");
		var_0_object->SetMessage(525480); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525481, 27536, 26837); //@t
		var_0_object->AddReply(526263, 27536, 27537); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_254_bool;
	func_4000(var_254_bool);
	if(var_254_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_3936(bool var_74_bool, string var_75_string, string var_76_string)
{
	object var_78_object;
	@FindActor(var_78_object, var_75_string);
	if(var_78_object == null)
		var_74_bool = false;
	@Trigger(var_78_object, var_76_string);
	var_74_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4194(bool var_625_bool)
{
	int var_627_int;
	func_3842(var_627_int, "k10q01");
	if(var_627_int == 1)
		var_625_bool = true;
	var_625_bool = false;
}


// @pe
void func_4452(object var_59_object)
{
	var_60_bool = GlobalVars[1];
	if(!var_60_bool) { //@nz
		int var_62_int; object var_63_object;
		var_59_object = var_63_object;
		TaskCall(1);
		func_13(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_275_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_276_bool;
	func_3962(var_276_bool, 1);
	if(var_276_bool != 0) {
		int var_279_int; object var_280_object;
		var_59_object = var_280_object;
		TaskCall(13);
		func_2231(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 0;
	}
	bool var_370_bool;
	func_3962(var_370_bool, 3);
	if(var_370_bool != 0) {
		int var_372_int; object var_373_object;
		var_59_object = var_373_object;
		TaskCall(3);
		func_262(var_374_object, var_372_int, var_373_object);
		TaskReturn();
		return 0;
	}
	bool var_441_bool;
	func_3962(var_441_bool, 5);
	if(var_441_bool != 0) {
		int var_443_int; object var_444_object;
		var_59_object = var_444_object;
		TaskCall(5);
		func_586(var_445_object, var_443_int, var_444_object);
		TaskReturn();
		return 0;
	}
	bool var_505_bool;
	func_3962(var_505_bool, 9);
	if(var_505_bool != 0) {
		int var_507_int; object var_508_object;
		var_59_object = var_508_object;
		TaskCall(7);
		func_907(var_509_object, var_507_int, var_508_object);
		TaskReturn();
		return 0;
	}
	bool var_581_bool;
	func_3962(var_581_bool, 10);
	if(var_581_bool != 0) {
		int var_583_int; object var_584_object;
		var_59_object = var_584_object;
		TaskCall(9);
		func_1451(var_585_object, var_583_int, var_584_object);
		TaskReturn();
		return 0;
	}
	bool var_662_bool;
	func_3962(var_662_bool, 12);
	if(var_662_bool != 0) {
		int var_664_int; object var_665_object;
		var_59_object = var_665_object;
		TaskCall(11);
		func_1972(var_666_object, var_664_int, var_665_object);
		TaskReturn();
		return 0;
	}
	int var_723_int; object var_724_object;
	var_59_object = var_724_object;
	TaskCall(15);
	func_3023(var_725_object, var_723_int, var_724_object);
	TaskReturn();
}


void func_3948(float var_64_float)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_66_float = var_64_float;
}


// @pe
void func_4206(bool var_638_bool)
{
	int var_640_int;
	func_3842(var_640_int, "k10q01");
	if(var_640_int == 2)
		var_638_bool = true;
	var_638_bool = false;
}


void func_3953(int var_128_int)
{
	float var_130_float;
	@GetGameTime(var_130_float);
	var_128_int = 1 + (var_130_float / 24);
}


// @pe
void func_2419(object var_2_object, string var_329_string)
{
	bool var_330_bool;
	func_4000(var_330_bool);
	if(!var_330_bool) //@nz
		return 0;
	if(var_329_string == var_2_object)
		return 0;
	string var_333_string; bool var_334_bool;
	var_329_string = var_333_string;
	if(var_329_string == "")
		var_334_bool = false;
	else
		var_334_bool = true;
	func_3787(var_333_string, var_334_bool);
	var_2_object = var_329_string;
	
}


void func_3700(bool var_84_bool, object var_85_object)
{
	string var_91_string; bool var_93_bool; int var_94_int; string var_95_string;
	var_91_string = "c";
	int var_92_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_85_object->HasProperty((var_91_string + (var_92_int + 1)), var_93_bool);
			if(!var_93_bool) { //@nz
			} else {
				var_92_int += 1;
			}
		}
		if(!var_92_int) { //@nz
			var_84_bool = false;
			return 10;
		}
		var_94_int = 0;
		if(var_92_int > 1)
			@irand(var_94_int, var_92_int);
		var_85_object->GetProperty((var_91_string + (var_94_int + 1)), var_95_string);
		bool var_107_bool; string var_108_string;
		var_95_string = var_108_string;
		func_3793(var_107_bool, var_108_string);
		var_107_bool = var_84_bool;
		return 10;

	}
}


// @pe
void func_4218(bool var_631_bool)
{
	int var_633_int;
	func_3842(var_633_int, "ook10Georg1");
	if(var_633_int == 0) {
		var_631_bool = true;
		return 0;
	}
	var_631_bool = false;
}


// @pe
void func_3962(bool var_276_bool, int var_277_int)
{
	int var_278_int;
	func_3953(var_278_int);
	var_276_bool = var_278_int == var_277_int;
}


void func_3968(string var_80_string, int var_81_int)
{
	string var_83_string = "idle";
	if(var_81_int != 0)
		var_83_string += var_81_int;
	var_83_string = var_80_string;
}


// @pe
void func_4230(bool var_547_bool)
{
	int var_549_int;
	func_3842(var_549_int, "k9q01");
	if(var_549_int == 1)
		var_547_bool = true;
	var_547_bool = false;
}


void func_3975(int var_74_int)
{
	int var_77_int; bool var_78_bool;
	var_77_int = 0;
	
	for(;;) {
		string var_80_string; int var_81_int;
		var_77_int = var_81_int;
		func_3968(var_80_string, var_81_int);
		@HasAnimation(var_78_bool, "all", var_80_string);
		if(!var_78_bool) //@nz
			break;
		var_77_int += 1;
	}
	var_77_int = var_74_int;
}


void func_907(object var_0_object, int var_507_int, object var_508_object)
{
	var_0_object = var_508_object;
	bool var_518_bool; object var_519_object;
	object var_520_object;
	func_3815(var_520_object);
	var_520_object = var_519_object;
	func_3642(var_518_bool, var_519_object);
	bool var_521_bool; object var_522_object;
	var_508_object = var_522_object;
	func_3557(var_521_bool, var_522_object, 70.0);
	if(!var_521_bool) { //@nz
		var_507_int = -2;
		return 8;
	}
	object var_514_object;
	@CreateDialog(var_514_object);
	int var_525_int;
	func_3994(var_525_int);
	var_514_object->SetNPCName(var_525_int);
	int var_526_int;
	func_3992(var_526_int);
	var_514_object->SetNPCDescription(var_526_int);
	string var_527_string;
	func_3996(var_527_string);
	var_514_object->SetPhoto(var_527_string);
	string var_528_string;
	func_3998(var_528_string);
	var_514_object->SetPhoto2(var_528_string);
	int var_529_int;
	func_4435(var_529_int);
	var_514_object->SetPlayerName(var_529_int);
	bool var_515_bool;
	@IsOverrideActive(var_515_bool);
	if(var_515_bool != 0) {
		var_507_int = -2;
		return 8;
	}
	@DoDialog(var_514_object);
	object var_531_object; object var_532_object;
	var_508_object = var_531_object;
	var_514_object = var_532_object;
	TaskCall(8);
	func_988(var_533_object, var_534_object, var_535_string, var_536_bool, var_531_object, var_532_object);
	TaskReturn();
	bool var_517_bool;
	var_514_object->IsDialogEnd(var_517_bool);
	
	for(;;) {
		var_579_bool = !var_517_bool; //@nz
		if(var_579_bool == 0) goto Label_977;
		@sync();
		var_514_object->IsDialogEnd(var_517_bool);
	}
	
Label_977:
	object var_580_object;
	var_508_object = var_580_object;
	func_3625();
	@StopDialog(var_514_object);
	var_514_object->GetReturnValue(-1);
	int var_516_int = var_507_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4242(bool var_556_bool)
{
	int var_558_int;
	func_3842(var_558_int, "k9q01");
	if(var_558_int == 3)
		var_556_bool = true;
	var_556_bool = false;
}


// @pe
void func_152(object var_2_object, string var_235_string)
{
	bool var_236_bool;
	func_4000(var_236_bool);
	if(!var_236_bool) //@nz
		return 0;
	if(var_235_string == var_2_object)
		return 0;
	string var_239_string; bool var_240_bool;
	var_235_string = var_239_string;
	if(var_235_string == "")
		var_240_bool = false;
	else
		var_240_bool = true;
	func_3787(var_239_string, var_240_bool);
	var_2_object = var_235_string;
	
}


void func_3737(bool var_115_bool, object var_116_object)
{
	bool var_124_bool; int var_125_int; string var_126_string;
	int var_128_int;
	func_3953(var_128_int);
	string var_122_string = ("d" + var_128_int) + "m";
	int var_123_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_116_object->HasProperty((var_122_string + (var_123_int + 1)), var_124_bool);
			if(!var_124_bool) { //@nz
			} else {
				var_123_int += 1;
			}
		}
		if(!var_123_int) { //@nz
			var_115_bool = false;
			return 10;
		}
		var_125_int = 0;
		if(var_123_int > 1)
			@irand(var_125_int, var_123_int);
		var_116_object->GetProperty((var_122_string + (var_125_int + 1)), var_126_string);
		bool var_147_bool; string var_148_string;
		var_126_string = var_148_string;
		func_3793(var_147_bool, var_148_string);
		var_147_bool = var_115_bool;
		return 10;

	}
}


void func_3992(int var_216_int)
{
	var_216_int = 515534;
}


// @pe
void func_667(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_467_object, object var_468_object)
{
	var_0_object = var_468_object;
	var_3_string = false;
	if(1 != 0) {
		func_730(var_468_object, "Neutral");
		var_0_object->SetMessage(525864); //@t
		var_0_object->ClearReplies(); //@t
		bool var_483_bool;
		func_4182(var_467_object);
		if(var_483_bool != 0)
			var_0_object->AddReply(525865, 30508, 27164); //@t
		var_0_object->AddReply(525874, -1, 27173); //@t
		goto Label_700;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29f";
	}
Label_700:
	bool var_495_bool;
	func_4000(var_495_bool);
	if(var_495_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_729;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_729:
		return 0;

	}
	
}


void func_3994(int var_215_int)
{
	var_215_int = 502859;
}


void func_3996(string var_217_string)
{
	var_217_string = "ui/NPC_Georg.png";
}


// @pe
void func_4254(bool var_319_bool)
{
	int var_321_int;
	func_3842(var_321_int, "ook1Georg1");
	if(var_321_int == 0) {
		var_319_bool = true;
		return 0;
	}
	var_319_bool = false;
}


void func_3484(bool var_94_bool)
{
	var_94_bool = true;
}


void func_3486(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3233(object var_0_object)
{
	bool var_42_bool;
	func_3552(var_42_bool);
	if(!var_42_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_3361();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3415();
	}
}
EMIT "Return(); Pop(0)";


void func_3998(string var_218_string)
{
	var_218_string = "ui/NPC_Georg_b.png";
}


// @pe
void func_415(object var_2_object, string var_403_string)
{
	bool var_404_bool;
	func_4000(var_404_bool);
	if(!var_404_bool) //@nz
		return 0;
	if(var_403_string == var_2_object)
		return 0;
	string var_407_string; bool var_408_bool;
	var_403_string = var_407_string;
	if(var_403_string == "")
		var_408_bool = false;
	else
		var_408_bool = true;
	func_3787(var_407_string, var_408_bool);
	var_2_object = var_403_string;
	
}


void func_4000(bool var_111_bool)
{
	var_111_bool = true;
}


void func_4002(void)
{
	@SetVariable("k1q02", 3);
	object var_53_object;
	func_4385(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_3948(var_64_float);
	var_50_object->AddMark("k1q02GeorgGotoMaria", "pt_map_maria", 0, 524779, var_64_float);
	func_4279();
}
EMIT "Stack[-1] = 0";


void func_3491(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


void func_4266(void)
{
	object var_129_object;
	@CreateDiaryEntry(var_129_object, 331, 2, 524776);
	bool var_133_bool; object var_134_object;
	var_129_object = var_134_object;
	func_4357(var_133_bool, var_134_object, 326);
}
EMIT "Stack[-1] = 0";


void func_3499(bool var_74_bool, object var_75_object, string var_76_string)
{
	var_81_bool = IsFuncExist(var_75_object, "HasProperty", 2);
	if(!var_81_bool) { //@nz
		var_74_bool = false;
		return 2;
	}
	bool var_78_bool;
	var_75_object->HasProperty(var_76_string, var_78_bool);
	var_78_bool = var_74_bool;
}


void func_1451(object var_0_object, int var_583_int, object var_584_object)
{
	var_0_object = var_584_object;
	bool var_594_bool; object var_595_object;
	object var_596_object;
	func_3815(var_596_object);
	var_596_object = var_595_object;
	func_3642(var_594_bool, var_595_object);
	bool var_597_bool; object var_598_object;
	var_584_object = var_598_object;
	func_3557(var_597_bool, var_598_object, 70.0);
	if(!var_597_bool) { //@nz
		var_583_int = -2;
		return 8;
	}
	object var_590_object;
	@CreateDialog(var_590_object);
	int var_601_int;
	func_3994(var_601_int);
	var_590_object->SetNPCName(var_601_int);
	int var_602_int;
	func_3992(var_602_int);
	var_590_object->SetNPCDescription(var_602_int);
	string var_603_string;
	func_3996(var_603_string);
	var_590_object->SetPhoto(var_603_string);
	string var_604_string;
	func_3998(var_604_string);
	var_590_object->SetPhoto2(var_604_string);
	int var_605_int;
	func_4435(var_605_int);
	var_590_object->SetPlayerName(var_605_int);
	bool var_591_bool;
	@IsOverrideActive(var_591_bool);
	if(var_591_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	@DoDialog(var_590_object);
	object var_607_object; object var_608_object;
	var_584_object = var_607_object;
	var_590_object = var_608_object;
	TaskCall(10);
	func_1532(var_609_object, var_610_object, var_611_string, var_612_bool, var_607_object, var_608_object);
	TaskReturn();
	bool var_593_bool;
	var_590_object->IsDialogEnd(var_593_bool);
	
	for(;;) {
		var_660_bool = !var_593_bool; //@nz
		if(var_660_bool == 0) goto Label_1521;
		@sync();
		var_590_object->IsDialogEnd(var_593_bool);
	}
	
Label_1521:
	object var_661_object;
	var_584_object = var_661_object;
	func_3625();
	@StopDialog(var_590_object);
	var_590_object->GetReturnValue(-1);
	int var_592_int = var_583_int;
}
EMIT "Stack[-4] = 0";


void func_1972(object var_0_object, int var_664_int, object var_665_object)
{
	var_0_object = var_665_object;
	bool var_675_bool; object var_676_object;
	object var_677_object;
	func_3815(var_677_object);
	var_677_object = var_676_object;
	func_3642(var_675_bool, var_676_object);
	bool var_678_bool; object var_679_object;
	var_665_object = var_679_object;
	func_3557(var_678_bool, var_679_object, 70.0);
	if(!var_678_bool) { //@nz
		var_664_int = -2;
		return 8;
	}
	object var_671_object;
	@CreateDialog(var_671_object);
	int var_682_int;
	func_3994(var_682_int);
	var_671_object->SetNPCName(var_682_int);
	int var_683_int;
	func_3992(var_683_int);
	var_671_object->SetNPCDescription(var_683_int);
	string var_684_string;
	func_3996(var_684_string);
	var_671_object->SetPhoto(var_684_string);
	string var_685_string;
	func_3998(var_685_string);
	var_671_object->SetPhoto2(var_685_string);
	int var_686_int;
	func_4435(var_686_int);
	var_671_object->SetPlayerName(var_686_int);
	bool var_672_bool;
	@IsOverrideActive(var_672_bool);
	if(var_672_bool != 0) {
		var_664_int = -2;
		return 8;
	}
	@DoDialog(var_671_object);
	object var_688_object; object var_689_object;
	var_665_object = var_688_object;
	var_671_object = var_689_object;
	TaskCall(12);
	func_2053(var_690_object, var_691_object, var_692_string, var_693_bool, var_688_object, var_689_object);
	TaskReturn();
	bool var_674_bool;
	var_671_object->IsDialogEnd(var_674_bool);
	
	for(;;) {
		var_721_bool = !var_674_bool; //@nz
		if(var_721_bool == 0) goto Label_2042;
		@sync();
		var_671_object->IsDialogEnd(var_674_bool);
	}
	
Label_2042:
	object var_722_object;
	var_665_object = var_722_object;
	func_3625();
	@StopDialog(var_671_object);
	var_671_object->GetReturnValue(-1);
	int var_673_int = var_664_int;
}
EMIT "Stack[-4] = 0";


void func_3253(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_3543(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


void func_4279(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 329, 2, 524774);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_4357(var_72_bool, var_73_object, 326);
}
EMIT "Stack[-1] = 0";


void func_2231(object var_0_object, int var_279_int, object var_280_object)
{
	var_0_object = var_280_object;
	bool var_290_bool; object var_291_object;
	object var_292_object;
	func_3815(var_292_object);
	var_292_object = var_291_object;
	func_3642(var_290_bool, var_291_object);
	bool var_293_bool; object var_294_object;
	var_280_object = var_294_object;
	func_3557(var_293_bool, var_294_object, 70.0);
	if(!var_293_bool) { //@nz
		var_279_int = -2;
		return 8;
	}
	object var_286_object;
	@CreateDialog(var_286_object);
	int var_297_int;
	func_3994(var_297_int);
	var_286_object->SetNPCName(var_297_int);
	int var_298_int;
	func_3992(var_298_int);
	var_286_object->SetNPCDescription(var_298_int);
	string var_299_string;
	func_3996(var_299_string);
	var_286_object->SetPhoto(var_299_string);
	string var_300_string;
	func_3998(var_300_string);
	var_286_object->SetPhoto2(var_300_string);
	int var_301_int;
	func_4435(var_301_int);
	var_286_object->SetPlayerName(var_301_int);
	bool var_287_bool;
	@IsOverrideActive(var_287_bool);
	if(var_287_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	@DoDialog(var_286_object);
	object var_303_object; object var_304_object;
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(14);
	func_2312(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	bool var_289_bool;
	var_286_object->IsDialogEnd(var_289_bool);
	
	for(;;) {
		var_368_bool = !var_289_bool; //@nz
		if(var_368_bool == 0) goto Label_2301;
		@sync();
		var_286_object->IsDialogEnd(var_289_bool);
	}
	
Label_2301:
	object var_369_object;
	var_280_object = var_369_object;
	func_3625();
	@StopDialog(var_286_object);
	var_286_object->GetReturnValue(-1);
	int var_288_int = var_279_int;
}
EMIT "Stack[-4] = 0";


void func_3511(bool var_66_bool, object var_67_object, string var_68_string, float var_69_float, float var_70_float, float var_71_float)
{
	object var_75_object;
	var_67_object = var_75_object;
	string var_76_string;
	var_68_string = var_76_string;
	bool var_74_bool;
	func_3499(var_74_bool, var_75_object, var_76_string);
	if(!var_74_bool) //@nz
		var_66_bool = false;
	float var_73_float;
	var_67_object->GetProperty(var_68_string, var_73_float);
	float var_84_float; float var_86_float; float var_87_float;
	var_70_float = var_86_float;
	var_71_float = var_87_float;
	func_3831(var_84_float, (var_73_float + var_69_float), var_86_float, var_87_float);
	var_67_object->SetProperty(var_68_string, var_84_float);
	var_66_bool = true;
}


// @pe
void func_4025(void)
{
	@SetVariable("k1q02", 5);
	func_4266();
}


// @pe
void func_4034(object var_80_object)
{
	@Trace("beta_pills 5 is given");
	object var_83_object;
	var_80_object = var_83_object;
	func_3878(var_83_object, "beta_pills", 5);
}


void func_3780(string var_49_string)
{
	float var_52_float; float var_53_float;
	@lshGetAnimTimes(var_49_string, var_52_float, var_53_float);
	@lshPlayAnimation(var_52_float, var_53_float, false);
}


void func_3268(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


void func_4292(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 544, 2, 530366);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_4357(var_151_bool, var_152_object, 326);
}
EMIT "Stack[-1] = 0";


void func_3273(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_3491(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


void func_3787(string var_239_string, bool var_240_bool)
{
	float var_245_float; float var_246_float;
	@lshGetAnimTimes(var_239_string, var_245_float, var_246_float);
	@lshPlayAnimation(var_245_float, var_246_float, var_240_bool);
}


// @pe
void func_4045(void)
{
	@SetVariable("ook3Georg1", 1);
}


void func_3533(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


void func_3023(object var_0_object, int var_723_int, object var_724_object)
{
	var_0_object = var_724_object;
	bool var_734_bool; object var_735_object;
	object var_736_object;
	func_3815(var_736_object);
	var_736_object = var_735_object;
	func_3642(var_734_bool, var_735_object);
	bool var_737_bool; object var_738_object;
	var_724_object = var_738_object;
	func_3557(var_737_bool, var_738_object, 70.0);
	if(!var_737_bool) { //@nz
		var_723_int = -2;
		return 8;
	}
	object var_730_object;
	@CreateDialog(var_730_object);
	int var_741_int;
	func_3994(var_741_int);
	var_730_object->SetNPCName(var_741_int);
	int var_742_int;
	func_3992(var_742_int);
	var_730_object->SetNPCDescription(var_742_int);
	string var_743_string;
	func_3996(var_743_string);
	var_730_object->SetPhoto(var_743_string);
	string var_744_string;
	func_3998(var_744_string);
	var_730_object->SetPhoto2(var_744_string);
	int var_745_int;
	func_4435(var_745_int);
	var_730_object->SetPlayerName(var_745_int);
	bool var_731_bool;
	@IsOverrideActive(var_731_bool);
	if(var_731_bool != 0) {
		var_723_int = -2;
		return 8;
	}
	@DoDialog(var_730_object);
	object var_747_object; object var_748_object;
	var_724_object = var_747_object;
	var_730_object = var_748_object;
	TaskCall(16);
	func_3104(var_749_object, var_750_object, var_751_string, var_752_bool, var_747_object, var_748_object);
	TaskReturn();
	bool var_733_bool;
	var_730_object->IsDialogEnd(var_733_bool);
	
	for(;;) {
		var_777_bool = !var_733_bool; //@nz
		if(var_777_bool == 0) goto Label_3093;
		@sync();
		var_730_object->IsDialogEnd(var_733_bool);
	}
	
Label_3093:
	object var_778_object;
	var_724_object = var_778_object;
	func_3625();
	@StopDialog(var_730_object);
	var_730_object->GetReturnValue(-1);
	int var_732_int = var_723_int;
}
EMIT "Stack[-4] = 0";


void func_3793(bool var_107_bool, string var_108_string)
{
	bool var_110_bool;
	bool var_111_bool;
	func_4000(var_111_bool);
	if(var_111_bool != 0) {
		@lshHasSpeech(var_110_bool, var_108_string);
		if(var_110_bool != 0) {
			@lshPlaySpeech(var_108_string);
			var_107_bool = true;
		}
	}
	var_107_bool = false;
}


void func_4305(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 394, 1, 525887);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_4357(var_56_bool, var_57_object, 390);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4051(void)
{
	@SetVariable("k5q01", 3);
	func_4305();
}


void func_3543(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_3533(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


// @pe
void func_730(object var_2_object, string var_474_string)
{
	bool var_475_bool;
	func_4000(var_475_bool);
	if(!var_475_bool) //@nz
		return 0;
	if(var_474_string == var_2_object)
		return 0;
	string var_478_string; bool var_479_bool;
	var_474_string = var_478_string;
	if(var_474_string == "")
		var_479_bool = false;
	else
		var_479_bool = true;
	func_3787(var_478_string, var_479_bool);
	var_2_object = var_474_string;
	
}


// @pe
void func_988(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_531_object, object var_532_object)
{
	var_0_object = var_532_object;
	var_1_object = var_531_object;
	var_3_string = false;
	if(1 != 0) {
		func_1066(var_532_object, "Neutral");
		var_0_object->SetMessage(526481); //@t
		var_0_object->ClearReplies(); //@t
		bool var_547_bool;
		func_4230(var_1_object);
		if(var_547_bool != 0)
			var_0_object->AddReply(526482, 30355, 27748); //@t
		bool var_556_bool;
		func_4242(var_1_object);
		if(var_556_bool != 0)
			var_0_object->AddReply(526504, 30366, 27770); //@t
		var_0_object->AddReply(526489, -1, 27755); //@t
		var_0_object->AddReply(528924, -1, 30354); //@t
		goto Label_1036;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3e0";
	}
Label_1036:
	bool var_571_bool;
	func_4000(var_571_bool);
	if(var_571_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1065;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1065:
		return 0;

	}
	
}


// @pe
void func_4060(void)
{
	@SetVariable("ook10Georg1", 1);
}


void func_4318(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 519, 1, 529811);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_4357(var_56_bool, var_57_object, 517);
}
EMIT "Stack[-1] = 0";


void func_3295(void)
{
	float var_56_float;
	@rand(var_56_float, 8, 16);
	@SetTimer(10, var_56_float);
}


void func_3808(void)
{
	bool var_44_bool;
	func_4000(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


void func_3552(bool var_42_bool)
{
	bool var_44_bool;
	@IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
}


// @pe
void func_4066(void)
{
	@SetVariable("k9q01", 2);
	func_4318();
	bool var_74_bool;
	func_3936(var_74_bool, "quest_k9_01", "init_termitnik2");
}


void func_3557(bool var_168_bool, object var_169_object, float var_170_float)
{
	cvector var_181_cvector; bool var_188_bool;
	var_169_object->GetPosition(var_181_cvector);
	float var_180_float;
	var_169_object->GetEyesHeight(var_180_float);
	var_189_float = GetByIndex(var_181_cvector, 1);
	SetByIndex(var_181_cvector, 1) = (var_189_float + var_180_float);
	cvector var_182_cvector;
	@GetPosition(var_182_cvector);
	@GetEyesHeight(var_180_float);
	var_190_float = GetByIndex(var_182_cvector, 1);
	SetByIndex(var_182_cvector, 1) = (var_190_float + var_180_float);
	cvector var_183_cvector = var_181_cvector - var_182_cvector;
	var_191_float = GetByIndex(var_183_cvector, 1);
	SetByIndex(var_183_cvector, 1) = (float)0;
	var_193_float = sqrt(var_183_cvector | var_183_cvector);
	var_183_cvector /= var_193_float;
	cvector var_184_cvector = -var_183_cvector;
	cvector var_195_cvector;
	func_3821(var_195_cvector, (var_184_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_185_cvector = ((var_183_cvector * var_170_float) + (var_195_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_187_bool;
	@IsOverrideActive(var_187_bool);
	if(var_187_bool != 0)
		var_168_bool = false;
	@StopWorld();
	@CameraTransit((var_182_cvector + var_185_cvector), var_184_cvector);
	var_208_float = GetByIndex(var_185_cvector, 0);
	var_209_float = GetByIndex(var_185_cvector, 2);
	@Rotate(var_208_float, var_209_float);
	bool var_210_bool;
	func_4000(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_3619;
		@LookAsyncCamera("head");
	}
Label_3619:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_168_bool = true;
	
}


void func_3815(object var_75_object)
{
	object var_77_object;
	@self(var_77_object);
	var_77_object = var_75_object;
}
EMIT "Stack[-1] = 0";


void func_3304(void)
{
	@KillTimer(10);
}


void func_4331(void)
{
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 521, 1, 529813);
	bool var_115_bool; object var_116_object;
	var_111_object = var_116_object;
	func_4357(var_115_bool, var_116_object, 517);
}
EMIT "Stack[-1] = 0";


void func_3821(cvector var_195_cvector, cvector var_196_cvector)
{
	float var_199_float = sqrt(var_196_cvector | var_196_cvector);
	if(var_199_float < 0.000001)
		var_195_cvector = [0.0, 0.0, 0.0];
	var_195_cvector = var_196_cvector / var_199_float;
}


// @pe
void func_4080(void)
{
	@SetVariable("k9q01", 4);
	func_4331();
}


// @pe
void func_3831(float var_84_float, float var_85_float, float var_86_float, float var_87_float)
{
	if(var_85_float < var_86_float) {
		var_86_float = var_84_float;
		return 0;
	}
	if(var_85_float > var_87_float) {
		var_87_float = var_84_float;
		return 0;
	}
	var_85_float = var_84_float;
}


void func_4344(object var_81_object)
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
void func_4089(void)
{
	@SetVariable("ook1Georg1", 1);
}


// @pe
void func_1532(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_607_object, object var_608_object)
{
	var_0_object = var_608_object;
	var_1_object = var_607_object;
	var_3_string = false;
	if(1 != 0) {
		func_1622(var_608_object, "Neutral");
		var_0_object->SetMessage(526953); //@t
		var_0_object->ClearReplies(); //@t
		bool var_623_bool = true;
		bool var_624_bool = false;
		bool var_625_bool;
		func_4194(var_1_object);
		if(var_625_bool != 0) {
			bool var_631_bool;
			func_4218(var_1_object);
			if(var_631_bool != 0)
				var_624_bool = true;
		}
		if(var_624_bool != 1) {
			bool var_637_bool = false;
			bool var_638_bool;
			func_4206(var_1_object);
			if(var_638_bool != 0) {
				bool var_644_bool;
				func_4218(var_1_object);
				if(var_644_bool != 0)
					var_637_bool = true;
			}
			if(var_637_bool != 1)
				var_623_bool = false;
		}
		if(var_623_bool != 0)
			var_0_object->AddReply(526954, 29329, 28246); //@t
		var_0_object->AddReply(526957, -1, 28249); //@t
		goto Label_1592;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x600";
	}
Label_1592:
	bool var_652_bool;
	func_4000(var_652_bool);
	if(var_652_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3780(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1621;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1621:
		return 0;

	}
	
}


// @pe
void func_4095(void)
{
	@SetVariable("k1q02", -1);
	func_4292();
}


