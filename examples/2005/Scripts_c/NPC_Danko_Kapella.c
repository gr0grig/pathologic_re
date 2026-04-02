// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 36154) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5501();
			}
			if(var_47_cvector == 36158) {
				object var_58_object = var_1_object;
				func_5456(var_0_object);
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5474();
			}
			if(var_46_bool == 36153) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(534512); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool = false;
				bool var_146_bool;
				func_5763(var_1_object);
				if(var_146_bool != 0) {
					bool var_152_bool;
					func_5775(var_1_object);
					if(var_152_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_object->AddReply(534513, 41645, 36154); //@t
				var_0_object->AddReply(540246, 42229, 42228); //@t
				var_0_object->AddReply(534518, -1, 36159); //@t
				return 0;
			}
			if(var_46_bool == 42229) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540248, 42232, 42230); //@t
				var_0_object->AddReply(540249, 42233, 42231); //@t
				return 0;
			}
			if(var_46_bool == 42233) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540252, 42236, 42234); //@t
				return 0;
			}
			if(var_46_bool == 42232) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540253, 42236, 42235); //@t
				return 0;
			}
			if(var_46_bool == 42236) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540254); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540255, -1, 42238); //@t
				var_0_object->AddReply(540256, 42240, 42239); //@t
				return 0;
			}
			if(var_46_bool == 42240) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540258, -1, 42241); //@t
				return 0;
			}
			if(var_46_bool == 41645) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(539692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539693, 41648, 41646); //@t
				var_0_object->AddReply(539694, 40360, 41647); //@t
				return 0;
			}
			if(var_46_bool == 41648) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(539695); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539696, 40360, 41649); //@t
				return 0;
			}
			if(var_46_bool == 40360) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538477, 40362, 40361); //@t
				var_0_object->AddReply(538481, 40366, 40365); //@t
				return 0;
			}
			if(var_46_bool == 40366) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539691, 40362, 41643); //@t
				var_0_object->AddReply(539697, 41652, 41651); //@t
				return 0;
			}
			if(var_46_bool == 41652) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(539698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539699, 40362, 41653); //@t
				var_0_object->AddReply(539701, 41658, 41657); //@t
				return 0;
			}
			if(var_46_bool == 41658) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(539702); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539703, 40364, 41659); //@t
				var_0_object->AddReply(539704, 41662, 41661); //@t
				return 0;
			}
			if(var_46_bool == 41662) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(539705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539706, 40364, 41663); //@t
				var_0_object->AddReply(539707, -1, 41664); //@t
				return 0;
			}
			if(var_46_bool == 40362) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538479, 40364, 40363); //@t
				var_0_object->AddReply(539700, 40364, 41655); //@t
				return 0;
			}
			if(var_46_bool == 40364) {
				func_171(var_47_cvector, "Neutral");
				var_0_object->SetMessage(538480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534517, -1, 36158); //@t
				return 0;
			}
			var_3_string = true;
			bool var_292_bool;
			func_5416(var_292_bool);
			if(var_292_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_46_bool == 36960) {
				func_716(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_46_bool == 36962) {
				func_716(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_46_bool == 36964) {
				func_716(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_94_bool;
			func_5416(var_94_bool);
			if(var_94_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2e3";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_46_bool == 543) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5418();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_5424();
				func_980(var_47_cvector, "Neutral");
				var_0_object->SetMessage(500473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500476, 547, 546); //@t
				var_0_object->AddReply(500474, 545, 544); //@t
				return 0;
			}
			if(var_46_bool == 545) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_5668();
				func_980(var_47_cvector, "Neutral");
				var_0_object->SetMessage(500475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500480, 547, 550); //@t
				var_0_object->AddReply(500479, -1, 549); //@t
				return 0;
			}
			if(var_46_bool == 547) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5692();
				func_980(var_47_cvector, "Neutral");
				var_0_object->SetMessage(500477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500481, 554, 552); //@t
				var_0_object->AddReply(508439, 9263, 9262); //@t
				return 0;
			}
			if(var_46_bool == 9263) {
				func_980(var_47_cvector, "Neutral");
				var_0_object->SetMessage(508440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508442, -1, 9265); //@t
				var_0_object->AddReply(508441, -1, 9264); //@t
				return 0;
			}
			if(var_46_bool == 554) {
				func_980(var_47_cvector, "Neutral");
				var_0_object->SetMessage(500483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500484, -1, 555); //@t
				var_0_object->AddReply(500485, -1, 556); //@t
				return 0;
			}
			var_3_string = true;
			bool var_127_bool;
			func_5416(var_127_bool);
			if(var_127_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3eb";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 13328) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5656();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_5698();
			}
			if(var_47_cvector == 13695) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_5656();
			}
			if(var_46_bool == 3618) {
				bool var_80_bool = false;
				bool var_81_bool;
				func_5970(var_1_object);
				if(var_81_bool != 0) {
					bool var_89_bool;
					func_6054(var_1_object);
					if(var_89_bool != 0)
						var_80_bool = true;
				}
				if(var_80_bool != 0) {
					object var_95_object; object var_96_object;
					var_95_object = var_1_object;
					var_96_object = var_0_object;
					func_5714();
					object var_99_object; object var_100_object;
					var_99_object = var_1_object;
					var_100_object = var_0_object;
					func_5720();
					func_1389(var_47_cvector, "Neutral");
					var_0_object->SetMessage(503371); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(503375, 3621, 3619); //@t
					var_0_object->AddReply(503376, 3621, 3620); //@t
					return 0;
				}
				bool var_122_bool = false;
				bool var_123_bool = false;
				bool var_124_bool;
				func_5958(var_1_object);
				if(var_124_bool != 0) {
					bool var_130_bool;
					func_5934(var_1_object);
					if(!var_130_bool) //@nz
						var_123_bool = true;
				}
				if(var_123_bool != 0) {
					bool var_137_bool;
					func_5946(var_1_object);
					if(!var_137_bool) //@nz
						var_122_bool = true;
				}
				if(var_122_bool != 0) {
					object var_144_object; object var_145_object;
					var_144_object = var_1_object;
					var_145_object = var_0_object;
					func_5714();
					func_1389(var_47_cvector, "Neutral");
					var_0_object->SetMessage(512095); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512096, 13323, 13322); //@t
					var_0_object->AddReply(536136, -1, 37895); //@t
					return 0;
				}
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512524, -1, 13694); //@t
				var_0_object->AddReply(536137, -1, 37896); //@t
				return 0;
			}
			if(var_46_bool == 13323) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512098, 13325, 13324); //@t
				return 0;
			}
			if(var_46_bool == 13325) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512099); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512100, 13327, 13326); //@t
				return 0;
			}
			if(var_46_bool == 13327) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_5662();
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(512101); //@t
				var_0_object->ClearReplies(); //@t
				bool var_184_bool;
				func_5922(var_1_object);
				if(var_184_bool != 0)
					var_0_object->AddReply(512102, -1, 13328); //@t
				bool var_193_bool;
				func_5922(var_1_object);
				if(!var_193_bool) //@nz
					var_0_object->AddReply(512525, -1, 13695); //@t
				return 0;
			}
			if(var_46_bool == 3621) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503378, 3626, 3622); //@t
				var_0_object->AddReply(503379, 3626, 3624); //@t
				var_0_object->AddReply(503380, 3626, 3625); //@t
				return 0;
			}
			if(var_46_bool == 3626) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503382, 3631, 3627); //@t
				var_0_object->AddReply(503383, -1, 3630); //@t
				var_0_object->AddReply(503396, -1, 3643); //@t
				return 0;
			}
			if(var_46_bool == 3631) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503385, 3639, 3632); //@t
				var_0_object->AddReply(503386, -1, 3633); //@t
				var_0_object->AddReply(503387, -1, 3634); //@t
				var_0_object->AddReply(503388, 3636, 3635); //@t
				return 0;
			}
			if(var_46_bool == 3636) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503390, -1, 3637); //@t
				var_0_object->AddReply(503391, -1, 3638); //@t
				return 0;
			}
			if(var_46_bool == 3639) {
				func_1389(var_47_cvector, "Neutral");
				var_0_object->SetMessage(503392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503393, -1, 3640); //@t
				var_0_object->AddReply(503394, -1, 3641); //@t
				var_0_object->AddReply(503395, -1, 3642); //@t
				return 0;
			}
			var_3_string = true;
			bool var_264_bool;
			func_5416(var_264_bool);
			if(var_264_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x584";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 7322) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5507();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_5519();
				object var_105_object = var_1_object;
				func_5547(var_0_object);
			}
			if(var_47_cvector == 8137) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_5507();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_5519();
				object var_137_object = var_1_object;
				func_5547(var_0_object);
			}
			if(var_47_cvector == 7317) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_5513();
			}
			if(var_47_cvector == 7313) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_5513();
			}
			if(var_46_bool == 7320) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506647); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool = false;
				bool var_165_bool;
				func_5787(var_1_object);
				if(var_165_bool != 0) {
					bool var_173_bool;
					func_5811(var_1_object);
					if(var_173_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_object->AddReply(507373, 35431, 8134); //@t
				bool var_182_bool = false;
				bool var_183_bool;
				func_5799(var_1_object);
				if(var_183_bool != 0) {
					bool var_189_bool;
					func_6066(var_1_object);
					if(var_189_bool != 0)
						var_182_bool = true;
				}
				if(var_182_bool != 0)
					var_0_object->AddReply(506640, 7312, 7311); //@t
				var_0_object->AddReply(507533, -1, 8315); //@t
				return 0;
			}
			if(var_46_bool == 7312) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506643, 7316, 7315); //@t
				var_0_object->AddReply(506642, -1, 7313); //@t
				return 0;
			}
			if(var_46_bool == 7316) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506645, -1, 7317); //@t
				return 0;
			}
			if(var_46_bool == 35431) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533877, 8135, 35432); //@t
				var_0_object->AddReply(533878, 35434, 35433); //@t
				return 0;
			}
			if(var_46_bool == 35434) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533879); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533880, 35437, 35435); //@t
				var_0_object->AddReply(533881, 35437, 35436); //@t
				return 0;
			}
			if(var_46_bool == 35437) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533883, 35444, 35439); //@t
				var_0_object->AddReply(533884, 35441, 35440); //@t
				return 0;
			}
			if(var_46_bool == 35441) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533889, 35444, 35445); //@t
				return 0;
			}
			if(var_46_bool == 35444) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533887, 35447, 35443); //@t
				var_0_object->AddReply(533886, -1, 35442); //@t
				return 0;
			}
			if(var_46_bool == 35447) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533891, -1, 35448); //@t
				var_0_object->AddReply(533892, -1, 35449); //@t
				return 0;
			}
			if(var_46_bool == 8135) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(507374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506630, 7300, 7299); //@t
				var_0_object->AddReply(533893, 7300, 35450); //@t
				return 0;
			}
			if(var_46_bool == 7300) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506631); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506636, 7306, 7305); //@t
				var_0_object->AddReply(506632, 7302, 7301); //@t
				return 0;
			}
			if(var_46_bool == 7302) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506634, 7297, 7303); //@t
				var_0_object->AddReply(506635, 7297, 7304); //@t
				return 0;
			}
			if(var_46_bool == 7297) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506648, -1, 7322); //@t
				var_0_object->AddReply(507376, -1, 8137); //@t
				return 0;
			}
			if(var_46_bool == 7306) {
				func_1955(var_47_cvector, "Neutral");
				var_0_object->SetMessage(506637); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506638, 7302, 7307); //@t
				return 0;
			}
			var_3_string = true;
			bool var_322_bool;
			func_5416(var_322_bool);
			if(var_322_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7ba";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 12018) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5584();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_5563();
			}
			if(var_47_cvector == 12019) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5584();
			}
			if(var_47_cvector == 12015) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_5584();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5563();
			}
			if(var_47_cvector == 12023) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_5563();
			}
			if(var_47_cvector == 12024) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_5590();
			}
			if(var_47_cvector == 12033) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_5596();
			}
			if(var_47_cvector == 12029) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_5596();
			}
			if(var_47_cvector == 12343) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_5644();
			}
			if(var_47_cvector == 12345) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_5646();
			}
			if(var_47_cvector == 11986) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_5626();
			}
			if(var_47_cvector == 10898) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_5632();
			}
			if(var_47_cvector == 11987) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_5638();
			}
			if(var_46_bool == 11988) {
				bool var_198_bool = false;
				bool var_199_bool;
				func_5823(var_1_object);
				if(var_199_bool != 0) {
					bool var_207_bool;
					func_5835(var_1_object);
					if(var_207_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0) {
					func_2657(var_47_cvector, "Neutral");
					var_0_object->SetMessage(510844); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(510845, 11990, 11989); //@t
					return 0;
				}
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510841); //@t
				var_0_object->ClearReplies(); //@t
				bool var_231_bool;
				func_5823(var_1_object);
				if(var_231_bool != 0)
					var_0_object->AddReply(510873, 12022, 12021); //@t
				bool var_236_bool = false;
				bool var_237_bool = false;
				bool var_238_bool;
				func_5847(var_1_object);
				if(var_238_bool != 0) {
					bool var_244_bool;
					func_5859(var_1_object);
					if(var_244_bool != 0)
						var_237_bool = true;
				}
				if(var_237_bool != 0) {
					bool var_250_bool;
					func_5907(var_250_bool, var_1_object);
					if(var_250_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0)
					var_0_object->AddReply(510876, 12025, 12024); //@t
				bool var_261_bool = false;
				bool var_262_bool = false;
				bool var_263_bool;
				func_5847(var_1_object);
				if(var_263_bool != 0) {
					bool var_265_bool;
					func_5917(var_1_object);
					if(var_265_bool != 0)
						var_262_bool = true;
				}
				if(var_262_bool != 0) {
					bool var_267_bool;
					func_5907(var_267_bool, var_1_object);
					if(!var_267_bool) //@nz
						var_261_bool = true;
				}
				if(var_261_bool != 0)
					var_0_object->AddReply(511160, 12344, 12343); //@t
				bool var_273_bool;
				func_5871(var_1_object);
				if(var_273_bool != 0)
					var_0_object->AddReply(510842, 10885, 11986); //@t
				bool var_282_bool;
				func_5883(var_1_object);
				if(var_282_bool != 0)
					var_0_object->AddReply(509894, 10899, 10898); //@t
				bool var_291_bool = false;
				bool var_292_bool;
				func_5895(var_1_object);
				if(var_292_bool != 0) {
					bool var_298_bool;
					func_5726(var_1_object);
					if(var_298_bool != 0)
						var_291_bool = true;
				}
				if(var_291_bool != 0)
					var_0_object->AddReply(510843, 10909, 11987); //@t
				var_0_object->AddReply(511157, -1, 12342); //@t
				return 0;
			}
			if(var_46_bool == 10909) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509905, 10911, 10910); //@t
				var_0_object->AddReply(509912, 10911, 10917); //@t
				var_0_object->AddReply(509913, 10911, 10919); //@t
				return 0;
			}
			if(var_46_bool == 10911) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509907, 10913, 10912); //@t
				var_0_object->AddReply(509911, -1, 10916); //@t
				return 0;
			}
			if(var_46_bool == 10913) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509909, -1, 10914); //@t
				var_0_object->AddReply(509910, -1, 10915); //@t
				return 0;
			}
			if(var_46_bool == 10899) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509896, 10901, 10900); //@t
				var_0_object->AddReply(509901, 10906, 10905); //@t
				return 0;
			}
			if(var_46_bool == 10906) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509903, 10901, 10907); //@t
				return 0;
			}
			if(var_46_bool == 10901) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509898, 10903, 10902); //@t
				return 0;
			}
			if(var_46_bool == 10903) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509900, -1, 10904); //@t
				return 0;
			}
			if(var_46_bool == 10885) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509883, 10887, 10886); //@t
				var_0_object->AddReply(509893, 10887, 10896); //@t
				return 0;
			}
			if(var_46_bool == 10887) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509886, 10890, 10889); //@t
				var_0_object->AddReply(509885, -1, 10888); //@t
				return 0;
			}
			if(var_46_bool == 10890) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509888, 10892, 10891); //@t
				var_0_object->AddReply(509892, -1, 10895); //@t
				return 0;
			}
			if(var_46_bool == 10892) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(509889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509890, -1, 10893); //@t
				var_0_object->AddReply(509891, -1, 10894); //@t
				return 0;
			}
			if(var_46_bool == 12344) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511161); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511162, -1, 12345); //@t
				return 0;
			}
			if(var_46_bool == 12025) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510878, 12030, 12026); //@t
				var_0_object->AddReply(510879, 12028, 12027); //@t
				return 0;
			}
			if(var_46_bool == 12028) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510881, -1, 12029); //@t
				return 0;
			}
			if(var_46_bool == 12030) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510883, 12032, 12031); //@t
				return 0;
			}
			if(var_46_bool == 12032) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510885, -1, 12033); //@t
				return 0;
			}
			if(var_46_bool == 12022) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510875, -1, 12023); //@t
				return 0;
			}
			if(var_46_bool == 11990) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510847, 11994, 11991); //@t
				var_0_object->AddReply(510849, 11994, 11993); //@t
				var_0_object->AddReply(510848, 12010, 11992); //@t
				return 0;
			}
			if(var_46_bool == 11994) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510852, 12003, 11997); //@t
				var_0_object->AddReply(510853, 11999, 11998); //@t
				var_0_object->AddReply(510851, 12001, 11995); //@t
				return 0;
			}
			if(var_46_bool == 12001) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510857, 12003, 12002); //@t
				return 0;
			}
			if(var_46_bool == 11999) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510855, 12003, 12000); //@t
				return 0;
			}
			if(var_46_bool == 12003) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510859, 12007, 12006); //@t
				var_0_object->AddReply(534070, 35664, 35663); //@t
				return 0;
			}
			if(var_46_bool == 35664) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(534071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534072, 12010, 35665); //@t
				return 0;
			}
			if(var_46_bool == 12007) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510861, 12010, 12008); //@t
				var_0_object->AddReply(510862, 12014, 12009); //@t
				return 0;
			}
			if(var_46_bool == 12010) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510864, 12012, 12011); //@t
				var_0_object->AddReply(534073, 12012, 35667); //@t
				return 0;
			}
			if(var_46_bool == 12012) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510866, 12014, 12013); //@t
				return 0;
			}
			if(var_46_bool == 12014) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534074, 35670, 35669); //@t
				return 0;
			}
			if(var_46_bool == 35670) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(534075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510869, 12017, 12016); //@t
				var_0_object->AddReply(510868, -1, 12015); //@t
				return 0;
			}
			if(var_46_bool == 12017) {
				func_2657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(510870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510871, -1, 12018); //@t
				var_0_object->AddReply(510872, -1, 12019); //@t
				return 0;
			}
			var_3_string = true;
			bool var_583_bool;
			func_5416(var_583_bool);
			if(var_583_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa78";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 12437) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5686();
			}
			if(var_46_bool == 12435) {
				func_3727(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511245); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool = false;
				bool var_72_bool;
				func_6030(var_1_object);
				if(var_72_bool != 0) {
					bool var_80_bool;
					func_6042(var_1_object);
					if(var_80_bool != 0)
						var_71_bool = true;
				}
				if(var_71_bool != 0)
					var_0_object->AddReply(511247, 12438, 12437); //@t
				var_0_object->AddReply(511246, -1, 12436); //@t
				return 0;
			}
			if(var_46_bool == 12438) {
				func_3727(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511249, 12440, 12439); //@t
				return 0;
			}
			if(var_46_bool == 12440) {
				func_3727(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511251, 12442, 12441); //@t
				return 0;
			}
			if(var_46_bool == 12442) {
				func_3727(var_47_cvector, "Neutral");
				var_0_object->SetMessage(511252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511253, -1, 12443); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_5416(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xea6";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_47_cvector == 34823) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_5674();
			}
			if(var_47_cvector == 34827) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_5436();
				object var_85_object = var_1_object;
				func_5445(var_0_object);
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_5430();
			}
			if(var_47_cvector == 14700) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_5680();
			}
			if(var_46_bool == 14699) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513462); //@t
				var_0_object->ClearReplies(); //@t
				bool var_134_bool = false;
				bool var_135_bool;
				func_5994(var_1_object);
				if(var_135_bool != 0) {
					bool var_143_bool;
					func_5982(var_1_object);
					if(var_143_bool != 0)
						var_134_bool = true;
				}
				if(var_134_bool != 0)
					var_0_object->AddReply(533315, 37609, 34823); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_6006(var_1_object);
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_6018(var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(513463, 14713, 14700); //@t
				var_0_object->AddReply(513483, -1, 14721); //@t
				var_0_object->AddReply(535898, -1, 37608); //@t
				return 0;
			}
			if(var_46_bool == 14713) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513477, 14715, 14714); //@t
				var_0_object->AddReply(535926, 37644, 37643); //@t
				return 0;
			}
			if(var_46_bool == 37644) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535928, -1, 37645); //@t
				var_0_object->AddReply(535929, 14715, 37646); //@t
				return 0;
			}
			if(var_46_bool == 14715) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513480, 14718, 14717); //@t
				var_0_object->AddReply(513479, -1, 14716); //@t
				return 0;
			}
			if(var_46_bool == 14718) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(513481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513482, -1, 14719); //@t
				return 0;
			}
			if(var_46_bool == 37609) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535900, 37611, 37610); //@t
				var_0_object->AddReply(535905, 37611, 37615); //@t
				return 0;
			}
			if(var_46_bool == 37611) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535902, 37613, 37612); //@t
				var_0_object->AddReply(535908, 37620, 37619); //@t
				return 0;
			}
			if(var_46_bool == 37620) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535914, 37613, 37625); //@t
				var_0_object->AddReply(535904, 37617, 37614); //@t
				return 0;
			}
			if(var_46_bool == 37613) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535910, 37622, 37621); //@t
				return 0;
			}
			if(var_46_bool == 37622) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535912, 37624, 37623); //@t
				return 0;
			}
			if(var_46_bool == 37624) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535915, 37617, 37627); //@t
				var_0_object->AddReply(535916, 37617, 37629); //@t
				return 0;
			}
			if(var_46_bool == 37617) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535907, 37631, 37618); //@t
				return 0;
			}
			if(var_46_bool == 37631) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535918, 34824, 37632); //@t
				var_0_object->AddReply(535919, 34824, 37633); //@t
				return 0;
			}
			if(var_46_bool == 34824) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533317, 34826, 34825); //@t
				return 0;
			}
			if(var_46_bool == 34826) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(533318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535920, 37636, 37635); //@t
				var_0_object->AddReply(535922, 37636, 37637); //@t
				return 0;
			}
			if(var_46_bool == 37636) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535925, 37640, 37642); //@t
				var_0_object->AddReply(535923, 37640, 37639); //@t
				return 0;
			}
			if(var_46_bool == 37640) {
				func_4044(var_47_cvector, "Neutral");
				var_0_object->SetMessage(535924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533319, -1, 34827); //@t
				return 0;
			}
			var_3_string = true;
			bool var_316_bool;
			func_5416(var_316_bool);
			if(var_316_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfe3";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, cvector var_47_cvector)
	{
		if(1 != 0) {
			func_5269();
			if(var_46_int == 42557) {
				func_4657(var_47_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_5416(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1248";
	
	}

}


maintask task_19
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		var_46_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4728(var_45_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, int var_46_int)
	{
		if(var_46_int == 10) {
			func_4799();
			bool var_50_bool = false;
			bool var_51_bool;
			func_5013(var_51_bool);
			if(var_51_bool != 0) {
				bool var_54_bool;
				func_4768(var_54_bool);
				if(var_54_bool != 0)
					var_50_bool = true;
			}
			if(var_50_bool != 0) {
				bool var_71_bool;
				func_4748(var_71_bool);
				if(var_71_bool != 0) {
					bool var_90_bool; object var_91_object;
					object var_92_object;
					func_5276(var_92_object);
					var_92_object = var_91_object;
					func_5161(var_90_bool, var_91_object);
				}
			} else {
				func_4763(var_46_int);
				func_4790();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
	{
		func_4981();
		func_4799();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector)
		{
		@StopGroup0();
		func_4799();
		func_5241("Neutral");
		func_4790();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, bool var_46_bool)
	{
		if(var_46_bool != 0)
			func_4790();
		else
			func_5241("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, cvector var_45_cvector, object var_46_object)
	{
		bool var_48_bool;
		@IsOverrideActive(var_48_bool);
		if(!var_48_bool) { //@nz
			disable OnUse;
			func_4981();
			bool var_50_bool; object var_51_object;
			var_46_object = var_51_object;
			func_5004(var_50_bool, var_51_object);
			enable OnUse;
			object var_64_object;
			var_46_object = var_64_object;
			func_6297(var_64_object);
			func_5241("Neutral");
			func_4799();
			func_4790();
		}
	}

}


// @pe
void func_5632(void)
{
	@SetVariable("ood3Kapella4", 1);
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_51_bool;
	func_5013(var_51_bool);
	if(!var_51_bool) goto Label_0; //@nz
}


// @pe
void func_5638(void)
{
	@SetVariable("ood3Kapella5", 1);
}


void func_6150(void)
{
	object var_145_object;
	@CreateDiaryEntry(var_145_object, 85, 2, 512167);
	bool var_149_bool; object var_150_object;
	var_145_object = var_150_object;
	func_6202(var_149_bool, var_150_object, 27);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5644(void)
{
}


void func_13(object var_0_object, int var_823_int, object var_824_object)
{
	var_0_object = var_824_object;
	bool var_834_bool; object var_835_object;
	object var_836_object;
	func_5276(var_836_object);
	var_836_object = var_835_object;
	func_5103(var_834_bool, var_835_object);
	bool var_837_bool; object var_838_object;
	var_824_object = var_838_object;
	func_5018(var_837_bool, var_838_object, 70.0);
	if(!var_837_bool) { //@nz
		var_823_int = -2;
		return 8;
	}
	object var_830_object;
	@CreateDialog(var_830_object);
	int var_841_int;
	func_5410(var_841_int);
	var_830_object->SetNPCName(var_841_int);
	int var_842_int;
	func_5408(var_842_int);
	var_830_object->SetNPCDescription(var_842_int);
	string var_843_string;
	func_5412(var_843_string);
	var_830_object->SetPhoto(var_843_string);
	string var_844_string;
	func_5414(var_844_string);
	var_830_object->SetPhoto2(var_844_string);
	int var_845_int;
	func_6280(var_845_int);
	var_830_object->SetPlayerName(var_845_int);
	bool var_831_bool;
	@IsOverrideActive(var_831_bool);
	if(var_831_bool != 0) {
		var_823_int = -2;
		return 8;
	}
	@DoDialog(var_830_object);
	object var_847_object; object var_848_object;
	var_824_object = var_847_object;
	var_830_object = var_848_object;
	TaskCall(2);
	func_94(var_849_object, var_850_object, var_851_string, var_852_bool, var_847_object, var_848_object);
	TaskReturn();
	bool var_833_bool;
	var_830_object->IsDialogEnd(var_833_bool);
	
	for(;;) {
		var_893_bool = !var_833_bool; //@nz
		if(var_893_bool == 0) goto Label_83;
		@sync();
		var_830_object->IsDialogEnd(var_833_bool);
	}
	
Label_83:
	object var_894_object;
	var_824_object = var_894_object;
	func_5086();
	@StopDialog(var_830_object);
	var_830_object->GetReturnValue(-1);
	int var_832_int = var_823_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5646(void)
{
	func_6163();
	bool var_175_bool;
	func_5352(var_175_bool, "quest_d3_03", "fail");
}


void func_6163(void)
{
	object var_168_object;
	@CreateDiaryEntry(var_168_object, 86, 2, 512168);
	bool var_172_bool; object var_173_object;
	var_168_object = var_173_object;
	func_6202(var_172_bool, var_173_object, 27);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5656(void)
{
	@SetVariable("ood6Kapella1", 1);
}


// @pe
void func_5662(void)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}


void func_6176(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 647, 2, 533320);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_6202(var_67_bool, var_68_object, 127);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5668(void)
{
	@SetVariable("KnowViktoria", 1);
}


void func_5161(bool var_89_bool, object var_90_object)
{
	string var_96_string; bool var_98_bool; int var_99_int; string var_100_string;
	var_96_string = "c";
	int var_97_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_90_object->HasProperty((var_96_string + (var_97_int + 1)), var_98_bool);
			if(!var_98_bool) { //@nz
			} else {
				var_97_int += 1;
			}
		}
		if(!var_97_int) { //@nz
			var_89_bool = false;
			return 10;
		}
		var_99_int = 0;
		if(var_97_int > 1)
			@irand(var_99_int, var_97_int);
		var_90_object->GetProperty((var_96_string + (var_99_int + 1)), var_100_string);
		bool var_112_bool; string var_113_string;
		var_100_string = var_113_string;
		func_5254(var_112_bool, var_113_string);
		var_112_bool = var_89_bool;
		return 10;

	}
}


// @pe
void func_5674(void)
{
	@SetVariable("ood8Kapella1", 1);
}


void func_6189(object var_76_object)
{
	object var_78_object;
	@GetDiaryRoot(var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_76_object = false;
	}
	var_78_object = var_76_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5680(void)
{
	@SetVariable("ood8Kapella2", 1);
}


// @pe
void func_4657(object var_2_object, string var_987_string)
{
	bool var_988_bool;
	func_5416(var_988_bool);
	if(!var_988_bool) //@nz
		return 0;
	if(var_987_string == var_2_object)
		return 0;
	string var_991_string; bool var_992_bool;
	var_987_string = var_991_string;
	if(var_987_string == "")
		var_992_bool = false;
	else
		var_992_bool = true;
	func_5248(var_991_string, var_992_bool);
	var_2_object = var_987_string;
	
}


// @pe
void func_5686(void)
{
	@SetVariable("ood4Kapella1", 1);
}


void func_6202(bool var_67_bool, object var_68_object, int var_69_int)
{
	object var_76_object;
	func_6189(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	object var_74_object;
	var_73_object->Find(var_69_int, var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_69_int);
		var_67_bool = false;
	}
	var_74_object->AddChild(var_68_object);
	@SendWorldWndMessage(7);
	int var_75_int;
	var_68_object->GetCategory(var_75_int);
	@SetDiarySection(var_75_int);
	var_67_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5692(void)
{
	@SetVariable("KnowPredictions", 1);
}


void func_572(object var_0_object, int var_897_int, object var_898_object)
{
	var_0_object = var_898_object;
	bool var_908_bool; object var_909_object;
	object var_910_object;
	func_5276(var_910_object);
	var_910_object = var_909_object;
	func_5103(var_908_bool, var_909_object);
	bool var_911_bool; object var_912_object;
	var_898_object = var_912_object;
	func_5018(var_911_bool, var_912_object, 70.0);
	if(!var_911_bool) { //@nz
		var_897_int = -2;
		return 8;
	}
	object var_904_object;
	@CreateDialog(var_904_object);
	int var_915_int;
	func_5410(var_915_int);
	var_904_object->SetNPCName(var_915_int);
	int var_916_int;
	func_5408(var_916_int);
	var_904_object->SetNPCDescription(var_916_int);
	string var_917_string;
	func_5412(var_917_string);
	var_904_object->SetPhoto(var_917_string);
	string var_918_string;
	func_5414(var_918_string);
	var_904_object->SetPhoto2(var_918_string);
	int var_919_int;
	func_6280(var_919_int);
	var_904_object->SetPlayerName(var_919_int);
	bool var_905_bool;
	@IsOverrideActive(var_905_bool);
	if(var_905_bool != 0) {
		var_897_int = -2;
		return 8;
	}
	@DoDialog(var_904_object);
	object var_921_object; object var_922_object;
	var_898_object = var_921_object;
	var_904_object = var_922_object;
	TaskCall(4);
	func_653(var_923_object, var_924_object, var_925_string, var_926_bool, var_921_object, var_922_object);
	TaskReturn();
	bool var_907_bool;
	var_904_object->IsDialogEnd(var_907_bool);
	
	for(;;) {
		var_954_bool = !var_907_bool; //@nz
		if(var_954_bool == 0) goto Label_642;
		@sync();
		var_904_object->IsDialogEnd(var_907_bool);
	}
	
Label_642:
	object var_955_object;
	var_898_object = var_955_object;
	func_5086();
	@StopDialog(var_904_object);
	var_904_object->GetReturnValue(-1);
	int var_906_int = var_897_int;
}
EMIT "Stack[-4] = 0";


void func_5698(void)
{
	object var_60_object;
	func_6230(var_60_object);
	object var_59_object;
	var_60_object = var_59_object;
	float var_71_float;
	func_5364(var_71_float);
	var_59_object->AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", 0, 515377, var_71_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3655(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_567_object, object var_568_object)
{
	var_0_object = var_568_object;
	var_1_object = var_567_object;
	var_3_string = false;
	if(1 != 0) {
		func_3727(var_568_object, "Neutral");
		var_0_object->SetMessage(511245); //@t
		var_0_object->ClearReplies(); //@t
		bool var_583_bool = false;
		bool var_584_bool;
		func_6030(var_1_object);
		if(var_584_bool != 0) {
			bool var_590_bool;
			func_6042(var_1_object);
			if(var_590_bool != 0)
				var_583_bool = true;
		}
		if(var_583_bool != 0)
			var_0_object->AddReply(511247, 12438, 12437); //@t
		var_0_object->AddReply(511246, -1, 12436); //@t
		goto Label_3697;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe4b";
	}
Label_3697:
	bool var_602_bool;
	func_5416(var_602_bool);
	if(var_602_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3726;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3726:
		return 0;

	}
	
}


void func_5198(bool var_120_bool, object var_121_object)
{
	bool var_129_bool; int var_130_int; string var_131_string;
	int var_133_int;
	func_5369(var_133_int);
	string var_127_string = ("d" + var_133_int) + "m";
	int var_128_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_121_object->HasProperty((var_127_string + (var_128_int + 1)), var_129_bool);
			if(!var_129_bool) { //@nz
			} else {
				var_128_int += 1;
			}
		}
		if(!var_128_int) { //@nz
			var_120_bool = false;
			return 10;
		}
		var_130_int = 0;
		if(var_128_int > 1)
			@irand(var_130_int, var_128_int);
		var_121_object->GetProperty((var_127_string + (var_130_int + 1)), var_131_string);
		bool var_152_bool; string var_153_string;
		var_131_string = var_153_string;
		func_5254(var_152_bool, var_153_string);
		var_152_bool = var_120_bool;
		return 10;

	}
}


// @pe
void func_5714(void)
{
	@SetVariable("d6KapellaVisit", 1);
}


void func_6230(object var_133_object)
{
	object var_136_object; object var_137_object;
	@GetMainOutdoorScene(var_136_object);
	if(var_136_object == null) {
		@Trace("Can't find main outdoor scene");
		var_137_object = null;
		var_137_object = var_133_object;
	}
	var_136_object->GetMap(var_137_object);
	var_137_object = var_133_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5720(void)
{
	@SetVariable("ood6Kapella3", 1);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_847_object, object var_848_object)
{
	var_0_object = var_848_object;
	var_1_object = var_847_object;
	var_3_string = false;
	if(1 != 0) {
		func_171(var_848_object, "Neutral");
		var_0_object->SetMessage(534512); //@t
		var_0_object->ClearReplies(); //@t
		bool var_863_bool = false;
		bool var_864_bool;
		func_5763(var_1_object);
		if(var_864_bool != 0) {
			bool var_870_bool;
			func_5775(var_1_object);
			if(var_870_bool != 0)
				var_863_bool = true;
		}
		if(var_863_bool != 0)
			var_0_object->AddReply(534513, 41645, 36154); //@t
		var_0_object->AddReply(540246, 42229, 42228); //@t
		var_0_object->AddReply(534518, -1, 36159); //@t
		goto Label_141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_141:
	bool var_885_bool;
	func_5416(var_885_bool);
	if(var_885_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_170;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_170:
		return 0;

	}
	
}


// @pe
void func_5726(bool var_514_bool)
{
	bool var_516_bool = false;
	bool var_517_bool = false;
	int var_518_int;
	func_5292(var_518_int, "d3q01");
	var_521_bool = var_518_int == 0;
	if(!var_521_bool) { //@nz
		int var_523_int;
		func_5292(var_523_int, "d3q01");
		var_526_bool = var_523_int == 1000;
		if(!var_526_bool) //@nz
			var_517_bool = true;
	}
	if(var_517_bool != 0) {
		int var_528_int;
		func_5292(var_528_int, "d3q01");
		var_531_bool = var_528_int == -1;
		if(!var_531_bool) //@nz
			var_516_bool = true;
	}
	if(var_516_bool != 0) {
		var_514_bool = true;
		return 0;
	}
	var_514_bool = false;
}


// @pe
void func_2657(object var_2_object, string var_425_string)
{
	bool var_426_bool;
	func_5416(var_426_bool);
	if(!var_426_bool) //@nz
		return 0;
	if(var_425_string == var_2_object)
		return 0;
	string var_429_string; bool var_430_bool;
	var_425_string = var_429_string;
	if(var_425_string == "")
		var_430_bool = false;
	else
		var_430_bool = true;
	func_5248(var_429_string, var_430_bool);
	var_2_object = var_425_string;
	
}


void func_6247(object var_107_object, string var_108_string, float var_109_float)
{
	object var_117_object;
	@GetMainOutdoorScene(var_117_object);
	if(var_117_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_115_cvector;
	cvector var_116_cvector;
	bool var_118_bool;
	var_117_object->GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector);
	if(!var_118_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_108_string) + " doesnt exist");
	var_117_object->GetMap(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_128_float = GetByIndex(var_115_cvector, 0);
	var_129_float = GetByIndex(var_115_cvector, 2);
	var_107_object->SetMapParams(var_128_float, var_129_float, var_109_float);
}
EMIT "Stack[-2] = 0";


void func_4728(object var_0_object)
{
	bool var_47_bool;
	func_5013(var_47_bool);
	if(!var_47_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4856();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4910();
	}
}
EMIT "Return(); Pop(0)";


void func_5241(string var_54_string)
{
	float var_57_float; float var_58_float;
	@lshGetAnimTimes(var_54_string, var_57_float, var_58_float);
	@lshPlayAnimation(var_57_float, var_58_float, false);
}


void func_5248(string var_252_string, bool var_253_bool)
{
	float var_258_float; float var_259_float;
	@lshGetAnimTimes(var_252_string, var_258_float, var_259_float);
	@lshPlayAnimation(var_258_float, var_259_float, var_253_bool);
}


// @pe
void func_5763(bool var_864_bool)
{
	int var_866_int;
	func_5292(var_866_int, "d11q06");
	if(var_866_int == 1)
		var_864_bool = true;
	var_864_bool = false;
}


void func_1156(object var_0_object, int var_614_int, object var_615_object)
{
	var_0_object = var_615_object;
	bool var_625_bool; object var_626_object;
	object var_627_object;
	func_5276(var_627_object);
	var_627_object = var_626_object;
	func_5103(var_625_bool, var_626_object);
	bool var_628_bool; object var_629_object;
	var_615_object = var_629_object;
	func_5018(var_628_bool, var_629_object, 70.0);
	if(!var_628_bool) { //@nz
		var_614_int = -2;
		return 8;
	}
	object var_621_object;
	@CreateDialog(var_621_object);
	int var_632_int;
	func_5410(var_632_int);
	var_621_object->SetNPCName(var_632_int);
	int var_633_int;
	func_5408(var_633_int);
	var_621_object->SetNPCDescription(var_633_int);
	string var_634_string;
	func_5412(var_634_string);
	var_621_object->SetPhoto(var_634_string);
	string var_635_string;
	func_5414(var_635_string);
	var_621_object->SetPhoto2(var_635_string);
	int var_636_int;
	func_6280(var_636_int);
	var_621_object->SetPlayerName(var_636_int);
	bool var_622_bool;
	@IsOverrideActive(var_622_bool);
	if(var_622_bool != 0) {
		var_614_int = -2;
		return 8;
	}
	@DoDialog(var_621_object);
	object var_638_object; object var_639_object;
	var_615_object = var_638_object;
	var_621_object = var_639_object;
	TaskCall(8);
	func_1237(var_640_object, var_641_object, var_642_string, var_643_bool, var_638_object, var_639_object);
	TaskReturn();
	bool var_624_bool;
	var_621_object->IsDialogEnd(var_624_bool);
	
	for(;;) {
		var_729_bool = !var_624_bool; //@nz
		if(var_729_bool == 0) goto Label_1226;
		@sync();
		var_621_object->IsDialogEnd(var_624_bool);
	}
	
Label_1226:
	object var_730_object;
	var_615_object = var_730_object;
	func_5086();
	@StopDialog(var_621_object);
	var_621_object->GetReturnValue(-1);
	int var_623_int = var_614_int;
}
EMIT "Stack[-4] = 0";


void func_5254(bool var_112_bool, string var_113_string)
{
	bool var_115_bool;
	bool var_116_bool;
	func_5416(var_116_bool);
	if(var_116_bool != 0) {
		@lshHasSpeech(var_115_bool, var_113_string);
		if(var_115_bool != 0) {
			@lshPlaySpeech(var_113_string);
			var_112_bool = true;
		}
	}
	var_112_bool = false;
}


void func_6280(int var_224_int)
{
	int var_226_int;
	@GetVariable("branch", var_226_int);
	if(var_226_int == 0) {
		var_224_int = 1;
		return 2;
	EMIT "GOTO 0x1897";
	}
	if(var_226_int == 1) {
		var_224_int = 2;
		return 2;
	}
	var_224_int = 3;
}


void func_4748(bool var_71_bool)
{
	object var_73_object;
	@FindActor(var_73_object, "player");
	if(!var_73_object) //@nz
		var_71_bool = false;
	bool var_76_bool; object var_77_object;
	var_73_object = var_77_object;
	func_5004(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_653(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_921_object, object var_922_object)
{
	var_0_object = var_922_object;
	var_1_object = var_921_object;
	var_3_string = false;
	if(1 != 0) {
		func_716(var_922_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_686;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x291";
	}
Label_686:
	bool var_946_bool;
	func_5416(var_946_bool);
	if(var_946_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_715;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_715:
		return 0;

	}
	
}


// @pe
void func_5775(bool var_870_bool)
{
	int var_872_int;
	func_5292(var_872_int, "ood11Kapella1");
	if(var_872_int == 0) {
		var_870_bool = true;
		return 0;
	}
	var_870_bool = false;
}


// @pe
void func_3727(object var_2_object, string var_574_string)
{
	bool var_575_bool;
	func_5416(var_575_bool);
	if(!var_575_bool) //@nz
		return 0;
	if(var_574_string == var_2_object)
		return 0;
	string var_578_string; bool var_579_bool;
	var_574_string = var_578_string;
	if(var_574_string == "")
		var_579_bool = false;
	else
		var_579_bool = true;
	func_5248(var_578_string, var_579_bool);
	var_2_object = var_574_string;
	
}


void func_5269(void)
{
	bool var_49_bool;
	func_5416(var_49_bool);
	if(var_49_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6297(object var_64_object)
{
	var_65_bool = GlobalVars[1];
	if(!var_65_bool) { //@nz
		int var_67_int; object var_68_object;
		var_64_object = var_68_object;
		TaskCall(5);
		func_831(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_288_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_289_bool;
	func_5378(var_289_bool, 2);
	if(var_289_bool != 0) {
		int var_292_int; object var_293_object;
		var_64_object = var_293_object;
		TaskCall(9);
		func_1783(var_294_object, var_292_int, var_293_object);
		TaskReturn();
		return 0;
	}
	bool var_379_bool;
	func_5378(var_379_bool, 3);
	if(var_379_bool != 0) {
		int var_381_int; object var_382_object;
		var_64_object = var_382_object;
		TaskCall(11);
		func_2388(var_383_object, var_381_int, var_382_object);
		TaskReturn();
		return 0;
	}
	bool var_541_bool;
	func_5378(var_541_bool, 4);
	if(var_541_bool != 0) {
		int var_543_int; object var_544_object;
		var_64_object = var_544_object;
		TaskCall(13);
		func_3574(var_545_object, var_543_int, var_544_object);
		TaskReturn();
		return 0;
	}
	bool var_612_bool;
	func_5378(var_612_bool, 6);
	if(var_612_bool != 0) {
		int var_614_int; object var_615_object;
		var_64_object = var_615_object;
		TaskCall(7);
		func_1156(var_616_object, var_614_int, var_615_object);
		TaskReturn();
		return 0;
	}
	bool var_731_bool;
	func_5378(var_731_bool, 8);
	if(var_731_bool != 0) {
		int var_733_int; object var_734_object;
		var_64_object = var_734_object;
		TaskCall(15);
		func_3867(var_735_object, var_733_int, var_734_object);
		TaskReturn();
		return 0;
	}
	bool var_821_bool;
	func_5378(var_821_bool, 11);
	if(var_821_bool != 0) {
		int var_823_int; object var_824_object;
		var_64_object = var_824_object;
		TaskCall(1);
		func_13(var_825_object, var_823_int, var_824_object);
		TaskReturn();
		return 0;
	}
	bool var_895_bool;
	func_5378(var_895_bool, 12);
	if(var_895_bool != 0) {
		int var_897_int; object var_898_object;
		var_64_object = var_898_object;
		TaskCall(3);
		func_572(var_899_object, var_897_int, var_898_object);
		TaskReturn();
		return 0;
	}
	int var_956_int; object var_957_object;
	var_64_object = var_957_object;
	TaskCall(17);
	func_4518(var_958_object, var_956_int, var_957_object);
	TaskReturn();
}


// @pe
void func_5787(bool var_333_bool)
{
	int var_335_int;
	func_5292(var_335_int, "ood2Kapella1");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


void func_5276(object var_80_object)
{
	object var_82_object;
	@self(var_82_object);
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


void func_4763(object var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_123_float, var_124_float);
}


void func_4768(bool var_54_bool)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	if(!var_57_object) { //@nz
		var_54_bool = false;
		return 4;
	}
	float var_61_float; object var_62_object;
	func_4986(var_61_float, var_62_object);
	if(var_61_float > 90000.0) {
		var_54_bool = false;
		return 4;
	}
	bool var_58_bool;
	@CanSee(var_58_bool, var_62_object);
	var_58_bool = var_54_bool;
}
EMIT "Stack[-2] = 0";


void func_5282(cvector var_200_cvector, cvector var_201_cvector)
{
	float var_204_float = sqrt(var_201_cvector | var_201_cvector);
	if(var_204_float < 0.000001)
		var_200_cvector = [0.0, 0.0, 0.0];
	var_200_cvector = var_201_cvector / var_204_float;
}


// @pe
void func_5799(bool var_351_bool)
{
	int var_353_int;
	func_5292(var_353_int, "ood2Kapella2");
	if(var_353_int == 0) {
		var_351_bool = true;
		return 0;
	}
	var_351_bool = false;
}


// @pe
void func_171(object var_2_object, string var_854_string)
{
	bool var_855_bool;
	func_5416(var_855_bool);
	if(!var_855_bool) //@nz
		return 0;
	if(var_854_string == var_2_object)
		return 0;
	string var_858_string; bool var_859_bool;
	var_854_string = var_858_string;
	if(var_854_string == "")
		var_859_bool = false;
	else
		var_859_bool = true;
	func_5248(var_858_string, var_859_bool);
	var_2_object = var_854_string;
	
}


void func_5292(int var_335_int, string var_336_string)
{
	int var_338_int;
	@GetVariable(var_336_string, var_338_int);
	var_338_int = var_335_int;
}


void func_5297(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5811(bool var_341_bool)
{
	int var_343_int;
	func_5292(var_343_int, "d2q01");
	if(var_343_int == 2)
		var_341_bool = true;
	var_341_bool = false;
}


void func_4790(void)
{
	float var_61_float;
	@rand(var_61_float, 8, 16);
	@SetTimer(10, var_61_float);
}


void func_5308(int var_104_int, int var_105_int)
{
	object var_107_object;
	@CreateIntVector(var_107_object);
	var_107_object->add(var_104_int);
	var_107_object->add(var_105_int);
	@SendWorldWndMessage(3, var_107_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5823(bool var_413_bool)
{
	int var_415_int;
	func_5292(var_415_int, "d3q03");
	if(var_415_int == 0) {
		var_413_bool = true;
		return 0;
	}
	var_413_bool = false;
}


void func_4799(void)
{
	@KillTimer(10);
}


void func_5320(object var_93_object, object var_94_object, int var_95_int)
{
	int var_99_int;
	var_94_object->GetItemID(var_99_int);
	int var_100_int;
	@GetInvItemProperty(var_100_int, var_99_int, "Category");
	bool var_101_bool;
	var_93_object->AddItem(var_101_bool, var_94_object, var_100_int, var_95_int);
	if(!var_101_bool) { //@nz
		var_93_object->DropItems(var_94_object, var_95_int);
	} else {
		int var_104_int; int var_105_int;
		var_99_int = var_104_int;
		var_95_int = var_105_int;
		func_5308(var_104_int, var_105_int);
	}
	
}


// @pe
void func_5835(bool var_419_bool)
{
	int var_421_int;
	func_5292(var_421_int, "ood3Kapella1");
	if(var_421_int == 0) {
		var_419_bool = true;
		return 0;
	}
	var_419_bool = false;
}


// @pe
void func_716(object var_2_object, string var_928_string)
{
	bool var_929_bool;
	func_5416(var_929_bool);
	if(!var_929_bool) //@nz
		return 0;
	if(var_928_string == var_2_object)
		return 0;
	string var_932_string; bool var_933_bool;
	var_928_string = var_932_string;
	if(var_928_string == "")
		var_933_bool = false;
	else
		var_933_bool = true;
	func_5248(var_932_string, var_933_bool);
	var_2_object = var_928_string;
	
}


// @pe
void func_1237(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_638_object, object var_639_object)
{
	var_0_object = var_639_object;
	var_1_object = var_638_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_645_bool = false;
		bool var_646_bool;
		func_5970(var_1_object);
		if(var_646_bool != 0) {
			bool var_652_bool;
			func_6054(var_1_object);
			if(var_652_bool != 0)
				var_645_bool = true;
		}
		if(var_645_bool != 0) {
			object var_658_object; object var_659_object;
			var_658_object = var_1_object;
			var_659_object = var_0_object;
			func_5714();
			object var_662_object; object var_663_object;
			var_662_object = var_1_object;
			var_663_object = var_0_object;
			func_5720();
			func_1389(var_639_object, "Neutral");
			var_0_object->SetMessage(503371); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(503375, 3621, 3619); //@t
			var_0_object->AddReply(503376, 3621, 3620); //@t
		} else {
					bool var_689_bool = false;
					bool var_690_bool = false;
					bool var_691_bool;
					func_5958(var_1_object);
					if(var_691_bool != 0) {
						bool var_697_bool;
						func_5934(var_1_object);
						if(!var_697_bool) //@nz
							var_690_bool = true;
					}
					if(var_690_bool != 0) {
						bool var_704_bool;
						func_5946(var_1_object);
						if(!var_704_bool) //@nz
							var_689_bool = true;
					}
					if(var_689_bool == 0) goto Label_1337;
					object var_711_object; object var_712_object;
					var_711_object = var_1_object;
					var_712_object = var_0_object;
					func_5714();
					func_1389(var_639_object, "Neutral");
					var_0_object->SetMessage(512095); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512096, 13323, 13322); //@t
					var_0_object->AddReply(536136, -1, 37895); //@t
		}
	}
Label_1359:
	for(;;) {
		bool var_681_bool;
		func_5416(var_681_bool);
		if(var_681_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5241(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1388;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1388:
			return 0;

		}

	}
	
Label_1337:
	func_1389(var_639_object, "Neutral");
	var_0_object->SetMessage(512523); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(512524, -1, 13694); //@t
	var_0_object->AddReply(536137, -1, 37896); //@t
	goto Label_1359;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4d9";


// @pe
void func_5847(bool var_454_bool)
{
	int var_456_int;
	func_5292(var_456_int, "d3q03");
	if(var_456_int == 2)
		var_454_bool = true;
	var_454_bool = false;
}


void func_5339(object var_88_object, string var_89_string, int var_90_int)
{
	object var_92_object;
	@CreateInvItem(var_92_object);
	var_92_object->SetItemName(var_89_string);
	object var_93_object; object var_94_object; int var_95_int;
	var_88_object = var_93_object;
	var_92_object = var_94_object;
	var_90_int = var_95_int;
	func_5320(var_93_object, var_94_object, var_95_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5859(bool var_460_bool)
{
	int var_462_int;
	func_5292(var_462_int, "ood3Kapella2");
	if(var_462_int == 0) {
		var_460_bool = true;
		return 0;
	}
	var_460_bool = false;
}


void func_5352(bool var_99_bool, string var_100_string, string var_101_string)
{
	object var_103_object;
	@FindActor(var_103_object, var_100_string);
	if(var_103_object == null)
		var_99_bool = false;
	@Trigger(var_103_object, var_101_string);
	var_99_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5871(bool var_489_bool)
{
	int var_491_int;
	func_5292(var_491_int, "ood3Kapella3");
	if(var_491_int == 0) {
		var_489_bool = true;
		return 0;
	}
	var_489_bool = false;
}


void func_5364(float var_73_float)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_75_float = var_73_float;
}


void func_1783(object var_0_object, int var_292_int, object var_293_object)
{
	var_0_object = var_293_object;
	bool var_303_bool; object var_304_object;
	object var_305_object;
	func_5276(var_305_object);
	var_305_object = var_304_object;
	func_5103(var_303_bool, var_304_object);
	bool var_306_bool; object var_307_object;
	var_293_object = var_307_object;
	func_5018(var_306_bool, var_307_object, 70.0);
	if(!var_306_bool) { //@nz
		var_292_int = -2;
		return 8;
	}
	object var_299_object;
	@CreateDialog(var_299_object);
	int var_310_int;
	func_5410(var_310_int);
	var_299_object->SetNPCName(var_310_int);
	int var_311_int;
	func_5408(var_311_int);
	var_299_object->SetNPCDescription(var_311_int);
	string var_312_string;
	func_5412(var_312_string);
	var_299_object->SetPhoto(var_312_string);
	string var_313_string;
	func_5414(var_313_string);
	var_299_object->SetPhoto2(var_313_string);
	int var_314_int;
	func_6280(var_314_int);
	var_299_object->SetPlayerName(var_314_int);
	bool var_300_bool;
	@IsOverrideActive(var_300_bool);
	if(var_300_bool != 0) {
		var_292_int = -2;
		return 8;
	}
	@DoDialog(var_299_object);
	object var_316_object; object var_317_object;
	var_293_object = var_316_object;
	var_299_object = var_317_object;
	TaskCall(10);
	func_1864(var_318_object, var_319_object, var_320_string, var_321_bool, var_316_object, var_317_object);
	TaskReturn();
	bool var_302_bool;
	var_299_object->IsDialogEnd(var_302_bool);
	
	for(;;) {
		var_377_bool = !var_302_bool; //@nz
		if(var_377_bool == 0) goto Label_1853;
		@sync();
		var_299_object->IsDialogEnd(var_302_bool);
	}
	
Label_1853:
	object var_378_object;
	var_293_object = var_378_object;
	func_5086();
	@StopDialog(var_299_object);
	var_299_object->GetReturnValue(-1);
	int var_301_int = var_292_int;
}
EMIT "Stack[-4] = 0";


void func_5369(int var_133_int)
{
	float var_135_float;
	@GetGameTime(var_135_float);
	var_133_int = 1 + (var_135_float / 24);
}


// @pe
void func_5883(bool var_498_bool)
{
	int var_500_int;
	func_5292(var_500_int, "ood3Kapella4");
	if(var_500_int == 0) {
		var_498_bool = true;
		return 0;
	}
	var_498_bool = false;
}


// @pe
void func_5378(bool var_289_bool, int var_290_int)
{
	int var_291_int;
	func_5369(var_291_int);
	var_289_bool = var_291_int == var_290_int;
}


// @pe
void func_5895(bool var_508_bool)
{
	int var_510_int;
	func_5292(var_510_int, "ood3Kapella5");
	if(var_510_int == 0) {
		var_508_bool = true;
		return 0;
	}
	var_508_bool = false;
}


void func_5384(string var_85_string, int var_86_int)
{
	string var_88_string = "idle";
	if(var_86_int != 0)
		var_88_string += var_86_int;
	var_88_string = var_85_string;
}


void func_5391(int var_79_int)
{
	int var_82_int; bool var_83_bool;
	var_82_int = 0;
	
	for(;;) {
		string var_85_string; int var_86_int;
		var_82_int = var_86_int;
		func_5384(var_85_string, var_86_int);
		@HasAnimation(var_83_bool, "all", var_85_string);
		if(!var_83_bool) //@nz
			break;
		var_82_int += 1;
	}
	var_82_int = var_79_int;
}


// @pe
void func_5907(bool var_466_bool, object var_467_object)
{
	object var_469_object;
	var_467_object = var_469_object;
	bool var_468_bool;
	func_6078(var_468_bool, var_469_object);
	if(var_468_bool != 0) {
		var_466_bool = true;
		return 0;
	}
	var_466_bool = false;
}


void func_3867(object var_0_object, int var_733_int, object var_734_object)
{
	var_0_object = var_734_object;
	bool var_744_bool; object var_745_object;
	object var_746_object;
	func_5276(var_746_object);
	var_746_object = var_745_object;
	func_5103(var_744_bool, var_745_object);
	bool var_747_bool; object var_748_object;
	var_734_object = var_748_object;
	func_5018(var_747_bool, var_748_object, 70.0);
	if(!var_747_bool) { //@nz
		var_733_int = -2;
		return 8;
	}
	object var_740_object;
	@CreateDialog(var_740_object);
	int var_751_int;
	func_5410(var_751_int);
	var_740_object->SetNPCName(var_751_int);
	int var_752_int;
	func_5408(var_752_int);
	var_740_object->SetNPCDescription(var_752_int);
	string var_753_string;
	func_5412(var_753_string);
	var_740_object->SetPhoto(var_753_string);
	string var_754_string;
	func_5414(var_754_string);
	var_740_object->SetPhoto2(var_754_string);
	int var_755_int;
	func_6280(var_755_int);
	var_740_object->SetPlayerName(var_755_int);
	bool var_741_bool;
	@IsOverrideActive(var_741_bool);
	if(var_741_bool != 0) {
		var_733_int = -2;
		return 8;
	}
	@DoDialog(var_740_object);
	object var_757_object; object var_758_object;
	var_734_object = var_757_object;
	var_740_object = var_758_object;
	TaskCall(16);
	func_3948(var_759_object, var_760_object, var_761_string, var_762_bool, var_757_object, var_758_object);
	TaskReturn();
	bool var_743_bool;
	var_740_object->IsDialogEnd(var_743_bool);
	
	for(;;) {
		var_819_bool = !var_743_bool; //@nz
		if(var_819_bool == 0) goto Label_3937;
		@sync();
		var_740_object->IsDialogEnd(var_743_bool);
	}
	
Label_3937:
	object var_820_object;
	var_734_object = var_820_object;
	func_5086();
	@StopDialog(var_740_object);
	var_740_object->GetReturnValue(-1);
	int var_742_int = var_733_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5917(bool var_481_bool)
{
	var_481_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_5408(int var_221_int)
{
	var_221_int = 515538;
}


void func_5410(int var_220_int)
{
	var_220_int = 502863;
}


// @pe
void func_5922(bool var_184_bool)
{
	int var_186_int;
	func_5292(var_186_int, "d6q02");
	if(var_186_int == 0) {
		var_184_bool = true;
		return 0;
	}
	var_184_bool = false;
}


void func_5412(string var_222_string)
{
	var_222_string = "ui/NPC_Kapella.png";
}


void func_5414(string var_223_string)
{
	var_223_string = "ui/NPC_Kapella_b.png";
}


void func_5416(bool var_116_bool)
{
	var_116_bool = true;
}


// @pe
void func_5418(void)
{
	@SetVariable("KnowKaterina", 1);
}


// @pe
void func_5934(bool var_697_bool)
{
	int var_699_int;
	func_5292(var_699_int, "d6q02");
	if(var_699_int == 1000)
		var_697_bool = true;
	var_697_bool = false;
}


void func_4910(void)
{
	bool var_73_bool; int var_74_int; int var_75_int; bool var_76_bool;
	@WaitForAnimEnd();
	bool var_77_bool;
	func_5013(var_77_bool);
	if(!var_77_bool) //@nz
		return 12;
	int var_79_int;
	func_5391(var_79_int);
	int var_71_int;
	var_79_int = var_71_int;
	int var_72_int = 0;
	
	for(;;) {
		bool var_92_bool = false;
		if(var_72_int < 5) {
			bool var_95_bool;
			func_5013(var_95_bool);
			if(var_95_bool != 0)
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			if(!var_71_int) { //@nz
				@Sleep(3, var_73_bool);
				if(!var_73_bool) { //@nz
				} else {
			} else {
			@irand(var_74_int, var_71_int);
			@irand(var_75_int, 5);
			if(var_75_int != 0)
				var_74_int = 0;
			string var_106_string; int var_107_int;
			var_74_int = var_107_int;
			func_5384(var_106_string, var_107_int);
			@PlayAnimation("all", var_106_string);
			@WaitForAnimEnd(var_76_bool);
			var_108_bool = !var_76_bool; //@nz
			if(var_108_bool == 0) goto Label_4965;
			goto Label_4976;
			}
				Label_4965:
					bool var_99_bool;
					func_4979(var_99_bool);
					var_100_bool = !var_99_bool; //@nz
					if(var_100_bool == 0) goto Label_4971;
			}
		}
	Label_4976:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4971:
		@ResetAAS();
		var_72_int += 1;
	}
	
}


// @pe
void func_5424(void)
{
	@SetVariable("KnowKapella", 1);
}


// @pe
void func_5430(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5946(bool var_704_bool)
{
	int var_706_int;
	func_5292(var_706_int, "d6q02");
	if(var_706_int == -1)
		var_704_bool = true;
	var_704_bool = false;
}


// @pe
void func_5436(void)
{
	@SetVariable("d8q02", 2);
	func_6176();
}


void func_831(object var_0_object, int var_67_int, object var_68_object)
{
	var_0_object = var_68_object;
	bool var_78_bool; object var_79_object;
	object var_80_object;
	func_5276(var_80_object);
	var_80_object = var_79_object;
	func_5103(var_78_bool, var_79_object);
	bool var_173_bool; object var_174_object;
	var_68_object = var_174_object;
	func_5018(var_173_bool, var_174_object, 70.0);
	if(!var_173_bool) { //@nz
		var_67_int = -2;
		return 8;
	}
	object var_74_object;
	@CreateDialog(var_74_object);
	int var_220_int;
	func_5410(var_220_int);
	var_74_object->SetNPCName(var_220_int);
	int var_221_int;
	func_5408(var_221_int);
	var_74_object->SetNPCDescription(var_221_int);
	string var_222_string;
	func_5412(var_222_string);
	var_74_object->SetPhoto(var_222_string);
	string var_223_string;
	func_5414(var_223_string);
	var_74_object->SetPhoto2(var_223_string);
	int var_224_int;
	func_6280(var_224_int);
	var_74_object->SetPlayerName(var_224_int);
	bool var_75_bool;
	@IsOverrideActive(var_75_bool);
	if(var_75_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	@DoDialog(var_74_object);
	object var_233_object; object var_234_object;
	var_68_object = var_233_object;
	var_74_object = var_234_object;
	TaskCall(6);
	func_912(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object);
	TaskReturn();
	bool var_77_bool;
	var_74_object->IsDialogEnd(var_77_bool);
	
	for(;;) {
		var_280_bool = !var_77_bool; //@nz
		if(var_280_bool == 0) goto Label_901;
		@sync();
		var_74_object->IsDialogEnd(var_77_bool);
	}
	
Label_901:
	object var_281_object;
	var_68_object = var_281_object;
	func_5086();
	@StopDialog(var_74_object);
	var_74_object->GetReturnValue(-1);
	int var_76_int = var_67_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5445(object var_85_object)
{
	@Trace("feromicin2 is given");
	object var_88_object;
	var_85_object = var_88_object;
	func_5339(var_88_object, "feromicin", 2);
}


// @pe
void func_5958(bool var_691_bool)
{
	int var_693_int;
	func_5292(var_693_int, "ood6Kapella1");
	if(var_693_int == 0) {
		var_691_bool = true;
		return 0;
	}
	var_691_bool = false;
}


// @pe
void func_1864(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_316_object, object var_317_object)
{
	var_0_object = var_317_object;
	var_1_object = var_316_object;
	var_3_string = false;
	if(1 != 0) {
		func_1955(var_317_object, "Neutral");
		var_0_object->SetMessage(506647); //@t
		var_0_object->ClearReplies(); //@t
		bool var_332_bool = false;
		bool var_333_bool;
		func_5787(var_1_object);
		if(var_333_bool != 0) {
			bool var_341_bool;
			func_5811(var_1_object);
			if(var_341_bool != 0)
				var_332_bool = true;
		}
		if(var_332_bool != 0)
			var_0_object->AddReply(507373, 35431, 8134); //@t
		bool var_350_bool = false;
		bool var_351_bool;
		func_5799(var_1_object);
		if(var_351_bool != 0) {
			bool var_357_bool;
			func_6066(var_1_object);
			if(var_357_bool != 0)
				var_350_bool = true;
		}
		if(var_350_bool != 0)
			var_0_object->AddReply(506640, 7312, 7311); //@t
		var_0_object->AddReply(507533, -1, 8315); //@t
		goto Label_1925;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74c";
	}
Label_1925:
	bool var_369_bool;
	func_5416(var_369_bool);
	if(var_369_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1954;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1954:
		return 0;

	}
	
}


// @pe
void func_5456(object var_58_object)
{
	@SetVariable("d11q06KapellaRing", 1);
	func_6098();
	@Trace("d11q06KapellaBeads is given");
	object var_86_object;
	var_58_object = var_86_object;
	func_5339(var_86_object, "d11q06KapellaBeads", 1);
}


// @pe
void func_5970(bool var_646_bool)
{
	int var_648_int;
	func_5292(var_648_int, "d6q01");
	if(var_648_int == 0) {
		var_646_bool = true;
		return 0;
	}
	var_646_bool = false;
}


void func_2388(object var_0_object, int var_381_int, object var_382_object)
{
	var_0_object = var_382_object;
	bool var_392_bool; object var_393_object;
	object var_394_object;
	func_5276(var_394_object);
	var_394_object = var_393_object;
	func_5103(var_392_bool, var_393_object);
	bool var_395_bool; object var_396_object;
	var_382_object = var_396_object;
	func_5018(var_395_bool, var_396_object, 70.0);
	if(!var_395_bool) { //@nz
		var_381_int = -2;
		return 8;
	}
	object var_388_object;
	@CreateDialog(var_388_object);
	int var_399_int;
	func_5410(var_399_int);
	var_388_object->SetNPCName(var_399_int);
	int var_400_int;
	func_5408(var_400_int);
	var_388_object->SetNPCDescription(var_400_int);
	string var_401_string;
	func_5412(var_401_string);
	var_388_object->SetPhoto(var_401_string);
	string var_402_string;
	func_5414(var_402_string);
	var_388_object->SetPhoto2(var_402_string);
	int var_403_int;
	func_6280(var_403_int);
	var_388_object->SetPlayerName(var_403_int);
	bool var_389_bool;
	@IsOverrideActive(var_389_bool);
	if(var_389_bool != 0) {
		var_381_int = -2;
		return 8;
	}
	@DoDialog(var_388_object);
	object var_405_object; object var_406_object;
	var_382_object = var_405_object;
	var_388_object = var_406_object;
	TaskCall(12);
	func_2469(var_407_object, var_408_object, var_409_string, var_410_bool, var_405_object, var_406_object);
	TaskReturn();
	bool var_391_bool;
	var_388_object->IsDialogEnd(var_391_bool);
	
	for(;;) {
		var_539_bool = !var_391_bool; //@nz
		if(var_539_bool == 0) goto Label_2458;
		@sync();
		var_388_object->IsDialogEnd(var_391_bool);
	}
	
Label_2458:
	object var_540_object;
	var_382_object = var_540_object;
	func_5086();
	@StopDialog(var_388_object);
	var_388_object->GetReturnValue(-1);
	int var_390_int = var_381_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5982(bool var_780_bool)
{
	int var_782_int;
	func_5292(var_782_int, "ood8Kapella1");
	if(var_782_int == 0) {
		var_780_bool = true;
		return 0;
	}
	var_780_bool = false;
}


// @pe
void func_5474(void)
{
	bool var_109_bool = false;
	int var_110_int;
	func_5292(var_110_int, "d11q06KapellaRing");
	if(var_110_int != 0) {
		int var_116_int;
		func_5292(var_116_int, "d11q06KlaraRing");
		if(var_116_int != 0)
			var_109_bool = true;
	}
	if(var_109_bool != 0) {
		@SetVariable("d11q06", 2);
		func_6085();
	}
}


// @pe
void func_5994(bool var_774_bool)
{
	int var_776_int;
	func_5292(var_776_int, "d8q02");
	if(var_776_int == 1)
		var_774_bool = true;
	var_774_bool = false;
}


// @pe
void func_3948(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_757_object, object var_758_object)
{
	var_0_object = var_758_object;
	var_1_object = var_757_object;
	var_3_string = false;
	if(1 != 0) {
		func_4044(var_758_object, "Neutral");
		var_0_object->SetMessage(513462); //@t
		var_0_object->ClearReplies(); //@t
		bool var_773_bool = false;
		bool var_774_bool;
		func_5994(var_1_object);
		if(var_774_bool != 0) {
			bool var_780_bool;
			func_5982(var_1_object);
			if(var_780_bool != 0)
				var_773_bool = true;
		}
		if(var_773_bool != 0)
			var_0_object->AddReply(533315, 37609, 34823); //@t
		bool var_789_bool = false;
		bool var_790_bool;
		func_6006(var_1_object);
		if(var_790_bool != 0) {
			bool var_796_bool;
			func_6018(var_1_object);
			if(var_796_bool != 0)
				var_789_bool = true;
		}
		if(var_789_bool != 0)
			var_0_object->AddReply(513463, 14713, 14700); //@t
		var_0_object->AddReply(513483, -1, 14721); //@t
		var_0_object->AddReply(535898, -1, 37608); //@t
		goto Label_4014;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf70";
	}
Label_4014:
	bool var_811_bool;
	func_5416(var_811_bool);
	if(var_811_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4043;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4043:
		return 0;

	}
	
}


// @pe
void func_1389(object var_2_object, string var_666_string)
{
	bool var_667_bool;
	func_5416(var_667_bool);
	if(!var_667_bool) //@nz
		return 0;
	if(var_666_string == var_2_object)
		return 0;
	string var_670_string; bool var_671_bool;
	var_666_string = var_670_string;
	if(var_666_string == "")
		var_671_bool = false;
	else
		var_671_bool = true;
	func_5248(var_670_string, var_671_bool);
	var_2_object = var_666_string;
	
}


void func_4979(bool var_99_bool)
{
	var_99_bool = true;
}


void func_4981(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_6006(bool var_790_bool)
{
	int var_792_int;
	func_5292(var_792_int, "d8q02");
	if(var_792_int == 1000)
		var_790_bool = true;
	var_790_bool = false;
}


void func_4986(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


// @pe
void func_5501(void)
{
	@SetVariable("ood11Kapella1", 1);
}


// @pe
void func_6018(bool var_796_bool)
{
	int var_798_int;
	func_5292(var_798_int, "ood8Kapella2");
	if(var_798_int == 0) {
		var_796_bool = true;
		return 0;
	}
	var_796_bool = false;
}


// @pe
void func_5507(void)
{
	@SetVariable("ood2Kapella1", 1);
}


void func_4994(bool var_54_bool, cvector var_55_cvector)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	bool var_61_bool;
	@Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
}


// @pe
void func_5513(void)
{
	@SetVariable("ood2Kapella2", 1);
}


void func_5004(bool var_50_bool, object var_51_object)
{
	cvector var_53_cvector;
	var_51_object->GetPosition(var_53_cvector);
	bool var_54_bool; cvector var_55_cvector;
	var_53_cvector = var_55_cvector;
	func_4994(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
}


// @pe
void func_6030(bool var_584_bool)
{
	int var_586_int;
	func_5292(var_586_int, "ood4Kapella1");
	if(var_586_int == 0) {
		var_584_bool = true;
		return 0;
	}
	var_584_bool = false;
}


void func_5519(void)
{
	@SetVariable("d2q01", 3);
	object var_62_object;
	func_6230(var_62_object);
	object var_59_object;
	var_62_object = var_59_object;
	float var_73_float;
	func_5364(var_73_float);
	var_59_object->AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", 1, 511389, var_73_float);
	func_6111();
	bool var_99_bool;
	func_5352(var_99_bool, "quest_d2_01", "woman");
}
EMIT "Stack[-1] = 0";


// @pe
void func_912(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_233_object, object var_234_object)
{
	var_0_object = var_234_object;
	var_1_object = var_233_object;
	var_3_string = false;
	if(1 != 0) {
		object var_240_object; object var_241_object;
		var_240_object = var_1_object;
		var_241_object = var_0_object;
		func_5418();
		object var_244_object; object var_245_object;
		var_244_object = var_1_object;
		var_245_object = var_0_object;
		func_5424();
		func_980(var_234_object, "Neutral");
		var_0_object->SetMessage(500473); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500476, 547, 546); //@t
		var_0_object->AddReply(500474, 545, 544); //@t
		goto Label_950;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x394";
	}
Label_950:
	bool var_267_bool;
	func_5416(var_267_bool);
	if(var_267_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_979;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_979:
		return 0;

	}
	
}


void func_5013(bool var_47_bool)
{
	bool var_49_bool;
	@IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
}


void func_5018(bool var_173_bool, object var_174_object, float var_175_float)
{
	cvector var_186_cvector; bool var_193_bool;
	var_174_object->GetPosition(var_186_cvector);
	float var_185_float;
	var_174_object->GetEyesHeight(var_185_float);
	var_194_float = GetByIndex(var_186_cvector, 1);
	SetByIndex(var_186_cvector, 1) = (var_194_float + var_185_float);
	cvector var_187_cvector;
	@GetPosition(var_187_cvector);
	@GetEyesHeight(var_185_float);
	var_195_float = GetByIndex(var_187_cvector, 1);
	SetByIndex(var_187_cvector, 1) = (var_195_float + var_185_float);
	cvector var_188_cvector = var_186_cvector - var_187_cvector;
	var_196_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (float)0;
	var_198_float = sqrt(var_188_cvector | var_188_cvector);
	var_188_cvector /= var_198_float;
	cvector var_189_cvector = -var_188_cvector;
	cvector var_200_cvector;
	func_5282(var_200_cvector, (var_189_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_190_cvector = ((var_188_cvector * var_175_float) + (var_200_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_192_bool;
	@IsOverrideActive(var_192_bool);
	if(var_192_bool != 0)
		var_173_bool = false;
	@StopWorld();
	@CameraTransit((var_187_cvector + var_190_cvector), var_189_cvector);
	var_213_float = GetByIndex(var_190_cvector, 0);
	var_214_float = GetByIndex(var_190_cvector, 2);
	@Rotate(var_213_float, var_214_float);
	bool var_215_bool;
	func_5416(var_215_bool);
	if(var_215_bool != 0) {
	} else {
		@HasAnimationTrack(var_193_bool, "head");
		if(var_193_bool == 0) goto Label_5080;
		@LookAsyncCamera("head");
	}
Label_5080:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_173_bool = true;
	
}


// @pe
void func_6042(bool var_590_bool)
{
	int var_592_int;
	func_5292(var_592_int, "d4q02");
	if(var_592_int == 0) {
		var_590_bool = true;
		return 0;
	}
	var_590_bool = false;
}


// @pe
void func_1955(object var_2_object, string var_323_string)
{
	bool var_324_bool;
	func_5416(var_324_bool);
	if(!var_324_bool) //@nz
		return 0;
	if(var_323_string == var_2_object)
		return 0;
	string var_327_string; bool var_328_bool;
	var_323_string = var_327_string;
	if(var_323_string == "")
		var_328_bool = false;
	else
		var_328_bool = true;
	func_5248(var_327_string, var_328_bool);
	var_2_object = var_323_string;
	
}


// @pe
void func_2469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_405_object, object var_406_object)
{
	var_0_object = var_406_object;
	var_1_object = var_405_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_412_bool = false;
		bool var_413_bool;
		func_5823(var_1_object);
		if(var_413_bool != 0) {
			bool var_419_bool;
			func_5835(var_1_object);
			if(var_419_bool != 0)
				var_412_bool = true;
		}
		if(var_412_bool != 0) {
			func_2657(var_406_object, "Neutral");
			var_0_object->SetMessage(510844); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(510845, 11990, 11989); //@t
		} else {
					func_2657(var_406_object, "Neutral");
					var_0_object->SetMessage(510841); //@t
					var_0_object->ClearReplies(); //@t
					bool var_447_bool;
					func_5823(var_1_object);
					if(var_447_bool != 0)
						var_0_object->AddReply(510873, 12022, 12021); //@t
					bool var_452_bool = false;
					bool var_453_bool = false;
					bool var_454_bool;
					func_5847(var_1_object);
					if(var_454_bool != 0) {
						bool var_460_bool;
						func_5859(var_1_object);
						if(var_460_bool != 0)
							var_453_bool = true;
					}
					if(var_453_bool != 0) {
						bool var_466_bool;
						func_5907(var_466_bool, var_1_object);
						if(var_466_bool != 0)
							var_452_bool = true;
					}
					if(var_452_bool != 0)
						var_0_object->AddReply(510876, 12025, 12024); //@t
					bool var_477_bool = false;
					bool var_478_bool = false;
					bool var_479_bool;
					func_5847(var_1_object);
					if(var_479_bool != 0) {
						bool var_481_bool;
						func_5917(var_1_object);
						if(var_481_bool != 0)
							var_478_bool = true;
					}
					if(var_478_bool != 0) {
						bool var_483_bool;
						func_5907(var_483_bool, var_1_object);
						if(!var_483_bool) //@nz
							var_477_bool = true;
					}
					if(var_477_bool != 0)
						var_0_object->AddReply(511160, 12344, 12343); //@t
					bool var_489_bool;
					func_5871(var_1_object);
					if(var_489_bool != 0)
						var_0_object->AddReply(510842, 10885, 11986); //@t
					bool var_498_bool;
					func_5883(var_1_object);
					if(var_498_bool != 0)
						var_0_object->AddReply(509894, 10899, 10898); //@t
					bool var_507_bool = false;
					bool var_508_bool;
					func_5895(var_1_object);
					if(var_508_bool != 0) {
						bool var_514_bool;
						func_5726(var_1_object);
						if(var_514_bool != 0)
							var_507_bool = true;
					}
					if(var_507_bool != 0)
						var_0_object->AddReply(510843, 10909, 11987); //@t
					var_0_object->AddReply(511157, -1, 12342); //@t
		}
	}
	for(;;) {
		bool var_437_bool;
		func_5416(var_437_bool);
		if(var_437_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5241(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2656;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2656:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9a9";


// @pe
void func_6054(bool var_652_bool)
{
	int var_654_int;
	func_5292(var_654_int, "ood6Kapella3");
	if(var_654_int == 0) {
		var_652_bool = true;
		return 0;
	}
	var_652_bool = false;
}


void func_4518(object var_0_object, int var_956_int, object var_957_object)
{
	var_0_object = var_957_object;
	bool var_967_bool; object var_968_object;
	object var_969_object;
	func_5276(var_969_object);
	var_969_object = var_968_object;
	func_5103(var_967_bool, var_968_object);
	bool var_970_bool; object var_971_object;
	var_957_object = var_971_object;
	func_5018(var_970_bool, var_971_object, 70.0);
	if(!var_970_bool) { //@nz
		var_956_int = -2;
		return 8;
	}
	object var_963_object;
	@CreateDialog(var_963_object);
	int var_974_int;
	func_5410(var_974_int);
	var_963_object->SetNPCName(var_974_int);
	int var_975_int;
	func_5408(var_975_int);
	var_963_object->SetNPCDescription(var_975_int);
	string var_976_string;
	func_5412(var_976_string);
	var_963_object->SetPhoto(var_976_string);
	string var_977_string;
	func_5414(var_977_string);
	var_963_object->SetPhoto2(var_977_string);
	int var_978_int;
	func_6280(var_978_int);
	var_963_object->SetPlayerName(var_978_int);
	bool var_964_bool;
	@IsOverrideActive(var_964_bool);
	if(var_964_bool != 0) {
		var_956_int = -2;
		return 8;
	}
	@DoDialog(var_963_object);
	object var_980_object; object var_981_object;
	var_957_object = var_980_object;
	var_963_object = var_981_object;
	TaskCall(18);
	func_4599(var_982_object, var_983_object, var_984_string, var_985_bool, var_980_object, var_981_object);
	TaskReturn();
	bool var_966_bool;
	var_963_object->IsDialogEnd(var_966_bool);
	
	for(;;) {
		var_1010_bool = !var_966_bool; //@nz
		if(var_1010_bool == 0) goto Label_4588;
		@sync();
		var_963_object->IsDialogEnd(var_966_bool);
	}
	
Label_4588:
	object var_1011_object;
	var_957_object = var_1011_object;
	func_5086();
	@StopDialog(var_963_object);
	var_963_object->GetReturnValue(-1);
	int var_965_int = var_956_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5547(object var_106_object)
{
	object var_110_object;
	func_6230(var_110_object);
	object var_107_object;
	var_110_object = var_107_object;
	func_6247(var_107_object, "pt_map_spi4ka", (float)2);
	object var_130_object;
	func_6230(var_130_object);
	var_106_object->ShowMap(var_130_object);
}


// @pe
void func_6066(bool var_357_bool)
{
	int var_359_int;
	func_5292(var_359_int, "d2KnowBigVladIsBad");
	if(var_359_int == 1)
		var_357_bool = true;
	var_357_bool = false;
}


// @pe
void func_5563(void)
{
	@SetVariable("d3q03", 1);
	func_6124();
	func_6137();
	object var_91_object;
	func_5297(var_91_object, "quest_d3_03");
	bool var_99_bool;
	func_5352(var_99_bool, "quest_d3_03", "boy");
}


void func_6078(bool var_468_bool, object var_469_object)
{
	float var_471_float;
	var_469_object->GetProperty("disease", var_471_float);
	var_468_bool = var_471_float == 0;
}


void func_6085(void)
{
	object var_123_object;
	@CreateDiaryEntry(var_123_object, 690, 2, 534538);
	bool var_127_bool; object var_128_object;
	var_123_object = var_128_object;
	func_6202(var_127_bool, var_128_object, 686);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4044(object var_2_object, string var_764_string)
{
	bool var_765_bool;
	func_5416(var_765_bool);
	if(!var_765_bool) //@nz
		return 0;
	if(var_764_string == var_2_object)
		return 0;
	string var_768_string; bool var_769_bool;
	var_764_string = var_768_string;
	if(var_764_string == "")
		var_769_bool = false;
	else
		var_769_bool = true;
	func_5248(var_768_string, var_769_bool);
	var_2_object = var_764_string;
	
}


// @pe
void func_5584(void)
{
	@SetVariable("ood3Kapella1", 1);
}


void func_6098(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 688, 2, 534536);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_6202(var_67_bool, var_68_object, 686);
}
EMIT "Stack[-1] = 0";


// @pe
void func_980(object var_2_object, string var_248_string)
{
	bool var_249_bool;
	func_5416(var_249_bool);
	if(!var_249_bool) //@nz
		return 0;
	if(var_248_string == var_2_object)
		return 0;
	string var_252_string; bool var_253_bool;
	var_248_string = var_252_string;
	if(var_248_string == "")
		var_253_bool = false;
	else
		var_253_bool = true;
	func_5248(var_252_string, var_253_bool);
	var_2_object = var_248_string;
	
}


// @pe
void func_5590(void)
{
	@SetVariable("ood3Kapella2", 1);
}


void func_5596(void)
{
	object var_133_object;
	func_6230(var_133_object);
	object var_131_object;
	var_133_object = var_131_object;
	object var_132_object;
	var_131_object->FindMark(var_132_object, "d3q03KapellaBoyLocation");
	if(var_132_object != 0)
		var_132_object->Remove();
	var_131_object->FindMark(var_132_object, "d8q01OspinaGotoMladVlad");
	if(var_132_object != 0)
		var_132_object->Remove();
	func_6150();
	bool var_152_bool;
	func_5352(var_152_bool, "quest_d3_03", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5086(void)
{
	bool var_283_bool;
	@CameraSwitchToNormal();
	bool var_284_bool;
	func_5416(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		@HasAnimationTrack(var_283_bool, "head");
		if(var_283_bool == 0) goto Label_5102;
		@UnlookAsync("head");
	}
Label_5102:
	
}


void func_6111(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 52, 1, 512134);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_6202(var_81_bool, var_82_object, 10);
}
EMIT "Stack[-1] = 0";


void func_6124(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 27, 2, 503367);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_6202(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5103(bool var_78_bool, object var_79_object)
{
	int var_85_int; int var_86_int;
	@GetVariable("voice_common", var_85_int);
	if(var_85_int != 0) {
		bool var_89_bool; object var_90_object;
		var_79_object = var_90_object;
		func_5161(var_89_bool, var_90_object);
		if(!var_89_bool) { //@nz
			bool var_120_bool; object var_121_object;
			var_79_object = var_121_object;
			func_5198(var_120_bool, var_121_object);
			if(!var_120_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@irand(var_86_int, 2);
		if(var_86_int != 0)
			@SetVariable("voice_common", ((var_85_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_165_bool; object var_166_object;
		var_79_object = var_166_object;
		func_5198(var_165_bool, var_166_object);
		if(!var_165_bool) { //@nz
			bool var_168_bool; object var_169_object;
			var_79_object = var_169_object;
			func_5161(var_168_bool, var_169_object);
			if(!var_168_bool) { //@nz
				var_78_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5159;
	
Label_5159:
	var_78_bool = true;
	
}


void func_3574(object var_0_object, int var_543_int, object var_544_object)
{
	var_0_object = var_544_object;
	bool var_554_bool; object var_555_object;
	object var_556_object;
	func_5276(var_556_object);
	var_556_object = var_555_object;
	func_5103(var_554_bool, var_555_object);
	bool var_557_bool; object var_558_object;
	var_544_object = var_558_object;
	func_5018(var_557_bool, var_558_object, 70.0);
	if(!var_557_bool) { //@nz
		var_543_int = -2;
		return 8;
	}
	object var_550_object;
	@CreateDialog(var_550_object);
	int var_561_int;
	func_5410(var_561_int);
	var_550_object->SetNPCName(var_561_int);
	int var_562_int;
	func_5408(var_562_int);
	var_550_object->SetNPCDescription(var_562_int);
	string var_563_string;
	func_5412(var_563_string);
	var_550_object->SetPhoto(var_563_string);
	string var_564_string;
	func_5414(var_564_string);
	var_550_object->SetPhoto2(var_564_string);
	int var_565_int;
	func_6280(var_565_int);
	var_550_object->SetPlayerName(var_565_int);
	bool var_551_bool;
	@IsOverrideActive(var_551_bool);
	if(var_551_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	@DoDialog(var_550_object);
	object var_567_object; object var_568_object;
	var_544_object = var_567_object;
	var_550_object = var_568_object;
	TaskCall(14);
	func_3655(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	bool var_553_bool;
	var_550_object->IsDialogEnd(var_553_bool);
	
	for(;;) {
		var_610_bool = !var_553_bool; //@nz
		if(var_610_bool == 0) goto Label_3644;
		@sync();
		var_550_object->IsDialogEnd(var_553_bool);
	}
	
Label_3644:
	object var_611_object;
	var_544_object = var_611_object;
	func_5086();
	@StopDialog(var_550_object);
	var_550_object->GetReturnValue(-1);
	int var_552_int = var_543_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4599(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_980_object, object var_981_object)
{
	var_0_object = var_981_object;
	var_1_object = var_980_object;
	var_3_string = false;
	if(1 != 0) {
		func_4657(var_981_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_4627;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x11fb";
	}
Label_4627:
	bool var_1002_bool;
	func_5416(var_1002_bool);
	if(var_1002_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5241(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4656;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4656:
		return 0;

	}
	
}


void func_6137(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 83, 2, 512165);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_6202(var_88_bool, var_89_object, 27);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5626(void)
{
	@SetVariable("ood3Kapella3", 1);
}


