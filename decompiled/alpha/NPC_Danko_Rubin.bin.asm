GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	No
	ui/NPC_Rubin.png
	d1q01
	d1q01EvaAboutMark
	FindMark
	Remove
	d1q01EvaGotoSimon
	d1q01GrifAboutRubin
	d1q01MarkAboutJulia
	d1q01MarkAboutLara
	d1q01NotkinAboutRubin
	playsound
	giveitem
	d3q01
	d3q01RubinGotoAlexandr
	pt_map_alexandr
	AddMark
	d3q01RubinGotoAlexandrSelf
	pt_map_rubin
	ood3Rubin1
	ood3Rubin2
	ood3Rubin3
	ood3Rubin4
	ShowMap
	pt_map_bigvlad
	d3q01AlexandrGotoOspina
	d3q01AlexandrGotoOspinaSelf
	d3q01BigVladAgreed
	d3q01BigVladAgreedSelf
	d3q01BigVladGotoGeorg
	d3q01BigVladGotoGeorgSelf
	d3q01GeorgAgreed
	d3q01GeorgAgreedSelf
	d3q01OspinaButchersWillHelpSelf
	d3q01OspinaGotoBigVlad
	d3q01OspinaGotoBigVladSelf
	quest_d3_01
	completed
	d3RubinToldWhereIsSimon
	KnowRubin
	ood5Rubin1
	d5q01
	d5q01RubinGotoBigVlad
	d5q01RubinGotoBigVladSelf
	ood5Rubin2
	d5q01AlexandrGotoKaterina
	d5q01BigVladGotoAlexandr
	d5q01BurahMeeting1
	d5q01BurahMeeting2
	d5q01GrifWantsMoney
	d5q01GrifWillHelp
	d5q01KaterinaGotoLara
	d5q01PatrolGotoGrif
	d5q01_heart
	RemoveItemByType
	quest_d5_01
	d6RubinGoesToGeorg
	whitevaccine is given
	white_vaccine
	d3RubinVisit
	d5RubinVisit
	d3q01_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdd Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3d7 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d3 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd62 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x11e7

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xdde

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0xe1f

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x11eb

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xdd2

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xde3

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xe91

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xe93

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x1166

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0xe1b

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0xfb2

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xcd

0x7e: Pop(1)
0x7f: Push((int) 9170)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 9171)
0x85: Push((int) 10056)
0x86: Push((int) 10055)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 9175)
0x8a: Push((int) 10062)
0x8b: Push((int) 10061)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 9187)
0x8f: Push((int) 10077)
0x90: Push((int) 10076)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xaf

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call 0xcd

0x97: Pop(1)
0x98: Push((int) 5800)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 5801)
0x9e: Push((int) 6391)
0x9f: Push((int) 6390)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: Push((int) 5819)
0xa3: Push((int) 6391)
0xa4: Push((int) 6408)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: Push((int) 5820)
0xa8: Push((int) 6391)
0xa9: Push((int) 6410)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: GOTO 0xaf

0xad: Return(); Pop(0)

0xae: GOTO 0x74

0xaf: PushEmpty(bool)
0xb0: Call 0xe95

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb3: @ lshWaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: PushEmpty(string)
0xb9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xba: Call 0xe1f

0xbb: Pop(1)
0xbc: GOTO 0xb3

0xbd: GOTO 0xcc

0xbe: Push("all")
0xbf: Push("idle")
0xc0: @ PlayAnimation(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: @ WaitForAnimEnd()
0xc3: Pop(0)
0xc4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xcc

0xc7: Push("all")
0xc8: Push("idle")
0xc9: @ PlayAnimation(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: GOTO 0xc2

0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: PushEmpty(bool)
0xcf: Call 0xe95

0xd0: Pop(0)
0xd1: Pop(1); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(0)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = Stack[-2]
0xd9: Call 0xe1f

0xda: Pop(1)
0xdb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Push((int) 1)
0xdf: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0xe0: PushEmpty()
0xe1: Call 0xe31

0xe2: Pop(0)
0xe3: Push((int) 10081)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call 0xe97

0xea: Pop(2)
0xeb: Push((int) 10088)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0xe97

0xf2: Pop(2)
0xf3: Push((int) 10054)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call 0xfb2

0xfa: Pop(2)
0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0xcd

0xfe: Pop(1)
0xff: Push((int) 9170)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 9171)
0x105: Push((int) 10056)
0x106: Push((int) 10055)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Push((int) 9175)
0x10a: Push((int) 10062)
0x10b: Push((int) 10061)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 9187)
0x10f: Push((int) 10077)
0x110: Push((int) 10076)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Neutral"
0x116: Call 0xcd

0x117: Pop(1)
0x118: Push((int) 5800)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 5801)
0x11e: Push((int) 6391)
0x11f: Push((int) 6390)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 5819)
0x123: Push((int) 6391)
0x124: Push((int) 6408)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push((int) 5820)
0x128: Push((int) 6391)
0x129: Push((int) 6410)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 6391)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call 0xcd

0x133: Pop(1)
0x134: Push((int) 5802)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 5803)
0x13a: Push((int) 6393)
0x13b: Push((int) 6392)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 5806)
0x13f: Push((int) 6396)
0x140: Push((int) 6395)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 6396)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral"
0x149: Call 0xcd

0x14a: Pop(1)
0x14b: Push((int) 5807)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 5808)
0x151: Push((int) 6398)
0x152: Push((int) 6397)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 5818)
0x156: Push((int) -1)
0x157: Push((int) 6407)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 6398)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call 0xcd

0x161: Pop(1)
0x162: Push((int) 5809)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 5810)
0x168: Push((int) 6400)
0x169: Push((int) 6399)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 5817)
0x16d: Push((int) -1)
0x16e: Push((int) 6406)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 6400)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral"
0x177: Call 0xcd

0x178: Pop(1)
0x179: Push((int) 5811)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 5812)
0x17f: Push((int) 6402)
0x180: Push((int) 6401)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 5816)
0x184: Push((int) -1)
0x185: Push((int) 6405)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 6402)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral"
0x18e: Call 0xcd

0x18f: Pop(1)
0x190: Push((int) 5813)
0x191: @@ SetMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ ClearReplies()
0x194: Pop(0)
0x195: Push((int) 5814)
0x196: Push((int) -1)
0x197: Push((int) 6403)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Push((int) 5815)
0x19b: Push((int) -1)
0x19c: Push((int) 6404)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 6393)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral"
0x1a5: Call 0xcd

0x1a6: Pop(1)
0x1a7: Push((int) 5804)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 5805)
0x1ad: Push((int) -1)
0x1ae: Push((int) 6394)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 10077)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral"
0x1b7: Call 0xcd

0x1b8: Pop(1)
0x1b9: Push((int) 9188)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 9189)
0x1bf: Push((int) -1)
0x1c0: Push((int) 10078)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 9190)
0x1c4: Push((int) 10080)
0x1c5: Push((int) 10079)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 10080)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Neutral"
0x1ce: Call 0xcd

0x1cf: Pop(1)
0x1d0: Push((int) 9191)
0x1d1: @@ SetMessage(Stack[-1])
0x1d2: Pop(1)
0x1d3: @@ ClearReplies()
0x1d4: Pop(0)
0x1d5: Push((int) 9192)
0x1d6: Push((int) -1)
0x1d7: Push((int) 10081)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Push((int) 9193)
0x1db: Push((int) 10083)
0x1dc: Push((int) 10082)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 10083)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral"
0x1e5: Call 0xcd

0x1e6: Pop(1)
0x1e7: Push((int) 9194)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 9195)
0x1ed: Push((int) 10085)
0x1ee: Push((int) 10084)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Push((int) 9202)
0x1f2: Push((int) 10085)
0x1f3: Push((int) 10093)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Push((int) 10085)
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = "Neutral"
0x1fc: Call 0xcd

0x1fd: Pop(1)
0x1fe: Push((int) 9196)
0x1ff: @@ SetMessage(Stack[-1])
0x200: Pop(1)
0x201: @@ ClearReplies()
0x202: Pop(0)
0x203: Push((int) 9197)
0x204: Push((int) 10087)
0x205: Push((int) 10086)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Push((int) 9200)
0x209: Push((int) 10087)
0x20a: Push((int) 10089)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Push((int) 9201)
0x20e: Push((int) 10087)
0x20f: Push((int) 10091)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: Push((int) 10087)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call 0xcd

0x219: Pop(1)
0x21a: Push((int) 9198)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: Push((int) 9199)
0x220: Push((int) -1)
0x221: Push((int) 10088)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Push((int) 10062)
0x226: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral"
0x22a: Call 0xcd

0x22b: Pop(1)
0x22c: Push((int) 9176)
0x22d: @@ SetMessage(Stack[-1])
0x22e: Pop(1)
0x22f: @@ ClearReplies()
0x230: Pop(0)
0x231: Push((int) 9177)
0x232: Push((int) 10064)
0x233: Push((int) 10063)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Push((int) 9186)
0x237: Push((int) -1)
0x238: Push((int) 10075)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: Push((int) 10064)
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral"
0x241: Call 0xcd

0x242: Pop(1)
0x243: Push((int) 9178)
0x244: @@ SetMessage(Stack[-1])
0x245: Pop(1)
0x246: @@ ClearReplies()
0x247: Pop(0)
0x248: Push((int) 9179)
0x249: Push((int) 10066)
0x24a: Push((int) 10065)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Push((int) 9185)
0x24e: Push((int) 10066)
0x24f: Push((int) 10073)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 10066)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x256: PushEmpty(string)
0x257: Stack[-1] = "Neutral"
0x258: Call 0xcd

0x259: Pop(1)
0x25a: Push((int) 9180)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: Push((int) 9181)
0x260: Push((int) 10068)
0x261: Push((int) 10067)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Push((int) 9184)
0x265: Push((int) 10068)
0x266: Push((int) 10071)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Return(); Pop(0)

0x26a: Push((int) 10068)
0x26b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26d: PushEmpty(string)
0x26e: Stack[-1] = "Neutral"
0x26f: Call 0xcd

0x270: Pop(1)
0x271: Push((int) 9182)
0x272: @@ SetMessage(Stack[-1])
0x273: Pop(1)
0x274: @@ ClearReplies()
0x275: Pop(0)
0x276: Push((int) 9183)
0x277: Push((int) 10085)
0x278: Push((int) 10069)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 10056)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Neutral"
0x281: Call 0xcd

0x282: Pop(1)
0x283: Push((int) 9172)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 9173)
0x289: Push((int) 10064)
0x28a: Push((int) 10057)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 9174)
0x28e: Push((int) 10064)
0x28f: Push((int) 10059)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: Return(); Pop(0)

0x293: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x294: PushEmpty(bool)
0x295: Call 0xe95

0x296: Pop(0)
0x297: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x298: @ lshStopAnimation()
0x299: Pop(0)
0x29a: GOTO 0x29d

0x29b: @ StopAnimation()
0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: GOTO 0xde

0x29f: Return(); Pop(0)

0x2a0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[-11]
0x2a4: Call 0xde3

0x2a5: Pop(1)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-10] = (int) -2
0x2a9: Return(); Pop(8)

0x2aa: @ CreateDialog(Stack[-4])
0x2ab: Pop(0)
0x2ac: PushEmpty(int)
0x2ad: Call 0xe91

0x2ae: Pop(0)
0x2af: @@ SetNPCName(Stack[-1])
0x2b0: Pop(1)
0x2b1: PushEmpty(string)
0x2b2: Call 0xe93

0x2b3: Pop(0)
0x2b4: @@ SetPhoto(Stack[-1])
0x2b5: Pop(1)
0x2b6: PushEmpty(int)
0x2b7: Call 0x1166

0x2b8: Pop(0)
0x2b9: @@ SetPlayerName(Stack[-1])
0x2ba: Pop(1)
0x2bb: Stack[-2] = (int) -1
0x2bc: @ IsOverrideActive(Stack[-3])
0x2bd: Pop(0)
0x2be: Push(Stack[-3])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-10] = (int) -2
0x2c1: Return(); Pop(8)

0x2c2: @ DoDialog(Stack[-4])
0x2c3: Pop(0)
0x2c4: PushEmpty(object, object)
0x2c5: Stack[-2] = Stack[-11]
0x2c6: Stack[-1] = Stack[-6]
0x2c7: Push(-2, 4); TaskCall(5)
0x2c8: Call 0x2df

0x2c9: Pop(-2, 4); TaskReturn
0x2ca: Pop(2)
0x2cb: @@ IsDialogEnd(Stack[-1])
0x2cc: Pop(0)
0x2cd: Pop(0); Push((bool) Stack[-1] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cf: @ sync()
0x2d0: Pop(0)
0x2d1: @@ IsDialogEnd(Stack[-1])
0x2d2: Pop(0)
0x2d3: GOTO 0x2cd

0x2d4: PushEmpty(object)
0x2d5: Stack[-1] = Stack[-10]
0x2d6: Call 0xe1b

0x2d7: Pop(1)
0x2d8: @ StopDialog(Stack[-4])
0x2d9: Pop(0)
0x2da: @@ GetReturnValue(Stack[-2])
0x2db: Pop(0)
0x2dc: Stack[-10] = Stack[-2]
0x2dd: Return(); Pop(8)

0x2de: Stack[-4] = 0
0x2df: PushEmpty()
0x2e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2e2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2e3: Push((int) 1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x2e5: PushEmpty(bool)
0x2e6: Stack[-1] = (bool) 0
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Call 0x1068

0x2ea: Pop(1)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Call 0x1074

0x2ef: Pop(1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f3: PushEmpty(object, object)
0x2f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f6: Call 0x1052

0x2f7: Pop(2)
0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Neutral"
0x2fa: Call 0x3c7

0x2fb: Pop(1)
0x2fc: Push((int) 8737)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 8777)
0x302: Push((int) 9633)
0x303: Push((int) 9624)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 8781)
0x307: Push((int) 9629)
0x308: Push((int) 9628)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: GOTO 0x3a9

0x30c: PushEmpty(bool, object)
0x30d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30e: Call 0x105e

0x30f: Pop(1)
0x310: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x311: PushEmpty(string)
0x312: Stack[-1] = "Neutral"
0x313: Call 0x3c7

0x314: Pop(1)
0x315: Push((int) 9805)
0x316: @@ SetMessage(Stack[-1])
0x317: Pop(1)
0x318: @@ ClearReplies()
0x319: Pop(0)
0x31a: Push((int) 9806)
0x31b: Push((int) 10801)
0x31c: Push((int) 10800)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Push((int) 9822)
0x320: Push((int) 10801)
0x321: Push((int) 10818)
0x322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: GOTO 0x3a9

0x325: PushEmpty(bool)
0x326: Stack[-1] = (bool) 0
0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x329: Call 0x10b0

0x32a: Pop(1)
0x32b: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call 0x10a4

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Stack[-1] = (bool) 1
0x333: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x334: PushEmpty(string)
0x335: Stack[-1] = "Neutral"
0x336: Call 0x3c7

0x337: Pop(1)
0x338: Push((int) 9078)
0x339: @@ SetMessage(Stack[-1])
0x33a: Pop(1)
0x33b: @@ ClearReplies()
0x33c: Pop(0)
0x33d: Push((int) 9079)
0x33e: Push((int) 9958)
0x33f: Push((int) 9957)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: GOTO 0x3a9

0x343: PushEmpty(bool, object)
0x344: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x345: Call 0x105e

0x346: Pop(1)
0x347: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral"
0x34a: Call 0x3c7

0x34b: Pop(1)
0x34c: Push((int) 8769)
0x34d: @@ SetMessage(Stack[-1])
0x34e: Pop(1)
0x34f: @@ ClearReplies()
0x350: Pop(0)
0x351: Push((int) 8770)
0x352: Push((int) 9621)
0x353: Push((int) 9617)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Push((int) 8771)
0x357: Push((int) 9619)
0x358: Push((int) 9618)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: GOTO 0x3a9

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call 0x3c7

0x35f: Pop(1)
0x360: Push((int) 8778)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call 0x1068

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push((int) 11141)
0x36b: Push((int) 12331)
0x36c: Push((int) 12330)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call 0x1080

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 8779)
0x375: Push((int) 9681)
0x376: Push((int) 9626)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Call 0x108c

0x37c: Pop(1)
0x37d: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37e: Push((int) 8780)
0x37f: Push((int) 9669)
0x380: Push((int) 9627)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: PushEmpty(bool)
0x384: Stack[-1] = (bool) 0
0x385: PushEmpty(bool)
0x386: Stack[-1] = (bool) 0
0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x389: Call 0x1098

0x38a: Pop(1)
0x38b: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38c: PushEmpty(bool, object)
0x38d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38e: Call 0x1068

