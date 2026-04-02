// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool;
		func_6231(var_20_bool);
		if(var_20_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_5177();
			if(var_20_bool == 38471) {
				object var_25_object = var_1_object;
				func_5362(var_0_bool);
			}
			if(var_20_bool == 38466) {
				object var_30_object = var_1_object;
				func_5362(var_0_bool);
			}
			if(var_20_bool == 38472) {
				object var_34_object = var_1_object;
				func_5362(var_0_bool);
			}
			if(var_20_bool == 38469) {
				object var_38_object = var_1_object;
				func_5362(var_0_bool);
			}
			if(var_20_bool == 38470) {
				object var_42_object = var_1_object;
				func_5362(var_0_bool);
			}
			if(var_19_object == 45464) {
				bool var_46_bool;
				func_5391(var_1_object);
				if(var_46_bool != 0) {
					func_528(var_20_bool, "Neutral");
					var_0_bool->SetMessage(543012); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_72_bool;
					func_5413(var_72_bool, var_1_object);
					if(var_72_bool != 0)
						var_0_bool->AddReply(543015, 45468, 45467); //@t
					bool var_86_bool;
					func_5423(var_86_bool, var_1_object);
					if(var_86_bool != 0)
						var_0_bool->AddReply(543022, 45475, 45474); //@t
					bool var_95_bool = true;
					bool var_96_bool = true;
					bool var_97_bool;
					func_5433(var_97_bool, var_1_object);
					if(var_97_bool != 1) {
						bool var_103_bool;
						func_5443(var_103_bool, var_1_object);
						if(var_103_bool != 1)
							var_96_bool = false;
					}
					if(var_96_bool != 1) {
						bool var_109_bool;
						func_5453(var_109_bool, var_1_object);
						if(var_109_bool != 1)
							var_95_bool = false;
					}
					if(var_95_bool != 0)
						var_0_bool->AddReply(543026, 45480, 45478); //@t
					bool var_118_bool = true;
					bool var_119_bool;
					func_5463(var_119_bool, var_1_object);
					if(var_119_bool != 1) {
						bool var_125_bool;
						func_5473(var_125_bool, var_1_object);
						if(var_125_bool != 1)
							var_118_bool = false;
					}
					if(var_118_bool != 0)
						var_0_bool->AddReply(543034, 45487, 45486); //@t
					var_0_bool->AddReply(536643, -1, 38471); //@t
					bool var_137_bool;
					func_5413(var_137_bool, var_1_object);
					if(var_137_bool != 0)
						var_0_bool->AddReply(543014, -1, 45466); //@t
					bool var_142_bool;
					func_5413(var_142_bool, var_1_object);
					if(!var_142_bool) //@nz
						var_0_bool->AddReply(543027, -1, 45479); //@t
					var_0_bool->AddReply(536852, -1, 38688); //@t
					return 0;
				}
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536636); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_153_bool = false;
				bool var_154_bool;
				func_5367(var_1_object);
				if(var_154_bool != 0) {
					bool var_160_bool;
					func_5403(var_160_bool, var_1_object);
					if(var_160_bool != 0)
						var_153_bool = true;
				}
				if(var_153_bool != 0)
					var_0_bool->AddReply(536638, -1, 38466); //@t
				bool var_169_bool = false;
				bool var_170_bool;
				func_5367(var_1_object);
				if(var_170_bool != 0) {
					bool var_172_bool;
					func_5403(var_172_bool, var_1_object);
					if(!var_172_bool) //@nz
						var_169_bool = true;
				}
				if(var_169_bool != 0)
					var_0_bool->AddReply(536644, -1, 38472); //@t
				bool var_178_bool = false;
				bool var_179_bool;
				func_5379(var_1_object);
				if(var_179_bool != 0) {
					bool var_185_bool;
					func_5403(var_185_bool, var_1_object);
					if(var_185_bool != 0)
						var_178_bool = true;
				}
				if(var_178_bool != 0)
					var_0_bool->AddReply(536639, 38468, 38467); //@t
				bool var_190_bool = false;
				bool var_191_bool;
				func_5379(var_1_object);
				if(var_191_bool != 0) {
					bool var_193_bool;
					func_5403(var_193_bool, var_1_object);
					if(!var_193_bool) //@nz
						var_190_bool = true;
				}
				if(var_190_bool != 0)
					var_0_bool->AddReply(536642, -1, 38470); //@t
				bool var_199_bool = false;
				bool var_200_bool;
				func_5413(var_200_bool, var_1_object);
				if(var_200_bool != 0) {
					bool var_202_bool;
					func_5367(var_1_object);
					if(var_202_bool != 0)
						var_199_bool = true;
				}
				if(var_199_bool != 0)
					var_0_bool->AddReply(536645, 38474, 38473); //@t
				bool var_207_bool;
				func_5423(var_207_bool, var_1_object);
				if(var_207_bool != 0)
					var_0_bool->AddReply(536663, 38493, 38492); //@t
				bool var_212_bool;
				func_5433(var_212_bool, var_1_object);
				if(var_212_bool != 0)
					var_0_bool->AddReply(536685, 38517, 38516); //@t
				bool var_217_bool = false;
				bool var_218_bool;
				func_5443(var_218_bool, var_1_object);
				if(var_218_bool != 0) {
					bool var_220_bool;
					func_5367(var_1_object);
					if(var_220_bool != 0)
						var_217_bool = true;
				}
				if(var_217_bool != 0)
					var_0_bool->AddReply(536710, 38542, 38541); //@t
				bool var_225_bool;
				func_5453(var_225_bool, var_1_object);
				if(var_225_bool != 0)
					var_0_bool->AddReply(536747, 38579, 38578); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_5463(var_231_bool, var_1_object);
				if(var_231_bool != 0) {
					bool var_233_bool;
					func_5367(var_1_object);
					if(var_233_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_bool->AddReply(536769, 38602, 38601); //@t
				bool var_238_bool;
				func_5473(var_238_bool, var_1_object);
				if(var_238_bool != 0)
					var_0_bool->AddReply(536782, 38617, 38616); //@t
				bool var_243_bool = false;
				bool var_244_bool;
				func_5483(var_244_bool, var_1_object);
				if(var_244_bool != 0) {
					bool var_250_bool;
					func_5367(var_1_object);
					if(var_250_bool != 0)
						var_243_bool = true;
				}
				if(var_243_bool != 0)
					var_0_bool->AddReply(536792, 38627, 38626); //@t
				bool var_255_bool;
				func_5493(var_255_bool, var_1_object);
				if(var_255_bool != 0)
					var_0_bool->AddReply(536814, 38651, 38650); //@t
				bool var_264_bool = false;
				bool var_265_bool;
				func_5503(var_265_bool, var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_5367(var_1_object);
					if(var_271_bool != 0)
						var_264_bool = true;
				}
				if(var_264_bool != 0)
					var_0_bool->AddReply(536833, 38670, 38669); //@t
				bool var_276_bool;
				func_5513(var_276_bool, var_1_object);
				if(var_276_bool != 0)
					var_0_bool->AddReply(536843, 38680, 38679); //@t
				bool var_285_bool;
				func_5367(var_1_object);
				if(var_285_bool != 0)
					var_0_bool->AddReply(536850, -1, 38686); //@t
				bool var_290_bool;
				func_5379(var_1_object);
				if(var_290_bool != 0)
					var_0_bool->AddReply(536851, -1, 38687); //@t
				return 0;
			}
			if(var_19_object == 38680) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536845, 38682, 38681); //@t
				bool var_302_bool;
				func_5367(var_1_object);
				if(var_302_bool != 0)
					var_0_bool->AddReply(536849, -1, 38685); //@t
				return 0;
			}
			if(var_19_object == 38682) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536846); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536847, -1, 38683); //@t
				var_0_bool->AddReply(536848, -1, 38684); //@t
				return 0;
			}
			if(var_19_object == 38670) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536834); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536835, 38672, 38671); //@t
				var_0_bool->AddReply(536842, -1, 38678); //@t
				return 0;
			}
			if(var_19_object == 38672) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536836); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536837, 38674, 38673); //@t
				var_0_bool->AddReply(536841, -1, 38677); //@t
				return 0;
			}
			if(var_19_object == 38674) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536838); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536839, -1, 38675); //@t
				var_0_bool->AddReply(536840, -1, 38676); //@t
				return 0;
			}
			if(var_19_object == 38651) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536815); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_351_bool;
				func_5367(var_1_object);
				if(var_351_bool != 0)
					var_0_bool->AddReply(536816, 38653, 38652); //@t
				var_0_bool->AddReply(536823, 38660, 38659); //@t
				var_0_bool->AddReply(536832, -1, 38668); //@t
				return 0;
			}
			if(var_19_object == 38660) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536824); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536825, 38662, 38661); //@t
				var_0_bool->AddReply(536830, -1, 38666); //@t
				var_0_bool->AddReply(536831, -1, 38667); //@t
				return 0;
			}
			if(var_19_object == 38662) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536826); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536827, 38664, 38663); //@t
				return 0;
			}
			if(var_19_object == 38664) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536828); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536829, -1, 38665); //@t
				return 0;
			}
			if(var_19_object == 38653) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536817); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536818, 38655, 38654); //@t
				var_0_bool->AddReply(536822, -1, 38658); //@t
				return 0;
			}
			if(var_19_object == 38655) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536819); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536820, -1, 38656); //@t
				var_0_bool->AddReply(536821, -1, 38657); //@t
				return 0;
			}
			if(var_19_object == 38627) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536793); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536794, 38629, 38628); //@t
				var_0_bool->AddReply(536806, 38642, 38641); //@t
				var_0_bool->AddReply(536813, -1, 38649); //@t
				return 0;
			}
			if(var_19_object == 38642) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536807); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536808, 38644, 38643); //@t
				var_0_bool->AddReply(536812, 38644, 38647); //@t
				return 0;
			}
			if(var_19_object == 38644) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536809); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536810, -1, 38645); //@t
				var_0_bool->AddReply(536811, -1, 38646); //@t
				return 0;
			}
			if(var_19_object == 38629) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536795); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536796, 38631, 38630); //@t
				var_0_bool->AddReply(536805, -1, 38640); //@t
				return 0;
			}
			if(var_19_object == 38631) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536797); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536798, 38633, 38632); //@t
				var_0_bool->AddReply(536804, -1, 38639); //@t
				return 0;
			}
			if(var_19_object == 38633) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536799); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536800, 38635, 38634); //@t
				var_0_bool->AddReply(536803, 38635, 38637); //@t
				return 0;
			}
			if(var_19_object == 38635) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536801); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536802, -1, 38636); //@t
				return 0;
			}
			if(var_19_object == 38617) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536783); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536784, 38619, 38618); //@t
				var_0_bool->AddReply(536791, -1, 38625); //@t
				return 0;
			}
			if(var_19_object == 38619) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536785); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536786, 38621, 38620); //@t
				var_0_bool->AddReply(536790, -1, 38624); //@t
				return 0;
			}
			if(var_19_object == 38621) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536787); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_503_bool;
				func_5367(var_1_object);
				if(var_503_bool != 0)
					var_0_bool->AddReply(536788, -1, 38622); //@t
				var_0_bool->AddReply(536789, -1, 38623); //@t
				return 0;
			}
			if(var_19_object == 38602) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536770); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536771, 38604, 38603); //@t
				var_0_bool->AddReply(536781, -1, 38615); //@t
				return 0;
			}
			if(var_19_object == 38604) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536772); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536773, 38606, 38605); //@t
				var_0_bool->AddReply(536780, 38606, 38613); //@t
				return 0;
			}
			if(var_19_object == 38606) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536775, 38608, 38607); //@t
				var_0_bool->AddReply(536779, 38608, 38611); //@t
				return 0;
			}
			if(var_19_object == 38608) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536776); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536777, -1, 38609); //@t
				var_0_bool->AddReply(536778, -1, 38610); //@t
				return 0;
			}
			if(var_19_object == 38579) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536748); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_555_bool;
				func_5367(var_1_object);
				if(var_555_bool != 0)
					var_0_bool->AddReply(536749, 38581, 38580); //@t
				var_0_bool->AddReply(536761, 38593, 38592); //@t
				var_0_bool->AddReply(536768, -1, 38600); //@t
				return 0;
			}
			if(var_19_object == 38593) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536762); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536763, 38595, 38594); //@t
				var_0_bool->AddReply(536767, 38595, 38598); //@t
				return 0;
			}
			if(var_19_object == 38595) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536764); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536765, -1, 38596); //@t
				var_0_bool->AddReply(536766, -1, 38597); //@t
				return 0;
			}
			if(var_19_object == 38581) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536751, 38583, 38582); //@t
				var_0_bool->AddReply(536760, -1, 38591); //@t
				return 0;
			}
			if(var_19_object == 38583) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536752); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536753, 38585, 38584); //@t
				return 0;
			}
			if(var_19_object == 38585) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536754); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536755, 38587, 38586); //@t
				var_0_bool->AddReply(536759, -1, 38590); //@t
				return 0;
			}
			if(var_19_object == 38587) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536757, -1, 38588); //@t
				var_0_bool->AddReply(536758, -1, 38589); //@t
				return 0;
			}
			if(var_19_object == 38542) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536711); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536712, 38544, 38543); //@t
				var_0_bool->AddReply(536730, 38562, 38561); //@t
				var_0_bool->AddReply(536746, -1, 38577); //@t
				return 0;
			}
			if(var_19_object == 38562) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536731); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536732, 38564, 38563); //@t
				var_0_bool->AddReply(536745, -1, 38576); //@t
				return 0;
			}
			if(var_19_object == 38564) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536733); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536734, 38566, 38565); //@t
				var_0_bool->AddReply(536744, -1, 38575); //@t
				return 0;
			}
			if(var_19_object == 38566) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536736, -1, 38567); //@t
				var_0_bool->AddReply(536737, 38569, 38568); //@t
				return 0;
			}
			if(var_19_object == 38569) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536738); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536739, 38571, 38570); //@t
				var_0_bool->AddReply(536743, -1, 38574); //@t
				return 0;
			}
			if(var_19_object == 38571) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536740); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536741, -1, 38572); //@t
				var_0_bool->AddReply(536742, -1, 38573); //@t
				return 0;
			}
			if(var_19_object == 38544) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536713); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536714, 38546, 38545); //@t
				var_0_bool->AddReply(536729, -1, 38560); //@t
				return 0;
			}
			if(var_19_object == 38546) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536716, 38548, 38547); //@t
				var_0_bool->AddReply(536726, 38558, 38557); //@t
				return 0;
			}
			if(var_19_object == 38558) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536727); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536728, -1, 38559); //@t
				return 0;
			}
			if(var_19_object == 38548) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536717); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536718, 38550, 38549); //@t
				return 0;
			}
			if(var_19_object == 38550) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536719); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536720, 38552, 38551); //@t
				var_0_bool->AddReply(536723, 38555, 38554); //@t
				return 0;
			}
			if(var_19_object == 38555) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536725, -1, 38556); //@t
				return 0;
			}
			if(var_19_object == 38552) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536722, -1, 38553); //@t
				return 0;
			}
			if(var_19_object == 38517) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536686); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536687, 38519, 38518); //@t
				var_0_bool->AddReply(536699, 38531, 38530); //@t
				var_0_bool->AddReply(536709, -1, 38540); //@t
				return 0;
			}
			if(var_19_object == 38531) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536700); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536701, 38533, 38532); //@t
				bool var_764_bool;
				func_5367(var_1_object);
				if(var_764_bool != 0)
					var_0_bool->AddReply(536705, 38537, 38536); //@t
				return 0;
			}
			if(var_19_object == 38537) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536706); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536707, -1, 38538); //@t
				var_0_bool->AddReply(536708, -1, 38539); //@t
				return 0;
			}
			if(var_19_object == 38533) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536702); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_783_bool;
				func_5367(var_1_object);
				if(var_783_bool != 0)
					var_0_bool->AddReply(536703, -1, 38534); //@t
				var_0_bool->AddReply(536704, -1, 38535); //@t
				return 0;
			}
			if(var_19_object == 38519) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536689, 38521, 38520); //@t
				var_0_bool->AddReply(536695, 38527, 38526); //@t
				return 0;
			}
			if(var_19_object == 38527) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536696); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536697, -1, 38528); //@t
				var_0_bool->AddReply(536698, -1, 38529); //@t
				return 0;
			}
			if(var_19_object == 38521) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536690); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536691, -1, 38522); //@t
				var_0_bool->AddReply(536692, 38524, 38523); //@t
				return 0;
			}
			if(var_19_object == 38524) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536693); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536694, -1, 38525); //@t
				return 0;
			}
			if(var_19_object == 38493) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536665, 38495, 38494); //@t
				var_0_bool->AddReply(536675, 38507, 38506); //@t
				var_0_bool->AddReply(536684, -1, 38515); //@t
				return 0;
			}
			if(var_19_object == 38507) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536676); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536677, 38509, 38508); //@t
				return 0;
			}
			if(var_19_object == 38509) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536679, 38511, 38510); //@t
				var_0_bool->AddReply(536683, -1, 38514); //@t
				return 0;
			}
			if(var_19_object == 38511) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536680); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536681, -1, 38512); //@t
				var_0_bool->AddReply(536682, -1, 38513); //@t
				return 0;
			}
			if(var_19_object == 38495) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536666); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536667, 38497, 38496); //@t
				var_0_bool->AddReply(536674, 38499, 38504); //@t
				return 0;
			}
			if(var_19_object == 38497) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536669, 38499, 38498); //@t
				var_0_bool->AddReply(536673, 38499, 38502); //@t
				return 0;
			}
			if(var_19_object == 38499) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536670); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536671, -1, 38500); //@t
				var_0_bool->AddReply(536672, -1, 38501); //@t
				return 0;
			}
			if(var_19_object == 38474) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536646); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536647, 38476, 38475); //@t
				var_0_bool->AddReply(536653, 38482, 38481); //@t
				var_0_bool->AddReply(536662, -1, 38491); //@t
				return 0;
			}
			if(var_19_object == 38482) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536654); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536655, 38484, 38483); //@t
				var_0_bool->AddReply(536659, 38488, 38487); //@t
				return 0;
			}
			if(var_19_object == 38488) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536661, 38484, 38489); //@t
				return 0;
			}
			if(var_19_object == 38484) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536657, -1, 38485); //@t
				var_0_bool->AddReply(536658, -1, 38486); //@t
				return 0;
			}
			if(var_19_object == 38476) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536648); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536649, 38478, 38477); //@t
				var_0_bool->AddReply(536652, -1, 38480); //@t
				return 0;
			}
			if(var_19_object == 38478) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536651, -1, 38479); //@t
				return 0;
			}
			if(var_19_object == 38468) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536640); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536641, -1, 38469); //@t
				return 0;
			}
			if(var_19_object == 45487) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543035); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543036, -1, 45488); //@t
				var_0_bool->AddReply(543037, -1, 45489); //@t
				return 0;
			}
			if(var_19_object == 45480) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543028); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543029, -1, 45481); //@t
				var_0_bool->AddReply(543030, 45483, 45482); //@t
				return 0;
			}
			if(var_19_object == 45483) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543031); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543032, -1, 45484); //@t
				var_0_bool->AddReply(543033, -1, 45485); //@t
				return 0;
			}
			if(var_19_object == 45475) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543024, -1, 45476); //@t
				var_0_bool->AddReply(543025, -1, 45477); //@t
				return 0;
			}
			if(var_19_object == 45468) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543016); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543017, 45471, 45469); //@t
				var_0_bool->AddReply(543018, -1, 45470); //@t
				return 0;
			}
			if(var_19_object == 45471) {
				func_528(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543020, -1, 45472); //@t
				var_0_bool->AddReply(543021, -1, 45473); //@t
				return 0;
			}
			var_3_object = true;
			bool var_1022_bool;
			func_6231(var_1022_bool);
			if(var_1022_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x227";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6177(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			object var_26_object;
			var_19_bool = var_26_object;
			func_6180(var_26_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_6186();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, bool var_20_bool, object var_21_object, bool var_22_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@SensePlayerOnly(true);
		func_6233();
		func_2843();
	
		for(;;) {
			var_2_object = false;
			func_3104(var_17_object, var_18_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6177(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3039(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_6180(var_29_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5908(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5991(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3039(var_21_int);
			object var_72_object;
			var_19_bool = var_72_object;
			func_6001(var_72_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6084(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3039(var_23_int);
				object var_124_object;
				var_19_bool = var_124_object;
				func_6091(var_124_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6126(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3039(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_6129();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5822(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3039(var_22_int);
			object var_52_object; string var_53_string;
			var_19_object = var_52_object;
			var_20_bool = var_53_string;
			func_5854(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_20_bool = var_129_string;
			var_19_object = var_130_object;
			func_6131(var_128_int, var_129_string, var_130_object);
			var_128_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2980;
			if(var_22_int > 1)
				func_3039(var_22_int);
			string var_176_string; object var_177_object;
			var_20_bool = var_176_string;
			var_19_object = var_177_object;
			func_6143(var_176_string, var_177_object);
		}
	Label_2980:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; string var_21_string;
		func_5921(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3039(var_21_string);
			string var_30_string;
			var_19_bool = var_30_string;
			func_5937(var_30_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; object var_21_object;
		func_5879(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3039(var_21_object);
			object var_33_object;
			var_19_bool = var_33_object;
			func_5902(var_33_object);
		} else {
			object var_35_object;
			func_3064(var_35_object, var_35_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_3064(var_20_object, var_20_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3039(var_18_bool);
		func_6186();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_3039(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_5798();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6177(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3442();
			object var_28_object;
			var_19_bool = var_28_object;
			func_6180(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5908(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5991(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3442();
			object var_71_object;
			var_19_bool = var_71_object;
			func_6001(var_71_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6084(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3442();
				object var_123_object;
				var_19_bool = var_123_object;
				func_6091(var_123_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6126(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3442();
			object var_28_object;
			var_19_bool = var_28_object;
			func_6129();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5822(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3442();
			object var_51_object; string var_52_string;
			var_19_object = var_51_object;
			var_20_bool = var_52_string;
			func_5854(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_20_bool = var_128_string;
			var_19_object = var_129_object;
			func_6131(var_127_int, var_128_string, var_129_object);
			var_127_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_3325;
			if(var_22_int > 1)
				func_3442();
			string var_175_string; object var_176_object;
			var_20_bool = var_175_string;
			var_19_object = var_176_object;
			func_6143(var_175_string, var_176_object);
		}
	Label_3325:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5921(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3442();
			string var_29_string;
			var_19_bool = var_29_string;
			func_5937(var_29_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3442();
		func_6186();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5879(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3442();
			object var_32_object;
			var_19_bool = var_32_object;
			func_5902(var_32_object);
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6177(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3646();
			object var_30_object;
			var_19_bool = var_30_object;
			func_6180(var_30_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5908(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5991(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3646();
			object var_73_object;
			var_19_bool = var_73_object;
			func_6001(var_73_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6084(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3646();
				object var_125_object;
				var_19_bool = var_125_object;
				func_6091(var_125_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6126(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3646();
			object var_30_object;
			var_19_bool = var_30_object;
			func_6129();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5822(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3646();
			object var_53_object; string var_54_string;
			var_19_object = var_53_object;
			var_20_bool = var_54_string;
			func_5854(var_53_object, var_54_string);
		} else {
			int var_129_int; string var_130_string; object var_131_object;
			var_20_bool = var_130_string;
			var_19_object = var_131_object;
			func_6131(var_129_int, var_130_string, var_131_object);
			var_129_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_3631;
			if(var_22_int > 1)
				func_3646();
			string var_177_string; object var_178_object;
			var_20_bool = var_177_string;
			var_19_object = var_178_object;
			func_6143(var_177_string, var_178_object);
		}
	Label_3631:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5921(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3646();
			string var_31_string;
			var_19_bool = var_31_string;
			func_5937(var_31_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_3646();
		object var_22_object;
		var_19_bool = var_22_object;
		func_5798();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 111)
			return 4;
		bool var_26_bool;
		func_4821(var_26_bool, var_0_bool);
		if(!var_26_bool) { //@nz
			func_3646();
			return 4;
		}
		cvector var_22_cvector;
		@GetDirection(var_22_cvector);
		cvector var_63_cvector;
		func_4675(var_63_cvector, var_0_bool);
		cvector var_23_cvector;
		var_63_cvector = var_23_cvector;
		float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
		var_22_cvector = var_70_cvector;
		var_23_cvector = var_71_cvector;
		func_5294(var_69_float, var_70_cvector, var_71_cvector);
		if(var_69_float < 0.49999997)
			func_4971(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3646();
		func_6186();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5879(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3646();
			object var_34_object;
			var_19_bool = var_34_object;
			func_5902(var_34_object);
		}
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_4468(var_18_bool);
		func_6186();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_5342(var_1_object);
		} else {
			int var_27_int;
			func_4612(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_5166(var_23_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_4468(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_5798();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_5777(var_20_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_4889(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_4957(var_27_float, var_28_cvector, var_29_cvector);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_435_bool;
		func_6231(var_435_bool);
		if(var_435_bool == 0) goto Label_15;
		func_5135("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


// @pe
void func_4612(bool var_0_bool, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_4650(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_6153(int var_134_int, object var_135_object)
{
	object var_137_object;
	var_135_object = var_137_object;
	bool var_136_bool;
	func_4821(var_136_bool, var_137_object);
	if(!var_136_bool) { //@nz
		var_134_int = 0;
		return 0;
	}
	bool var_171_bool; object var_172_object;
	var_135_object = var_172_object;
	func_6282(var_172_object);
	if(var_171_bool != 0)
		var_134_int = 2;
	else
		var_134_int = 0;
	
}


// @pe
void func_5130(void)
{
	@CameraSwitchToNormal(true);
}


void func_5643(int var_115_int, int var_116_int)
{
	if(var_115_int > var_116_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_128_int = 0;
	if(var_115_int != var_116_int) {
		@irand(var_128_int, (var_116_int - var_115_int));
	} else if(var_115_int == 0) {
		return 4;
	}
	var_128_int += var_115_int;
	if(var_128_int == 0)
		return 4;
	int var_136_int;
	func_5772(var_136_int, "Money");
	bool var_129_bool;
	@AddItem(var_129_bool, var_136_int, 0, var_128_int);
	
}


void func_5135(string var_230_string)
{
	bool var_234_bool; float var_235_float; float var_236_float;
	@lshHasAnimation(var_234_bool, var_230_string);
	if(var_234_bool != 0) {
		@lshGetAnimTimes(var_230_string, var_235_float, var_236_float);
		@lshPlayAnimation(var_235_float, var_236_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_230_string);
	}
	
}


// @pe
void func_528(object var_2_object, string var_131_string)
{
	bool var_132_bool;
	func_6231(var_132_bool);
	if(!var_132_bool) //@nz
		return 0;
	if(var_131_string == var_2_object)
		return 0;
	string var_135_string; bool var_136_bool;
	var_131_string = var_135_string;
	if(var_131_string == "")
		var_136_bool = false;
	else
		var_136_bool = true;
	func_5151(var_135_string, var_136_bool);
	var_2_object = var_131_string;
	
}


void func_4634(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_6171(object var_181_object)
{
	object var_182_object;
	var_181_object = var_182_object;
	func_6001(var_182_object);
}


void func_5151(string var_135_string, bool var_136_bool)
{
	bool var_142_bool; float var_143_float; float var_144_float;
	@lshHasAnimation(var_142_bool, var_135_string);
	if(var_142_bool != 0) {
		@lshGetAnimTimes(var_135_string, var_143_float, var_144_float);
		@lshPlayAnimation(var_143_float, var_144_float, var_136_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_135_string);
	}
	
}


void func_3104(bool var_0_bool, object var_1_object)
{
	float var_48_float; cvector var_49_cvector; cvector var_50_cvector; bool var_51_bool; object var_52_object; bool var_53_bool;
	@rand(var_48_float, 0.5);
	@Sleep(var_48_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_3116:
				@GetPosition(var_50_cvector);
				float var_57_float;
				func_3163(var_57_float);
				@GetRandomPFPointInCircle(var_49_cvector, var_50_cvector, var_57_float, var_51_bool);
				if(var_51_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_3116;
			}
				var_1_object = false;
		}
		}
		goto Label_3132;

	Label_3132:
		object var_61_object; cvector var_62_cvector;
		var_49_cvector = var_62_cvector;
		func_3191(var_61_object, var_62_cvector);
		var_61_object = var_52_object;
		if(var_52_object != null) {
			@RotatePath(var_52_object, var_53_bool);
			if(var_53_bool != 0) {
				bool var_67_bool;
				func_3189(var_67_bool);
				@FollowPath(var_52_object, var_67_bool, var_53_bool);
				var_52_object = null;
				if(var_53_bool != 0) {
					TaskCall(5);
					func_3361();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_52_object = null;
	}
	
}


// @pe
void func_6177(int var_22_int)
{
	var_22_int = 2;
}


// @pe
void func_6180(object var_30_object)
{
	object var_31_object;
	func_6240(var_31_object, var_31_object);
}


void func_40(bool var_0_bool, int var_44_int, object var_45_object)
{
	var_0_bool = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_4987(var_55_bool, var_56_object, 70.0);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_103_int;
	func_6225(var_103_int);
	var_51_object->SetNPCName(var_103_int);
	int var_104_int;
	func_6223(var_104_int);
	var_51_object->SetNPCDescription(var_104_int);
	string var_105_string;
	func_6227(var_105_string);
	var_51_object->SetPhoto(var_105_string);
	string var_106_string;
	func_6229(var_106_string);
	var_51_object->SetPhoto2(var_106_string);
	int var_107_int;
	func_5607(var_107_int);
	var_51_object->SetPlayerName(var_107_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_116_object; object var_117_object;
	var_45_object = var_116_object;
	var_51_object = var_117_object;
	TaskCall(2);
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_390_bool = !var_54_bool; //@nz
		if(var_390_bool == 0) goto Label_103;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_103:
	object var_391_object;
	var_45_object = var_391_object;
	func_5056();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


void func_6186(void)
{
}


// @pe
void func_4650(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_4821(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_5674(string var_169_string)
{
	object var_173_object;
	@CreateInvItem(var_173_object);
	var_173_object->SetItemName(var_169_string);
	var_173_object->SetProperty("Organ", 1);
	int var_174_int;
	var_173_object->GetItemID(var_174_int);
	bool var_175_bool;
	@AddItem(var_175_bool, var_173_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_6187(bool var_25_bool)
{
	var_25_bool = false;
}


void func_5166(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


// @pe
void func_6190(void)
{
}


void func_6192(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@CanSee(var_35_bool, var_33_object);
	var_32_bool = true;
	if(var_35_bool != 1) {
		float var_37_float; object var_38_object;
		var_33_object = var_38_object;
		func_4682(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 2250000;
		if(var_46_bool != 1)
			var_32_bool = false;
	}
}


void func_4657(string var_324_string)
{
	var_324_string = "walk";
}


void func_4659(string var_325_string)
{
	var_325_string = "run";
}


// @pe
void func_4661(string var_540_string, int var_541_int)
{
	if(var_541_int == 2) {
		var_540_string = "fire";
		return 0;
	EMIT "GOTO 0x1241";
	}
	if(var_541_int == 1) {
		var_540_string = "bullet";
		return 0;
	}
	var_540_string = "phys";
}


void func_5177(void)
{
	bool var_22_bool;
	func_6231(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_5691(void)
{
	int var_163_int;
	func_5624(var_163_int);
	if(var_163_int != 1) {
	}
	func_5674("liver");
	func_5674("kidney");
	func_5674("heart");
	func_5674("blood");
}


void func_3646(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_6207(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_5983(var_61_object);
}


void func_5184(string var_24_string, int var_25_int, int var_26_int)
{
	bool var_28_bool;
	int var_30_int;
	var_25_int = var_30_int;
	int var_31_int;
	var_26_int = var_31_int;
	bool var_29_bool;
	func_5270(var_29_bool, var_30_int, var_31_int);
	if(var_29_bool != 0)
		@AddItem(var_28_bool, var_24_string, 0);
}


void func_4675(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


// @pe
void func_6213(bool var_49_bool)
{
	var_49_bool = false;
}


// @pe
void func_6216(void)
{
}


// @pe
void func_6218(bool var_27_bool)
{
	var_27_bool = false;
}


void func_5195(string var_45_string)
{
	bool var_54_bool; int var_55_int; bool var_56_bool; int var_57_int; bool var_58_bool; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	@IsExisting3DSound(var_54_bool, var_45_string);
	if(!var_54_bool) { //@nz
		var_55_int = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, (var_45_string + (var_55_int + 1)));
			if(!var_56_bool) { //@nz
				break;
			Label_5215:
				@irand(var_57_int, var_55_int);
				var_45_string += (var_57_int + 1);
	}
			@Is3DSoundLoaded(var_58_bool, var_45_string);
			if(var_58_bool != 0) {
				@GetEyesHeight(var_59_float);
				@GetDirection(var_60_cvector);
				var_61_cvector = var_60_cvector * 50;
				var_72_float = GetByIndex(var_61_cvector, 1);
				SetByIndex(var_61_cvector, 1) = (var_72_float + var_59_float);
				@PlayGlobalSound(var_45_string, var_61_cvector);
			}
		}
		var_55_int += 1;
	}
	var_67_bool = !var_55_int; //@nz
	if(var_67_bool == 0) goto Label_5215;
}


void func_4682(float var_37_float, object var_38_object)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_38_object->GetPosition(var_43_cvector);
	var_37_float = (var_43_cvector - var_42_cvector) | (var_43_cvector - var_42_cvector);
}


// @pe
void func_6221(void)
{
}


void func_6223(int var_104_int)
{
	var_104_int = 515557;
}


void func_4176(bool var_603_bool, float var_604_float)
{
	float var_607_float; bool var_608_bool;
	@rand(var_607_float);
	if(var_607_float < var_604_float) {

		for(;;) {
			@IsAnimationPlaying(var_608_bool);
			if(!var_608_bool) { //@nz
			} else {
				bool var_611_bool;
				func_4274(var_611_bool);
				if(var_611_bool != 0) {
					var_603_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_603_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_4378(var_608_bool);
}


void func_6225(int var_103_int)
{
	var_103_int = 503342;
}


void func_4690(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	@IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
}


void func_6227(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen1.png";
}


void func_5715(void)
{
	@ClearSubContainer(0);
	int var_118_int;
	func_5333(var_118_int);
	func_5643(30, (50 + (var_118_int * 40)));
	func_5184("tourniquet", 1, 10);
	func_5184("bandage", 1, 10);
	func_5184("bottle_empty", 1, 2);
	func_5184("tvirin", 1, 8);
}


void func_6229(string var_106_string)
{
	var_106_string = "ui/NPC_Citizen1_b.png";
}


void func_6231(bool var_98_bool)
{
	var_98_bool = false;
}


void func_4695(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_6233(void)
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_5755();
}


void func_3163(float var_57_float)
{
	float var_59_float;
	@GetCameraFarDistance(var_59_float);
	var_59_float = var_57_float;
}


void func_6240(object var_31_object, object var_46_object)
{
	bool var_33_bool;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			object var_36_object;
			var_31_object = var_36_object;
			func_5630(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x1887";
	}
	int var_44_int; object var_45_object;
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	if(1000 == var_46_object) {
		bool var_400_bool; object var_401_object;
		var_31_object = var_401_object;
		func_5074(var_400_bool, var_401_object);
		if(!var_400_bool) //@nz
			return 2;
		object var_433_object;
		var_31_object = var_433_object;
		TaskCall(0);
		func_0(var_433_object);
		TaskReturn();
		object var_440_object;
		var_31_object = var_440_object;
		func_5130();
	}
}


void func_4707(float var_512_float, object var_513_object, float var_514_float, int var_515_int)
{
	int var_525_int; int var_527_int;
	object var_532_object;
	var_513_object = var_532_object;
	bool var_531_bool;
	func_4695(var_531_bool, var_532_object, "health");
	if(!var_531_bool) //@nz
		var_512_float = 0.0;
	bool var_535_bool; object var_536_object;
	func_4695(var_535_bool, var_536_object, "armor");
	if(!var_535_bool) //@nz
		var_525_int = 0;
	else
		var_536_object->GetProperty("armor", var_525_int);
	string var_540_string; int var_541_int;
	var_515_int = var_541_int;
	func_4661(var_540_string, var_541_int);
	string var_526_string = "armor_" + var_540_string;
	bool var_546_bool; object var_547_object; string var_548_string;
	var_513_object = var_547_object;
	func_4695(var_546_bool, var_547_object, var_548_string);
	if(!var_546_bool) //@nz
		var_527_int = 0;
	else
		var_513_object->GetProperty(var_548_string, var_527_int);

	float var_550_float;
	func_5252(var_550_float, ((var_525_int + var_527_int) / 100.0), (float)1);
	float var_528_float;
	var_550_float = var_528_float;
	float var_529_float;
	var_513_object->GetProperty("health", var_529_float);
	float var_530_float = var_514_float * (1 - var_528_float);
	float var_560_float;
	func_5259(var_560_float, (var_529_float - var_530_float), (float)0, (float)1);
	var_513_object->SetProperty("health", var_560_float);
	bool var_566_bool; object var_567_object;
	var_513_object = var_567_object;
	func_4690(var_566_bool, var_567_object);
	if(var_566_bool != 0) {
		float var_568_float = -var_530_float;
		func_5316(var_568_float);
	}
	var_530_float = var_512_float;
	
}


void func_3175(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_4203(bool var_0_bool, bool var_404_bool, float var_405_float)
{
	bool var_411_bool; cvector var_412_cvector; cvector var_413_cvector; cvector var_414_cvector; float var_415_float;
	
	for(;;) {
		@IsAnimationPlaying(var_411_bool);
		if(!var_411_bool) //@nz
			break;
		bool var_417_bool;
		func_4274(var_417_bool);
		if(var_417_bool != 0) {
			var_404_bool = true;
			return 10;
		}
		bool var_456_bool;
		func_4821(var_456_bool, var_0_bool);
		if(!var_456_bool) { //@nz
			var_404_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_412_cvector); //@t
		@GetPFPosition(var_413_cvector);
		var_414_cvector = var_412_cvector - var_413_cvector;
		var_415_float = var_414_cvector | var_414_cvector;
		if(var_415_float < (var_405_float * var_405_float)) {
			bool var_461_bool; float var_462_float;
			var_405_float = var_462_float;
			func_4039(var_414_cvector, var_415_float, var_461_bool, var_462_float);
			var_404_bool = true;
			return 10;
		}
		@sync();
	}
	func_4378(var_415_float);
	var_404_bool = false;
}


void func_3182(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_2672(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2705(var_22_object);
	object var_102_object;
	var_21_object = var_102_object;
	func_6295(var_102_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_116_object, object var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_123_bool;
		func_5391(var_1_object);
		if(var_123_bool != 0) {
			func_528(var_117_object, "Neutral");
			var_0_bool->SetMessage(543012); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_149_bool;
			func_5413(var_149_bool, var_1_object);
			if(var_149_bool != 0)
				var_0_bool->AddReply(543015, 45468, 45467); //@t
			bool var_163_bool;
			func_5423(var_163_bool, var_1_object);
			if(var_163_bool != 0)
				var_0_bool->AddReply(543022, 45475, 45474); //@t
			bool var_172_bool = true;
			bool var_173_bool = true;
			bool var_174_bool;
			func_5433(var_174_bool, var_1_object);
			if(var_174_bool != 1) {
				bool var_180_bool;
				func_5443(var_180_bool, var_1_object);
				if(var_180_bool != 1)
					var_173_bool = false;
			}
			if(var_173_bool != 1) {
				bool var_186_bool;
				func_5453(var_186_bool, var_1_object);
				if(var_186_bool != 1)
					var_172_bool = false;
			}
			if(var_172_bool != 0)
				var_0_bool->AddReply(543026, 45480, 45478); //@t
			bool var_195_bool = true;
			bool var_196_bool;
			func_5463(var_196_bool, var_1_object);
			if(var_196_bool != 1) {
				bool var_202_bool;
				func_5473(var_202_bool, var_1_object);
				if(var_202_bool != 1)
					var_195_bool = false;
			}
			if(var_195_bool != 0)
				var_0_bool->AddReply(543034, 45487, 45486); //@t
			var_0_bool->AddReply(536643, -1, 38471); //@t
			bool var_214_bool;
			func_5413(var_214_bool, var_1_object);
			if(var_214_bool != 0)
				var_0_bool->AddReply(543014, -1, 45466); //@t
			bool var_219_bool;
			func_5413(var_219_bool, var_1_object);
			if(!var_219_bool) //@nz
				var_0_bool->AddReply(543027, -1, 45479); //@t
			var_0_bool->AddReply(536852, -1, 38688); //@t
		} else {
					func_528(var_117_object, "Neutral");
					var_0_bool->SetMessage(536636); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_248_bool = false;
					bool var_249_bool;
					func_5367(var_1_object);
					if(var_249_bool != 0) {
						bool var_255_bool;
						func_5403(var_255_bool, var_1_object);
						if(var_255_bool != 0)
							var_248_bool = true;
					}
					if(var_248_bool != 0)
						var_0_bool->AddReply(536638, -1, 38466); //@t
					bool var_264_bool = false;
					bool var_265_bool;
					func_5367(var_1_object);
					if(var_265_bool != 0) {
						bool var_267_bool;
						func_5403(var_267_bool, var_1_object);
						if(!var_267_bool) //@nz
							var_264_bool = true;
					}
					if(var_264_bool != 0)
						var_0_bool->AddReply(536644, -1, 38472); //@t
					bool var_273_bool = false;
					bool var_274_bool;
					func_5379(var_1_object);
					if(var_274_bool != 0) {
						bool var_280_bool;
						func_5403(var_280_bool, var_1_object);
						if(var_280_bool != 0)
							var_273_bool = true;
					}
					if(var_273_bool != 0)
						var_0_bool->AddReply(536639, 38468, 38467); //@t
					bool var_285_bool = false;
					bool var_286_bool;
					func_5379(var_1_object);
					if(var_286_bool != 0) {
						bool var_288_bool;
						func_5403(var_288_bool, var_1_object);
						if(!var_288_bool) //@nz
							var_285_bool = true;
					}
					if(var_285_bool != 0)
						var_0_bool->AddReply(536642, -1, 38470); //@t
					bool var_294_bool = false;
					bool var_295_bool;
					func_5413(var_295_bool, var_1_object);
					if(var_295_bool != 0) {
						bool var_297_bool;
						func_5367(var_1_object);
						if(var_297_bool != 0)
							var_294_bool = true;
					}
					if(var_294_bool != 0)
						var_0_bool->AddReply(536645, 38474, 38473); //@t
					bool var_302_bool;
					func_5423(var_302_bool, var_1_object);
					if(var_302_bool != 0)
						var_0_bool->AddReply(536663, 38493, 38492); //@t
					bool var_307_bool;
					func_5433(var_307_bool, var_1_object);
					if(var_307_bool != 0)
						var_0_bool->AddReply(536685, 38517, 38516); //@t
					bool var_312_bool = false;
					bool var_313_bool;
					func_5443(var_313_bool, var_1_object);
					if(var_313_bool != 0) {
						bool var_315_bool;
						func_5367(var_1_object);
						if(var_315_bool != 0)
							var_312_bool = true;
					}
					if(var_312_bool != 0)
						var_0_bool->AddReply(536710, 38542, 38541); //@t
					bool var_320_bool;
					func_5453(var_320_bool, var_1_object);
					if(var_320_bool != 0)
						var_0_bool->AddReply(536747, 38579, 38578); //@t
					bool var_325_bool = false;
					bool var_326_bool;
					func_5463(var_326_bool, var_1_object);
					if(var_326_bool != 0) {
						bool var_328_bool;
						func_5367(var_1_object);
						if(var_328_bool != 0)
							var_325_bool = true;
					}
					if(var_325_bool != 0)
						var_0_bool->AddReply(536769, 38602, 38601); //@t
					bool var_333_bool;
					func_5473(var_333_bool, var_1_object);
					if(var_333_bool != 0)
						var_0_bool->AddReply(536782, 38617, 38616); //@t
					bool var_338_bool = false;
					bool var_339_bool;
					func_5483(var_339_bool, var_1_object);
					if(var_339_bool != 0) {
						bool var_345_bool;
						func_5367(var_1_object);
						if(var_345_bool != 0)
							var_338_bool = true;
					}
					if(var_338_bool != 0)
						var_0_bool->AddReply(536792, 38627, 38626); //@t
					bool var_350_bool;
					func_5493(var_350_bool, var_1_object);
					if(var_350_bool != 0)
						var_0_bool->AddReply(536814, 38651, 38650); //@t
					bool var_359_bool = false;
					bool var_360_bool;
					func_5503(var_360_bool, var_1_object);
					if(var_360_bool != 0) {
						bool var_366_bool;
						func_5367(var_1_object);
						if(var_366_bool != 0)
							var_359_bool = true;
					}
					if(var_359_bool != 0)
						var_0_bool->AddReply(536833, 38670, 38669); //@t
					bool var_371_bool;
					func_5513(var_371_bool, var_1_object);
					if(var_371_bool != 0)
						var_0_bool->AddReply(536843, 38680, 38679); //@t
					bool var_380_bool;
					func_5367(var_1_object);
					if(var_380_bool != 0)
						var_0_bool->AddReply(536850, -1, 38686); //@t
					bool var_385_bool;
					func_5379(var_1_object);
					if(var_385_bool != 0)
						var_0_bool->AddReply(536851, -1, 38687); //@t
		}
	}
	for(;;) {
		bool var_228_bool;
		func_6231(var_228_bool);
		if(var_228_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5135(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_527;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_527:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


void func_5236(object var_107_object)
{
	object var_109_object;
	@self(var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_3189(bool var_67_bool)
{
	var_67_bool = false;
}


void func_3191(object var_61_object, cvector var_62_cvector)
{
	object var_64_object;
	@FindShiftedPathTo(var_64_object, var_62_cvector);
	var_64_object = var_61_object;
}
EMIT "Stack[-1] = 0";


void func_5242(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


void func_5755(void)
{
	@ClearSubContainer(0);
	func_5184("tourniquet", 1, 4);
	func_5184("bandage", 1, 2);
}


// @pe
void func_5252(float var_550_float, float var_551_float, float var_552_float)
{
	if(var_551_float < var_552_float)
		var_551_float = var_550_float;
	else
		var_552_float = var_550_float;
	
}


void func_6280(bool var_64_bool)
{
	var_64_bool = false;
}


void func_5624(int var_163_int)
{
	int var_165_int;
	@GetVariable("branch", var_165_int);
	var_165_int = var_163_int;
}


// @pe
void func_3722(object var_183_object)
{
	object var_190_object;
	func_3736(var_186_int, var_187_bool, var_188_float, var_189_int, var_190_object, var_190_object, true, 180.0);
}


// @pe
void func_5259(float var_560_float, float var_561_float, float var_562_float, float var_563_float)
{
	if(var_561_float < var_562_float) {
		var_562_float = var_560_float;
		return 0;
	}
	if(var_561_float > var_563_float) {
		var_563_float = var_560_float;
		return 0;
	}
	var_561_float = var_560_float;
}


void func_5772(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
}


// @pe
void func_6285(bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool)
{
	object var_29_object;
	var_25_object = var_29_object;
	object var_30_object;
	var_26_object = var_30_object;
	bool var_32_bool;
	var_27_bool = var_32_bool;
	bool var_28_bool;
	func_6097(var_28_bool, var_29_object, var_30_object, 700.0, var_32_bool);
	var_28_bool = var_24_bool;
}


// @pe
void func_6282(bool var_171_bool)
{
	var_171_bool = true;
}


void func_2705(object var_22_object)
{
	cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; string var_37_string; object var_38_object; bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector;
	if(var_22_object == null) {
		func_2796("fdie");
	} else {
		var_22_object->GetPosition(var_33_cvector);
		@GetPosition(var_34_cvector);
		@GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_76_float = GetByIndex(var_36_cvector, 0);
		var_77_float = GetByIndex(var_35_cvector, 0);
		var_79_float = GetByIndex(var_36_cvector, 2);
		var_80_float = GetByIndex(var_35_cvector, 2);
		if(((var_76_float * var_77_float) + (var_79_float * var_80_float)) >= 0)
			var_37_string = "fdie";
		else
			var_37_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_22_object = var_38_object;
		var_87_bool = IsFuncExist(var_22_object, "GetScriptProperty", 2);
		if(var_87_bool != 0) {
			var_22_object->HasScriptProperty(var_39_bool, "Owner");
			if(var_39_bool != 0) {
				var_22_object->GetScriptProperty(var_38_object, "Owner");
				if(var_38_object == null)
					var_22_object = var_38_object;
			}
		}
		var_94_bool = IsFuncExist(var_38_object, "@GetEyesHeight", 1);
		if(var_94_bool != 0) {
			var_38_object->GetEyesHeight(var_41_float);
			var_42_cvector = [0.0, 0.0, 0.0];
			var_95_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_95_float;
			SetByIndex(var_42_cvector, 1) = var_95_float;
			@LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = true;
		} else {
			var_40_bool = false;

		}
		string var_97_string;
		var_37_string = var_97_string;
		func_5195(var_97_string);
		@PlayAnimation("all", var_37_string);
		@WaitForAnimEnd();
		if(var_40_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_37_string);
		@RemoveEnvelope();
		var_38_object = null;
	}
	
}


// @pe
void func_3730(float var_509_float)
{
	var_509_float = 0.05;
}


// @pe
void func_5777(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_2672(var_21_object);
	TaskReturn();
}


// @pe
void func_3733(int var_516_int)
{
	var_516_int = 0;
}


void func_4246(bool var_0_bool, bool var_419_bool)
{
	cvector var_425_cvector; cvector var_426_cvector;
	bool var_430_bool;
	func_4821(var_430_bool, var_0_bool);
	if(!var_430_bool) { //@nz
		var_419_bool = false;
		return 10;
	}
	bool var_433_bool;
	float var_429_float;
	func_4335(var_429_float, var_433_bool);
	if(var_433_bool != 0) {
		var_0_bool->GetPFPosition(var_425_cvector); //@t
		@GetPFPosition(var_426_cvector);
		var_0_bool->GetAttackDistance(var_429_float); //@t
		var_419_bool = ((var_425_cvector - var_426_cvector) | (var_425_cvector - var_426_cvector)) <= ((var_429_float + 50) * (var_429_float + 50));
		return 10;
	}
	var_419_bool = false;
}


// @pe
void func_6295(object var_102_object)
{
	bool var_103_bool; object var_104_object;
	func_4690(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		object var_107_object;
		func_5236(var_107_object);
		@ReportReputationChange(var_104_object, var_107_object, -0.03, true);
		func_5715();
	}
	func_5691();
	var_183_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_3736(bool var_0_bool, object var_3_object, bool var_5_bool, object var_190_object, bool var_191_bool, float var_192_float, bool var_267_bool, bool var_353_bool)
{
	float var_204_float; cvector var_205_cvector; cvector var_206_cvector; bool var_208_bool; float var_211_float; cvector var_212_cvector; bool var_213_bool; float var_214_float;
	func_3965(var_212_cvector, var_213_bool, var_214_float);
	var_5_bool = 0;
	var_239_bool = IsFuncExist(var_190_object, "@GetAttackDistance", 1);
	if(var_239_bool != 0) {
		var_190_object->GetAttackDistance(var_204_float);
		var_204_float += 50;
	} else {
						var_192_float = var_204_float;
	}
	if(var_204_float >= 150)
		var_204_float = 150;
	var_3_object = false;
	var_0_bool = var_190_object;
	bool var_207_bool;
	@IsPlayerActor(var_0_bool, var_207_bool);
	if(var_207_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_245_object;
		func_5236(var_245_object);
		@SendPlayerEnemy(var_190_object, var_245_object);
	}
	if(var_191_bool != 0)
		var_208_bool = false;
	else
		var_208_bool = true;

	
Label_3776:
	for(;;) {
		bool var_250_bool = false;
		bool var_251_bool;
		func_4821(var_251_bool, var_0_bool);
		if(var_251_bool != 0) {
			if(!var_3_object) //@nz
				var_250_bool = true;
		}
		if(var_250_bool != 0) {
			func_4378(var_214_float);
			var_0_bool->GetPFPosition(var_205_cvector); //@t
			@GetPFPosition(var_206_cvector);
			var_211_float = (var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector);
			if(var_211_float >= ((400.0 + var_204_float) * (400.0 + var_204_float))) {
				bool var_261_bool; float var_263_float;
				var_204_float = var_263_float;
				TaskCall(8);
				func_4405(var_269_bool, var_261_bool, var_0_bool, var_263_float, 3000.0, true, false);
				TaskReturn();
				if(!var_267_bool) { //@nz
				} else {
					var_208_bool = false;
			} else {
			if(var_211_float >= (var_192_float * var_192_float)) {
				var_0_bool->GetPFPosition(var_212_cvector); //@t
				@CanReachByPF(var_213_bool, var_212_cvector);
				if(!var_213_bool) { //@nz
					bool var_347_bool; float var_349_float;
					var_204_float = var_349_float;
					TaskCall(8);
					func_4405(var_355_bool, var_347_bool, var_0_bool, var_349_float, 3000.0, true, false);
					TaskReturn();
					if(!var_353_bool) { //@nz
						goto Label_3948;
					}
					var_208_bool = false;
					goto Label_3776;
				}
				if(!var_208_bool) { //@nz
					func_4971(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_4378(var_214_float);
					@StopAsync();
					var_208_bool = true;
					bool var_361_bool;
					func_4821(var_361_bool, var_0_bool);
					if(!var_361_bool) { //@nz
						goto Label_3948;
					}
				}
				@rand(var_214_float);
				bool var_364_bool;
				var_366_bool = var_214_float < 0.25;
				if(var_366_bool != 1) {
					bool var_367_bool;
					func_4335(true, var_367_bool);
					if(var_367_bool != 1)
						var_364_bool = false;
				}
				if(var_364_bool != 0) {
					@Face(var_0_bool);
					func_4385();
					@PlayAnimation("all", "attack_stay");
					bool var_404_bool; float var_405_float;
					func_4203(var_214_float, var_404_bool, var_405_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_4378(var_214_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_622_bool;
					func_4335(var_214_float, var_622_bool);
					var_623_bool = !var_622_bool; //@nz
					if(var_623_bool == 0) goto Label_3938;
					bool var_624_bool;
					func_4821(var_624_bool, var_0_bool);
					if(!var_624_bool) { //@nz
						goto Label_3948;
					}
					var_0_bool->GetPFPosition(var_205_cvector); //@t
					@GetPFPosition(var_206_cvector);
					if(!(((var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector)) < (var_405_float * var_405_float))) goto Label_3938;
					bool var_629_bool; float var_630_float;
					var_192_float = var_630_float;
					func_4039(var_213_bool, var_214_float, var_629_bool, var_630_float);
					var_631_bool = !var_629_bool; //@nz
					if(var_631_bool == 0) goto Label_3938;
					goto Label_3948;
			}
				bool var_632_bool; float var_633_float;
				var_192_float = var_633_float;
				func_4039(var_213_bool, var_214_float, var_632_bool, var_633_float);
				if(!var_632_bool) { //@nz
					goto Label_3948;
				}
				var_208_bool = true;

			}
		Label_3938:
			goto Label_3947;
			}
			Label_3947:
			}
		}
	Label_3948:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_207_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_5270(bool var_29_bool, int var_30_int, int var_31_int)
{
	int var_33_int;
	@irand(var_33_int, var_31_int);
	var_29_bool = var_33_int < var_30_int;
}


// @pe
void func_5275(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_72_float = (var_75_float * var_76_float) + (var_78_float * var_79_float);
}


// @pe
void func_5284(float var_81_float, cvector var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0);
	var_84_float = GetByIndex(var_82_cvector, 0);
	var_86_float = GetByIndex(var_82_cvector, 2);
	var_87_float = GetByIndex(var_82_cvector, 2);
	var_81_float = sqrt((var_83_float * var_84_float) + (var_86_float * var_87_float));
}


void func_4780(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


// @pe
void func_5294(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	cvector var_74_cvector;
	var_71_cvector = var_74_cvector;
	float var_72_float;
	func_5275(var_72_float, var_73_cvector, var_74_cvector);
	float var_81_float; cvector var_82_cvector;
	var_70_cvector = var_82_cvector;
	func_5284(var_81_float, var_82_cvector);
	float var_90_float; cvector var_91_cvector;
	var_71_cvector = var_91_cvector;
	func_5284(var_90_float, var_91_cvector);
	var_69_float = var_72_float / (var_81_float * var_90_float);
}


void func_4785(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_4780(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4274(bool var_417_bool)
{
	bool var_418_bool = false;
	bool var_419_bool;
	func_4246(var_418_bool, var_419_bool);
	if(var_419_bool != 0) {
		bool var_436_bool;
		func_4290(var_417_bool, var_418_bool, var_436_bool);
		if(var_436_bool != 0)
			var_418_bool = true;
	}
	if(var_418_bool != 0) {
		var_417_bool = true;
		return 0;
	}
	var_417_bool = false;
}


// @pe
void func_5822(bool var_23_bool, object var_24_object, string var_25_string)
{
	if(var_25_string == "unholster") {
		bool var_28_bool; object var_29_object;
		var_24_object = var_29_object;
		func_6187(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x16dc";
	}
	if(var_25_string == "player_shot") {
		bool var_32_bool; object var_33_object;
		var_24_object = var_33_object;
		func_6192(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x16dc";
	}
	if(var_25_string == "battle") {
		bool var_49_bool; object var_50_object;
		var_24_object = var_50_object;
		func_6213(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = false;
}


void func_5311(int var_125_int, string var_126_string)
{
	int var_128_int;
	@GetVariable(var_126_string, var_128_int);
	var_128_int = var_125_int;
}


void func_4290(bool var_0_bool, string var_4_string, bool var_436_bool)
{
	object var_442_object; float var_444_float; cvector var_445_cvector; cvector var_446_cvector;
	@GetScene(var_442_object);
	bool var_443_bool = false;
	
	for(;;) {
		cvector var_447_cvector;
		func_4675(var_447_cvector, var_0_bool);
		var_449_int = -var_447_cvector;
		@FindDirLength(var_444_float, var_449_int, var_4_string);
		if(var_444_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_445_cvector); //@t
				@GetPFPosition(var_446_cvector);
				@WaitForAnimEnd();
				func_4378(var_446_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_443_bool = true;
				bool var_454_bool;
				func_4246(var_446_cvector, var_454_bool);
				var_455_bool = !var_454_bool; //@nz
				if(var_455_bool == 0) goto Label_4331;
		}
		for(;;) {
			var_443_bool = var_436_bool;

		}

	Label_4331:
	}
}
EMIT "Stack[-5] = 0";


void func_5316(float var_568_float)
{
	object var_570_object;
	@CreateFloatVector(var_570_object);
	var_570_object->add(var_568_float);
	if(var_568_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_570_object);
}
EMIT "Stack[-1] = 0";


void func_4821(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_4785(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_4695(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_5333(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


// @pe
void func_5854(object var_53_object, string var_54_string)
{
	if(var_54_string == "unholster") {
		object var_57_object;
		var_53_object = var_57_object;
		func_6190();
	} else if(var_54_string == "player_shot") {
			object var_60_object;
			var_53_object = var_60_object;
			func_6207(var_60_object);
	}
Label_5878:
	for(;;) {

	}
	
	if(!(var_54_string == "battle")) goto Label_5878;
	object var_128_object;
	var_53_object = var_128_object;
	func_6216();
}


void func_5342(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_5351(void)
{
	object var_474_object;
	@GetScene(var_474_object);
	object var_476_object;
	func_5236(var_476_object);
	@BroadcastMessage("battle", var_476_object, var_474_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2796(string var_44_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_45_string;
	var_44_string = var_45_string;
	func_5195(var_45_string);
	@PlayAnimation("all", var_44_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_44_string);
	@RemoveEnvelope();
}


void func_4845(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_4335(bool var_0_bool, bool var_367_bool)
{
	bool var_369_bool;
	var_372_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_372_bool != 0) {
		var_0_bool->IsAttacking(var_369_bool); //@t
		var_369_bool = var_367_bool;
	}
	var_367_bool = false;
}


// @pe
void func_5362(object var_26_object)
{
	var_26_object->SetReturnValue(1000);
}


void func_5879(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	bool var_24_bool = false;
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_6187(var_26_object);
	if(var_25_bool != 0) {
		bool var_27_bool; object var_28_object;
		func_4690(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_28_object->IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) //@nz
			var_20_bool = true;
	}
	var_20_bool = false;
}


// @pe
void func_5367(bool var_249_bool)
{
	int var_251_int;
	func_5311(var_251_int, "branch");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


void func_4346(object var_2_object, bool var_5_bool)
{
	int var_483_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_482_float;
	@rand(var_482_float);
	float var_489_float;
	func_4396(var_489_float);
	if(var_482_float < var_489_float) {
		@irand(var_483_int, var_2_object);
		@Speak("attack" + (var_483_int + 1));
		int var_494_int;
		func_4394(var_494_int);
		var_5_bool = var_494_int;
	}
}


// @pe
void func_5379(bool var_274_bool)
{
	int var_276_int;
	func_5311(var_276_int, "branch");
	if(var_276_int == 1)
		var_274_bool = true;
	var_274_bool = false;
}


// @pe
void func_5902(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	func_6190();
}


// @pe
void func_5391(bool var_123_bool)
{
	int var_125_int;
	func_5311(var_125_int, "branch");
	if(var_125_int == 2)
		var_123_bool = true;
	var_123_bool = false;
}


// @pe
void func_5908(object var_22_object)
{
	bool var_23_bool; object var_24_object;
	func_4690(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		object var_27_object;
		func_5236(var_27_object);
		@ReportReputationChange(var_24_object, var_27_object, -0.02);
	}
}


void func_4889(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_4675(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_5242(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_4951:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_4845(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_4951;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_4957(var_70_float, var_71_cvector, var_72_cvector);
}


void func_4378(bool var_0_bool)
{
	func_5342(var_0_bool);
}


// @pe
void func_5403(bool var_255_bool, object var_256_object)
{
	object var_258_object;
	var_256_object = var_258_object;
	func_5523(var_258_object);
	bool var_257_bool;
	if(var_257_bool != 0) {
		var_255_bool = true;
		return 0;
	}
	var_255_bool = false;
}


void func_2843(void)
{
	bool var_38_bool;
	func_4982(var_38_bool);
	if(!var_38_bool) //@nz
		func_6186();
}


void func_4383(int var_577_int)
{
	var_577_int = 0;
}


void func_5921(bool var_20_bool, string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_6218(var_28_object);
		var_27_bool = var_20_bool;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = false;
}


void func_3361(void)
{
	int var_78_int; int var_79_int; bool var_80_bool; float var_81_float; bool var_82_bool;
	@WaitForAnimEnd();
	bool var_83_bool;
	func_4982(var_83_bool);
	if(!var_83_bool) //@nz
		return 14;
	int var_85_int;
	func_5957(var_85_int);
	int var_76_int;
	var_85_int = var_76_int;
	int var_77_int = 0;
	
	for(;;) {
		bool var_98_bool = false;
		if(var_77_int < 5) {
			bool var_101_bool;
			func_4982(var_101_bool);
			if(var_101_bool != 0)
				var_98_bool = true;
		}
		if(var_98_bool != 0) {
			@irand(var_78_int, 3);
			if(var_78_int == 0) {
				if(var_76_int == 0) goto Label_3408;
				@irand(var_79_int, var_76_int);
				string var_107_string; int var_108_int;
				var_79_int = var_108_int;
				func_5950(var_107_string, var_108_int);
				@PlayAnimation("all", var_107_string);
				@WaitForAnimEnd(var_80_bool);
				if(!var_80_bool) { //@nz
				} else {
			} else {
			if(var_78_int == 1) {
				@rand(var_81_float, 4);
				@Sleep((var_81_float + 1), var_82_bool);
				if(!var_82_bool) { //@nz
					goto Label_3437;
				}
			} else if(var_77_int != 0) {
				goto Label_3437;
			}
			}
					bool var_110_bool;
					func_3440(var_110_bool);
					var_111_bool = !var_110_bool; //@nz
					if(var_111_bool == 0) goto Label_3432;
			}
		}
	Label_3437:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_3432:
		@ResetAAS();
		var_77_int += 1;
	}
	
}


void func_4385(void)
{
	func_5195("attack_stay");
}


// @pe
void func_5413(bool var_149_bool, object var_150_object)
{
	object var_152_object;
	var_150_object = var_152_object;
	func_5530(var_152_object);
	bool var_151_bool;
	if(var_151_bool != 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


// @pe
void func_4390(void)
{
}


void func_4392(bool var_602_bool)
{
	var_602_bool = true;
}


void func_4394(int var_494_int)
{
	var_494_int = 1;
}


void func_4396(float var_489_float)
{
	var_489_float = 0.5;
}


// @pe
void func_5423(bool var_163_bool, object var_164_object)
{
	object var_166_object;
	var_164_object = var_166_object;
	func_5537(var_166_object);
	bool var_165_bool;
	if(var_165_bool != 0) {
		var_163_bool = true;
		return 0;
	}
	var_163_bool = false;
}


void func_5937(string var_31_string)
{
	object var_33_object;
	if(var_31_string == "heal") {
		@FindActor(var_33_object, "player");
		object var_37_object;
		var_33_object = var_37_object;
		func_6221();
		var_33_object = null;
	}
}


void func_4405(object var_2_object, bool var_261_bool, object var_262_object, float var_263_float, float var_264_float, bool var_265_bool, bool var_266_bool)
{
	object var_274_object;
	func_5342(var_274_object);
	@SetTimer(1, 5);
	bool var_272_bool;
	@CanSee(var_272_bool, var_274_object);
	if(var_272_bool != 0) {
		var_2_object = true;
		object var_278_object;
		var_262_object = var_278_object;
		func_5166(var_278_object);
	} else {
		var_2_object = false;
	}
	bool var_279_bool; object var_280_object;
	func_4690(var_279_bool, var_280_object);
	if(var_279_bool != 0) {
		object var_283_object;
		func_5236(var_283_object);
		@SendPlayerEnemy(var_280_object, var_283_object);
	}
	bool var_284_bool; object var_285_object; float var_286_float; float var_287_float; bool var_288_bool; bool var_289_bool;
	var_262_object = var_285_object;
	var_263_float = var_286_float;
	var_264_float = var_287_float;
	var_265_bool = var_288_bool;
	var_266_bool = var_289_bool;
	bool var_273_bool;
	func_4510(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool);
	var_284_bool = var_273_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_273_bool = var_261_bool;
	
}


// @pe
void func_5433(bool var_174_bool, object var_175_object)
{
	object var_177_object;
	var_175_object = var_177_object;
	func_5544(var_177_object);
	bool var_176_bool;
	if(var_176_bool != 0) {
		var_174_bool = true;
		return 0;
	}
	var_174_bool = false;
}


void func_5950(string var_91_string, int var_92_int)
{
	string var_94_string = "idle";
	if(var_92_int != 0)
		var_94_string += var_92_int;
	var_94_string = var_91_string;
}


// @pe
void func_5443(bool var_180_bool, object var_181_object)
{
	object var_183_object;
	var_181_object = var_183_object;
	func_5551(var_183_object);
	bool var_182_bool;
	if(var_182_bool != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_5957(int var_85_int)
{
	int var_88_int; bool var_89_bool;
	var_88_int = 0;
	
	for(;;) {
		string var_91_string; int var_92_int;
		var_88_int = var_92_int;
		func_5950(var_91_string, var_92_int);
		@HasAnimation(var_89_bool, "all", var_91_string);
		if(!var_89_bool) //@nz
			break;
		var_88_int += 1;
	}
	var_88_int = var_85_int;
}


// @pe
void func_5453(bool var_186_bool, object var_187_object)
{
	object var_189_object;
	var_187_object = var_189_object;
	func_5558(var_189_object);
	bool var_188_bool;
	if(var_188_bool != 0) {
		var_186_bool = true;
		return 0;
	}
	var_186_bool = false;
}


// @pe
void func_5974(int var_62_int)
{
	bool var_64_bool;
	func_6280(var_64_bool);
	if(var_64_bool != 0)
		var_62_int = 2;
	else
		var_62_int = 0;
	
}


// @pe
void func_5463(bool var_196_bool, object var_197_object)
{
	object var_199_object;
	var_197_object = var_199_object;
	func_5565(var_199_object);
	bool var_198_bool;
	if(var_198_bool != 0) {
		var_196_bool = true;
		return 0;
	}
	var_196_bool = false;
}


void func_4957(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_4845(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5983(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(6);
	func_3447(var_63_object, var_62_object);
	TaskReturn();
}


// @pe
void func_5473(bool var_202_bool, object var_203_object)
{
	object var_205_object;
	var_203_object = var_205_object;
	func_5572(var_205_object);
	bool var_204_bool;
	if(var_204_bool != 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


// @pe
void func_5991(int var_89_int, object var_90_object)
{
	object var_92_object;
	var_90_object = var_92_object;
	bool var_91_bool;
	func_4821(var_91_bool, var_92_object);
	if(var_91_bool != 0)
		var_89_int = 2;
	else
		var_89_int = 0;
	
}


// @pe
void func_5483(bool var_339_bool, object var_340_object)
{
	object var_342_object;
	var_340_object = var_342_object;
	func_5579(var_342_object);
	bool var_341_bool;
	if(var_341_bool != 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_4971(object var_95_object)
{
	cvector var_99_cvector;
	var_95_object->GetPosition(var_99_cvector);
	cvector var_100_cvector;
	@GetPosition(var_100_cvector);
	cvector var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = GetByIndex(var_101_cvector, 0);
	var_103_float = GetByIndex(var_101_cvector, 2);
	@RotateAsync(var_102_float, var_103_float);
}


void func_3440(bool var_110_bool)
{
	var_110_bool = true;
}


// @pe
void func_6001(object var_182_object)
{
	object var_183_object;
	var_182_object = var_183_object;
	TaskCall(7);
	func_3722(var_183_object);
	TaskReturn();
}


void func_3442(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4468(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_4634(var_19_object);
}


// @pe
void func_5493(bool var_350_bool, object var_351_object)
{
	object var_353_object;
	var_351_object = var_353_object;
	func_5586(var_353_object);
	bool var_352_bool;
	if(var_352_bool != 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


void func_4982(bool var_38_bool)
{
	bool var_40_bool;
	@IsLoaded(var_40_bool);
	var_40_bool = var_38_bool;
}


void func_3447(bool var_0_bool, object var_62_object)
{
	var_0_bool = var_62_object;
	bool var_69_bool;
	func_3498(var_69_bool);
	cvector var_67_cvector;
	@GetDirection(var_67_cvector);
	cvector var_77_cvector;
	func_4675(var_77_cvector, var_0_bool);
	cvector var_68_cvector;
	var_77_cvector = var_68_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_5294(var_83_float, var_84_cvector, var_85_cvector);
	if(var_83_float < 0) {
		func_4971(var_0_bool);
		var_69_bool = true;
	} else {
		@Sleep(1.5, var_69_bool);
	}
	if(var_69_bool != 0) {
		func_4971(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_6009(bool var_35_bool, object var_36_object, bool var_37_bool)
{
	bool var_42_bool; object var_43_object;
	func_4695(var_42_bool, var_43_object, "class");
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 4;
	}
	string var_40_string;
	@GetProperty("class", var_40_string);
	string var_41_string;
	var_43_object->GetProperty("class", var_41_string);
	bool var_54_bool = false;
	if(!var_37_bool) { //@nz
		if(var_40_string == var_41_string)
			var_54_bool = true;
	}
	if(var_54_bool != 0) {
		var_35_bool = true;
		return 4;
	}
	if(var_41_string == "rat") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "rat_big") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "dog") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "grabitel") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "bomber") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "sanitar") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "hunter") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	if(var_41_string == "soldier") {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}


void func_4987(bool var_55_bool, object var_56_object, float var_57_float)
{
	cvector var_68_cvector; bool var_75_bool;
	var_56_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_56_object->GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_80_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_80_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_5242(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * var_57_float) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector, true);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_96_float, var_97_float);
	bool var_98_bool;
	func_6231(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		@HasAnimationTrack(var_75_bool, "head");
		if(var_75_bool == 0) goto Label_5050;
		@LookAsyncCamera("head");
	}
Label_5050:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
	
}


void func_3965(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_218_bool; bool var_219_bool; cvector var_220_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_218_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_218_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_219_bool, ("attack" + (var_2_object + 1)));
			if(!var_219_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_220_cvector, "all", "bjump");
		var_234_float = GetByIndex(var_220_cvector, 2);
		var_4_string = -var_234_float;

	}
}


// @pe
void func_5503(bool var_360_bool, object var_361_object)
{
	object var_363_object;
	var_361_object = var_363_object;
	func_5593(var_363_object);
	bool var_362_bool;
	if(var_362_bool != 0) {
		var_360_bool = true;
		return 0;
	}
	var_360_bool = false;
}


// @pe
void func_5513(bool var_371_bool, object var_372_object)
{
	object var_374_object;
	var_372_object = var_374_object;
	func_5600(var_374_object);
	bool var_373_bool;
	if(var_373_bool != 0) {
		var_371_bool = true;
		return 0;
	}
	var_371_bool = false;
}


// @pe
void func_5523(bool var_257_bool)
{
	int var_259_int;
	func_5333(var_259_int);
	var_257_bool = var_259_int <= 6;
}


// @pe
void func_5530(bool var_151_bool)
{
	int var_153_int;
	func_5333(var_153_int);
	var_151_bool = var_153_int == 1;
}


void func_4510(bool var_0_bool, object var_1_object, bool var_284_bool, object var_285_object, float var_286_float, float var_287_float, bool var_288_bool, bool var_289_bool)
{
	bool var_298_bool; object var_300_object; cvector var_301_cvector; cvector var_302_cvector; float var_304_float; object var_305_object;
	var_0_bool = false;
	var_1_object = var_285_object;
	bool var_299_bool;
	var_289_bool = var_299_bool;
	
	for(;;) {
		bool var_306_bool; object var_307_object;
		var_285_object = var_307_object;
		func_4650(var_306_bool, var_307_object);
		if(!var_306_bool) { //@nz
			var_284_bool = false;
			return 16;
		}
		var_285_object->GetPosition(var_301_cvector);
		@GetPosition(var_302_cvector);
		var_304_float = (var_301_cvector - var_302_cvector) | (var_301_cvector - var_302_cvector);
		bool var_311_bool = false;
		if(var_287_float > 0) {
			if(var_304_float > (var_287_float * var_287_float))
				var_311_bool = true;
		}
		if(var_311_bool != 0) {
			@Stop();
			var_284_bool = false;
			return 16;
		}
		if(var_304_float > (var_286_float * var_286_float)) {
			var_285_object->GetPFPosition(var_301_cvector);
			@FindPathTo(var_305_object, var_301_cvector);
			if(var_305_object != null) {
				var_305_object = var_300_object;
				var_305_object = null;
			}
			if(var_300_object != null) {
				if(var_299_bool == 0) goto Label_4563;
				var_299_bool = false;
				@RotatePath(var_300_object, var_298_bool);
				if(!var_298_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_324_string;
						func_4657(var_324_string);
						string var_325_string;
						func_4659(var_325_string);
						@FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string);
						if(!var_298_bool) { //@nz
							if(var_0_bool == 0) goto Label_4582;
							var_300_object = null;
						}
					EMIT "GOTO 0x11e7";

					Label_4582:
						} else {
					var_300_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_298_bool);
					if(!var_298_bool) { //@nz
						if(var_0_bool != 0) {
							var_300_object = null;
							goto Label_4610;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_4610;
		}
			var_305_object = null;
			goto Label_4608;

		Label_4608:
			var_300_object = null;

		}
	Label_4610:
		for(;;) {
			var_284_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_4000(bool var_0_bool, float var_498_float, int var_499_int)
{
	object var_503_object; float var_504_float; float var_505_float;
	@GetVictim((var_498_float * 0.9), var_503_object);
	@ReportAttack(var_0_bool);
	if(var_503_object == var_0_bool) {
		float var_509_float; object var_510_object; int var_511_int;
		var_503_object = var_510_object;
		var_499_int = var_511_int;
		func_3730(var_511_int);
		var_509_float = var_504_float;
		float var_512_float; object var_513_object; float var_514_float; int var_515_int;
		var_503_object = var_513_object;
		int var_516_int; object var_517_object; int var_518_int;
		var_503_object = var_517_object;
		var_499_int = var_518_int;
		func_3733(var_518_int);
		var_516_int = var_515_int;
		func_4707(var_512_float, var_513_object, var_514_float, var_515_int);
		var_512_float = var_505_float;
		int var_577_int;
		func_4383(var_577_int);
		@ReportHit(var_0_bool, var_577_int, var_505_float, var_514_float);
		object var_578_object; float var_579_float;
		var_503_object = var_578_object;
		var_505_float = var_579_float;
		func_4390();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_5537(bool var_165_bool)
{
	int var_167_int;
	func_5333(var_167_int);
	var_165_bool = var_167_int == 2;
}


// @pe
void func_5544(bool var_176_bool)
{
	int var_178_int;
	func_5333(var_178_int);
	var_176_bool = var_178_int == 3;
}


void func_3498(bool var_0_bool)
{
	func_5166(var_0_bool);
}


// @pe
void func_5551(bool var_182_bool)
{
	int var_184_int;
	func_5333(var_184_int);
	var_182_bool = var_184_int == 4;
}


// @pe
void func_5558(bool var_188_bool)
{
	int var_190_int;
	func_5333(var_190_int);
	var_188_bool = var_190_int == 5;
}


// @pe
void func_5565(bool var_198_bool)
{
	int var_200_int;
	func_5333(var_200_int);
	var_198_bool = var_200_int == 6;
}


void func_5056(void)
{
	bool var_393_bool;
	@CameraSwitchToNormal(true);
	bool var_395_bool;
	func_6231(var_395_bool);
	if(var_395_bool != 0) {
	} else {
		@HasAnimationTrack(var_393_bool, "head");
		if(var_393_bool == 0) goto Label_5073;
		@UnlookAsync("head");
	}
Label_5073:
	
}


// @pe
void func_6084(int var_86_int, object var_87_object)
{
	object var_90_object;
	var_87_object = var_90_object;
	int var_89_int;
	func_5991(var_89_int, var_90_object);
	var_89_int = var_86_int;
}


// @pe
void func_5572(bool var_204_bool)
{
	int var_206_int;
	func_5333(var_206_int);
	var_204_bool = var_206_int == 7;
}


void func_4039(bool var_0_bool, object var_1_object, bool var_461_bool, float var_462_float)
{
	string var_470_string;
	func_4378(var_470_string);
	int var_467_int;
	@irand(var_467_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_5351();
	@PlayAnimation("all", ("attack_begin" + (var_467_int + 1)));
	@WaitForAnimEnd();
	int var_469_int;
	func_4346(var_469_int, var_470_string);
	bool var_495_bool;
	func_4821(var_495_bool, var_0_bool);
	if(!var_495_bool) { //@nz
		@StopAsync();
		var_461_bool = false;
		return 8;
	}
	float var_498_float; int var_499_int;
	var_462_float = var_498_float;
	var_467_int = var_499_int;
	func_4000(var_470_string, var_498_float, var_499_int);
	bool var_468_bool;
	@HasAnimation(var_468_bool, "all", ("attack_middle" + var_467_int));
	if(var_468_bool != 0) {
		func_5351();
		@PlayAnimation("all", ("attack_middle" + var_467_int));
		@WaitForAnimEnd();
		func_4378(var_470_string);
		bool var_587_bool;
		func_4821(var_587_bool, var_0_bool);
		if(!var_587_bool) { //@nz
			@StopAsync();
			var_461_bool = false;
			return 8;
		}
		float var_590_float; int var_591_int;
		var_462_float = var_590_float;
		func_4000(var_470_string, var_590_float, var_591_int);
		var_469_int = 1;

		for(;;) {
			var_470_string = (("attack_middle" + var_591_int) + "_") + var_469_int;
			@HasAnimation(var_468_bool, "all", var_470_string);
			if(!var_468_bool) { //@nz
			} else {
				func_5351();
				@PlayAnimation("all", var_470_string);
				@WaitForAnimEnd();
				func_4378(var_470_string);
				bool var_613_bool;
				func_4821(var_613_bool, var_0_bool);
				if(!var_613_bool) { //@nz
					@StopAsync();
					var_461_bool = false;
					return 8;
				}
				float var_616_float; int var_617_int;
				var_462_float = var_616_float;
				var_467_int = var_617_int;
				func_4000(var_470_string, var_616_float, var_617_int);
				var_469_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_467_int));
		bool var_602_bool;
		func_4392(var_602_bool);
		if(var_602_bool != 0) {
			bool var_603_bool;
			func_4176(var_603_bool, 0.75);
			@StopAsync();
		}
		var_461_bool = true;
		return 8;

	}
}


// @pe
void func_6091(object var_125_object)
{
	object var_126_object;
	var_125_object = var_126_object;
	func_6001(var_126_object);
}


// @pe
void func_5579(bool var_341_bool)
{
	int var_343_int;
	func_5333(var_343_int);
	var_341_bool = var_343_int == 8;
}


void func_6097(bool var_28_bool, object var_29_object, object var_30_object, float var_31_float, bool var_32_bool)
{
	object var_36_object;
	var_30_object = var_36_object;
	bool var_35_bool;
	func_6009(var_35_bool, var_36_object, !var_32_bool);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_34_bool;
	@CanSee(var_34_bool, var_29_object);
	bool var_74_bool = true;
	if(var_34_bool != 1) {
		float var_76_float; object var_77_object;
		var_29_object = var_77_object;
		func_4682(var_76_float, var_77_object);
		var_85_bool = var_76_float <= (var_31_float * var_31_float);
		if(var_85_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 0) {
		var_28_bool = true;
		return 2;
	}
	var_28_bool = false;
}


// @pe
void func_5586(bool var_352_bool)
{
	int var_354_int;
	func_5333(var_354_int);
	var_352_bool = var_354_int == 9;
}


// @pe
void func_5074(bool var_400_bool, object var_401_object)
{
	object var_403_object;
	var_401_object = var_403_object;
	bool var_402_bool;
	func_5082(var_402_bool, var_403_object, (float)70);
	var_402_bool = var_400_bool;
}


// @pe
void func_5593(bool var_362_bool)
{
	int var_364_int;
	func_5333(var_364_int);
	var_362_bool = var_364_int == 10;
}


void func_5082(bool var_402_bool, object var_403_object, float var_404_float)
{
	cvector var_414_cvector;
	var_403_object->GetPosition(var_414_cvector);
	float var_413_float;
	var_403_object->GetEyesHeight(var_413_float);
	var_421_float = GetByIndex(var_414_cvector, 1);
	SetByIndex(var_414_cvector, 1) = (var_421_float + var_413_float);
	cvector var_415_cvector;
	@GetPosition(var_415_cvector);
	@GetEyesHeight(var_413_float);
	var_422_float = GetByIndex(var_415_cvector, 1);
	SetByIndex(var_415_cvector, 1) = (var_422_float + var_413_float);
	cvector var_416_cvector = var_414_cvector - var_415_cvector;
	var_423_float = GetByIndex(var_416_cvector, 1);
	SetByIndex(var_416_cvector, 1) = (float)0;
	var_425_float = sqrt(var_416_cvector | var_416_cvector);
	var_416_cvector /= var_425_float;
	cvector var_417_cvector = -var_416_cvector;
	cvector var_418_cvector = (var_416_cvector * var_404_float) - [0.0, 10.0, 0.0];
	bool var_420_bool;
	@IsOverrideActive(var_420_bool);
	if(var_420_bool != 0)
		var_402_bool = false;
	@StopWorld();
	@CameraTransit((var_415_cvector + var_418_cvector), var_417_cvector, true);
	var_430_float = GetByIndex(var_418_cvector, 0);
	var_431_float = GetByIndex(var_418_cvector, 2);
	@Rotate(var_430_float, var_431_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_402_bool = true;
}


void func_3039(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_3175(var_18_object, var_19_bool);
}


// @pe
void func_5600(bool var_373_bool)
{
	int var_375_int;
	func_5333(var_375_int);
	var_373_bool = var_375_int == 11;
}


void func_5607(int var_107_int)
{
	int var_109_int;
	@GetVariable("branch", var_109_int);
	if(var_109_int == 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x15f6";
	}
	if(var_109_int == 1) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
}


void func_3047(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_3182(var_23_bool, var_24_int);
}


// @pe
void func_6126(int var_22_int)
{
	var_22_int = 0;
}


// @pe
void func_6129(void)
{
}


// @pe
void func_6131(int var_129_int, string var_130_string, object var_131_object)
{
	if(var_130_string == "killme") {
		int var_134_int; object var_135_object;
		var_131_object = var_135_object;
		func_6153(var_134_int, var_135_object);
		var_134_int = var_129_int;
		return 0;
	}
	var_129_int = 0;
}


void func_3064(object var_2_object, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_4821(var_25_bool, var_26_object);
	if(!var_25_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_23_bool;
	@IsPlayerActor(var_26_object, var_23_bool);
	if(!var_23_bool) //@nz
		return 4;
	int var_62_int; object var_63_object;
	var_20_object = var_63_object;
	func_5974(var_63_object);
	int var_24_int;
	var_62_int = var_24_int;
	if(var_24_int > 0) {
		if(var_24_int > 1)
			func_3047(var_24_int);
		object var_70_object;
		var_20_object = var_70_object;
		func_5983(var_70_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_5630(object var_36_object)
{
	int var_37_int;
	func_5624(var_37_int);
	if(var_37_int == 1)
		@WorkWithCorpse(var_36_object);
	else
		@Barter(var_36_object);
	
}


// @pe
void func_6143(string var_177_string, object var_178_object)
{
	if(var_177_string == "killme") {
		object var_181_object;
		var_178_object = var_181_object;
		func_6171(var_181_object);
	}
}