0x38f: Pop(1)
0x390: Pop(1); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: Stack[-1] = (bool) 1
0x393: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x396: Call 0x10a4

0x397: Pop(1)
0x398: Pop(1); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Stack[-1] = (bool) 1
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push((int) 8802)
0x39d: Push((int) 9651)
0x39e: Push((int) 9650)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: Push((int) 11140)
0x3a2: Push((int) -1)
0x3a3: Push((int) 12329)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: GOTO 0x3a9

0x3a7: Return(); Pop(0)

0x3a8: GOTO 0x2e3

0x3a9: PushEmpty(bool)
0x3aa: Call 0xe95

0x3ab: Pop(0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3ad: @ lshWaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3b7

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b4: Call 0xe1f

0x3b5: Pop(1)
0x3b6: GOTO 0x3ad

0x3b7: GOTO 0x3c6

0x3b8: Push("all")
0x3b9: Push("idle")
0x3ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bb: Pop(2)
0x3bc: @ WaitForAnimEnd()
0x3bd: Pop(0)
0x3be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: GOTO 0x3c6

0x3c1: Push("all")
0x3c2: Push("idle")
0x3c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: GOTO 0x3bc

0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: PushEmpty(bool)
0x3c9: Call 0xe95

0x3ca: Pop(0)
0x3cb: Pop(1); Push((bool) Stack[-1] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: Return(); Pop(0)

0x3ce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = Stack[-2]
0x3d3: Call 0xe1f

0x3d4: Pop(1)
0x3d5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: Push((int) 1)
0x3d9: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x3da: PushEmpty()
0x3db: Call 0xe31

0x3dc: Pop(0)
0x3dd: Push((int) 9647)
0x3de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e0: PushEmpty(object, object)
0x3e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e3: Call 0xf09

0x3e4: Pop(2)
0x3e5: PushEmpty(object, object)
0x3e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e8: Call 0xee6

0x3e9: Pop(2)
0x3ea: PushEmpty(object, object)
0x3eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ed: Call 0xf21

0x3ee: Pop(2)
0x3ef: Push((int) 9649)
0x3f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f2: PushEmpty(object, object)
0x3f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f5: Call 0xf09

0x3f6: Pop(2)
0x3f7: Push((int) 9639)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3fa: PushEmpty(object, object)
0x3fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fd: Call 0xf09

0x3fe: Pop(2)
0x3ff: PushEmpty(object, object)
0x400: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call 0xee6

0x403: Pop(2)
0x404: PushEmpty(object, object)
0x405: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x406: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x407: Call 0xf21

0x408: Pop(2)
0x409: Push((int) 9594)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40c: PushEmpty(object, object)
0x40d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40f: Call 0xf09

0x410: Pop(2)
0x411: PushEmpty(object, object)
0x412: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x413: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x414: Call 0xee6

0x415: Pop(2)
0x416: PushEmpty(object, object)
0x417: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x418: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x419: Call 0xf21

0x41a: Pop(2)
0x41b: Push((int) 9963)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41e: PushEmpty(object, object)
0x41f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x420: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x421: Call 0xf41

0x422: Pop(2)
0x423: Push((int) 12332)
0x424: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x426: PushEmpty(object, object)
0x427: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x428: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x429: Call 0xee6

0x42a: Pop(2)
0x42b: PushEmpty(object, object)
0x42c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42e: Call 0xf21

0x42f: Pop(2)
0x430: Push((int) 9684)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x433: PushEmpty(object, object)
0x434: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x435: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x436: Call 0xf0f

0x437: Pop(2)
0x438: Push((int) 9672)
0x439: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43b: PushEmpty(object, object)
0x43c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43e: Call 0xf15

0x43f: Pop(2)
0x440: Push((int) 9678)
0x441: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x443: PushEmpty(object, object)
0x444: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x445: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x446: Call 0xf15

0x447: Pop(2)
0x448: Push((int) 9679)
0x449: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44b: PushEmpty(object, object)
0x44c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44e: Call 0xf15

0x44f: Pop(2)
0x450: Push((int) 9667)
0x451: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x453: PushEmpty(object, object)
0x454: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x455: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x456: Call 0xf15

0x457: Pop(2)
0x458: Push((int) 9644)
0x459: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45b: PushEmpty(object, object)
0x45c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x45d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45e: Call 0xf1b

0x45f: Pop(2)
0x460: Push((int) 9641)
0x461: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x463: PushEmpty(object, object)
0x464: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x465: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x466: Call 0xf1b

0x467: Pop(2)
0x468: Push((int) 9574)
0x469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x46b: PushEmpty(bool)
0x46c: Stack[-1] = (bool) 0
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46f: Call 0x1068

0x470: Pop(1)
0x471: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x474: Call 0x1074

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (bool) 1
0x478: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x479: PushEmpty(object, object)
0x47a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47c: Call 0x1052

0x47d: Pop(2)
0x47e: PushEmpty(string)
0x47f: Stack[-1] = "Neutral"
0x480: Call 0x3c7

0x481: Pop(1)
0x482: Push((int) 8737)
0x483: @@ SetMessage(Stack[-1])
0x484: Pop(1)
0x485: @@ ClearReplies()
0x486: Pop(0)
0x487: Push((int) 8777)
0x488: Push((int) 9633)
0x489: Push((int) 9624)
0x48a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48b: Pop(3)
0x48c: Push((int) 8781)
0x48d: Push((int) 9629)
0x48e: Push((int) 9628)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x494: Call 0x105e

0x495: Pop(1)
0x496: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x497: PushEmpty(string)
0x498: Stack[-1] = "Neutral"
0x499: Call 0x3c7

0x49a: Pop(1)
0x49b: Push((int) 9805)
0x49c: @@ SetMessage(Stack[-1])
0x49d: Pop(1)
0x49e: @@ ClearReplies()
0x49f: Pop(0)
0x4a0: Push((int) 9806)
0x4a1: Push((int) 10801)
0x4a2: Push((int) 10800)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Push((int) 9822)
0x4a6: Push((int) 10801)
0x4a7: Push((int) 10818)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty(bool)
0x4ac: Stack[-1] = (bool) 0
0x4ad: PushEmpty(bool, object)
0x4ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4af: Call 0x10b0

0x4b0: Pop(1)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b2: PushEmpty(bool, object)
0x4b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b4: Call 0x10a4

0x4b5: Pop(1)
0x4b6: Pop(1); Push((bool) Stack[-1] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Stack[-1] = (bool) 1
0x4b9: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4ba: PushEmpty(string)
0x4bb: Stack[-1] = "Neutral"
0x4bc: Call 0x3c7

0x4bd: Pop(1)
0x4be: Push((int) 9078)
0x4bf: @@ SetMessage(Stack[-1])
0x4c0: Pop(1)
0x4c1: @@ ClearReplies()
0x4c2: Pop(0)
0x4c3: Push((int) 9079)
0x4c4: Push((int) 9958)
0x4c5: Push((int) 9957)
0x4c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty(bool, object)
0x4ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cb: Call 0x105e

0x4cc: Pop(1)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Neutral"
0x4d0: Call 0x3c7

0x4d1: Pop(1)
0x4d2: Push((int) 8769)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: Push((int) 8770)
0x4d8: Push((int) 9621)
0x4d9: Push((int) 9617)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Push((int) 8771)
0x4dd: Push((int) 9619)
0x4de: Push((int) 9618)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Neutral"
0x4e4: Call 0x3c7

0x4e5: Pop(1)
0x4e6: Push((int) 8778)
0x4e7: @@ SetMessage(Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ ClearReplies()
0x4ea: Pop(0)
0x4eb: PushEmpty(bool, object)
0x4ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ed: Call 0x1068

0x4ee: Pop(1)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f0: Push((int) 11141)
0x4f1: Push((int) 12331)
0x4f2: Push((int) 12330)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: PushEmpty(bool, object)
0x4f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f7: Call 0x1080

0x4f8: Pop(1)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fa: Push((int) 8779)
0x4fb: Push((int) 9681)
0x4fc: Push((int) 9626)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call 0x108c

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x504: Push((int) 8780)
0x505: Push((int) 9669)
0x506: Push((int) 9627)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 0
0x50b: PushEmpty(bool)
0x50c: Stack[-1] = (bool) 0
0x50d: PushEmpty(bool, object)
0x50e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50f: Call 0x1098

0x510: Pop(1)
0x511: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x514: Call 0x1068

0x515: Pop(1)
0x516: Pop(1); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Stack[-1] = (bool) 1
0x519: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51a: PushEmpty(bool, object)
0x51b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Call 0x10a4

0x51d: Pop(1)
0x51e: Pop(1); Push((bool) Stack[-1] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: Stack[-1] = (bool) 1
0x521: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x522: Push((int) 8802)
0x523: Push((int) 9651)
0x524: Push((int) 9650)
0x525: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(3)
0x527: Push((int) 11140)
0x528: Push((int) -1)
0x529: Push((int) 12329)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 9651)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call 0x3c7

0x533: Pop(1)
0x534: Push((int) 8803)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 8804)
0x53a: Push((int) 9640)
0x53b: Push((int) 9652)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 9640)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Neutral"
0x544: Call 0x3c7

0x545: Pop(1)
0x546: Push((int) 8793)
0x547: @@ SetMessage(Stack[-1])
0x548: Pop(1)
0x549: @@ ClearReplies()
0x54a: Pop(0)
0x54b: Push((int) 8795)
0x54c: Push((int) 9643)
0x54d: Push((int) 9642)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Push((int) 8794)
0x551: Push((int) -1)
0x552: Push((int) 9641)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: Push((int) 9643)
0x557: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x559: PushEmpty(string)
0x55a: Stack[-1] = "Neutral"
0x55b: Call 0x3c7

0x55c: Pop(1)
0x55d: Push((int) 8796)
0x55e: @@ SetMessage(Stack[-1])
0x55f: Pop(1)
0x560: @@ ClearReplies()
0x561: Pop(0)
0x562: Push((int) 8797)
0x563: Push((int) -1)
0x564: Push((int) 9644)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Return(); Pop(0)

0x568: Push((int) 9669)
0x569: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x56b: PushEmpty(string)
0x56c: Stack[-1] = "Neutral"
0x56d: Call 0x3c7

0x56e: Pop(1)
0x56f: Push((int) 8818)
0x570: @@ SetMessage(Stack[-1])
0x571: Pop(1)
0x572: @@ ClearReplies()
0x573: Pop(0)
0x574: Push((int) 8819)
0x575: Push((int) 9666)
0x576: Push((int) 9670)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: Return(); Pop(0)

0x57a: Push((int) 9666)
0x57b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x57d: PushEmpty(string)
0x57e: Stack[-1] = "Neutral"
0x57f: Call 0x3c7

0x580: Pop(1)
0x581: Push((int) 8815)
0x582: @@ SetMessage(Stack[-1])
0x583: Pop(1)
0x584: @@ ClearReplies()
0x585: Pop(0)
0x586: Push((int) 8817)
0x587: Push((int) 9671)
0x588: Push((int) 9668)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Push((int) 8816)
0x58c: Push((int) -1)
0x58d: Push((int) 9667)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 9671)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Neutral"
0x596: Call 0x3c7

0x597: Pop(1)
0x598: Push((int) 8820)
0x599: @@ SetMessage(Stack[-1])
0x59a: Pop(1)
0x59b: @@ ClearReplies()
0x59c: Pop(0)
0x59d: Push((int) 8821)
0x59e: Push((int) -1)
0x59f: Push((int) 9672)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Push((int) 8822)
0x5a3: Push((int) 9674)
0x5a4: Push((int) 9673)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 9674)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Neutral"
0x5ad: Call 0x3c7

0x5ae: Pop(1)
0x5af: Push((int) 8823)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 8824)
0x5b5: Push((int) 9677)
0x5b6: Push((int) 9675)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 9677)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Neutral"
0x5bf: Call 0x3c7

0x5c0: Pop(1)
0x5c1: Push((int) 8826)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 8827)
0x5c7: Push((int) -1)
0x5c8: Push((int) 9678)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Push((int) 8828)
0x5cc: Push((int) -1)
0x5cd: Push((int) 9679)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Return(); Pop(0)

0x5d1: Push((int) 9681)
0x5d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5d4: PushEmpty(string)
0x5d5: Stack[-1] = "Neutral"
0x5d6: Call 0x3c7

0x5d7: Pop(1)
0x5d8: Push((int) 8829)
0x5d9: @@ SetMessage(Stack[-1])
0x5da: Pop(1)
0x5db: @@ ClearReplies()
0x5dc: Pop(0)
0x5dd: Push((int) 8830)
0x5de: Push((int) 9683)
0x5df: Push((int) 9682)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 9683)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Neutral"
0x5e8: Call 0x3c7

0x5e9: Pop(1)
0x5ea: Push((int) 8831)
0x5eb: @@ SetMessage(Stack[-1])
0x5ec: Pop(1)
0x5ed: @@ ClearReplies()
0x5ee: Pop(0)
0x5ef: Push((int) 8832)
0x5f0: Push((int) -1)
0x5f1: Push((int) 9684)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 12331)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral"
0x5fa: Call 0x3c7

0x5fb: Pop(1)
0x5fc: Push((int) 11142)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 11143)
0x602: Push((int) -1)
0x603: Push((int) 12332)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Return(); Pop(0)

0x607: Push((int) 9619)
0x608: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x60a: PushEmpty(string)
0x60b: Stack[-1] = "Neutral"
0x60c: Call 0x3c7

0x60d: Pop(1)
0x60e: Push((int) 8772)
0x60f: @@ SetMessage(Stack[-1])
0x610: Pop(1)
0x611: @@ ClearReplies()
0x612: Pop(0)
0x613: Push((int) 8773)
0x614: Push((int) 9621)
0x615: Push((int) 9620)
0x616: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x617: Pop(3)
0x618: Push((int) 8814)
0x619: Push((int) 9621)
0x61a: Push((int) 9663)
0x61b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(3)
0x61d: Return(); Pop(0)

0x61e: Push((int) 9621)
0x61f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x621: PushEmpty(string)
0x622: Stack[-1] = "Neutral"
0x623: Call 0x3c7

0x624: Pop(1)
0x625: Push((int) 8774)
0x626: @@ SetMessage(Stack[-1])
0x627: Pop(1)
0x628: @@ ClearReplies()
0x629: Pop(0)
0x62a: Push((int) 8775)
0x62b: Push((int) 9623)
0x62c: Push((int) 9622)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 10448)
0x630: Push((int) 9623)
0x631: Push((int) 11518)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Return(); Pop(0)

0x635: Push((int) 9623)
0x636: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x638: PushEmpty(string)
0x639: Stack[-1] = "Neutral"
0x63a: Call 0x3c7

0x63b: Pop(1)
0x63c: Push((int) 8776)
0x63d: @@ SetMessage(Stack[-1])
0x63e: Pop(1)
0x63f: @@ ClearReplies()
0x640: Pop(0)
0x641: Push((int) 8739)
0x642: Push((int) 9577)
0x643: Push((int) 9576)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: Push((int) 8764)
0x647: Push((int) 9577)
0x648: Push((int) 9608)
0x649: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64a: Pop(3)
0x64b: Push((int) 8765)
0x64c: Push((int) 9611)
0x64d: Push((int) 9610)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: Push((int) 9611)
0x652: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x654: PushEmpty(string)
0x655: Stack[-1] = "Neutral"
0x656: Call 0x3c7

0x657: Pop(1)
0x658: Push((int) 8766)
0x659: @@ SetMessage(Stack[-1])
0x65a: Pop(1)
0x65b: @@ ClearReplies()
0x65c: Pop(0)
0x65d: Push((int) 8767)
0x65e: Push((int) 9587)
0x65f: Push((int) 9612)
0x660: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(3)
0x662: Push((int) 8768)
0x663: Push((int) 9587)
0x664: Push((int) 9614)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 9577)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Neutral"
0x66d: Call 0x3c7

0x66e: Pop(1)
0x66f: Push((int) 8740)
0x670: @@ SetMessage(Stack[-1])
0x671: Pop(1)
0x672: @@ ClearReplies()
0x673: Pop(0)
0x674: Push((int) 8746)
0x675: Push((int) 9587)
0x676: Push((int) 9586)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Push((int) 8741)
0x67a: Push((int) 9579)
0x67b: Push((int) 9578)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 9579)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral"
0x684: Call 0x3c7

0x685: Pop(1)
0x686: Push((int) 8742)
0x687: @@ SetMessage(Stack[-1])
0x688: Pop(1)
0x689: @@ ClearReplies()
0x68a: Pop(0)
0x68b: Push((int) 8743)
0x68c: Push((int) 9587)
0x68d: Push((int) 9580)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Push((int) 8744)
0x691: Push((int) 9587)
0x692: Push((int) 9582)
0x693: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x694: Pop(3)
0x695: Push((int) 8745)
0x696: Push((int) 9587)
0x697: Push((int) 9584)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: Return(); Pop(0)

0x69b: Push((int) 9587)
0x69c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x69e: PushEmpty(string)
0x69f: Stack[-1] = "Neutral"
0x6a0: Call 0x3c7

0x6a1: Pop(1)
0x6a2: Push((int) 8747)
0x6a3: @@ SetMessage(Stack[-1])
0x6a4: Pop(1)
0x6a5: @@ ClearReplies()
0x6a6: Pop(0)
0x6a7: Push((int) 8748)
0x6a8: Push((int) 9589)
0x6a9: Push((int) 9588)
0x6aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ab: Pop(3)
0x6ac: Push((int) 8762)
0x6ad: Push((int) 9589)
0x6ae: Push((int) 9604)
0x6af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(3)
0x6b1: Push((int) 8763)
0x6b2: Push((int) 9589)
0x6b3: Push((int) 9606)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Return(); Pop(0)

0x6b7: Push((int) 9589)
0x6b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "Neutral"
0x6bc: Call 0x3c7

0x6bd: Pop(1)
0x6be: Push((int) 8749)
0x6bf: @@ SetMessage(Stack[-1])
0x6c0: Pop(1)
0x6c1: @@ ClearReplies()
0x6c2: Pop(0)
0x6c3: Push((int) 8761)
0x6c4: Push((int) -1)
0x6c5: Push((int) 9603)
0x6c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: Return(); Pop(0)

0x6c9: Push((int) 9958)
0x6ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = "Neutral"
0x6ce: Call 0x3c7

0x6cf: Pop(1)
0x6d0: Push((int) 9080)
0x6d1: @@ SetMessage(Stack[-1])
0x6d2: Pop(1)
0x6d3: @@ ClearReplies()
0x6d4: Pop(0)
0x6d5: Push((int) 9081)
0x6d6: Push((int) 11530)
0x6d7: Push((int) 9959)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Return(); Pop(0)

0x6db: Push((int) 11530)
0x6dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6de: PushEmpty(string)
0x6df: Stack[-1] = "Neutral"
0x6e0: Call 0x3c7

0x6e1: Pop(1)
0x6e2: Push((int) 10457)
0x6e3: @@ SetMessage(Stack[-1])
0x6e4: Pop(1)
0x6e5: @@ ClearReplies()
0x6e6: Pop(0)
0x6e7: Push((int) 10458)
0x6e8: Push((int) 11532)
0x6e9: Push((int) 11531)
0x6ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: Return(); Pop(0)

0x6ed: Push((int) 11532)
0x6ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6f0: PushEmpty(string)
0x6f1: Stack[-1] = "Neutral"
0x6f2: Call 0x3c7

0x6f3: Pop(1)
0x6f4: Push((int) 10459)
0x6f5: @@ SetMessage(Stack[-1])
0x6f6: Pop(1)
0x6f7: @@ ClearReplies()
0x6f8: Pop(0)
0x6f9: Push((int) 10460)
0x6fa: Push((int) 11534)
0x6fb: Push((int) 11533)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: Return(); Pop(0)

0x6ff: Push((int) 11534)
0x700: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x702: PushEmpty(string)
0x703: Stack[-1] = "Neutral"
0x704: Call 0x3c7

0x705: Pop(1)
0x706: Push((int) 10461)
0x707: @@ SetMessage(Stack[-1])
0x708: Pop(1)
0x709: @@ ClearReplies()
0x70a: Pop(0)
0x70b: Push((int) 10462)
0x70c: Push((int) 9960)
0x70d: Push((int) 11535)
0x70e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70f: Pop(3)
0x710: Return(); Pop(0)

0x711: Push((int) 9960)
0x712: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x714: PushEmpty(string)
0x715: Stack[-1] = "Neutral"
0x716: Call 0x3c7

0x717: Pop(1)
0x718: Push((int) 9082)
0x719: @@ SetMessage(Stack[-1])
0x71a: Pop(1)
0x71b: @@ ClearReplies()
0x71c: Pop(0)
0x71d: Push((int) 9083)
0x71e: Push((int) 9962)
0x71f: Push((int) 9961)
0x720: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(3)
0x722: Return(); Pop(0)

0x723: Push((int) 9962)
0x724: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x726: PushEmpty(string)
0x727: Stack[-1] = "Neutral"
0x728: Call 0x3c7

0x729: Pop(1)
0x72a: Push((int) 9084)
0x72b: @@ SetMessage(Stack[-1])
0x72c: Pop(1)
0x72d: @@ ClearReplies()
0x72e: Pop(0)
0x72f: Push((int) 9085)
0x730: Push((int) -1)
0x731: Push((int) 9963)
0x732: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(3)
0x734: Return(); Pop(0)

0x735: Push((int) 10801)
0x736: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x738: PushEmpty(string)
0x739: Stack[-1] = "Neutral"
0x73a: Call 0x3c7

0x73b: Pop(1)
0x73c: Push((int) 9807)
0x73d: @@ SetMessage(Stack[-1])
0x73e: Pop(1)
0x73f: @@ ClearReplies()
0x740: Pop(0)
0x741: Push((int) 9808)
0x742: Push((int) 10803)
0x743: Push((int) 10802)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: Push((int) 9821)
0x747: Push((int) 10803)
0x748: Push((int) 10816)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Return(); Pop(0)

0x74c: Push((int) 10803)
0x74d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x74f: PushEmpty(string)
0x750: Stack[-1] = "Neutral"
0x751: Call 0x3c7

0x752: Pop(1)
0x753: Push((int) 9809)
0x754: @@ SetMessage(Stack[-1])
0x755: Pop(1)
0x756: @@ ClearReplies()
0x757: Pop(0)
0x758: Push((int) 9810)
0x759: Push((int) 10805)
0x75a: Push((int) 10804)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: Push((int) 9814)
0x75e: Push((int) 10809)
0x75f: Push((int) 10808)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Push((int) 9820)
0x763: Push((int) 10809)
0x764: Push((int) 10814)
0x765: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: Return(); Pop(0)

0x768: Push((int) 10809)
0x769: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x76b: PushEmpty(string)
0x76c: Stack[-1] = "Neutral"
0x76d: Call 0x3c7

0x76e: Pop(1)
0x76f: Push((int) 9815)
0x770: @@ SetMessage(Stack[-1])
0x771: Pop(1)
0x772: @@ ClearReplies()
0x773: Pop(0)
0x774: Push((int) 9816)
0x775: Push((int) 10811)
0x776: Push((int) 10810)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Push((int) 10811)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x77d: PushEmpty(string)
0x77e: Stack[-1] = "Neutral"
0x77f: Call 0x3c7

0x780: Pop(1)
0x781: Push((int) 9817)
0x782: @@ SetMessage(Stack[-1])
0x783: Pop(1)
0x784: @@ ClearReplies()
0x785: Pop(0)
0x786: Push((int) 9818)
0x787: Push((int) -1)
0x788: Push((int) 10812)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Push((int) 9819)
0x78c: Push((int) -1)
0x78d: Push((int) 10813)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: Return(); Pop(0)

0x791: Push((int) 10805)
0x792: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Neutral"
0x796: Call 0x3c7

0x797: Pop(1)
0x798: Push((int) 9811)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 9812)
0x79e: Push((int) -1)
0x79f: Push((int) 10806)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Push((int) 9813)
0x7a3: Push((int) -1)
0x7a4: Push((int) 10807)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Return(); Pop(0)

0x7a8: Push((int) 9629)
0x7a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7ab: PushEmpty(object, object)
0x7ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ae: Call 0xfac

0x7af: Pop(2)
0x7b0: PushEmpty(string)
0x7b1: Stack[-1] = "Neutral"
0x7b2: Call 0x3c7

0x7b3: Pop(1)
0x7b4: Push((int) 8782)
0x7b5: @@ SetMessage(Stack[-1])
0x7b6: Pop(1)
0x7b7: @@ ClearReplies()
0x7b8: Pop(0)
0x7b9: Push((int) 8783)
0x7ba: Push((int) 9631)
0x7bb: Push((int) 9630)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: Push((int) 10447)
0x7bf: Push((int) 9631)
0x7c0: Push((int) 11516)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: Return(); Pop(0)

0x7c4: Push((int) 9631)
0x7c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7c7: PushEmpty(string)
0x7c8: Stack[-1] = "Neutral"
0x7c9: Call 0x3c7

0x7ca: Pop(1)
0x7cb: Push((int) 8784)
0x7cc: @@ SetMessage(Stack[-1])
0x7cd: Pop(1)
0x7ce: @@ ClearReplies()
0x7cf: Pop(0)
0x7d0: Push((int) 8785)
0x7d1: Push((int) 9591)
0x7d2: Push((int) 9632)
0x7d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d4: Pop(3)
0x7d5: Return(); Pop(0)

0x7d6: Push((int) 9633)
0x7d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7d9: PushEmpty(string)
0x7da: Stack[-1] = "Neutral"
0x7db: Call 0x3c7

0x7dc: Pop(1)
0x7dd: Push((int) 8786)
0x7de: @@ SetMessage(Stack[-1])
0x7df: Pop(1)
0x7e0: @@ ClearReplies()
0x7e1: Pop(0)
0x7e2: Push((int) 8787)
0x7e3: Push((int) 9591)
0x7e4: Push((int) 9634)
0x7e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e6: Pop(3)
0x7e7: Return(); Pop(0)

0x7e8: Push((int) 9591)
0x7e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7eb: PushEmpty(string)
0x7ec: Stack[-1] = "Neutral"
0x7ed: Call 0x3c7

0x7ee: Pop(1)
0x7ef: Push((int) 8751)
0x7f0: @@ SetMessage(Stack[-1])
0x7f1: Pop(1)
0x7f2: @@ ClearReplies()
0x7f3: Pop(0)
0x7f4: Push((int) 8752)
0x7f5: Push((int) 9657)
0x7f6: Push((int) 9592)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: Push((int) 8757)
0x7fa: Push((int) 9598)
0x7fb: Push((int) 9597)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Return(); Pop(0)

0x7ff: Push((int) 9598)
0x800: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x801: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x802: PushEmpty(string)
0x803: Stack[-1] = "Neutral"
0x804: Call 0x3c7

0x805: Pop(1)
0x806: Push((int) 8758)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: Push((int) 8759)
0x80c: Push((int) 9593)
0x80d: Push((int) 9599)
0x80e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80f: Pop(3)
0x810: Push((int) 8760)
0x811: Push((int) 9593)
0x812: Push((int) 9601)
0x813: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x814: Pop(3)
0x815: Return(); Pop(0)

0x816: Push((int) 9657)
0x817: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x819: PushEmpty(string)
0x81a: Stack[-1] = "Neutral"
0x81b: Call 0x3c7

0x81c: Pop(1)
0x81d: Push((int) 8808)
0x81e: @@ SetMessage(Stack[-1])
0x81f: Pop(1)
0x820: @@ ClearReplies()
0x821: Pop(0)
0x822: Push((int) 8809)
0x823: Push((int) 9659)
0x824: Push((int) 9658)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Push((int) 10449)
0x828: Push((int) 11521)
0x829: Push((int) 11520)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: Push((int) 11521)
0x82e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Neutral"
0x832: Call 0x3c7

0x833: Pop(1)
0x834: Push((int) 10450)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: Push((int) 10451)
0x83a: Push((int) 11523)
0x83b: Push((int) 11522)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Return(); Pop(0)

0x83f: Push((int) 11523)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call 0x3c7

0x845: Pop(1)
0x846: Push((int) 10452)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 10453)
0x84c: Push((int) 9659)
0x84d: Push((int) 11524)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Return(); Pop(0)

0x851: Push((int) 9659)
0x852: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x854: PushEmpty(string)
0x855: Stack[-1] = "Neutral"
0x856: Call 0x3c7

0x857: Pop(1)
0x858: Push((int) 8810)
0x859: @@ SetMessage(Stack[-1])
0x85a: Pop(1)
0x85b: @@ ClearReplies()
0x85c: Pop(0)
0x85d: Push((int) 8811)
0x85e: Push((int) 9661)
0x85f: Push((int) 9660)
0x860: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(3)
0x862: Push((int) 10454)
0x863: Push((int) 11527)
0x864: Push((int) 11526)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Return(); Pop(0)

0x868: Push((int) 11527)
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Neutral"
0x86d: Call 0x3c7

0x86e: Pop(1)
0x86f: Push((int) 10455)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 10456)
0x875: Push((int) 9593)
0x876: Push((int) 11528)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Return(); Pop(0)

0x87a: Push((int) 9661)
0x87b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x87d: PushEmpty(string)
0x87e: Stack[-1] = "Neutral"
0x87f: Call 0x3c7

0x880: Pop(1)
0x881: Push((int) 8812)
0x882: @@ SetMessage(Stack[-1])
0x883: Pop(1)
0x884: @@ ClearReplies()
0x885: Pop(0)
0x886: Push((int) 8813)
0x887: Push((int) 9593)
0x888: Push((int) 9662)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: Return(); Pop(0)

0x88c: Push((int) 9593)
0x88d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Neutral"
0x891: Call 0x3c7

0x892: Pop(1)
0x893: Push((int) 8753)
0x894: @@ SetMessage(Stack[-1])
0x895: Pop(1)
0x896: @@ ClearReplies()
0x897: Pop(0)
0x898: Push((int) 8790)
0x899: Push((int) 9638)
0x89a: Push((int) 9637)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Push((int) 8754)
0x89e: Push((int) -1)
0x89f: Push((int) 9594)
0x8a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a1: Pop(3)
0x8a2: Return(); Pop(0)

0x8a3: Push((int) 9638)
0x8a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8a6: PushEmpty(string)
0x8a7: Stack[-1] = "Neutral"
0x8a8: Call 0x3c7

0x8a9: Pop(1)
0x8aa: Push((int) 8791)
0x8ab: @@ SetMessage(Stack[-1])
0x8ac: Pop(1)
0x8ad: @@ ClearReplies()
0x8ae: Pop(0)
0x8af: Push((int) 8798)
0x8b0: Push((int) 9646)
0x8b1: Push((int) 9645)
0x8b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b3: Pop(3)
0x8b4: Push((int) 8792)
0x8b5: Push((int) -1)
0x8b6: Push((int) 9639)
0x8b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b8: Pop(3)
0x8b9: Return(); Pop(0)

0x8ba: Push((int) 9646)
0x8bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8bd: PushEmpty(string)
0x8be: Stack[-1] = "Neutral"
0x8bf: Call 0x3c7

0x8c0: Pop(1)
0x8c1: Push((int) 8799)
0x8c2: @@ SetMessage(Stack[-1])
0x8c3: Pop(1)
0x8c4: @@ ClearReplies()
0x8c5: Pop(0)
0x8c6: Push((int) 8800)
0x8c7: Push((int) -1)
0x8c8: Push((int) 9647)
0x8c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ca: Pop(3)
0x8cb: Push((int) 8801)
0x8cc: Push((int) -1)
0x8cd: Push((int) 9649)
0x8ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cf: Pop(3)
0x8d0: Return(); Pop(0)

0x8d1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8d2: PushEmpty(bool)
0x8d3: Call 0xe95

0x8d4: Pop(0)
0x8d5: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d6: @ lshStopAnimation()
0x8d7: Pop(0)
0x8d8: GOTO 0x8db

0x8d9: @ StopAnimation()
0x8da: Pop(0)
0x8db: Return(); Pop(0)

0x8dc: GOTO 0x3d8

0x8dd: Return(); Pop(0)

0x8de: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8df: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8e0: PushEmpty(bool, object)
0x8e1: Stack[-1] = Stack[-11]
0x8e2: Call 0xde3

0x8e3: Pop(1)
0x8e4: Pop(1); Push((bool) Stack[-1] == 0)
0x8e5: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e6: Stack[-10] = (int) -2
0x8e7: Return(); Pop(8)

0x8e8: @ CreateDialog(Stack[-4])
0x8e9: Pop(0)
0x8ea: PushEmpty(int)
0x8eb: Call 0xe91

0x8ec: Pop(0)
0x8ed: @@ SetNPCName(Stack[-1])
0x8ee: Pop(1)
0x8ef: PushEmpty(string)
0x8f0: Call 0xe93

0x8f1: Pop(0)
0x8f2: @@ SetPhoto(Stack[-1])
0x8f3: Pop(1)
0x8f4: PushEmpty(int)
0x8f5: Call 0x1166

0x8f6: Pop(0)
0x8f7: @@ SetPlayerName(Stack[-1])
0x8f8: Pop(1)
0x8f9: Stack[-2] = (int) -1
0x8fa: @ IsOverrideActive(Stack[-3])
0x8fb: Pop(0)
0x8fc: Push(Stack[-3])
0x8fd: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8fe: Stack[-10] = (int) -2
0x8ff: Return(); Pop(8)

0x900: @ DoDialog(Stack[-4])
0x901: Pop(0)
0x902: PushEmpty(object, object)
0x903: Stack[-2] = Stack[-11]
0x904: Stack[-1] = Stack[-6]
0x905: Push(-2, 4); TaskCall(7)
0x906: Call 0x91d

0x907: Pop(-2, 4); TaskReturn
0x908: Pop(2)
0x909: @@ IsDialogEnd(Stack[-1])
0x90a: Pop(0)
0x90b: Pop(0); Push((bool) Stack[-1] == 0)
0x90c: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90d: @ sync()
0x90e: Pop(0)
0x90f: @@ IsDialogEnd(Stack[-1])
0x910: Pop(0)
0x911: GOTO 0x90b

0x912: PushEmpty(object)
0x913: Stack[-1] = Stack[-10]
0x914: Call 0xe1b

0x915: Pop(1)
0x916: @ StopDialog(Stack[-4])
0x917: Pop(0)
0x918: @@ GetReturnValue(Stack[-2])
0x919: Pop(0)
0x91a: Stack[-10] = Stack[-2]
0x91b: Return(); Pop(8)

0x91c: Stack[-4] = 0
0x91d: PushEmpty()
0x91e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x91f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x920: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x921: Push((int) 1)
0x922: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x923: PushEmpty(bool, object)
0x924: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x925: Call 0x10bb

0x926: Pop(1)
0x927: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x928: PushEmpty(object, object)
0x929: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92b: Call 0x1058

0x92c: Pop(2)
0x92d: PushEmpty(string)
0x92e: Stack[-1] = "Neutral"
0x92f: Call 0x9c3

0x930: Pop(1)
0x931: Push((int) 11527)
0x932: @@ SetMessage(Stack[-1])
0x933: Pop(1)
0x934: @@ ClearReplies()
0x935: Pop(0)
0x936: Push((int) 11528)
0x937: Push((int) 12722)
0x938: Push((int) 12721)
0x939: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93a: Pop(3)
0x93b: PushEmpty(bool, object)
0x93c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93d: Call 0x105e

0x93e: Pop(1)
0x93f: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x940: Push((int) 11537)
0x941: Push((int) 12731)
0x942: Push((int) 12730)
0x943: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x944: Pop(3)
0x945: Push((int) 11539)
0x946: Push((int) 11552)
0x947: Push((int) 12732)
0x948: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x949: Pop(3)
0x94a: GOTO 0x9a5

0x94b: PushEmpty(bool, object)
0x94c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94d: Call 0x105e

0x94e: Pop(1)
0x94f: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x950: PushEmpty(string)
0x951: Stack[-1] = "Neutral"
0x952: Call 0x9c3

0x953: Pop(1)
0x954: Push((int) 10500)
0x955: @@ SetMessage(Stack[-1])
0x956: Pop(1)
0x957: @@ ClearReplies()
0x958: Pop(0)
0x959: Push((int) 10501)
0x95a: Push((int) 11584)
0x95b: Push((int) 11583)
0x95c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95d: Pop(3)
0x95e: Push((int) 10509)
0x95f: Push((int) -1)
0x960: Push((int) 11591)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: GOTO 0x9a5

0x964: PushEmpty(bool)
0x965: Stack[-1] = (bool) 0
0x966: PushEmpty(bool)
0x967: Stack[-1] = (bool) 0
0x968: PushEmpty(bool, object)
0x969: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96a: Call 0x10d3

0x96b: Pop(1)
0x96c: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96f: Call 0x10c7

0x970: Pop(1)
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: Stack[-1] = (bool) 1
0x973: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x974: PushEmpty(bool, object)
0x975: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x976: Call 0x10df

0x977: Pop(1)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: Stack[-1] = (bool) 1
0x97a: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x97b: PushEmpty(string)
0x97c: Stack[-1] = "Neutral"
0x97d: Call 0x9c3

0x97e: Pop(1)
0x97f: Push((int) 10510)
0x980: @@ SetMessage(Stack[-1])
0x981: Pop(1)
0x982: @@ ClearReplies()
0x983: Pop(0)
0x984: Push((int) 10511)
0x985: Push((int) 11594)
0x986: Push((int) 11593)
0x987: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x988: Pop(3)
0x989: Push((int) 10521)
0x98a: Push((int) 11594)
0x98b: Push((int) 11604)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: GOTO 0x9a5

0x98f: PushEmpty(bool, object)
0x990: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x991: Call 0x105e

0x992: Pop(1)
0x993: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Neutral"
0x996: Call 0x9c3

0x997: Pop(1)
0x998: Push((int) 11547)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 11548)
0x99e: Push((int) 12743)
0x99f: Push((int) 12742)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: GOTO 0x9a5

0x9a3: Return(); Pop(0)

0x9a4: GOTO 0x921

0x9a5: PushEmpty(bool)
0x9a6: Call 0xe95

0x9a7: Pop(0)
0x9a8: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9a9: @ lshWaitForAnimEnd()
0x9aa: Pop(0)
0x9ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9ac: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ad: GOTO 0x9b3

0x9ae: PushEmpty(string)
0x9af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b0: Call 0xe1f

0x9b1: Pop(1)
0x9b2: GOTO 0x9a9

0x9b3: GOTO 0x9c2

0x9b4: Push("all")
0x9b5: Push("idle")
0x9b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b7: Pop(2)
0x9b8: @ WaitForAnimEnd()
0x9b9: Pop(0)
0x9ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9bb: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bc: GOTO 0x9c2

0x9bd: Push("all")
0x9be: Push("idle")
0x9bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c0: Pop(2)
0x9c1: GOTO 0x9b8

0x9c2: Return(); Pop(0)

0x9c3: PushEmpty()
0x9c4: PushEmpty(bool)
0x9c5: Call 0xe95

0x9c6: Pop(0)
0x9c7: Pop(1); Push((bool) Stack[-1] == 0)
0x9c8: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c9: Return(); Pop(0)

0x9ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9cc: Return(); Pop(0)

0x9cd: PushEmpty(string)
0x9ce: Stack[-1] = Stack[-2]
0x9cf: Call 0xe1f

0x9d0: Pop(1)
0x9d1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9d2: Return(); Pop(0)

0x9d3: PushEmpty()
0x9d4: Push((int) 1)
0x9d5: IF (Stack[-1] == 0) GOTO 0xcc8; Pop(1)

0x9d6: PushEmpty()
0x9d7: Call 0xe31

0x9d8: Pop(0)
0x9d9: Push((int) 11563)
0x9da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9dc: PushEmpty(object, object)
0x9dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9df: Call 0xfb8

0x9e0: Pop(2)
0x9e1: PushEmpty(object, object)
0x9e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e4: Call 0xfbe

0x9e5: Pop(2)
0x9e6: PushEmpty(object, object)
0x9e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e9: Call 0xf31

0x9ea: Pop(2)
0x9eb: Push((int) 11566)
0x9ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9ee: PushEmpty(object, object)
0x9ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f1: Call 0xfb8

0x9f2: Pop(2)
0x9f3: PushEmpty(object, object)
0x9f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f6: Call 0xfbe

0x9f7: Pop(2)
0x9f8: PushEmpty(object, object)
0x9f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9fb: Call 0xf31

0x9fc: Pop(2)
0x9fd: Push((int) 11569)
0x9fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa00: PushEmpty(object, object)
0xa01: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa02: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa03: Call 0xfb8

0xa04: Pop(2)
0xa05: PushEmpty(object, object)
0xa06: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa07: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa08: Call 0xfbe

0xa09: Pop(2)
0xa0a: PushEmpty(object, object)
0xa0b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa0c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0d: Call 0xf31

0xa0e: Pop(2)
0xa0f: Push((int) 11570)
0xa10: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa12: PushEmpty(object, object)
0xa13: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa14: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa15: Call 0xfb8

0xa16: Pop(2)
0xa17: PushEmpty(object, object)
0xa18: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa19: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1a: Call 0xfbe

0xa1b: Pop(2)
0xa1c: PushEmpty(object, object)
0xa1d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1f: Call 0xf31

0xa20: Pop(2)
0xa21: Push((int) 11571)
0xa22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa24: PushEmpty(object, object)
0xa25: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa26: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa27: Call 0xfb8

0xa28: Pop(2)
0xa29: PushEmpty(object, object)
0xa2a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa2b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa2c: Call 0xfbe

0xa2d: Pop(2)
0xa2e: PushEmpty(object, object)
0xa2f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa30: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa31: Call 0xf31

0xa32: Pop(2)
0xa33: Push((int) 11599)
0xa34: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa36: PushEmpty(object, object)
0xa37: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa39: Call 0xfe1

0xa3a: Pop(2)
0xa3b: PushEmpty(object, object)
0xa3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3e: Call 0xfe7

0xa3f: Pop(2)
0xa40: Push((int) 11600)
0xa41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa42: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa43: PushEmpty(object, object)
0xa44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa46: Call 0xfe1

0xa47: Pop(2)
0xa48: PushEmpty(object, object)
0xa49: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4b: Call 0xfe7

0xa4c: Pop(2)
0xa4d: Push((int) 11601)
0xa4e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa50: PushEmpty(object, object)
0xa51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa53: Call 0xfe1

0xa54: Pop(2)
0xa55: PushEmpty(object, object)
0xa56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa58: Call 0xfe7

0xa59: Pop(2)
0xa5a: Push((int) 12720)
0xa5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xa5d: PushEmpty(bool, object)
0xa5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5f: Call 0x10bb

0xa60: Pop(1)
0xa61: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa62: PushEmpty(object, object)
0xa63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa65: Call 0x1058

0xa66: Pop(2)
0xa67: PushEmpty(string)
0xa68: Stack[-1] = "Neutral"
0xa69: Call 0x9c3

0xa6a: Pop(1)
0xa6b: Push((int) 11527)
0xa6c: @@ SetMessage(Stack[-1])
0xa6d: Pop(1)
0xa6e: @@ ClearReplies()
0xa6f: Pop(0)
0xa70: Push((int) 11528)
0xa71: Push((int) 12722)
0xa72: Push((int) 12721)
0xa73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa74: Pop(3)
0xa75: PushEmpty(bool, object)
0xa76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa77: Call 0x105e

0xa78: Pop(1)
0xa79: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7a: Push((int) 11537)
0xa7b: Push((int) 12731)
0xa7c: Push((int) 12730)
0xa7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7e: Pop(3)
0xa7f: Push((int) 11539)
0xa80: Push((int) 11552)
0xa81: Push((int) 12732)
0xa82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: Return(); Pop(0)

0xa85: PushEmpty(bool, object)
0xa86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa87: Call 0x105e

0xa88: Pop(1)
0xa89: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa8a: PushEmpty(string)
0xa8b: Stack[-1] = "Neutral"
0xa8c: Call 0x9c3

0xa8d: Pop(1)
0xa8e: Push((int) 10500)
0xa8f: @@ SetMessage(Stack[-1])
0xa90: Pop(1)
0xa91: @@ ClearReplies()
0xa92: Pop(0)
0xa93: Push((int) 10501)
0xa94: Push((int) 11584)
0xa95: Push((int) 11583)
0xa96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa97: Pop(3)
0xa98: Push((int) 10509)
0xa99: Push((int) -1)
0xa9a: Push((int) 11591)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty(bool)
0xa9f: Stack[-1] = (bool) 0
0xaa0: PushEmpty(bool)
0xaa1: Stack[-1] = (bool) 0
0xaa2: PushEmpty(bool, object)
0xaa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa4: Call 0x10d3

0xaa5: Pop(1)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaa7: PushEmpty(bool, object)
0xaa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa9: Call 0x10c7

0xaaa: Pop(1)
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Stack[-1] = (bool) 1
0xaad: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xaae: PushEmpty(bool, object)
0xaaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab0: Call 0x10df

0xab1: Pop(1)
0xab2: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab3: Stack[-1] = (bool) 1
0xab4: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xab5: PushEmpty(string)
0xab6: Stack[-1] = "Neutral"
0xab7: Call 0x9c3

0xab8: Pop(1)
0xab9: Push((int) 10510)
0xaba: @@ SetMessage(Stack[-1])
0xabb: Pop(1)
0xabc: @@ ClearReplies()
0xabd: Pop(0)
0xabe: Push((int) 10511)
0xabf: Push((int) 11594)
0xac0: Push((int) 11593)
0xac1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac2: Pop(3)
0xac3: Push((int) 10521)
0xac4: Push((int) 11594)
0xac5: Push((int) 11604)
0xac6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac7: Pop(3)
0xac8: Return(); Pop(0)

0xac9: PushEmpty(bool, object)
0xaca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xacb: Call 0x105e

0xacc: Pop(1)
0xacd: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xace: PushEmpty(string)
0xacf: Stack[-1] = "Neutral"
0xad0: Call 0x9c3

0xad1: Pop(1)
0xad2: Push((int) 11547)
0xad3: @@ SetMessage(Stack[-1])
0xad4: Pop(1)
0xad5: @@ ClearReplies()
0xad6: Pop(0)
0xad7: Push((int) 11548)
0xad8: Push((int) 12743)
0xad9: Push((int) 12742)
0xada: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadb: Pop(3)
0xadc: Return(); Pop(0)

0xadd: Push((int) 12743)
0xade: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadf: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xae0: PushEmpty(string)
0xae1: Stack[-1] = "Neutral"
0xae2: Call 0x9c3

0xae3: Pop(1)
0xae4: Push((int) 11549)
0xae5: @@ SetMessage(Stack[-1])
0xae6: Pop(1)
0xae7: @@ ClearReplies()
0xae8: Pop(0)
0xae9: Push((int) 11550)
0xaea: Push((int) 12745)
0xaeb: Push((int) 12744)
0xaec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaed: Pop(3)
0xaee: Return(); Pop(0)

0xaef: Push((int) 12745)
0xaf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaf2: PushEmpty(string)
0xaf3: Stack[-1] = "Neutral"
0xaf4: Call 0x9c3

0xaf5: Pop(1)
0xaf6: Push((int) 11551)
0xaf7: @@ SetMessage(Stack[-1])
0xaf8: Pop(1)
0xaf9: @@ ClearReplies()
0xafa: Pop(0)
0xafb: Push((int) 11552)
0xafc: Push((int) 12747)
0xafd: Push((int) 12746)
0xafe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaff: Pop(3)
0xb00: Return(); Pop(0)

0xb01: Push((int) 12747)
0xb02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb03: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb04: PushEmpty(string)
0xb05: Stack[-1] = "Neutral"
0xb06: Call 0x9c3

0xb07: Pop(1)
0xb08: Push((int) 11553)
0xb09: @@ SetMessage(Stack[-1])
0xb0a: Pop(1)
0xb0b: @@ ClearReplies()
0xb0c: Pop(0)
0xb0d: Push((int) 11554)
0xb0e: Push((int) 12749)
0xb0f: Push((int) 12748)
0xb10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb11: Pop(3)
0xb12: Return(); Pop(0)

0xb13: Push((int) 12749)
0xb14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb15: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb16: PushEmpty(string)
0xb17: Stack[-1] = "Neutral"
0xb18: Call 0x9c3

0xb19: Pop(1)
0xb1a: Push((int) 11555)
0xb1b: @@ SetMessage(Stack[-1])
0xb1c: Pop(1)
0xb1d: @@ ClearReplies()
0xb1e: Pop(0)
0xb1f: Push((int) 11556)
0xb20: Push((int) -1)
0xb21: Push((int) 12750)
0xb22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb23: Pop(3)
0xb24: Return(); Pop(0)

0xb25: Push((int) 11594)
0xb26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb27: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb28: PushEmpty(string)
0xb29: Stack[-1] = "Neutral"
0xb2a: Call 0x9c3

0xb2b: Pop(1)
0xb2c: Push((int) 10512)
0xb2d: @@ SetMessage(Stack[-1])
0xb2e: Pop(1)
0xb2f: @@ ClearReplies()
0xb30: Pop(0)
0xb31: Push((int) 10513)
0xb32: Push((int) 11596)
0xb33: Push((int) 11595)
0xb34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb35: Pop(3)
0xb36: Push((int) 10520)
0xb37: Push((int) 11598)
0xb38: Push((int) 11602)
0xb39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3a: Pop(3)
0xb3b: Return(); Pop(0)

0xb3c: Push((int) 11596)
0xb3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3e: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb3f: PushEmpty(string)
0xb40: Stack[-1] = "Neutral"
0xb41: Call 0x9c3

0xb42: Pop(1)
0xb43: Push((int) 10514)
0xb44: @@ SetMessage(Stack[-1])
0xb45: Pop(1)
0xb46: @@ ClearReplies()
0xb47: Pop(0)
0xb48: Push((int) 10515)
0xb49: Push((int) 11598)
0xb4a: Push((int) 11597)
0xb4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4c: Pop(3)
0xb4d: Push((int) 10519)
0xb4e: Push((int) -1)
0xb4f: Push((int) 11601)
0xb50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb51: Pop(3)
0xb52: Return(); Pop(0)

0xb53: Push((int) 11598)
0xb54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb55: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb56: PushEmpty(string)
0xb57: Stack[-1] = "Neutral"
0xb58: Call 0x9c3

0xb59: Pop(1)
0xb5a: Push((int) 10516)
0xb5b: @@ SetMessage(Stack[-1])
0xb5c: Pop(1)
0xb5d: @@ ClearReplies()
0xb5e: Pop(0)
0xb5f: Push((int) 10517)
0xb60: Push((int) -1)
0xb61: Push((int) 11599)
0xb62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb63: Pop(3)
0xb64: Push((int) 10518)
0xb65: Push((int) -1)
0xb66: Push((int) 11600)
0xb67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb68: Pop(3)
0xb69: Return(); Pop(0)

0xb6a: Push((int) 11584)
0xb6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb6d: PushEmpty(string)
0xb6e: Stack[-1] = "Neutral"
0xb6f: Call 0x9c3

0xb70: Pop(1)
0xb71: Push((int) 10502)
0xb72: @@ SetMessage(Stack[-1])
0xb73: Pop(1)
0xb74: @@ ClearReplies()
0xb75: Pop(0)
0xb76: Push((int) 10503)
0xb77: Push((int) -1)
0xb78: Push((int) 11585)
0xb79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7a: Pop(3)
0xb7b: Push((int) 10504)
0xb7c: Push((int) -1)
0xb7d: Push((int) 11586)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: Push((int) 10505)
0xb81: Push((int) 11588)
0xb82: Push((int) 11587)
0xb83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb84: Pop(3)
0xb85: Return(); Pop(0)

0xb86: Push((int) 11588)
0xb87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb88: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb89: PushEmpty(string)
0xb8a: Stack[-1] = "Neutral"
0xb8b: Call 0x9c3

0xb8c: Pop(1)
0xb8d: Push((int) 10506)
0xb8e: @@ SetMessage(Stack[-1])
0xb8f: Pop(1)
0xb90: @@ ClearReplies()
0xb91: Pop(0)
0xb92: Push((int) 10507)
0xb93: Push((int) -1)
0xb94: Push((int) 11589)
0xb95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb96: Pop(3)
0xb97: Push((int) 10508)
0xb98: Push((int) -1)
0xb99: Push((int) 11590)
0xb9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9b: Pop(3)
0xb9c: Return(); Pop(0)

0xb9d: Push((int) 11552)
0xb9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9f: IF (Stack[-1] == 0) GOTO 0xbb4; Pop(1)

0xba0: PushEmpty(string)
0xba1: Stack[-1] = "Neutral"
0xba2: Call 0x9c3

0xba3: Pop(1)
0xba4: Push((int) 10474)
0xba5: @@ SetMessage(Stack[-1])
0xba6: Pop(1)
0xba7: @@ ClearReplies()
0xba8: Pop(0)
0xba9: Push((int) 10495)
0xbaa: Push((int) 11554)
0xbab: Push((int) 11574)
0xbac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbad: Pop(3)
0xbae: Push((int) 10496)
0xbaf: Push((int) 11577)
0xbb0: Push((int) 11576)
0xbb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb2: Pop(3)
0xbb3: Return(); Pop(0)

0xbb4: Push((int) 11577)
0xbb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb6: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbb7: PushEmpty(string)
0xbb8: Stack[-1] = "Neutral"
0xbb9: Call 0x9c3

0xbba: Pop(1)
0xbbb: Push((int) 10497)
0xbbc: @@ SetMessage(Stack[-1])
0xbbd: Pop(1)
0xbbe: @@ ClearReplies()
0xbbf: Pop(0)
0xbc0: Push((int) 10498)
0xbc1: Push((int) 11554)
0xbc2: Push((int) 11578)
0xbc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc4: Pop(3)
0xbc5: Push((int) 10499)
0xbc6: Push((int) 11554)
0xbc7: Push((int) 11580)
0xbc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc9: Pop(3)
0xbca: Return(); Pop(0)

0xbcb: Push((int) 12731)
0xbcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcd: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbce: PushEmpty(string)
0xbcf: Stack[-1] = "Neutral"
0xbd0: Call 0x9c3

0xbd1: Pop(1)
0xbd2: Push((int) 11538)
0xbd3: @@ SetMessage(Stack[-1])
0xbd4: Pop(1)
0xbd5: @@ ClearReplies()
0xbd6: Pop(0)
0xbd7: Push((int) 11540)
0xbd8: Push((int) 12734)
0xbd9: Push((int) 12733)
0xbda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdb: Pop(3)
0xbdc: Return(); Pop(0)

0xbdd: Push((int) 12734)
0xbde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdf: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbe0: PushEmpty(string)
0xbe1: Stack[-1] = "Neutral"
0xbe2: Call 0x9c3

0xbe3: Pop(1)
0xbe4: Push((int) 11541)
0xbe5: @@ SetMessage(Stack[-1])
0xbe6: Pop(1)
0xbe7: @@ ClearReplies()
0xbe8: Pop(0)
0xbe9: Push((int) 11542)
0xbea: Push((int) 12736)
0xbeb: Push((int) 12735)
0xbec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbed: Pop(3)
0xbee: Return(); Pop(0)

0xbef: Push((int) 12736)
0xbf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf1: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xbf2: PushEmpty(string)
0xbf3: Stack[-1] = "Neutral"
0xbf4: Call 0x9c3

0xbf5: Pop(1)
0xbf6: Push((int) 11543)
0xbf7: @@ SetMessage(Stack[-1])
0xbf8: Pop(1)
0xbf9: @@ ClearReplies()
0xbfa: Pop(0)
0xbfb: Push((int) 11544)
0xbfc: Push((int) 12738)
0xbfd: Push((int) 12737)
0xbfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbff: Pop(3)
0xc00: Return(); Pop(0)

0xc01: Push((int) 12738)
0xc02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc03: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc04: PushEmpty(string)
0xc05: Stack[-1] = "Neutral"
0xc06: Call 0x9c3

0xc07: Pop(1)
0xc08: Push((int) 11545)
0xc09: @@ SetMessage(Stack[-1])
0xc0a: Pop(1)
0xc0b: @@ ClearReplies()
0xc0c: Pop(0)
0xc0d: Push((int) 11546)
0xc0e: Push((int) 11560)
0xc0f: Push((int) 12739)
0xc10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc11: Pop(3)
0xc12: Return(); Pop(0)

0xc13: Push((int) 12722)
0xc14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc15: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc16: PushEmpty(string)
0xc17: Stack[-1] = "Neutral"
0xc18: Call 0x9c3

0xc19: Pop(1)
0xc1a: Push((int) 11529)
0xc1b: @@ SetMessage(Stack[-1])
0xc1c: Pop(1)
0xc1d: @@ ClearReplies()
0xc1e: Pop(0)
0xc1f: Push((int) 11530)
0xc20: Push((int) 11554)
0xc21: Push((int) 12723)
0xc22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc23: Pop(3)
0xc24: Return(); Pop(0)

0xc25: Push((int) 11554)
0xc26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc28: PushEmpty(string)
0xc29: Stack[-1] = "Neutral"
0xc2a: Call 0x9c3

0xc2b: Pop(1)
0xc2c: Push((int) 10476)
0xc2d: @@ SetMessage(Stack[-1])
0xc2e: Pop(1)
0xc2f: @@ ClearReplies()
0xc30: Pop(0)
0xc31: Push((int) 10477)
0xc32: Push((int) 11556)
0xc33: Push((int) 11555)
0xc34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc35: Pop(3)
0xc36: Push((int) 10494)
0xc37: Push((int) 11556)
0xc38: Push((int) 11572)
0xc39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3a: Pop(3)
0xc3b: Return(); Pop(0)

0xc3c: Push((int) 11556)
0xc3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3e: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc3f: PushEmpty(string)
0xc40: Stack[-1] = "Neutral"
0xc41: Call 0x9c3

0xc42: Pop(1)
0xc43: Push((int) 10478)
0xc44: @@ SetMessage(Stack[-1])
0xc45: Pop(1)
0xc46: @@ ClearReplies()
0xc47: Pop(0)
0xc48: Push((int) 10479)
0xc49: Push((int) 11558)
0xc4a: Push((int) 11557)
0xc4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4c: Pop(3)
0xc4d: Push((int) 10489)
0xc4e: Push((int) 11568)
0xc4f: Push((int) 11567)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Return(); Pop(0)

0xc53: Push((int) 11568)
0xc54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc56: PushEmpty(string)
0xc57: Stack[-1] = "Neutral"
0xc58: Call 0x9c3

0xc59: Pop(1)
0xc5a: Push((int) 10490)
0xc5b: @@ SetMessage(Stack[-1])
0xc5c: Pop(1)
0xc5d: @@ ClearReplies()
0xc5e: Pop(0)
0xc5f: Push((int) 10491)
0xc60: Push((int) -1)
0xc61: Push((int) 11569)
0xc62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc63: Pop(3)
0xc64: Push((int) 10492)
0xc65: Push((int) -1)
0xc66: Push((int) 11570)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: Push((int) 10493)
0xc6a: Push((int) -1)
0xc6b: Push((int) 11571)
0xc6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6d: Pop(3)
0xc6e: Return(); Pop(0)

0xc6f: Push((int) 11558)
0xc70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc72: PushEmpty(string)
0xc73: Stack[-1] = "Neutral"
0xc74: Call 0x9c3

0xc75: Pop(1)
0xc76: Push((int) 10480)
0xc77: @@ SetMessage(Stack[-1])
0xc78: Pop(1)
0xc79: @@ ClearReplies()
0xc7a: Pop(0)
0xc7b: Push((int) 10481)
0xc7c: Push((int) 11560)
0xc7d: Push((int) 11559)
0xc7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7f: Pop(3)
0xc80: Push((int) 10486)
0xc81: Push((int) 11565)
0xc82: Push((int) 11564)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Return(); Pop(0)

0xc86: Push((int) 11565)
0xc87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc89: PushEmpty(string)
0xc8a: Stack[-1] = "Neutral"
0xc8b: Call 0x9c3

0xc8c: Pop(1)
0xc8d: Push((int) 10487)
0xc8e: @@ SetMessage(Stack[-1])
0xc8f: Pop(1)
0xc90: @@ ClearReplies()
0xc91: Pop(0)
0xc92: Push((int) 10488)
0xc93: Push((int) -1)
0xc94: Push((int) 11566)
0xc95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc96: Pop(3)
0xc97: Return(); Pop(0)

0xc98: Push((int) 11560)
0xc99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9a: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xc9b: PushEmpty(string)
0xc9c: Stack[-1] = "Neutral"
0xc9d: Call 0x9c3

0xc9e: Pop(1)
0xc9f: Push((int) 10482)
0xca0: @@ SetMessage(Stack[-1])
0xca1: Pop(1)
0xca2: @@ ClearReplies()
0xca3: Pop(0)
0xca4: Push((int) 10483)
0xca5: Push((int) 11562)
0xca6: Push((int) 11561)
0xca7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca8: Pop(3)
0xca9: Return(); Pop(0)

0xcaa: Push((int) 11562)
0xcab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcac: IF (Stack[-1] == 0) GOTO 0xcbc; Pop(1)

0xcad: PushEmpty(string)
0xcae: Stack[-1] = "Neutral"
0xcaf: Call 0x9c3

0xcb0: Pop(1)
0xcb1: Push((int) 10484)
0xcb2: @@ SetMessage(Stack[-1])
0xcb3: Pop(1)
0xcb4: @@ ClearReplies()
0xcb5: Pop(0)
0xcb6: Push((int) 10485)
0xcb7: Push((int) -1)
0xcb8: Push((int) 11563)
0xcb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcba: Pop(3)
0xcbb: Return(); Pop(0)

0xcbc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcbd: PushEmpty(bool)
0xcbe: Call 0xe95

0xcbf: Pop(0)
0xcc0: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc1: @ lshStopAnimation()
0xcc2: Pop(0)
0xcc3: GOTO 0xcc6

0xcc4: @ StopAnimation()
0xcc5: Pop(0)
0xcc6: Return(); Pop(0)

0xcc7: GOTO 0x9d4

0xcc8: Return(); Pop(0)

0xcc9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcca: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xccb: PushEmpty(bool, object)
0xccc: Stack[-1] = Stack[-11]
0xccd: Call 0xde3

0xcce: Pop(1)
0xccf: Pop(1); Push((bool) Stack[-1] == 0)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd1: Stack[-10] = (int) -2
0xcd2: Return(); Pop(8)

0xcd3: @ CreateDialog(Stack[-4])
0xcd4: Pop(0)
0xcd5: PushEmpty(int)
0xcd6: Call 0xe91

0xcd7: Pop(0)
0xcd8: @@ SetNPCName(Stack[-1])
0xcd9: Pop(1)
0xcda: PushEmpty(string)
0xcdb: Call 0xe93

0xcdc: Pop(0)
0xcdd: @@ SetPhoto(Stack[-1])
0xcde: Pop(1)
0xcdf: PushEmpty(int)
0xce0: Call 0x1166

0xce1: Pop(0)
0xce2: @@ SetPlayerName(Stack[-1])
0xce3: Pop(1)
0xce4: Stack[-2] = (int) -1
0xce5: @ IsOverrideActive(Stack[-3])
0xce6: Pop(0)
0xce7: Push(Stack[-3])
0xce8: IF (Stack[-1] == 0) GOTO 0xceb; Pop(1)

0xce9: Stack[-10] = (int) -2
0xcea: Return(); Pop(8)

0xceb: @ DoDialog(Stack[-4])
0xcec: Pop(0)
0xced: PushEmpty(object, object)
0xcee: Stack[-2] = Stack[-11]
0xcef: Stack[-1] = Stack[-6]
0xcf0: Push(-2, 4); TaskCall(9)
0xcf1: Call 0xd08

0xcf2: Pop(-2, 4); TaskReturn
0xcf3: Pop(2)
0xcf4: @@ IsDialogEnd(Stack[-1])
0xcf5: Pop(0)
0xcf6: Pop(0); Push((bool) Stack[-1] == 0)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcf8: @ sync()
0xcf9: Pop(0)
0xcfa: @@ IsDialogEnd(Stack[-1])
0xcfb: Pop(0)
0xcfc: GOTO 0xcf6

0xcfd: PushEmpty(object)
0xcfe: Stack[-1] = Stack[-10]
0xcff: Call 0xe1b

0xd00: Pop(1)
0xd01: @ StopDialog(Stack[-4])
0xd02: Pop(0)
0xd03: @@ GetReturnValue(Stack[-2])
0xd04: Pop(0)
0xd05: Stack[-10] = Stack[-2]
0xd06: Return(); Pop(8)

0xd07: Stack[-4] = 0
0xd08: PushEmpty()
0xd09: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd0a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd0b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd0c: Push((int) 1)
0xd0d: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd0e: PushEmpty(bool, object)
0xd0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd10: Call 0x10ea

0xd11: Pop(1)
0xd12: Pop(1); Push((bool) Stack[-1] == 0)
0xd13: IF (Stack[-1] == 0) GOTO 0xd23; Pop(1)

0xd14: PushEmpty(string)
0xd15: Stack[-1] = "Neutral"
0xd16: Call 0xd52

0xd17: Pop(1)
0xd18: Push((int) 12020)
0xd19: @@ SetMessage(Stack[-1])
0xd1a: Pop(1)
0xd1b: @@ ClearReplies()
0xd1c: Pop(0)
0xd1d: Push((int) 12021)
0xd1e: Push((int) 13240)
0xd1f: Push((int) 13239)
0xd20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd21: Pop(3)
0xd22: GOTO 0xd34

0xd23: PushEmpty(string)
0xd24: Stack[-1] = "Neutral"
0xd25: Call 0xd52

0xd26: Pop(1)
0xd27: Push((int) 13723)
0xd28: @@ SetMessage(Stack[-1])
0xd29: Pop(1)
0xd2a: @@ ClearReplies()
0xd2b: Pop(0)
0xd2c: Push((int) 13724)
0xd2d: Push((int) -1)
0xd2e: Push((int) 14990)
0xd2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd30: Pop(3)
0xd31: GOTO 0xd34

0xd32: Return(); Pop(0)

0xd33: GOTO 0xd0c

0xd34: PushEmpty(bool)
0xd35: Call 0xe95

0xd36: Pop(0)
0xd37: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd38: @ lshWaitForAnimEnd()
0xd39: Pop(0)
0xd3a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd3c: GOTO 0xd42

0xd3d: PushEmpty(string)
0xd3e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd3f: Call 0xe1f

0xd40: Pop(1)
0xd41: GOTO 0xd38

0xd42: GOTO 0xd51

0xd43: Push("all")
0xd44: Push("idle")
0xd45: @ PlayAnimation(Stack[-2], Stack[-1])
0xd46: Pop(2)
0xd47: @ WaitForAnimEnd()
0xd48: Pop(0)
0xd49: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd4b: GOTO 0xd51

0xd4c: Push("all")
0xd4d: Push("idle")
0xd4e: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4f: Pop(2)
0xd50: GOTO 0xd47

0xd51: Return(); Pop(0)

0xd52: PushEmpty()
0xd53: PushEmpty(bool)
0xd54: Call 0xe95

0xd55: Pop(0)
0xd56: Pop(1); Push((bool) Stack[-1] == 0)
0xd57: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd58: Return(); Pop(0)

0xd59: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd5c; Pop(1)

0xd5b: Return(); Pop(0)

0xd5c: PushEmpty(string)
0xd5d: Stack[-1] = Stack[-2]
0xd5e: Call 0xe1f

0xd5f: Pop(1)
0xd60: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd61: Return(); Pop(0)

0xd62: PushEmpty()
0xd63: Push((int) 1)
0xd64: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xd65: PushEmpty()
0xd66: Call 0xe31

0xd67: Pop(0)
0xd68: Push((int) 13243)
0xd69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6a: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd6b: PushEmpty(object, object)
0xd6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6e: Call 0x1041

0xd6f: Pop(2)
0xd70: PushEmpty(object, object)
0xd71: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd72: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd73: Call 0x1047

0xd74: Pop(2)
0xd75: PushEmpty(object, object)
0xd76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd78: Call 0xee0

0xd79: Pop(2)
0xd7a: Push((int) 13238)
0xd7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7c: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd7d: PushEmpty(bool, object)
0xd7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7f: Call 0x10ea

0xd80: Pop(1)
0xd81: Pop(1); Push((bool) Stack[-1] == 0)
0xd82: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd83: PushEmpty(string)
0xd84: Stack[-1] = "Neutral"
0xd85: Call 0xd52

0xd86: Pop(1)
0xd87: Push((int) 12020)
0xd88: @@ SetMessage(Stack[-1])
0xd89: Pop(1)
0xd8a: @@ ClearReplies()
0xd8b: Pop(0)
0xd8c: Push((int) 12021)
0xd8d: Push((int) 13240)
0xd8e: Push((int) 13239)
0xd8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd90: Pop(3)
0xd91: Return(); Pop(0)

0xd92: PushEmpty(string)
0xd93: Stack[-1] = "Neutral"
0xd94: Call 0xd52

0xd95: Pop(1)
0xd96: Push((int) 13723)
0xd97: @@ SetMessage(Stack[-1])
0xd98: Pop(1)
0xd99: @@ ClearReplies()
0xd9a: Pop(0)
0xd9b: Push((int) 13724)
0xd9c: Push((int) -1)
0xd9d: Push((int) 14990)
0xd9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9f: Pop(3)
0xda0: Return(); Pop(0)

0xda1: Push((int) 13240)
0xda2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xda4: PushEmpty(string)
0xda5: Stack[-1] = "Neutral"
0xda6: Call 0xd52

0xda7: Pop(1)
0xda8: Push((int) 12022)
0xda9: @@ SetMessage(Stack[-1])
0xdaa: Pop(1)
0xdab: @@ ClearReplies()
0xdac: Pop(0)
0xdad: Push((int) 12023)
0xdae: Push((int) 13242)
0xdaf: Push((int) 13241)
0xdb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb1: Pop(3)
0xdb2: Return(); Pop(0)

0xdb3: Push((int) 13242)
0xdb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdb6: PushEmpty(string)
0xdb7: Stack[-1] = "Neutral"
0xdb8: Call 0xd52

0xdb9: Pop(1)
0xdba: Push((int) 12024)
0xdbb: @@ SetMessage(Stack[-1])
0xdbc: Pop(1)
0xdbd: @@ ClearReplies()
0xdbe: Pop(0)
0xdbf: Push((int) 12025)
0xdc0: Push((int) -1)
0xdc1: Push((int) 13243)
0xdc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc3: Pop(3)
0xdc4: Return(); Pop(0)

0xdc5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdc6: PushEmpty(bool)
0xdc7: Call 0xe95

0xdc8: Pop(0)
0xdc9: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdca: @ lshStopAnimation()
0xdcb: Pop(0)
0xdcc: GOTO 0xdcf

0xdcd: @ StopAnimation()
0xdce: Pop(0)
0xdcf: Return(); Pop(0)

0xdd0: GOTO 0xd63

0xdd1: Return(); Pop(0)

0xdd2: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xdd3: @@ GetPosition(Stack[-4])
0xdd4: Pop(0)
0xdd5: @ GetPosition(Stack[-3])
0xdd6: Pop(0)
0xdd7: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xdd8: Push(CvectorIndex(Stack[-2], 0))
0xdd9: Push(CvectorIndex(Stack[-3], 2))
0xdda: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xddb: Pop(2)
0xddc: Stack[-10] = Stack[-1]
0xddd: Return(); Pop(8)

0xdde: PushEmpty(bool, bool)
0xddf: @ IsLoaded(Stack[-1])
0xde0: Pop(0)
0xde1: Stack[-3] = Stack[-1]
0xde2: Return(); Pop(2)

0xde3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xde4: @@ GetPosition(Stack[-7])
0xde5: Pop(0)
0xde6: @@ GetEyesHeight(Stack[-8])
0xde7: Pop(0)
0xde8: Push(CvectorIndex(Stack[-7], 1))
0xde9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xdea: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xdeb: @ GetPosition(Stack[-6])
0xdec: Pop(0)
0xded: @ GetEyesHeight(Stack[-8])
0xdee: Pop(0)
0xdef: Push(CvectorIndex(Stack[-6], 1))
0xdf0: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xdf1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xdf2: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xdf3: Push(CvectorIndex(Stack[-5], 1))
0xdf4: Stack[-1] = (int) 0
0xdf5: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xdf6: Pop(0); Push(Stack[-5] | Stack[-5]);
0xdf7: Pop(1); Push(Sqrt(Stack[-1]))
0xdf8: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xdf9: Stack[-4] = -Stack[-5]; Pop(0);
0xdfa: Push((int) 70)
0xdfb: Pop(1); Push(Stack[-6] * Stack[-1]);
0xdfc: PushEmpty(cvector, cvector)
0xdfd: Push(CVector(0.0, 1.0, 0.0))
0xdfe: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xdff: Call 0xe38

0xe00: Pop(1)
0xe01: Push((int) 25)
0xe02: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe03: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe04: Push(CVector(0.0, 10.0, 0.0))
0xe05: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xe06: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xe07: @ IsOverrideActive(Stack[-1])
0xe08: Pop(0)
0xe09: Push(Stack[-1])
0xe0a: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0b: Stack[-18] = (bool) 0
0xe0c: Return(); Pop(16)

0xe0d: @ StopWorld()
0xe0e: Pop(0)
0xe0f: @ CameraTransit(Stack[-2], Stack[-4])
0xe10: Pop(0)
0xe11: Push(CvectorIndex(Stack[-3], 0))
0xe12: Push(CvectorIndex(Stack[-4], 2))
0xe13: @ Rotate(Stack[-2], Stack[-1])
0xe14: Pop(2)
0xe15: @ CameraWaitForPlayFinish()
0xe16: Pop(0)
0xe17: @ ResumeWorld()
0xe18: Pop(0)
0xe19: Stack[-18] = (bool) 1
0xe1a: Return(); Pop(16)

0xe1b: PushEmpty()
0xe1c: @ CameraSwitchToNormal()
0xe1d: Pop(0)
0xe1e: Return(); Pop(0)

0xe1f: PushEmpty(float, float, float, float)
0xe20: Push("playing ")
0xe21: Pop(1); Push(Stack[-1] + Stack[-6]);
0xe22: @ Trace(Stack[-1])
0xe23: Pop(1)
0xe24: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xe25: Pop(0)
0xe26: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xe27: Pop(0)
0xe28: Push("start: ")
0xe29: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe2a: @ Trace(Stack[-1])
0xe2b: Pop(1)
0xe2c: Push("end: ")
0xe2d: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe2e: @ Trace(Stack[-1])
0xe2f: Pop(1)
0xe30: Return(); Pop(4)

0xe31: PushEmpty(bool)
0xe32: Call 0xe95

0xe33: Pop(0)
0xe34: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe35: @ lshStopSpeech()
0xe36: Pop(0)
0xe37: Return(); Pop(0)

0xe38: PushEmpty(float, float)
0xe39: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe3a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe3b: Push((float)0.0)
0xe3c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe3d: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xe3f: Return(); Pop(2)

0xe40: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe41: Return(); Pop(2)

0xe42: PushEmpty(int, int)
0xe43: @ GetVariable(Stack[-3], Stack[-1])
0xe44: Pop(0)
0xe45: Stack[-4] = Stack[-1]
0xe46: Return(); Pop(2)

0xe47: PushEmpty(int, int, bool, int, int, bool)
0xe48: @@ GetItemID(Stack[-3])
0xe49: Pop(0)
0xe4a: Push("Category")
0xe4b: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xe4c: Pop(1)
0xe4d: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xe4e: Pop(0)
0xe4f: Pop(0); Push((bool) Stack[-1] == 0)
0xe50: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe51: @@ DropItems(Stack[-8], Stack[-7])
0xe52: Pop(0)
0xe53: Return(); Pop(6)

0xe54: PushEmpty(object, object)
0xe55: @ CreateInvItem(Stack[-1])
0xe56: Pop(0)
0xe57: @@ SetItemName(Stack[-4])
0xe58: Pop(0)
0xe59: PushEmpty(object, object, int)
0xe5a: Stack[-3] = Stack[-8]
0xe5b: Stack[-2] = Stack[-4]
0xe5c: Stack[-1] = Stack[-6]
0xe5d: Call 0xe47

0xe5e: Pop(3)
0xe5f: Return(); Pop(2)

0xe60: Stack[-1] = 0
0xe61: PushEmpty(int, bool, int, bool)
0xe62: @ GetInvItemByName(Stack[-2], Stack[-5])
0xe63: Pop(0)
0xe64: @@ HasItem(Stack[-2], Stack[-1])
0xe65: Pop(0)
0xe66: Stack[-7] = Stack[-1]
0xe67: Return(); Pop(4)

0xe68: PushEmpty(object, object)
0xe69: @ FindActor(Stack[-1], Stack[-4])
0xe6a: Pop(0)
0xe6b: Pop(0); Push((bool) Stack[-1] == 0)
0xe6c: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe6d: Stack[-5] = (bool) 0
0xe6e: Return(); Pop(2)

0xe6f: @ Trigger(Stack[-1], Stack[-3])
0xe70: Pop(0)
0xe71: Stack[-5] = (bool) 1
0xe72: Return(); Pop(2)

0xe73: Stack[-1] = 0
0xe74: PushEmpty(float, float)
0xe75: @ GetGameTime(Stack[-1])
0xe76: Pop(0)
0xe77: Stack[-3] = Stack[-1]
0xe78: Return(); Pop(2)

0xe79: PushEmpty(float, float)
0xe7a: @ GetGameTime(Stack[-1])
0xe7b: Pop(0)
0xe7c: Push((int) 1)
0xe7d: PushEmpty(int)
0xe7e: Push((int) 24)
0xe7f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe80: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe81: Return(); Pop(2)

0xe82: PushEmpty()
0xe83: PushEmpty(int)
0xe84: Call 0xe79

0xe85: Pop(0)
0xe86: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe87: Return(); Pop(0)

0xe88: PushEmpty(bool, bool)
0xe89: PushEmpty(string)
0xe8a: Stack[-1] = "No"
0xe8b: Call 0xe1f

0xe8c: Pop(1)
0xe8d: @ lshWaitForAnimEnd(Stack[-1])
0xe8e: Pop(0)
0xe8f: Stack[-3] = Stack[-1]
0xe90: Return(); Pop(2)

0xe91: Stack[-1] = (int) 2876
0xe92: Return(); Pop(0)

0xe93: Stack[-1] = "ui/NPC_Rubin.png"
0xe94: Return(); Pop(0)

0xe95: Stack[-1] = (bool) 1
0xe96: Return(); Pop(0)

0xe97: PushEmpty(object, object, object, object)
0xe98: Push("d1q01")
0xe99: Push((int) 1000)
0xe9a: @ SetVariable(Stack[-2], Stack[-1])
0xe9b: Pop(2)
0xe9c: PushEmpty(object)
0xe9d: Call 0x1134

0xe9e: Stack[-3] = Stack[-1]
0xe9f: Pop(1)
0xea0: Push("d1q01EvaAboutMark")
0xea1: @@ FindMark(Stack[-2], Stack[-1])
0xea2: Pop(1)
0xea3: Push(Stack[-1])
0xea4: IF (Stack[-1] == 0) GOTO 0xea7; Pop(1)

0xea5: @@ Remove()
0xea6: Pop(0)
0xea7: Push("d1q01EvaGotoSimon")
0xea8: @@ FindMark(Stack[-2], Stack[-1])
0xea9: Pop(1)
0xeaa: Push(Stack[-1])
0xeab: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xeac: @@ Remove()
0xead: Pop(0)
0xeae: Push("d1q01GrifAboutRubin")
0xeaf: @@ FindMark(Stack[-2], Stack[-1])
0xeb0: Pop(1)
0xeb1: Push(Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb3: @@ Remove()
0xeb4: Pop(0)
0xeb5: Push("d1q01MarkAboutJulia")
0xeb6: @@ FindMark(Stack[-2], Stack[-1])
0xeb7: Pop(1)
0xeb8: Push(Stack[-1])
0xeb9: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeba: @@ Remove()
0xebb: Pop(0)
0xebc: Push("d1q01MarkAboutLara")
0xebd: @@ FindMark(Stack[-2], Stack[-1])
0xebe: Pop(1)
0xebf: Push(Stack[-1])
0xec0: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xec1: @@ Remove()
0xec2: Pop(0)
0xec3: Push("d1q01NotkinAboutRubin")
0xec4: @@ FindMark(Stack[-2], Stack[-1])
0xec5: Pop(1)
0xec6: Push(Stack[-1])
0xec7: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xec8: @@ Remove()
0xec9: Pop(0)
0xeca: PushEmpty()
0xecb: Call 0x1177

0xecc: Pop(0)
0xecd: PushEmpty(bool, int)
0xece: Stack[-1] = (int) 31
0xecf: Call 0x1123

0xed0: Pop(2)
0xed1: PushEmpty(bool, int)
0xed2: Stack[-1] = (int) 32
0xed3: Call 0x1123

0xed4: Pop(2)
0xed5: PushEmpty(bool, int)
0xed6: Stack[-1] = (int) 33
0xed7: Call 0x1123

0xed8: Pop(2)
0xed9: PushEmpty(bool, int)
0xeda: Stack[-1] = (int) 34
0xedb: Call 0x1123

0xedc: Pop(2)
0xedd: Return(); Pop(4)

0xede: Stack[-1] = 0
0xedf: Stack[-2] = 0
0xee0: PushEmpty()
0xee1: Push("playsound")
0xee2: Push("giveitem")
0xee3: @ TriggerWorld(Stack[-2], Stack[-1])
0xee4: Pop(2)
0xee5: Return(); Pop(0)

0xee6: PushEmpty(object, object)
0xee7: Push("d3q01")
0xee8: Push((int) 1)
0xee9: @ SetVariable(Stack[-2], Stack[-1])
0xeea: Pop(2)
0xeeb: PushEmpty(object)
0xeec: Call 0x1134

0xeed: Stack[-2] = Stack[-1]
0xeee: Pop(1)
0xeef: Push("d3q01RubinGotoAlexandr")
0xef0: Push("pt_map_alexandr")
0xef1: Push((int) 1)
0xef2: Push((int) 11151)
0xef3: PushEmpty(float)
0xef4: Call 0xe74

0xef5: Pop(0)
0xef6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xef7: Pop(5)
0xef8: Push("d3q01RubinGotoAlexandrSelf")
0xef9: Push("pt_map_rubin")
0xefa: Push((int) 1)
0xefb: Push((int) 15294)
0xefc: PushEmpty(float)
0xefd: Call 0xe74

0xefe: Pop(0)
0xeff: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf00: Pop(5)
0xf01: PushEmpty()
0xf02: Call 0x1187

0xf03: Pop(0)
0xf04: PushEmpty()
0xf05: Call 0x1197

0xf06: Pop(0)
0xf07: Return(); Pop(2)

0xf08: Stack[-1] = 0
0xf09: PushEmpty()
0xf0a: Push("ood3Rubin1")
0xf0b: Push((int) 1)
0xf0c: @ SetVariable(Stack[-2], Stack[-1])
0xf0d: Pop(2)
0xf0e: Return(); Pop(0)

0xf0f: PushEmpty()
0xf10: Push("ood3Rubin2")
0xf11: Push((int) 1)
0xf12: @ SetVariable(Stack[-2], Stack[-1])
0xf13: Pop(2)
0xf14: Return(); Pop(0)

0xf15: PushEmpty()
0xf16: Push("ood3Rubin3")
0xf17: Push((int) 1)
0xf18: @ SetVariable(Stack[-2], Stack[-1])
0xf19: Pop(2)
0xf1a: Return(); Pop(0)

0xf1b: PushEmpty()
0xf1c: Push("ood3Rubin4")
0xf1d: Push((int) 1)
0xf1e: @ SetVariable(Stack[-2], Stack[-1])
0xf1f: Pop(2)
0xf20: Return(); Pop(0)

0xf21: PushEmpty()
0xf22: PushEmpty(object, string, float)
0xf23: PushEmpty(object)
0xf24: Call 0x1134

0xf25: Stack[-4] = Stack[-1]
0xf26: Pop(1)
0xf27: Stack[-2] = "pt_map_alexandr"
0xf28: Stack[-1] = (int) 2
0xf29: Call 0x1145

0xf2a: Pop(3)
0xf2b: PushEmpty(object)
0xf2c: Call 0x1134

0xf2d: Pop(0)
0xf2e: @@ ShowMap(Stack[-1])
0xf2f: Pop(1)
0xf30: Return(); Pop(0)

0xf31: PushEmpty()
0xf32: PushEmpty(object, string, float)
0xf33: PushEmpty(object)
0xf34: Call 0x1134

0xf35: Stack[-4] = Stack[-1]
0xf36: Pop(1)
0xf37: Stack[-2] = "pt_map_bigvlad"
0xf38: Stack[-1] = (int) 2
0xf39: Call 0x1145

0xf3a: Pop(3)
0xf3b: PushEmpty(object)
0xf3c: Call 0x1134

0xf3d: Pop(0)
0xf3e: @@ ShowMap(Stack[-1])
0xf3f: Pop(1)
0xf40: Return(); Pop(0)

0xf41: PushEmpty(object, object, object, object)
0xf42: PushEmpty(object)
0xf43: Call 0x1134

0xf44: Stack[-3] = Stack[-1]
0xf45: Pop(1)
0xf46: Push("d3q01AlexandrGotoOspina")
0xf47: @@ FindMark(Stack[-2], Stack[-1])
0xf48: Pop(1)
0xf49: Push(Stack[-1])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0xf4b: @@ Remove()
0xf4c: Pop(0)
0xf4d: Push("d3q01AlexandrGotoOspinaSelf")
0xf4e: @@ FindMark(Stack[-2], Stack[-1])
0xf4f: Pop(1)
0xf50: Push(Stack[-1])
0xf51: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf52: @@ Remove()
0xf53: Pop(0)
0xf54: Push("d3q01BigVladAgreed")
0xf55: @@ FindMark(Stack[-2], Stack[-1])
0xf56: Pop(1)
0xf57: Push(Stack[-1])
0xf58: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf59: @@ Remove()
0xf5a: Pop(0)
0xf5b: Push("d3q01BigVladAgreedSelf")
0xf5c: @@ FindMark(Stack[-2], Stack[-1])
0xf5d: Pop(1)
0xf5e: Push(Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf60: @@ Remove()
0xf61: Pop(0)
0xf62: Push("d3q01BigVladGotoGeorg")
0xf63: @@ FindMark(Stack[-2], Stack[-1])
0xf64: Pop(1)
0xf65: Push(Stack[-1])
0xf66: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf67: @@ Remove()
0xf68: Pop(0)
0xf69: Push("d3q01BigVladGotoGeorgSelf")
0xf6a: @@ FindMark(Stack[-2], Stack[-1])
0xf6b: Pop(1)
0xf6c: Push(Stack[-1])
0xf6d: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf6e: @@ Remove()
0xf6f: Pop(0)
0xf70: Push("d3q01GeorgAgreed")
0xf71: @@ FindMark(Stack[-2], Stack[-1])
0xf72: Pop(1)
0xf73: Push(Stack[-1])
0xf74: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf75: @@ Remove()
0xf76: Pop(0)
0xf77: Push("d3q01GeorgAgreedSelf")
0xf78: @@ FindMark(Stack[-2], Stack[-1])
0xf79: Pop(1)
0xf7a: Push(Stack[-1])
0xf7b: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf7c: @@ Remove()
0xf7d: Pop(0)
0xf7e: Push("d3q01OspinaButchersWillHelpSelf")
0xf7f: @@ FindMark(Stack[-2], Stack[-1])
0xf80: Pop(1)
0xf81: Push(Stack[-1])
0xf82: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf83: @@ Remove()
0xf84: Pop(0)
0xf85: Push("d3q01OspinaGotoBigVlad")
0xf86: @@ FindMark(Stack[-2], Stack[-1])
0xf87: Pop(1)
0xf88: Push(Stack[-1])
0xf89: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf8a: @@ Remove()
0xf8b: Pop(0)
0xf8c: Push("d3q01OspinaGotoBigVladSelf")
0xf8d: @@ FindMark(Stack[-2], Stack[-1])
0xf8e: Pop(1)
0xf8f: Push(Stack[-1])
0xf90: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf91: @@ Remove()
0xf92: Pop(0)
0xf93: Push("d3q01RubinGotoAlexandr")
0xf94: @@ FindMark(Stack[-2], Stack[-1])
0xf95: Pop(1)
0xf96: Push(Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: @@ Remove()
0xf99: Pop(0)
0xf9a: Push("d3q01RubinGotoAlexandrSelf")
0xf9b: @@ FindMark(Stack[-2], Stack[-1])
0xf9c: Pop(1)
0xf9d: Push(Stack[-1])
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa1; Pop(1)

0xf9f: @@ Remove()
0xfa0: Pop(0)
0xfa1: PushEmpty()
0xfa2: Call 0x11a7

0xfa3: Pop(0)
0xfa4: PushEmpty(bool, string, string)
0xfa5: Stack[-2] = "quest_d3_01"
0xfa6: Stack[-1] = "completed"
0xfa7: Call 0xe68

0xfa8: Pop(3)
0xfa9: Return(); Pop(4)

0xfaa: Stack[-1] = 0
0xfab: Stack[-2] = 0
0xfac: PushEmpty()
0xfad: Push("d3RubinToldWhereIsSimon")
0xfae: Push((int) 1)
0xfaf: @ SetVariable(Stack[-2], Stack[-1])
0xfb0: Pop(2)
0xfb1: Return(); Pop(0)

0xfb2: PushEmpty()
0xfb3: Push("KnowRubin")
0xfb4: Push((int) 1)
0xfb5: @ SetVariable(Stack[-2], Stack[-1])
0xfb6: Pop(2)
0xfb7: Return(); Pop(0)

0xfb8: PushEmpty()
0xfb9: Push("ood5Rubin1")
0xfba: Push((int) 1)
0xfbb: @ SetVariable(Stack[-2], Stack[-1])
0xfbc: Pop(2)
0xfbd: Return(); Pop(0)

0xfbe: PushEmpty(object, object)
0xfbf: Push("d5q01")
0xfc0: Push((int) 1)
0xfc1: @ SetVariable(Stack[-2], Stack[-1])
0xfc2: Pop(2)
0xfc3: PushEmpty(object)
0xfc4: Call 0x1134

0xfc5: Stack[-2] = Stack[-1]
0xfc6: Pop(1)
0xfc7: Push("d5q01RubinGotoBigVlad")
0xfc8: Push("pt_map_bigvlad")
0xfc9: Push((int) 1)
0xfca: Push((int) 11956)
0xfcb: PushEmpty(float)
0xfcc: Call 0xe74

0xfcd: Pop(0)
0xfce: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfcf: Pop(5)
0xfd0: Push("d5q01RubinGotoBigVladSelf")
0xfd1: Push("pt_map_rubin")
0xfd2: Push((int) 1)
0xfd3: Push((int) 15348)
0xfd4: PushEmpty(float)
0xfd5: Call 0xe74

0xfd6: Pop(0)
0xfd7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfd8: Pop(5)
0xfd9: PushEmpty()
0xfda: Call 0x11b7

0xfdb: Pop(0)
0xfdc: PushEmpty()
0xfdd: Call 0x11c7

0xfde: Pop(0)
0xfdf: Return(); Pop(2)

0xfe0: Stack[-1] = 0
0xfe1: PushEmpty()
0xfe2: Push("ood5Rubin2")
0xfe3: Push((int) 1)
0xfe4: @ SetVariable(Stack[-2], Stack[-1])
0xfe5: Pop(2)
0xfe6: Return(); Pop(0)

0xfe7: PushEmpty(object, object, int, object, object, int)
0xfe8: PushEmpty(object)
0xfe9: Call 0x1134

0xfea: Stack[-4] = Stack[-1]
0xfeb: Pop(1)
0xfec: Push("d5q01AlexandrGotoKaterina")
0xfed: @@ FindMark(Stack[-3], Stack[-1])
0xfee: Pop(1)
0xfef: Push(Stack[-2])
0xff0: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xff1: @@ Remove()
0xff2: Pop(0)
0xff3: Push("d5q01BigVladGotoAlexandr")
0xff4: @@ FindMark(Stack[-3], Stack[-1])
0xff5: Pop(1)
0xff6: Push(Stack[-2])
0xff7: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xff8: @@ Remove()
0xff9: Pop(0)
0xffa: Push("d5q01BurahMeeting1")
0xffb: @@ FindMark(Stack[-3], Stack[-1])
0xffc: Pop(1)
0xffd: Push(Stack[-2])
0xffe: IF (Stack[-1] == 0) GOTO 0x1001; Pop(1)

0xfff: @@ Remove()
0x1000: Pop(0)
0x1001: Push("d5q01BurahMeeting2")
0x1002: @@ FindMark(Stack[-3], Stack[-1])
0x1003: Pop(1)
0x1004: Push(Stack[-2])
0x1005: IF (Stack[-1] == 0) GOTO 0x1008; Pop(1)

0x1006: @@ Remove()
0x1007: Pop(0)
0x1008: Push("d5q01GrifWantsMoney")
0x1009: @@ FindMark(Stack[-3], Stack[-1])
0x100a: Pop(1)
0x100b: Push(Stack[-2])
0x100c: IF (Stack[-1] == 0) GOTO 0x100f; Pop(1)

0x100d: @@ Remove()
0x100e: Pop(0)
0x100f: Push("d5q01GrifWillHelp")
0x1010: @@ FindMark(Stack[-3], Stack[-1])
0x1011: Pop(1)
0x1012: Push(Stack[-2])
0x1013: IF (Stack[-1] == 0) GOTO 0x1016; Pop(1)

0x1014: @@ Remove()
0x1015: Pop(0)
0x1016: Push("d5q01KaterinaGotoLara")
0x1017: @@ FindMark(Stack[-3], Stack[-1])
0x1018: Pop(1)
0x1019: Push(Stack[-2])
0x101a: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x101b: @@ Remove()
0x101c: Pop(0)
0x101d: Push("d5q01PatrolGotoGrif")
0x101e: @@ FindMark(Stack[-3], Stack[-1])
0x101f: Pop(1)
0x1020: Push(Stack[-2])
0x1021: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1022: @@ Remove()
0x1023: Pop(0)
0x1024: Push("d5q01RubinGotoBigVlad")
0x1025: @@ FindMark(Stack[-3], Stack[-1])
0x1026: Pop(1)
0x1027: Push(Stack[-2])
0x1028: IF (Stack[-1] == 0) GOTO 0x102b; Pop(1)

0x1029: @@ Remove()
0x102a: Pop(0)
0x102b: Push("d5q01RubinGotoBigVladSelf")
0x102c: @@ FindMark(Stack[-3], Stack[-1])
0x102d: Pop(1)
0x102e: Push(Stack[-2])
0x102f: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1030: @@ Remove()
0x1031: Pop(0)
0x1032: PushEmpty()
0x1033: Call 0x11d7

0x1034: Pop(0)
0x1035: Push("d5q01_heart")
0x1036: Push((int) 1)
0x1037: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1038: Pop(2)
0x1039: PushEmpty(bool, string, string)
0x103a: Stack[-2] = "quest_d5_01"
0x103b: Stack[-1] = "completed"
0x103c: Call 0xe68

0x103d: Pop(3)
0x103e: Return(); Pop(6)

0x103f: Stack[-2] = 0
0x1040: Stack[-3] = 0
0x1041: PushEmpty()
0x1042: Push("d6RubinGoesToGeorg")
0x1043: Push((int) 1)
0x1044: @ SetVariable(Stack[-2], Stack[-1])
0x1045: Pop(2)
0x1046: Return(); Pop(0)

0x1047: PushEmpty()
0x1048: Push("whitevaccine is given")
0x1049: @ Trace(Stack[-1])
0x104a: Pop(1)
0x104b: PushEmpty(object, string, int)
0x104c: Stack[-3] = Stack[-5]
0x104d: Stack[-2] = "white_vaccine"
0x104e: Stack[-1] = (int) 1
0x104f: Call 0xe54

0x1050: Pop(3)
0x1051: Return(); Pop(0)

0x1052: PushEmpty()
0x1053: Push("d3RubinVisit")
0x1054: Push((int) 1)
0x1055: @ SetVariable(Stack[-2], Stack[-1])
0x1056: Pop(2)
0x1057: Return(); Pop(0)

0x1058: PushEmpty()
0x1059: Push("d5RubinVisit")
0x105a: Push((int) 1)
0x105b: @ SetVariable(Stack[-2], Stack[-1])
0x105c: Pop(2)
0x105d: Return(); Pop(0)

0x105e: PushEmpty()
0x105f: PushEmpty(bool, object)
0x1060: Stack[-1] = Stack[-3]
0x1061: Call 0x10f6

0x1062: Pop(1)
0x1063: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x1064: Stack[-2] = (bool) 1
0x1065: Return(); Pop(0)

0x1066: Stack[-2] = (bool) 0
0x1067: Return(); Pop(0)

0x1068: PushEmpty()
0x1069: PushEmpty(int, string)
0x106a: Stack[-1] = "d3q01"
0x106b: Call 0xe42

0x106c: Pop(1)
0x106d: Push((int) 0)
0x106e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x1072; Pop(1)

0x1070: Stack[-2] = (bool) 1
0x1071: Return(); Pop(0)

0x1072: Stack[-2] = (bool) 0
0x1073: Return(); Pop(0)

0x1074: PushEmpty()
0x1075: PushEmpty(int, string)
0x1076: Stack[-1] = "ood3Rubin1"
0x1077: Call 0xe42

0x1078: Pop(1)
0x1079: Push((int) 0)
0x107a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x107b: IF (Stack[-1] == 0) GOTO 0x107e; Pop(1)

0x107c: Stack[-2] = (bool) 1
0x107d: Return(); Pop(0)

0x107e: Stack[-2] = (bool) 0
0x107f: Return(); Pop(0)

0x1080: PushEmpty()
0x1081: PushEmpty(int, string)
0x1082: Stack[-1] = "ood3Rubin2"
0x1083: Call 0xe42

0x1084: Pop(1)
0x1085: Push((int) 0)
0x1086: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1087: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1088: Stack[-2] = (bool) 1
0x1089: Return(); Pop(0)

0x108a: Stack[-2] = (bool) 0
0x108b: Return(); Pop(0)

0x108c: PushEmpty()
0x108d: PushEmpty(int, string)
0x108e: Stack[-1] = "ood3Rubin3"
0x108f: Call 0xe42

0x1090: Pop(1)
0x1091: Push((int) 0)
0x1092: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1093: IF (Stack[-1] == 0) GOTO 0x1096; Pop(1)

0x1094: Stack[-2] = (bool) 1
0x1095: Return(); Pop(0)

0x1096: Stack[-2] = (bool) 0
0x1097: Return(); Pop(0)

0x1098: PushEmpty()
0x1099: PushEmpty(int, string)
0x109a: Stack[-1] = "ood3Rubin4"
0x109b: Call 0xe42

0x109c: Pop(1)
0x109d: Push((int) 0)
0x109e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x109f: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x10a0: Stack[-2] = (bool) 1
0x10a1: Return(); Pop(0)

0x10a2: Stack[-2] = (bool) 0
0x10a3: Return(); Pop(0)

0x10a4: PushEmpty()
0x10a5: PushEmpty(int, string)
0x10a6: Stack[-1] = "d3q01"
0x10a7: Call 0xe42

0x10a8: Pop(1)
0x10a9: Push((int) 1000)
0x10aa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ab: IF (Stack[-1] == 0) GOTO 0x10ae; Pop(1)

0x10ac: Stack[-2] = (bool) 1
0x10ad: Return(); Pop(0)

0x10ae: Stack[-2] = (bool) 0
0x10af: Return(); Pop(0)

0x10b0: PushEmpty()
0x10b1: PushEmpty(bool, object, string)
0x10b2: Stack[-2] = Stack[-4]
0x10b3: Stack[-1] = "d3q01_blood"
0x10b4: Call 0xe61

0x10b5: Pop(2)
0x10b6: IF (Stack[-1] == 0) GOTO 0x10b9; Pop(1)

0x10b7: Stack[-2] = (bool) 1
0x10b8: Return(); Pop(0)

0x10b9: Stack[-2] = (bool) 0
0x10ba: Return(); Pop(0)

0x10bb: PushEmpty()
0x10bc: PushEmpty(int, string)
0x10bd: Stack[-1] = "ood5Rubin1"
0x10be: Call 0xe42

0x10bf: Pop(1)
0x10c0: Push((int) 0)
0x10c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10c3: Stack[-2] = (bool) 1
0x10c4: Return(); Pop(0)

0x10c5: Stack[-2] = (bool) 0
0x10c6: Return(); Pop(0)

0x10c7: PushEmpty()
0x10c8: PushEmpty(int, string)
0x10c9: Stack[-1] = "d5q01"
0x10ca: Call 0xe42

0x10cb: Pop(1)
0x10cc: Push((int) 7)
0x10cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ce: IF (Stack[-1] == 0) GOTO 0x10d1; Pop(1)

0x10cf: Stack[-2] = (bool) 1
0x10d0: Return(); Pop(0)

0x10d1: Stack[-2] = (bool) 0
0x10d2: Return(); Pop(0)

0x10d3: PushEmpty()
0x10d4: PushEmpty(int, string)
0x10d5: Stack[-1] = "ood5Rubin2"
0x10d6: Call 0xe42

0x10d7: Pop(1)
0x10d8: Push((int) 0)
0x10d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10da: IF (Stack[-1] == 0) GOTO 0x10dd; Pop(1)

0x10db: Stack[-2] = (bool) 1
0x10dc: Return(); Pop(0)

0x10dd: Stack[-2] = (bool) 0
0x10de: Return(); Pop(0)

0x10df: PushEmpty()
0x10e0: PushEmpty(bool, object, string)
0x10e1: Stack[-2] = Stack[-4]
0x10e2: Stack[-1] = "d5q01_heart"
0x10e3: Call 0xe61

0x10e4: Pop(2)
0x10e5: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10e6: Stack[-2] = (bool) 1
0x10e7: Return(); Pop(0)

0x10e8: Stack[-2] = (bool) 0
0x10e9: Return(); Pop(0)

0x10ea: PushEmpty()
0x10eb: PushEmpty(int, string)
0x10ec: Stack[-1] = "d6RubinGoesToGeorg"
0x10ed: Call 0xe42

0x10ee: Pop(1)
0x10ef: Push((int) 0)
0x10f0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10f1: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10f2: Stack[-2] = (bool) 1
0x10f3: Return(); Pop(0)

0x10f4: Stack[-2] = (bool) 0
0x10f5: Return(); Pop(0)

0x10f6: PushEmpty()
0x10f7: Stack[-2] = (bool) 0
0x10f8: Return(); Pop(0)

0x10f9: PushEmpty(object, object)
0x10fa: @ GetDiaryRoot(Stack[-1])
0x10fb: Pop(0)
0x10fc: Pop(0); Push((bool) Stack[-1] == 0)
0x10fd: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x10fe: Push("Can't retrieve diary root")
0x10ff: @ Trace(Stack[-1])
0x1100: Pop(1)
0x1101: Stack[-3] = (bool) 0
0x1102: Return(); Pop(2)

0x1103: Stack[-3] = Stack[-1]
0x1104: Return(); Pop(2)

0x1105: Stack[-1] = 0
0x1106: PushEmpty(object, object, int, object, object, int)
0x1107: PushEmpty(object)
0x1108: Call 0x10f9

0x1109: Stack[-4] = Stack[-1]
0x110a: Pop(1)
0x110b: @@ Find(Stack[-7], Stack[-2])
0x110c: Pop(0)
0x110d: Pop(0); Push((bool) Stack[-2] == 0)
0x110e: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x110f: Push("Can't find diary parent with id: ")
0x1110: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1111: @ Trace(Stack[-1])
0x1112: Pop(1)
0x1113: Stack[-9] = (bool) 0
0x1114: Return(); Pop(6)

0x1115: @@ AddChild(Stack[-8])
0x1116: Pop(0)
0x1117: Push("player_diary")
0x1118: Push((int) 1)
0x1119: @ SetVariable(Stack[-2], Stack[-1])
0x111a: Pop(2)
0x111b: @@ GetCategory(Stack[-1])
0x111c: Pop(0)
0x111d: @ SetDiarySection(Stack[-1])
0x111e: Pop(0)
0x111f: Stack[-9] = (bool) 0
0x1120: Return(); Pop(6)

0x1121: Stack[-2] = 0
0x1122: Stack[-3] = 0
0x1123: PushEmpty(object, object, object, object)
0x1124: PushEmpty(object)
0x1125: Call 0x10f9

0x1126: Stack[-3] = Stack[-1]
0x1127: Pop(1)
0x1128: @@ Find(Stack[-5], Stack[-1])
0x1129: Pop(0)
0x112a: Pop(0); Push((bool) Stack[-1] == 0)
0x112b: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112c: Stack[-6] = (bool) 0
0x112d: Return(); Pop(4)

0x112e: @@ Remove()
0x112f: Pop(0)
0x1130: Stack[-6] = (bool) 1
0x1131: Return(); Pop(4)

0x1132: Stack[-1] = 0
0x1133: Stack[-2] = 0
0x1134: PushEmpty(object, object, object, object)
0x1135: @ GetMainOutdoorScene(Stack[-2])
0x1136: Pop(0)
0x1137: Pop(0); Push((bool) Stack[-2] == 0)
0x1138: IF (Stack[-1] == 0) GOTO 0x113f; Pop(1)

0x1139: Push("Can't find main outdoor scene")
0x113a: @ Trace(Stack[-1])
0x113b: Pop(1)
0x113c: Stack[-1] = 0
0x113d: Stack[-5] = Stack[-1]
0x113e: Return(); Pop(4)

0x113f: @@ GetMap(Stack[-1])
0x1140: Pop(0)
0x1141: Stack[-5] = Stack[-1]
0x1142: Return(); Pop(4)

0x1143: Stack[-1] = 0
0x1144: Stack[-2] = 0
0x1145: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1146: @ GetMainOutdoorScene(Stack[-2])
0x1147: Pop(0)
0x1148: Pop(0); Push((bool) Stack[-2] == 0)
0x1149: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x114a: Push("Can't find main outdoor scene")
0x114b: @ Trace(Stack[-1])
0x114c: Pop(1)
0x114d: Return(); Pop(8)

0x114e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x114f: Pop(0)
0x1150: Pop(0); Push((bool) Stack[-1] == 0)
0x1151: IF (Stack[-1] == 0) GOTO 0x1158; Pop(1)

0x1152: Push("Warning: outdoor scene locator ")
0x1153: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1154: Push(" doesnt exist")
0x1155: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1156: @ Trace(Stack[-1])
0x1157: Pop(1)
0x1158: @@ GetMap(Stack[-11])
0x1159: Pop(0)
0x115a: Pop(0); Push((bool) Stack[-11] == 0)
0x115b: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x115c: Push("Can't find map")
0x115d: @ Trace(Stack[-1])
0x115e: Pop(1)
0x115f: Return(); Pop(8)

0x1160: Push(CvectorIndex(Stack[-4], 0))
0x1161: Push(CvectorIndex(Stack[-5], 2))
0x1162: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1163: Pop(2)
0x1164: Return(); Pop(8)

0x1165: Stack[-2] = 0
0x1166: PushEmpty(int, int)
0x1167: Push("player")
0x1168: @ GetVariable(Stack[-1], Stack[-2])
0x1169: Pop(1)
0x116a: Push((int) 0)
0x116b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x116c: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116d: Stack[-3] = (int) 200001
0x116e: Return(); Pop(2)

0x116f: GOTO 0x1175

0x1170: Push((int) 1)
0x1171: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1172: IF (Stack[-1] == 0) GOTO 0x1175; Pop(1)

0x1173: Stack[-3] = (int) 200002
0x1174: Return(); Pop(2)

0x1175: Stack[-3] = (int) 200003
0x1176: Return(); Pop(2)

0x1177: PushEmpty(object, object)
0x1178: Push("Adding diary entry")
0x1179: @ Trace(Stack[-1])
0x117a: Pop(1)
0x117b: Push((int) 49)
0x117c: Push((int) 1)
0x117d: Push((int) 12131)
0x117e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117f: Pop(3)
0x1180: PushEmpty(bool, object, int)
0x1181: Stack[-2] = Stack[-4]
0x1182: Stack[-1] = (int) 2
0x1183: Call 0x1106

0x1184: Pop(3)
0x1185: Return(); Pop(2)

0x1186: Stack[-1] = 0
0x1187: PushEmpty(object, object)
0x1188: Push("Adding diary entry")
0x1189: @ Trace(Stack[-1])
0x118a: Pop(1)
0x118b: Push((int) 25)
0x118c: Push((int) 1)
0x118d: Push((int) 3365)
0x118e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x118f: Pop(3)
0x1190: PushEmpty(bool, object, int)
0x1191: Stack[-2] = Stack[-4]
0x1192: Stack[-1] = (int) -1
0x1193: Call 0x1106

0x1194: Pop(3)
0x1195: Return(); Pop(2)

0x1196: Stack[-1] = 0
0x1197: PushEmpty(object, object)
0x1198: Push("Adding diary entry")
0x1199: @ Trace(Stack[-1])
0x119a: Pop(1)
0x119b: Push((int) 68)
0x119c: Push((int) 1)
0x119d: Push((int) 12150)
0x119e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x119f: Pop(3)
0x11a0: PushEmpty(bool, object, int)
0x11a1: Stack[-2] = Stack[-4]
0x11a2: Stack[-1] = (int) 25
0x11a3: Call 0x1106

0x11a4: Pop(3)
0x11a5: Return(); Pop(2)

0x11a6: Stack[-1] = 0
0x11a7: PushEmpty(object, object)
0x11a8: Push("Adding diary entry")
0x11a9: @ Trace(Stack[-1])
0x11aa: Pop(1)
0x11ab: Push((int) 74)
0x11ac: Push((int) 1)
0x11ad: Push((int) 12156)
0x11ae: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11af: Pop(3)
0x11b0: PushEmpty(bool, object, int)
0x11b1: Stack[-2] = Stack[-4]
0x11b2: Stack[-1] = (int) 25
0x11b3: Call 0x1106

0x11b4: Pop(3)
0x11b5: Return(); Pop(2)

0x11b6: Stack[-1] = 0
0x11b7: PushEmpty(object, object)
0x11b8: Push("Adding diary entry")
0x11b9: @ Trace(Stack[-1])
0x11ba: Pop(1)
0x11bb: Push((int) 139)
0x11bc: Push((int) 1)
0x11bd: Push((int) 15339)
0x11be: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11bf: Pop(3)
0x11c0: PushEmpty(bool, object, int)
0x11c1: Stack[-2] = Stack[-4]
0x11c2: Stack[-1] = (int) -1
0x11c3: Call 0x1106

0x11c4: Pop(3)
0x11c5: Return(); Pop(2)

0x11c6: Stack[-1] = 0
0x11c7: PushEmpty(object, object)
0x11c8: Push("Adding diary entry")
0x11c9: @ Trace(Stack[-1])
0x11ca: Pop(1)
0x11cb: Push((int) 140)
0x11cc: Push((int) 1)
0x11cd: Push((int) 15340)
0x11ce: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11cf: Pop(3)
0x11d0: PushEmpty(bool, object, int)
0x11d1: Stack[-2] = Stack[-4]
0x11d2: Stack[-1] = (int) 139
0x11d3: Call 0x1106

0x11d4: Pop(3)
0x11d5: Return(); Pop(2)

0x11d6: Stack[-1] = 0
0x11d7: PushEmpty(object, object)
0x11d8: Push("Adding diary entry")
0x11d9: @ Trace(Stack[-1])
0x11da: Pop(1)
0x11db: Push((int) 147)
0x11dc: Push((int) 1)
0x11dd: Push((int) 15347)
0x11de: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11df: Pop(3)
0x11e0: PushEmpty(bool, object, int)
0x11e1: Stack[-2] = Stack[-4]
0x11e2: Stack[-1] = (int) 139
0x11e3: Call 0x1106

0x11e4: Pop(3)
0x11e5: Return(); Pop(2)

0x11e6: Stack[-1] = 0
0x11e7: Push(GlobalVars[1])
0x11e8: Stack[-1] = (bool) 0
0x11e9: GlobalVars[1] = Stack[-1]; Pop(1)
0x11ea: Return(); Pop(0)

0x11eb: PushEmpty()
0x11ec: Push(GlobalVars[1])
0x11ed: Pop(1); Push((bool) Stack[-1] == 0)
0x11ee: IF (Stack[-1] == 0) GOTO 0x11ef; Pop(1)

0x11ef: PushEmpty(bool, int)
0x11f0: Stack[-1] = (int) 1
0x11f1: Call 0xe82

0x11f2: Pop(1)
0x11f3: IF (Stack[-1] == 0) GOTO 0x1202; Pop(1)

0x11f4: PushEmpty(int, string)
0x11f5: Stack[-1] = "d1q01"
0x11f6: Call 0xe42

0x11f7: Pop(1)
0x11f8: Push((int) 1000)
0x11f9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x11fa: IF (Stack[-1] == 0) GOTO 0x1202; Pop(1)

0x11fb: PushEmpty(int, object)
0x11fc: Stack[-1] = Stack[-3]
0x11fd: Push(-2, 1); TaskCall(2)
0x11fe: Call 0x31

0x11ff: Pop(-2, 1); TaskReturn
0x1200: Pop(2)
0x1201: Return(); Pop(0)

0x1202: PushEmpty(bool, int)
0x1203: Stack[-1] = (int) 3
0x1204: Call 0xe82

0x1205: Pop(1)
0x1206: IF (Stack[-1] == 0) GOTO 0x120e; Pop(1)

0x1207: PushEmpty(int, object)
0x1208: Stack[-1] = Stack[-3]
0x1209: Push(-2, 1); TaskCall(4)
0x120a: Call 0x2a0

0x120b: Pop(-2, 1); TaskReturn
0x120c: Pop(2)
0x120d: Return(); Pop(0)

0x120e: PushEmpty(bool, int)
0x120f: Stack[-1] = (int) 5
0x1210: Call 0xe82

0x1211: Pop(1)
0x1212: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x1213: PushEmpty(int, object)
0x1214: Stack[-1] = Stack[-3]
0x1215: Push(-2, 1); TaskCall(6)
0x1216: Call 0x8de

0x1217: Pop(-2, 1); TaskReturn
0x1218: Pop(2)
0x1219: Return(); Pop(0)

0x121a: PushEmpty(bool, int)
0x121b: Stack[-1] = (int) 6
0x121c: Call 0xe82

0x121d: Pop(1)
0x121e: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x121f: PushEmpty(int, object)
0x1220: Stack[-1] = Stack[-3]
0x1221: Push(-2, 1); TaskCall(8)
0x1222: Call 0xcc9

0x1223: Pop(-2, 1); TaskReturn
0x1224: Pop(2)
0x1225: Return(); Pop(0)

0x1226: PushEmpty(bool)
0x1227: Call 0xe88

0x1228: Pop(1)
0x1229: Return(); Pop(0)

