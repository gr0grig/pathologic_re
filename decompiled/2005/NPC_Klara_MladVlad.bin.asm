GlobalVarCount = 3
	G_VAR_0 string 
	G_VAR_1 object 
	G_VAR_2 bool 

Strings:
	player
	ptidle
	all
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	Untrust
	Sly
	Fear
	Rage
	GetLocator
	loc
	walk_stopl
	walk_stopr
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	m
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	pt_
	ui/NPC_MladVlad.png
	ui/NPC_MladVlad_b.png
	k2q01
	k2q01MladVladGotoOspina
	pt_map_ospina
	AddMark
	ook2MladVlad1
	k2q04
	k2q04MladVladGotoAnna
	pt_map_anna
	ook2MladVlad2
	alpha_pills
	RemoveItemByType
	beta_pills
	ook3MladVlad1
	ook5MladVlad1
	k6q02
	money1000 is given
	money500 is given
	playsound
	givemoney
	ook5MladVlad2
	ShowMap
	k3q01
	k5q01
	k6q01
	GetItemCountOfType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	WaitForAnimEnd (1 args)
	Rotate (3 args)
	IsOverrideActive (1 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Stop (0 args)
	Sleep (1 args)
	StopAnimation (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	HasAnimation (3 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	SensePlayerOnly (1 args)
	GetScene (1 args)
	GetHeight (1 args)
	CanReachByPF (2 args)
	GetAnimationOffset (3 args)
	GetPosition (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xe5c
RunTask = 18

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 3
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_0 Op = 0x45 Vars = (object)
		EVENT_10 Op = 0x59 Vars = (object)
		EVENT_7 Op = 0x6d Vars = (int)
	GTASK_2  Params = 1
		EVENT_6 Op = 0xa2 Vars = ()
		EVENT_0 Op = 0xae Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0xf7 Vars = ()
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x22c Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6f2 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ce Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9cd Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb69 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd34 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe32 Vars = (int, int)
	GTASK_18 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0xed9 Vars = ()
		EVENT_0 Op = 0xee2 Vars = (object)

Events:
EVENT_6 Op = 0x1116 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xf46

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf: Push((int) 21)
0x10: Push((float)0.5)
0x11: @ SetTimer(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: PushEmpty(bool, cvector)
0x14: Stack[-1] = Stack[-6]
0x15: Call2 0xf28

0x16: Pop(1)
0x17: Pop(1); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: GOTO 0x13

0x1a: Push((bool) 0)
0x1b: @ MovePoint(Stack[-5], Stack[-1], Stack[-2])
0x1c: Pop(1)
0x1d: Push(Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x21

0x20: GOTO 0x13

0x21: Push((int) 20)
0x22: @ KillTimer(Stack[-1])
0x23: Pop(1)
0x24: Push((int) 21)
0x25: @ KillTimer(Stack[-1])
0x26: Pop(1)
0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: @ WaitForAnimEnd(Stack[-1])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: Stack[-5] = (bool) 0
0x2d: Return(); Pop(2)

0x2e: Push(CvectorIndex(Stack[-3], 0))
0x2f: Push(CvectorIndex(Stack[-4], 2))
0x30: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31: Pop(2)
0x32: Pop(0); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[-5] = (bool) 0
0x35: Return(); Pop(2)

0x36: Stack[-5] = (bool) 1
0x37: Return(); Pop(2)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39: PushEmpty()
0x3a: Call2 0x91

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x1116

0x3e: Pop(0)
0x3f: PushEmpty()
0x40: Push(-0, 0); TaskCall(0)
0x41: Call2 0x0

0x42: Pop(-0, 0); TaskReturn
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(bool, bool)
0x46: @ IsOverrideActive(Stack[-1])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-1] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x91

0x4c: Pop(0)
0x4d: EventDisable(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[-5]
0x50: Call2 0xf32

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-4]
0x55: Call2 0x1383

0x56: Pop(1)
0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(2)

0x59: PushEmpty(bool, bool)
0x5a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b: Pop(0)
0x5c: Push(Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5e: PushEmpty()
0x5f: Call2 0x91

0x60: Pop(0)
0x61: PushEmpty(object)
0x62: Stack[-1] = Stack[-4]
0x63: Push(-1, 0); TaskCall(2)
0x64: Call2 0x94

0x65: Pop(-1, 0); TaskReturn
0x66: Pop(1)
0x67: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x68: Push((int) 20)
0x69: Push((float)10.0)
0x6a: @ SetTimer(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(2)

0x6d: PushEmpty(object, object)
0x6e: Push((int) 20)
0x6f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x72: Push((int) 20)
0x73: @ KillTimer(Stack[-1])
0x74: Pop(1)
0x75: GOTO 0x90

0x76: Push((int) 21)
0x77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x79: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7b: Push("player")
0x7c: @ FindActor(Stack[-2], Stack[-1])
0x7d: Pop(1)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: Push(Stack[-2])
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: PushEmpty(float, object)
0x83: Stack[-1] = Stack[-4]
0x84: Call2 0xef7

0x85: Pop(1)
0x86: Push((float)62500.0)
0x87: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[-1] = (bool) 1
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty(object)
0x8c: Stack[-1] = Stack[-2]
0x8d: Call2 0x59

0x8e: Pop(1)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(2)

0x91: @ Stop()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: PushEmpty(bool, bool)
0x95: @ WaitForAnimEnd(Stack[-1])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(2)

0x9a: PushEmpty(object)
0x9b: Stack[-1] = Stack[-4]
0x9c: Call2 0xf3b

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x1116

0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Push(-0, 0); TaskCall(0)
0xaa: Call2 0x0

0xab: Pop(-0, 0); TaskReturn
0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(bool, bool)
0xaf: @ IsOverrideActive(Stack[-1])
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0xc1

0xb5: Pop(0)
0xb6: EventDisable(0)
0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[-5]
0xb9: Call2 0xf32

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[-4]
0xbe: Call2 0x1383

0xbf: Pop(1)
0xc0: Return(); Pop(2)

0xc1: @ StopGroup0()
0xc2: Pop(0)
0xc3: @ StopAnimation()
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(string, bool, string, int, int, int, int, string, bool, string, int, int, int, int)
0xc7: Push(Stack[-15])
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Push("ptidle")
0xca: Stack[-8] = Stack[-1] + Stack[-16]; Pop(1);
0xcb: GOTO 0xcd

0xcc: Stack[-7] = "ptidle"
0xcd: @ HasProperty(Stack[-7], Stack[-6])
0xce: Pop(0)
0xcf: Push(Stack[-6])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: @ GetProperty(Stack[-7], Stack[-5])
0xd2: Pop(0)
0xd3: PushEmpty(int, string)
0xd4: Stack[-1] = Stack[-7]
0xd5: Call2 0x108

0xd6: Stack[-6] = Stack[-2]
0xd7: Pop(2)
0xd8: @ irand(Stack[-3], Stack[-4])
0xd9: Pop(0)
0xda: Push("all")
0xdb: PushEmpty(string, string, int)
0xdc: Stack[-2] = Stack[-9]
0xdd: Stack[-1] = Stack[-7]
0xde: Call2 0x100

0xdf: Pop(2)
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: GOTO 0xf6

0xe5: PushEmpty(int)
0xe6: Call2 0x10f8

0xe7: Stack[-3] = Stack[-1]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all")
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x10f1

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x1116

0xf9: Pop(0)
0xfa: PushEmpty()
0xfb: Push(-0, 0); TaskCall(0)
0xfc: Call2 0x0

0xfd: Pop(-0, 0); TaskReturn
0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-3] = Stack[-2]
0x105: GOTO 0x107

0x106: Stack[-3] = Stack[-2] + Stack[-1]; Pop(0);
0x107: Return(); Pop(0)

0x108: PushEmpty(int, bool, int, bool)
0x109: Stack[-2] = (int) 0
0x10a: Push("all")
0x10b: PushEmpty(string, string, int)
0x10c: Stack[-2] = Stack[-9]
0x10d: Stack[-1] = Stack[-6]
0x10e: Call2 0x100

0x10f: Pop(2)
0x110: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: Pop(0); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: GOTO 0x118

0x115: Push((int) 1)
0x116: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x117: GOTO 0x10a

0x118: Stack[-6] = Stack[-2]
0x119: Return(); Pop(4)

0x11a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11c: PushEmpty(bool, object, float)
0x11d: Stack[-2] = Stack[-12]
0x11e: Stack[-1] = (float) 70.0
0x11f: Call2 0xf4b

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x1119

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x1117

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x111b

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x111d

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x1372

0x13d: Pop(0)
0x13e: @@ SetPlayerName(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-2] = (int) -1
0x141: @ IsOverrideActive(Stack[-3])
0x142: Pop(0)
0x143: Push(Stack[-3])
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ DoDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(bool, object)
0x14a: PushEmpty(object)
0x14b: Call2 0x105f

0x14c: Stack[-2] = Stack[-1]
0x14d: Pop(1)
0x14e: Call2 0xfa0

0x14f: Pop(2)
0x150: PushEmpty(object, object)
0x151: Stack[-2] = Stack[-11]
0x152: Stack[-1] = Stack[-6]
0x153: Push(-2, 4); TaskCall(5)
0x154: Call2 0x16b

0x155: Pop(-2, 4); TaskReturn
0x156: Pop(2)
0x157: @@ IsDialogEnd(Stack[-1])
0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: @ sync()
0x15c: Pop(0)
0x15d: @@ IsDialogEnd(Stack[-1])
0x15e: Pop(0)
0x15f: GOTO 0x159

0x160: PushEmpty(object)
0x161: Stack[-1] = Stack[-10]
0x162: Call2 0xf8f

0x163: Pop(1)
0x164: @ StopDialog(Stack[-4])
0x165: Pop(0)
0x166: @@ GetReturnValue(Stack[-2])
0x167: Pop(0)
0x168: Stack[-10] = Stack[-2]
0x169: Return(); Pop(8)

0x16a: Stack[-4] = 0
0x16b: PushEmpty()
0x16c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x16d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x16e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16f: Push((int) 1)
0x170: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x11f5

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0x11e9

0x17b: Pop(1)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 1
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x182: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x183: Call2 0x113f

0x184: Pop(2)
0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0x216

0x188: Pop(1)
0x189: Push((int) 525337)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: Push((int) 525338)
0x18f: Push((int) 44250)
0x190: Push((int) 26706)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: GOTO 0x1f8

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0x216

0x197: Pop(1)
0x198: Push((int) 525237)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0x11e9

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: Push((int) 525238)
0x1a3: Push((int) 26607)
0x1a4: Push((int) 26606)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0x1201

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x1223

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: Push((int) 525372)
0x1b6: Push((int) 26741)
0x1b7: Push((int) 26740)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call2 0x1219

0x1bf: Pop(1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0x122f

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: Push((int) 525369)
0x1c9: Push((int) 44309)
0x1ca: Push((int) 26737)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call2 0x1219

0x1d2: Pop(1)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Call2 0x122f

0x1d8: Pop(1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: Push((int) 525381)
0x1dd: Push((int) 26750)
0x1de: Push((int) 26749)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Call2 0x120d

0x1e4: Pop(1)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: Push((int) 525375)
0x1e7: Push((int) 26744)
0x1e8: Push((int) 26743)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 525243)
0x1ec: Push((int) -1)
0x1ed: Push((int) 26611)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Push((int) 529207)
0x1f1: Push((int) -1)
0x1f2: Push((int) 30658)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: GOTO 0x1f8

0x1f6: Return(); Pop(0)

0x1f7: GOTO 0x16f

0x1f8: PushEmpty(bool)
0x1f9: Call2 0x111f

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fc: @ lshWaitForAnimEnd()
0x1fd: Pop(0)
0x1fe: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x206

0x201: PushEmpty(string)
0x202: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x203: Call2 0x102a

0x204: Pop(1)
0x205: GOTO 0x1fc

0x206: GOTO 0x215

0x207: Push("all")
0x208: Push("idle")
0x209: @ PlayAnimation(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: @ WaitForAnimEnd()
0x20c: Pop(0)
0x20d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: GOTO 0x215

0x210: Push("all")
0x211: Push("idle")
0x212: @ PlayAnimation(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: GOTO 0x20b

0x215: Return(); Pop(0)

0x216: PushEmpty()
0x217: PushEmpty(bool)
0x218: Call2 0x111f

0x219: Pop(0)
0x21a: Pop(1); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Return(); Pop(0)

0x21d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: Return(); Pop(0)

0x220: PushEmpty(string, bool)
0x221: Stack[-2] = Stack[-3]
0x222: Push("")
0x223: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: Stack[-1] = (bool) 0
0x226: GOTO 0x228

0x227: Stack[-1] = (bool) 1
0x228: Call2 0x103a

0x229: Pop(2)
0x22a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x22b: Return(); Pop(0)

0x22c: PushEmpty()
0x22d: Push((int) 1)
0x22e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x22f: PushEmpty()
0x230: Call2 0x1058

0x231: Pop(0)
0x232: Push((int) 26708)
0x233: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x235: PushEmpty(object, object)
0x236: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x237: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x238: Call2 0x1145

0x239: Pop(2)
0x23a: PushEmpty(object, object)
0x23b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23d: Call2 0x11d9

0x23e: Pop(2)
0x23f: Push((int) 44290)
0x240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(object, object)
0x243: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x244: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x245: Call2 0x1121

0x246: Pop(2)
0x247: Push((int) 44277)
0x248: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24a: PushEmpty(object, object)
0x24b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24d: Call2 0x11c5

0x24e: Pop(2)
0x24f: Push((int) 26610)
0x250: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: PushEmpty(object, object)
0x253: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x254: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x255: Call2 0x1128

0x256: Pop(2)
0x257: Push((int) 44473)
0x258: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25d: Call2 0x1128

0x25e: Pop(2)
0x25f: Push((int) 26740)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(object, object)
0x263: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call2 0x115f

0x266: Pop(2)
0x267: Push((int) 26739)
0x268: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(object, object)
0x26b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Call2 0x1165

0x26e: Pop(2)
0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0x11b5

0x273: Pop(2)
0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0x11bf

0x278: Pop(2)
0x279: Push((int) 26751)
0x27a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x27c: PushEmpty(object, object)
0x27d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27f: Call2 0x1176

0x280: Pop(2)
0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x1121

0x285: Pop(2)
0x286: Push((int) 26748)
0x287: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x289: PushEmpty(object, object)
0x28a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call2 0x117f

0x28d: Pop(2)
0x28e: PushEmpty(object, object)
0x28f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x290: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x291: Call2 0x11ab

0x292: Pop(2)
0x293: PushEmpty(object, object)
0x294: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x295: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x296: Call2 0x11bf

0x297: Pop(2)
0x298: Push((int) 26746)
0x299: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29b: PushEmpty(object, object)
0x29c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29e: Call2 0x1188

0x29f: Pop(2)
0x2a0: PushEmpty(object, object)
0x2a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a3: Call2 0x11cc

0x2a4: Pop(2)
0x2a5: Push((int) 26705)
0x2a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x2a8: PushEmpty(bool)
0x2a9: Stack[-1] = (bool) 0
0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ac: Call2 0x11f5

0x2ad: Pop(1)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2af: PushEmpty(bool, object)
0x2b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Call2 0x11e9

0x2b2: Pop(1)
0x2b3: Pop(1); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = (bool) 1
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(object, object)
0x2b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x113f

0x2bb: Pop(2)
0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "Neutral"
0x2be: Call2 0x216

0x2bf: Pop(1)
0x2c0: Push((int) 525337)
0x2c1: @@ SetMessage(Stack[-1])
0x2c2: Pop(1)
0x2c3: @@ ClearReplies()
0x2c4: Pop(0)
0x2c5: Push((int) 525338)
0x2c6: Push((int) 44250)
0x2c7: Push((int) 26706)
0x2c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral"
0x2cd: Call2 0x216

0x2ce: Pop(1)
0x2cf: Push((int) 525237)
0x2d0: @@ SetMessage(Stack[-1])
0x2d1: Pop(1)
0x2d2: @@ ClearReplies()
0x2d3: Pop(0)
0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d6: Call2 0x11e9

0x2d7: Pop(1)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: Push((int) 525238)
0x2da: Push((int) 26607)
0x2db: Push((int) 26606)
0x2dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dd: Pop(3)
0x2de: PushEmpty(bool)
0x2df: Stack[-1] = (bool) 0
0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Call2 0x1201

0x2e3: Pop(1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x1223

0x2e8: Pop(1)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-1] = (bool) 1
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: Push((int) 525372)
0x2ed: Push((int) 26741)
0x2ee: Push((int) 26740)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: PushEmpty(bool)
0x2f2: Stack[-1] = (bool) 0
0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Call2 0x1219

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Call2 0x122f

0x2fb: Pop(1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 1
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: Push((int) 525369)
0x300: Push((int) 44309)
0x301: Push((int) 26737)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: PushEmpty(bool)
0x305: Stack[-1] = (bool) 0
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0x1219

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30c: PushEmpty(bool, object)
0x30d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30e: Call2 0x122f

0x30f: Pop(1)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: Stack[-1] = (bool) 1
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push((int) 525381)
0x314: Push((int) 26750)
0x315: Push((int) 26749)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Call2 0x120d

0x31b: Pop(1)
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 525375)
0x31e: Push((int) 26744)
0x31f: Push((int) 26743)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 525243)
0x323: Push((int) -1)
0x324: Push((int) 26611)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 529207)
0x328: Push((int) -1)
0x329: Push((int) 30658)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Return(); Pop(0)

0x32d: Push((int) 26744)
0x32e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x330: PushEmpty(string)
0x331: Stack[-1] = "Untrust"
0x332: Call2 0x216

0x333: Pop(1)
0x334: Push((int) 525376)
0x335: @@ SetMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ ClearReplies()
0x338: Pop(0)
0x339: Push((int) 542113)
0x33a: Push((int) 44419)
0x33b: Push((int) 44418)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 44419)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Untrust"
0x344: Call2 0x216

0x345: Pop(1)
0x346: Push((int) 542114)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 542115)
0x34c: Push((int) 44421)
0x34d: Push((int) 44420)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 44421)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Untrust"
0x356: Call2 0x216

0x357: Pop(1)
0x358: Push((int) 542116)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 525377)
0x35e: Push((int) 26747)
0x35f: Push((int) 26745)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 542117)
0x363: Push((int) 44423)
0x364: Push((int) 44422)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 44423)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral"
0x36d: Call2 0x216

0x36e: Pop(1)
0x36f: Push((int) 542118)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 525378)
0x375: Push((int) -1)
0x376: Push((int) 26746)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 26747)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Sly"
0x37f: Call2 0x216

0x380: Pop(1)
0x381: Push((int) 525379)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 525380)
0x387: Push((int) -1)
0x388: Push((int) 26748)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Push((int) 26750)
0x38d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Fear"
0x391: Call2 0x216

0x392: Pop(1)
0x393: Push((int) 525382)
0x394: @@ SetMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ ClearReplies()
0x397: Pop(0)
0x398: Push((int) 525383)
0x399: Push((int) -1)
0x39a: Push((int) 26751)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: Push((int) 44309)
0x39f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Sly"
0x3a3: Call2 0x216

0x3a4: Pop(1)
0x3a5: Push((int) 542032)
0x3a6: @@ SetMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ ClearReplies()
0x3a9: Pop(0)
0x3aa: Push((int) 542033)
0x3ab: Push((int) 44311)
0x3ac: Push((int) 44310)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 44311)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Untrust"
0x3b5: Call2 0x216

0x3b6: Pop(1)
0x3b7: Push((int) 542034)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 542035)
0x3bd: Push((int) 44428)
0x3be: Push((int) 44312)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 542120)
0x3c2: Push((int) 26738)
0x3c3: Push((int) 44425)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Push((int) 44428)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Neutral"
0x3cc: Call2 0x216

0x3cd: Pop(1)
0x3ce: Push((int) 542122)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: Push((int) 542123)
0x3d4: Push((int) 44430)
0x3d5: Push((int) 44429)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Push((int) 542126)
0x3d9: Push((int) 26738)
0x3da: Push((int) 44432)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 44430)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Neutral"
0x3e3: Call2 0x216

0x3e4: Pop(1)
0x3e5: Push((int) 542124)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 542125)
0x3eb: Push((int) 26738)
0x3ec: Push((int) 44431)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 26738)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Neutral"
0x3f5: Call2 0x216

0x3f6: Pop(1)
0x3f7: Push((int) 525370)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 525371)
0x3fd: Push((int) -1)
0x3fe: Push((int) 26739)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 26741)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Fear"
0x407: Call2 0x216

0x408: Pop(1)
0x409: Push((int) 525373)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 525374)
0x40f: Push((int) 44313)
0x410: Push((int) 26742)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 44313)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Untrust"
0x419: Call2 0x216

0x41a: Pop(1)
0x41b: Push((int) 542036)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 542119)
0x421: Push((int) -1)
0x422: Push((int) 44424)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Return(); Pop(0)

0x426: Push((int) 26607)
0x427: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral"
0x42b: Call2 0x216

0x42c: Pop(1)
0x42d: Push((int) 525239)
0x42e: @@ SetMessage(Stack[-1])
0x42f: Pop(1)
0x430: @@ ClearReplies()
0x431: Pop(0)
0x432: Push((int) 529208)
0x433: Push((int) 44301)
0x434: Push((int) 30659)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Push((int) 529212)
0x438: Push((int) 44453)
0x439: Push((int) 30663)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 44453)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Rage"
0x442: Call2 0x216

0x443: Pop(1)
0x444: Push((int) 542140)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 542141)
0x44a: Push((int) 44458)
0x44b: Push((int) 44454)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Return(); Pop(0)

0x44f: Push((int) 44458)
0x450: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x452: PushEmpty(string)
0x453: Stack[-1] = "Rage"
0x454: Call2 0x216

0x455: Pop(1)
0x456: Push((int) 542145)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: Push((int) 542146)
0x45c: Push((int) 30660)
0x45d: Push((int) 44459)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 44301)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Untrust"
0x466: Call2 0x216

0x467: Pop(1)
0x468: Push((int) 542024)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 542025)
0x46e: Push((int) 30660)
0x46f: Push((int) 44302)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Push((int) 542143)
0x473: Push((int) 44457)
0x474: Push((int) 44456)
0x475: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: Return(); Pop(0)

0x478: Push((int) 44457)
0x479: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x47b: PushEmpty(string)
0x47c: Stack[-1] = "Neutral"
0x47d: Call2 0x216

0x47e: Pop(1)
0x47f: Push((int) 542144)
0x480: @@ SetMessage(Stack[-1])
0x481: Pop(1)
0x482: @@ ClearReplies()
0x483: Pop(0)
0x484: Push((int) 542147)
0x485: Push((int) 30660)
0x486: Push((int) 44462)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 30660)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Fear"
0x48f: Call2 0x216

0x490: Pop(1)
0x491: Push((int) 529209)
0x492: @@ SetMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ ClearReplies()
0x495: Pop(0)
0x496: Push((int) 529210)
0x497: Push((int) 30662)
0x498: Push((int) 30661)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: Push((int) 30662)
0x49d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Sly"
0x4a1: Call2 0x216

0x4a2: Pop(1)
0x4a3: Push((int) 529211)
0x4a4: @@ SetMessage(Stack[-1])
0x4a5: Pop(1)
0x4a6: @@ ClearReplies()
0x4a7: Pop(0)
0x4a8: Push((int) 525240)
0x4a9: Push((int) 26609)
0x4aa: Push((int) 26608)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Push((int) 542150)
0x4ae: Push((int) 44466)
0x4af: Push((int) 44465)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 44466)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Neutral"
0x4b8: Call2 0x216

0x4b9: Pop(1)
0x4ba: Push((int) 542151)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: Push((int) 542152)
0x4c0: Push((int) 44468)
0x4c1: Push((int) 44467)
0x4c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c3: Pop(3)
0x4c4: Return(); Pop(0)

0x4c5: Push((int) 44468)
0x4c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = "Neutral"
0x4ca: Call2 0x216

0x4cb: Pop(1)
0x4cc: Push((int) 542153)
0x4cd: @@ SetMessage(Stack[-1])
0x4ce: Pop(1)
0x4cf: @@ ClearReplies()
0x4d0: Pop(0)
0x4d1: Push((int) 542154)
0x4d2: Push((int) 26609)
0x4d3: Push((int) 44469)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Push((int) 26609)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Sly"
0x4dc: Call2 0x216

0x4dd: Pop(1)
0x4de: Push((int) 525241)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: Push((int) 542022)
0x4e4: Push((int) 44300)
0x4e5: Push((int) 44299)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 44300)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Untrust"
0x4ee: Call2 0x216

0x4ef: Pop(1)
0x4f0: Push((int) 542023)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 542155)
0x4f6: Push((int) 44472)
0x4f7: Push((int) 44471)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 44472)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4fe: PushEmpty(string)
0x4ff: Stack[-1] = "Neutral"
0x500: Call2 0x216

0x501: Pop(1)
0x502: Push((int) 542156)
0x503: @@ SetMessage(Stack[-1])
0x504: Pop(1)
0x505: @@ ClearReplies()
0x506: Pop(0)
0x507: Push((int) 525242)
0x508: Push((int) -1)
0x509: Push((int) 26610)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Push((int) 542157)
0x50d: Push((int) -1)
0x50e: Push((int) 44473)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Return(); Pop(0)

0x512: Push((int) 44260)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x515: Push((int) 44263)
0x516: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x518: PushEmpty(string)
0x519: Stack[-1] = "Sly"
0x51a: Call2 0x216

0x51b: Pop(1)
0x51c: Push((int) 541996)
0x51d: @@ SetMessage(Stack[-1])
0x51e: Pop(1)
0x51f: @@ ClearReplies()
0x520: Pop(0)
0x521: Push((int) 541997)
0x522: Push((int) 44250)
0x523: Push((int) 44264)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 44250)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Untrust"
0x52c: Call2 0x216

0x52d: Pop(1)
0x52e: Push((int) 541985)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: Push((int) 541986)
0x534: Push((int) 26707)
0x535: Push((int) 44251)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: Push((int) 541998)
0x539: Push((int) 44252)
0x53a: Push((int) 44266)
0x53b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53c: Pop(3)
0x53d: Return(); Pop(0)

0x53e: Push((int) 44252)
0x53f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x541: PushEmpty(string)
0x542: Stack[-1] = "Neutral"
0x543: Call2 0x216

0x544: Pop(1)
0x545: Push((int) 541987)
0x546: @@ SetMessage(Stack[-1])
0x547: Pop(1)
0x548: @@ ClearReplies()
0x549: Pop(0)
0x54a: Push((int) 541988)
0x54b: Push((int) 44268)
0x54c: Push((int) 44253)
0x54d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54e: Pop(3)
0x54f: Push((int) 542001)
0x550: Push((int) 26707)
0x551: Push((int) 44270)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: Push((int) 26707)
0x556: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x558: PushEmpty(string)
0x559: Stack[-1] = "Untrust"
0x55a: Call2 0x216

0x55b: Pop(1)
0x55c: Push((int) 525339)
0x55d: @@ SetMessage(Stack[-1])
0x55e: Pop(1)
0x55f: @@ ClearReplies()
0x560: Pop(0)
0x561: Push((int) 541989)
0x562: Push((int) 44268)
0x563: Push((int) 44254)
0x564: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x565: Pop(3)
0x566: Push((int) 542002)
0x567: Push((int) 44273)
0x568: Push((int) 44272)
0x569: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56a: Pop(3)
0x56b: Return(); Pop(0)

0x56c: Push((int) 44273)
0x56d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x56f: PushEmpty(string)
0x570: Stack[-1] = "Neutral"
0x571: Call2 0x216

0x572: Pop(1)
0x573: Push((int) 542003)
0x574: @@ SetMessage(Stack[-1])
0x575: Pop(1)
0x576: @@ ClearReplies()
0x577: Pop(0)
0x578: Push((int) 542004)
0x579: Push((int) 44268)
0x57a: Push((int) 44274)
0x57b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57c: Pop(3)
0x57d: Push((int) 542005)
0x57e: Push((int) 44276)
0x57f: Push((int) 44275)
0x580: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x581: Pop(3)
0x582: Return(); Pop(0)

0x583: Push((int) 44276)
0x584: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x586: PushEmpty(string)
0x587: Stack[-1] = "Untrust"
0x588: Call2 0x216

0x589: Pop(1)
0x58a: Push((int) 542006)
0x58b: @@ SetMessage(Stack[-1])
0x58c: Pop(1)
0x58d: @@ ClearReplies()
0x58e: Pop(0)
0x58f: Push((int) 542007)
0x590: Push((int) -1)
0x591: Push((int) 44277)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: Push((int) 542008)
0x595: Push((int) 44255)
0x596: Push((int) 44278)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Return(); Pop(0)

0x59a: Push((int) 44268)
0x59b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x59d: PushEmpty(string)
0x59e: Stack[-1] = "Sly"
0x59f: Call2 0x216

0x5a0: Pop(1)
0x5a1: Push((int) 541999)
0x5a2: @@ SetMessage(Stack[-1])
0x5a3: Pop(1)
0x5a4: @@ ClearReplies()
0x5a5: Pop(0)
0x5a6: Push((int) 542000)
0x5a7: Push((int) 44255)
0x5a8: Push((int) 44269)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Push((int) 542009)
0x5ac: Push((int) 44286)
0x5ad: Push((int) 44281)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Return(); Pop(0)

0x5b1: Push((int) 44255)
0x5b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Sly"
0x5b6: Call2 0x216

0x5b7: Pop(1)
0x5b8: Push((int) 541990)
0x5b9: @@ SetMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: @@ ClearReplies()
0x5bc: Pop(0)
0x5bd: Push((int) 542010)
0x5be: Push((int) 44284)
0x5bf: Push((int) 44283)
0x5c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c1: Pop(3)
0x5c2: Push((int) 542012)
0x5c3: Push((int) 44286)
0x5c4: Push((int) 44285)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 44286)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Rage"
0x5cd: Call2 0x216

0x5ce: Pop(1)
0x5cf: Push((int) 542013)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 542015)
0x5d5: Push((int) -1)
0x5d6: Push((int) 44290)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Push((int) 542014)
0x5da: Push((int) 44284)
0x5db: Push((int) 44289)
0x5dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: Return(); Pop(0)

0x5df: Push((int) 44284)
0x5e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5e2: PushEmpty(string)
0x5e3: Stack[-1] = "Sly"
0x5e4: Call2 0x216

0x5e5: Pop(1)
0x5e6: Push((int) 542011)
0x5e7: @@ SetMessage(Stack[-1])
0x5e8: Pop(1)
0x5e9: @@ ClearReplies()
0x5ea: Pop(0)
0x5eb: Push((int) 541991)
0x5ec: Push((int) 44257)
0x5ed: Push((int) 44256)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: Push((int) 542016)
0x5f1: Push((int) 44293)
0x5f2: Push((int) 44292)
0x5f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: Return(); Pop(0)

0x5f6: Push((int) 44293)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Rage"
0x5fb: Call2 0x216

0x5fc: Pop(1)
0x5fd: Push((int) 542017)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 542018)
0x603: Push((int) 44297)
0x604: Push((int) 44294)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 542019)
0x608: Push((int) 44257)
0x609: Push((int) 44295)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Return(); Pop(0)

0x60d: Push((int) 44297)
0x60e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x610: PushEmpty(string)
0x611: Stack[-1] = "Sly"
0x612: Call2 0x216

0x613: Pop(1)
0x614: Push((int) 542020)
0x615: @@ SetMessage(Stack[-1])
0x616: Pop(1)
0x617: @@ ClearReplies()
0x618: Pop(0)
0x619: Push((int) 542021)
0x61a: Push((int) 44257)
0x61b: Push((int) 44298)
0x61c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(3)
0x61e: Return(); Pop(0)

0x61f: Push((int) 44257)
0x620: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x622: PushEmpty(string)
0x623: Stack[-1] = "Neutral"
0x624: Call2 0x216

0x625: Pop(1)
0x626: Push((int) 541992)
0x627: @@ SetMessage(Stack[-1])
0x628: Pop(1)
0x629: @@ ClearReplies()
0x62a: Pop(0)
0x62b: Push((int) 525340)
0x62c: Push((int) -1)
0x62d: Push((int) 26708)
0x62e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62f: Pop(3)
0x630: Push((int) 525341)
0x631: Push((int) -1)
0x632: Push((int) 26709)
0x633: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x634: Pop(3)
0x635: Return(); Pop(0)

0x636: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x637: PushEmpty(bool)
0x638: Call2 0x111f

0x639: Pop(0)
0x63a: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63b: @ lshStopAnimation()
0x63c: Pop(0)
0x63d: GOTO 0x640

0x63e: @ StopAnimation()
0x63f: Pop(0)
0x640: Return(); Pop(0)

0x641: GOTO 0x22d

0x642: Return(); Pop(0)

0x643: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x644: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x645: PushEmpty(bool, object, float)
0x646: Stack[-2] = Stack[-12]
0x647: Stack[-1] = (float) 70.0
0x648: Call2 0xf4b

0x649: Pop(2)
0x64a: Pop(1); Push((bool) Stack[-1] == 0)
0x64b: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64c: Stack[-10] = (int) -2
0x64d: Return(); Pop(8)

0x64e: @ CreateDialog(Stack[-4])
0x64f: Pop(0)
0x650: PushEmpty(int)
0x651: Call2 0x1119

0x652: Pop(0)
0x653: @@ SetNPCName(Stack[-1])
0x654: Pop(1)
0x655: PushEmpty(int)
0x656: Call2 0x1117

0x657: Pop(0)
0x658: @@ SetNPCDescription(Stack[-1])
0x659: Pop(1)
0x65a: PushEmpty(string)
0x65b: Call2 0x111b

0x65c: Pop(0)
0x65d: @@ SetPhoto(Stack[-1])
0x65e: Pop(1)
0x65f: PushEmpty(string)
0x660: Call2 0x111d

0x661: Pop(0)
0x662: @@ SetPhoto2(Stack[-1])
0x663: Pop(1)
0x664: PushEmpty(int)
0x665: Call2 0x1372

0x666: Pop(0)
0x667: @@ SetPlayerName(Stack[-1])
0x668: Pop(1)
0x669: Stack[-2] = (int) -1
0x66a: @ IsOverrideActive(Stack[-3])
0x66b: Pop(0)
0x66c: Push(Stack[-3])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-10] = (int) -2
0x66f: Return(); Pop(8)

0x670: @ DoDialog(Stack[-4])
0x671: Pop(0)
0x672: PushEmpty(bool, object)
0x673: PushEmpty(object)
0x674: Call2 0x105f

0x675: Stack[-2] = Stack[-1]
0x676: Pop(1)
0x677: Call2 0xfa0

0x678: Pop(2)
0x679: PushEmpty(object, object)
0x67a: Stack[-2] = Stack[-11]
0x67b: Stack[-1] = Stack[-6]
0x67c: Push(-2, 4); TaskCall(7)
0x67d: Call2 0x694

0x67e: Pop(-2, 4); TaskReturn
0x67f: Pop(2)
0x680: @@ IsDialogEnd(Stack[-1])
0x681: Pop(0)
0x682: Pop(0); Push((bool) Stack[-1] == 0)
0x683: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x684: @ sync()
0x685: Pop(0)
0x686: @@ IsDialogEnd(Stack[-1])
0x687: Pop(0)
0x688: GOTO 0x682

0x689: PushEmpty(object)
0x68a: Stack[-1] = Stack[-10]
0x68b: Call2 0xf8f

0x68c: Pop(1)
0x68d: @ StopDialog(Stack[-4])
0x68e: Pop(0)
0x68f: @@ GetReturnValue(Stack[-2])
0x690: Pop(0)
0x691: Stack[-10] = Stack[-2]
0x692: Return(); Pop(8)

0x693: Stack[-4] = 0
0x694: PushEmpty()
0x695: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x696: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x697: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x698: Push((int) 1)
0x699: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x69a: PushEmpty(string)
0x69b: Stack[-1] = "Neutral"
0x69c: Call2 0x6dc

0x69d: Pop(1)
0x69e: Push((int) 525414)
0x69f: @@ SetMessage(Stack[-1])
0x6a0: Pop(1)
0x6a1: @@ ClearReplies()
0x6a2: Pop(0)
0x6a3: PushEmpty(bool)
0x6a4: Stack[-1] = (bool) 0
0x6a5: PushEmpty(bool, object)
0x6a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a7: Call2 0x123b

0x6a8: Pop(1)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6aa: PushEmpty(bool, object)
0x6ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ac: Call2 0x1247

0x6ad: Pop(1)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6af: Stack[-1] = (bool) 1
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b1: Push((int) 525415)
0x6b2: Push((int) 42567)
0x6b3: Push((int) 26783)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Push((int) 525418)
0x6b7: Push((int) -1)
0x6b8: Push((int) 26786)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: GOTO 0x6be

0x6bc: Return(); Pop(0)

0x6bd: GOTO 0x698

0x6be: PushEmpty(bool)
0x6bf: Call2 0x111f

0x6c0: Pop(0)
0x6c1: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6c2: @ lshWaitForAnimEnd()
0x6c3: Pop(0)
0x6c4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: GOTO 0x6cc

0x6c7: PushEmpty(string)
0x6c8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6c9: Call2 0x102a

0x6ca: Pop(1)
0x6cb: GOTO 0x6c2

0x6cc: GOTO 0x6db

0x6cd: Push("all")
0x6ce: Push("idle")
0x6cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d0: Pop(2)
0x6d1: @ WaitForAnimEnd()
0x6d2: Pop(0)
0x6d3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: GOTO 0x6db

0x6d6: Push("all")
0x6d7: Push("idle")
0x6d8: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d9: Pop(2)
0x6da: GOTO 0x6d1

0x6db: Return(); Pop(0)

0x6dc: PushEmpty()
0x6dd: PushEmpty(bool)
0x6de: Call2 0x111f

0x6df: Pop(0)
0x6e0: Pop(1); Push((bool) Stack[-1] == 0)
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e2: Return(); Pop(0)

0x6e3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e5: Return(); Pop(0)

0x6e6: PushEmpty(string, bool)
0x6e7: Stack[-2] = Stack[-3]
0x6e8: Push("")
0x6e9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6eb: Stack[-1] = (bool) 0
0x6ec: GOTO 0x6ee

0x6ed: Stack[-1] = (bool) 1
0x6ee: Call2 0x103a

0x6ef: Pop(2)
0x6f0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6f1: Return(); Pop(0)

0x6f2: PushEmpty()
0x6f3: Push((int) 1)
0x6f4: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x6f5: PushEmpty()
0x6f6: Call2 0x1058

0x6f7: Pop(0)
0x6f8: Push((int) 26783)
0x6f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fb: PushEmpty(object, object)
0x6fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fe: Call2 0x1191

0x6ff: Pop(2)
0x700: Push((int) 26782)
0x701: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x703: PushEmpty(string)
0x704: Stack[-1] = "Neutral"
0x705: Call2 0x6dc

0x706: Pop(1)
0x707: Push((int) 525414)
0x708: @@ SetMessage(Stack[-1])
0x709: Pop(1)
0x70a: @@ ClearReplies()
0x70b: Pop(0)
0x70c: PushEmpty(bool)
0x70d: Stack[-1] = (bool) 0
0x70e: PushEmpty(bool, object)
0x70f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x710: Call2 0x123b

0x711: Pop(1)
0x712: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x1247

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Stack[-1] = (bool) 1
0x719: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71a: Push((int) 525415)
0x71b: Push((int) 42567)
0x71c: Push((int) 26783)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: Push((int) 525418)
0x720: Push((int) -1)
0x721: Push((int) 26786)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: Return(); Pop(0)

0x725: Push((int) 42567)
0x726: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x728: PushEmpty(string)
0x729: Stack[-1] = "Untrust"
0x72a: Call2 0x6dc

0x72b: Pop(1)
0x72c: Push((int) 540558)
0x72d: @@ SetMessage(Stack[-1])
0x72e: Pop(1)
0x72f: @@ ClearReplies()
0x730: Pop(0)
0x731: Push((int) 540559)
0x732: Push((int) 26784)
0x733: Push((int) 42568)
0x734: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x735: Pop(3)
0x736: Push((int) 540560)
0x737: Push((int) 40922)
0x738: Push((int) 42569)
0x739: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: Return(); Pop(0)

0x73c: Push((int) 26784)
0x73d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x73f: PushEmpty(string)
0x740: Stack[-1] = "Untrust"
0x741: Call2 0x6dc

0x742: Pop(1)
0x743: Push((int) 525416)
0x744: @@ SetMessage(Stack[-1])
0x745: Pop(1)
0x746: @@ ClearReplies()
0x747: Pop(0)
0x748: Push((int) 525417)
0x749: Push((int) 40922)
0x74a: Push((int) 26785)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Push((int) 540561)
0x74e: Push((int) 40924)
0x74f: Push((int) 42571)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Return(); Pop(0)

0x753: Push((int) 40922)
0x754: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x756: PushEmpty(string)
0x757: Stack[-1] = "Fear"
0x758: Call2 0x6dc

0x759: Pop(1)
0x75a: Push((int) 538982)
0x75b: @@ SetMessage(Stack[-1])
0x75c: Pop(1)
0x75d: @@ ClearReplies()
0x75e: Pop(0)
0x75f: Push((int) 538983)
0x760: Push((int) 40924)
0x761: Push((int) 40923)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 40924)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call2 0x6dc

0x76b: Pop(1)
0x76c: Push((int) 538984)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: Push((int) 538985)
0x772: Push((int) 40926)
0x773: Push((int) 40925)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Push((int) 538988)
0x777: Push((int) 40929)
0x778: Push((int) 40928)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Return(); Pop(0)

0x77c: Push((int) 40929)
0x77d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x77f: PushEmpty(string)
0x780: Stack[-1] = "Untrust"
0x781: Call2 0x6dc

0x782: Pop(1)
0x783: Push((int) 538989)
0x784: @@ SetMessage(Stack[-1])
0x785: Pop(1)
0x786: @@ ClearReplies()
0x787: Pop(0)
0x788: Push((int) 540565)
0x789: Push((int) 42578)
0x78a: Push((int) 42577)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Push((int) 538990)
0x78e: Push((int) 40931)
0x78f: Push((int) 40930)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 40931)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Fear"
0x798: Call2 0x6dc

0x799: Pop(1)
0x79a: Push((int) 538991)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 538992)
0x7a0: Push((int) -1)
0x7a1: Push((int) 40932)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Push((int) 540575)
0x7a5: Push((int) -1)
0x7a6: Push((int) 42589)
0x7a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a8: Pop(3)
0x7a9: Return(); Pop(0)

0x7aa: Push((int) 40926)
0x7ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Untrust"
0x7af: Call2 0x6dc

0x7b0: Pop(1)
0x7b1: Push((int) 538986)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: Push((int) 538987)
0x7b7: Push((int) 42573)
0x7b8: Push((int) 40927)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Return(); Pop(0)

0x7bc: Push((int) 42573)
0x7bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7bf: PushEmpty(string)
0x7c0: Stack[-1] = "Rage"
0x7c1: Call2 0x6dc

0x7c2: Pop(1)
0x7c3: Push((int) 540562)
0x7c4: @@ SetMessage(Stack[-1])
0x7c5: Pop(1)
0x7c6: @@ ClearReplies()
0x7c7: Pop(0)
0x7c8: Push((int) 540563)
0x7c9: Push((int) 40929)
0x7ca: Push((int) 42574)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: Push((int) 540564)
0x7ce: Push((int) 42578)
0x7cf: Push((int) 42576)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: Return(); Pop(0)

0x7d3: Push((int) 42578)
0x7d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d6: PushEmpty(string)
0x7d7: Stack[-1] = "Rage"
0x7d8: Call2 0x6dc

0x7d9: Pop(1)
0x7da: Push((int) 540566)
0x7db: @@ SetMessage(Stack[-1])
0x7dc: Pop(1)
0x7dd: @@ ClearReplies()
0x7de: Pop(0)
0x7df: Push((int) 540592)
0x7e0: Push((int) 42607)
0x7e1: Push((int) 42606)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 42607)
0x7e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = "Rage"
0x7ea: Call2 0x6dc

0x7eb: Pop(1)
0x7ec: Push((int) 540593)
0x7ed: @@ SetMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: @@ ClearReplies()
0x7f0: Pop(0)
0x7f1: Push((int) 540594)
0x7f2: Push((int) 42609)
0x7f3: Push((int) 42608)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Push((int) 540601)
0x7f7: Push((int) -1)
0x7f8: Push((int) 42615)
0x7f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fa: Pop(3)
0x7fb: Return(); Pop(0)

0x7fc: Push((int) 42609)
0x7fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x7ff: PushEmpty(string)
0x800: Stack[-1] = "Neutral"
0x801: Call2 0x6dc

0x802: Pop(1)
0x803: Push((int) 540595)
0x804: @@ SetMessage(Stack[-1])
0x805: Pop(1)
0x806: @@ ClearReplies()
0x807: Pop(0)
0x808: Push((int) 540596)
0x809: Push((int) 42611)
0x80a: Push((int) 42610)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Return(); Pop(0)

0x80e: Push((int) 42611)
0x80f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x811: PushEmpty(string)
0x812: Stack[-1] = "Neutral"
0x813: Call2 0x6dc

0x814: Pop(1)
0x815: Push((int) 540597)
0x816: @@ SetMessage(Stack[-1])
0x817: Pop(1)
0x818: @@ ClearReplies()
0x819: Pop(0)
0x81a: Push((int) 540600)
0x81b: Push((int) -1)
0x81c: Push((int) 42614)
0x81d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: Return(); Pop(0)

0x820: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x821: PushEmpty(bool)
0x822: Call2 0x111f

0x823: Pop(0)
0x824: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x825: @ lshStopAnimation()
0x826: Pop(0)
0x827: GOTO 0x82a

0x828: @ StopAnimation()
0x829: Pop(0)
0x82a: Return(); Pop(0)

0x82b: GOTO 0x6f3

0x82c: Return(); Pop(0)

0x82d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x82e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x82f: PushEmpty(bool, object, float)
0x830: Stack[-2] = Stack[-12]
0x831: Stack[-1] = (float) 70.0
0x832: Call2 0xf4b

0x833: Pop(2)
0x834: Pop(1); Push((bool) Stack[-1] == 0)
0x835: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x836: Stack[-10] = (int) -2
0x837: Return(); Pop(8)

0x838: @ CreateDialog(Stack[-4])
0x839: Pop(0)
0x83a: PushEmpty(int)
0x83b: Call2 0x1119

0x83c: Pop(0)
0x83d: @@ SetNPCName(Stack[-1])
0x83e: Pop(1)
0x83f: PushEmpty(int)
0x840: Call2 0x1117

0x841: Pop(0)
0x842: @@ SetNPCDescription(Stack[-1])
0x843: Pop(1)
0x844: PushEmpty(string)
0x845: Call2 0x111b

0x846: Pop(0)
0x847: @@ SetPhoto(Stack[-1])
0x848: Pop(1)
0x849: PushEmpty(string)
0x84a: Call2 0x111d

0x84b: Pop(0)
0x84c: @@ SetPhoto2(Stack[-1])
0x84d: Pop(1)
0x84e: PushEmpty(int)
0x84f: Call2 0x1372

0x850: Pop(0)
0x851: @@ SetPlayerName(Stack[-1])
0x852: Pop(1)
0x853: Stack[-2] = (int) -1
0x854: @ IsOverrideActive(Stack[-3])
0x855: Pop(0)
0x856: Push(Stack[-3])
0x857: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x858: Stack[-10] = (int) -2
0x859: Return(); Pop(8)

0x85a: @ DoDialog(Stack[-4])
0x85b: Pop(0)
0x85c: PushEmpty(bool, object)
0x85d: PushEmpty(object)
0x85e: Call2 0x105f

0x85f: Stack[-2] = Stack[-1]
0x860: Pop(1)
0x861: Call2 0xfa0

0x862: Pop(2)
0x863: PushEmpty(object, object)
0x864: Stack[-2] = Stack[-11]
0x865: Stack[-1] = Stack[-6]
0x866: Push(-2, 4); TaskCall(9)
0x867: Call2 0x87e

0x868: Pop(-2, 4); TaskReturn
0x869: Pop(2)
0x86a: @@ IsDialogEnd(Stack[-1])
0x86b: Pop(0)
0x86c: Pop(0); Push((bool) Stack[-1] == 0)
0x86d: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x86e: @ sync()
0x86f: Pop(0)
0x870: @@ IsDialogEnd(Stack[-1])
0x871: Pop(0)
0x872: GOTO 0x86c

0x873: PushEmpty(object)
0x874: Stack[-1] = Stack[-10]
0x875: Call2 0xf8f

0x876: Pop(1)
0x877: @ StopDialog(Stack[-4])
0x878: Pop(0)
0x879: @@ GetReturnValue(Stack[-2])
0x87a: Pop(0)
0x87b: Stack[-10] = Stack[-2]
0x87c: Return(); Pop(8)

0x87d: Stack[-4] = 0
0x87e: PushEmpty()
0x87f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x880: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x881: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x882: Push((int) 1)
0x883: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x884: PushEmpty(string)
0x885: Stack[-1] = "Neutral"
0x886: Call2 0x8b8

0x887: Pop(1)
0x888: Push((int) 525513)
0x889: @@ SetMessage(Stack[-1])
0x88a: Pop(1)
0x88b: @@ ClearReplies()
0x88c: Pop(0)
0x88d: Push((int) 525514)
0x88e: Push((int) 30738)
0x88f: Push((int) 26870)
0x890: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x891: Pop(3)
0x892: Push((int) 529284)
0x893: Push((int) 30738)
0x894: Push((int) 30737)
0x895: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: GOTO 0x89a

0x898: Return(); Pop(0)

0x899: GOTO 0x882

0x89a: PushEmpty(bool)
0x89b: Call2 0x111f

0x89c: Pop(0)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x89e: @ lshWaitForAnimEnd()
0x89f: Pop(0)
0x8a0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: GOTO 0x8a8

0x8a3: PushEmpty(string)
0x8a4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a5: Call2 0x102a

0x8a6: Pop(1)
0x8a7: GOTO 0x89e

0x8a8: GOTO 0x8b7

0x8a9: Push("all")
0x8aa: Push("idle")
0x8ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ac: Pop(2)
0x8ad: @ WaitForAnimEnd()
0x8ae: Pop(0)
0x8af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8b1: GOTO 0x8b7

0x8b2: Push("all")
0x8b3: Push("idle")
0x8b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b5: Pop(2)
0x8b6: GOTO 0x8ad

0x8b7: Return(); Pop(0)

0x8b8: PushEmpty()
0x8b9: PushEmpty(bool)
0x8ba: Call2 0x111f

0x8bb: Pop(0)
0x8bc: Pop(1); Push((bool) Stack[-1] == 0)
0x8bd: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8be: Return(); Pop(0)

0x8bf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8c1: Return(); Pop(0)

0x8c2: PushEmpty(string, bool)
0x8c3: Stack[-2] = Stack[-3]
0x8c4: Push("")
0x8c5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c7: Stack[-1] = (bool) 0
0x8c8: GOTO 0x8ca

0x8c9: Stack[-1] = (bool) 1
0x8ca: Call2 0x103a

0x8cb: Pop(2)
0x8cc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8cd: Return(); Pop(0)

0x8ce: PushEmpty()
0x8cf: Push((int) 1)
0x8d0: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x8d1: PushEmpty()
0x8d2: Call2 0x1058

0x8d3: Pop(0)
0x8d4: Push((int) 26869)
0x8d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d6: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8d7: PushEmpty(string)
0x8d8: Stack[-1] = "Neutral"
0x8d9: Call2 0x8b8

0x8da: Pop(1)
0x8db: Push((int) 525513)
0x8dc: @@ SetMessage(Stack[-1])
0x8dd: Pop(1)
0x8de: @@ ClearReplies()
0x8df: Pop(0)
0x8e0: Push((int) 525514)
0x8e1: Push((int) 30738)
0x8e2: Push((int) 26870)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Push((int) 529284)
0x8e6: Push((int) 30738)
0x8e7: Push((int) 30737)
0x8e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(3)
0x8ea: Return(); Pop(0)

0x8eb: Push((int) 30738)
0x8ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call2 0x8b8

0x8f1: Pop(1)
0x8f2: Push((int) 529285)
0x8f3: @@ SetMessage(Stack[-1])
0x8f4: Pop(1)
0x8f5: @@ ClearReplies()
0x8f6: Pop(0)
0x8f7: Push((int) 529286)
0x8f8: Push((int) -1)
0x8f9: Push((int) 30740)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Push((int) 529287)
0x8fd: Push((int) -1)
0x8fe: Push((int) 30741)
0x8ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x900: Pop(3)
0x901: Return(); Pop(0)

0x902: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x903: PushEmpty(bool)
0x904: Call2 0x111f

0x905: Pop(0)
0x906: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x907: @ lshStopAnimation()
0x908: Pop(0)
0x909: GOTO 0x90c

0x90a: @ StopAnimation()
0x90b: Pop(0)
0x90c: Return(); Pop(0)

0x90d: GOTO 0x8cf

0x90e: Return(); Pop(0)

0x90f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x910: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x911: PushEmpty(bool, object, float)
0x912: Stack[-2] = Stack[-12]
0x913: Stack[-1] = (float) 70.0
0x914: Call2 0xf4b

0x915: Pop(2)
0x916: Pop(1); Push((bool) Stack[-1] == 0)
0x917: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x918: Stack[-10] = (int) -2
0x919: Return(); Pop(8)

0x91a: @ CreateDialog(Stack[-4])
0x91b: Pop(0)
0x91c: PushEmpty(int)
0x91d: Call2 0x1119

0x91e: Pop(0)
0x91f: @@ SetNPCName(Stack[-1])
0x920: Pop(1)
0x921: PushEmpty(int)
0x922: Call2 0x1117

0x923: Pop(0)
0x924: @@ SetNPCDescription(Stack[-1])
0x925: Pop(1)
0x926: PushEmpty(string)
0x927: Call2 0x111b

0x928: Pop(0)
0x929: @@ SetPhoto(Stack[-1])
0x92a: Pop(1)
0x92b: PushEmpty(string)
0x92c: Call2 0x111d

0x92d: Pop(0)
0x92e: @@ SetPhoto2(Stack[-1])
0x92f: Pop(1)
0x930: PushEmpty(int)
0x931: Call2 0x1372

0x932: Pop(0)
0x933: @@ SetPlayerName(Stack[-1])
0x934: Pop(1)
0x935: Stack[-2] = (int) -1
0x936: @ IsOverrideActive(Stack[-3])
0x937: Pop(0)
0x938: Push(Stack[-3])
0x939: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x93a: Stack[-10] = (int) -2
0x93b: Return(); Pop(8)

0x93c: @ DoDialog(Stack[-4])
0x93d: Pop(0)
0x93e: PushEmpty(bool, object)
0x93f: PushEmpty(object)
0x940: Call2 0x105f

0x941: Stack[-2] = Stack[-1]
0x942: Pop(1)
0x943: Call2 0xfa0

0x944: Pop(2)
0x945: PushEmpty(object, object)
0x946: Stack[-2] = Stack[-11]
0x947: Stack[-1] = Stack[-6]
0x948: Push(-2, 4); TaskCall(11)
0x949: Call2 0x960

0x94a: Pop(-2, 4); TaskReturn
0x94b: Pop(2)
0x94c: @@ IsDialogEnd(Stack[-1])
0x94d: Pop(0)
0x94e: Pop(0); Push((bool) Stack[-1] == 0)
0x94f: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x950: @ sync()
0x951: Pop(0)
0x952: @@ IsDialogEnd(Stack[-1])
0x953: Pop(0)
0x954: GOTO 0x94e

0x955: PushEmpty(object)
0x956: Stack[-1] = Stack[-10]
0x957: Call2 0xf8f

0x958: Pop(1)
0x959: @ StopDialog(Stack[-4])
0x95a: Pop(0)
0x95b: @@ GetReturnValue(Stack[-2])
0x95c: Pop(0)
0x95d: Stack[-10] = Stack[-2]
0x95e: Return(); Pop(8)

0x95f: Stack[-4] = 0
0x960: PushEmpty()
0x961: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x962: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x963: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x964: Push((int) 1)
0x965: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x966: PushEmpty(string)
0x967: Stack[-1] = "Neutral"
0x968: Call2 0x9b7

0x969: Pop(1)
0x96a: Push((int) 525841)
0x96b: @@ SetMessage(Stack[-1])
0x96c: Pop(1)
0x96d: @@ ClearReplies()
0x96e: Pop(0)
0x96f: PushEmpty(bool)
0x970: Stack[-1] = (bool) 0
0x971: PushEmpty(bool, object)
0x972: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x973: Call2 0x1253

0x974: Pop(1)
0x975: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x976: PushEmpty(bool, object)
0x977: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x978: Call2 0x125f

0x979: Pop(1)
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: Stack[-1] = (bool) 1
0x97c: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97d: Push((int) 525842)
0x97e: Push((int) 30544)
0x97f: Push((int) 27141)
0x980: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x981: Pop(3)
0x982: PushEmpty(bool, object)
0x983: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x984: Call2 0x1283

0x985: Pop(1)
0x986: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x987: Push((int) 525845)
0x988: Push((int) 30542)
0x989: Push((int) 27144)
0x98a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98b: Pop(3)
0x98c: Push((int) 529095)
0x98d: Push((int) -1)
0x98e: Push((int) 30540)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Push((int) 529096)
0x992: Push((int) -1)
0x993: Push((int) 30541)
0x994: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x995: Pop(3)
0x996: GOTO 0x999

0x997: Return(); Pop(0)

0x998: GOTO 0x964

0x999: PushEmpty(bool)
0x99a: Call2 0x111f

0x99b: Pop(0)
0x99c: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x99d: @ lshWaitForAnimEnd()
0x99e: Pop(0)
0x99f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a1: GOTO 0x9a7

0x9a2: PushEmpty(string)
0x9a3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a4: Call2 0x102a

0x9a5: Pop(1)
0x9a6: GOTO 0x99d

0x9a7: GOTO 0x9b6

0x9a8: Push("all")
0x9a9: Push("idle")
0x9aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x9ab: Pop(2)
0x9ac: @ WaitForAnimEnd()
0x9ad: Pop(0)
0x9ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9af: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9b0: GOTO 0x9b6

0x9b1: Push("all")
0x9b2: Push("idle")
0x9b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b4: Pop(2)
0x9b5: GOTO 0x9ac

0x9b6: Return(); Pop(0)

0x9b7: PushEmpty()
0x9b8: PushEmpty(bool)
0x9b9: Call2 0x111f

0x9ba: Pop(0)
0x9bb: Pop(1); Push((bool) Stack[-1] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Return(); Pop(0)

0x9be: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: Return(); Pop(0)

0x9c1: PushEmpty(string, bool)
0x9c2: Stack[-2] = Stack[-3]
0x9c3: Push("")
0x9c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c6: Stack[-1] = (bool) 0
0x9c7: GOTO 0x9c9

0x9c8: Stack[-1] = (bool) 1
0x9c9: Call2 0x103a

0x9ca: Pop(2)
0x9cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9cc: Return(); Pop(0)

0x9cd: PushEmpty()
0x9ce: Push((int) 1)
0x9cf: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0x9d0: PushEmpty()
0x9d1: Call2 0x1058

0x9d2: Pop(0)
0x9d3: Push((int) 27141)
0x9d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d6: PushEmpty(object, object)
0x9d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d9: Call2 0x1197

0x9da: Pop(2)
0x9db: Push((int) 27143)
0x9dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9de: PushEmpty(object, object)
0x9df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e1: Call2 0x119d

0x9e2: Pop(2)
0x9e3: Push((int) 27144)
0x9e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e6: PushEmpty(object, object)
0x9e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e9: Call2 0x11d3

0x9ea: Pop(2)
0x9eb: Push((int) 27140)
0x9ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0x9ee: PushEmpty(string)
0x9ef: Stack[-1] = "Neutral"
0x9f0: Call2 0x9b7

0x9f1: Pop(1)
0x9f2: Push((int) 525841)
0x9f3: @@ SetMessage(Stack[-1])
0x9f4: Pop(1)
0x9f5: @@ ClearReplies()
0x9f6: Pop(0)
0x9f7: PushEmpty(bool)
0x9f8: Stack[-1] = (bool) 0
0x9f9: PushEmpty(bool, object)
0x9fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fb: Call2 0x1253

0x9fc: Pop(1)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0x9fe: PushEmpty(bool, object)
0x9ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa00: Call2 0x125f

0xa01: Pop(1)
0xa02: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa03: Stack[-1] = (bool) 1
0xa04: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa05: Push((int) 525842)
0xa06: Push((int) 30544)
0xa07: Push((int) 27141)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: PushEmpty(bool, object)
0xa0b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0c: Call2 0x1283

0xa0d: Pop(1)
0xa0e: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa0f: Push((int) 525845)
0xa10: Push((int) 30542)
0xa11: Push((int) 27144)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: Push((int) 529095)
0xa15: Push((int) -1)
0xa16: Push((int) 30540)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Push((int) 529096)
0xa1a: Push((int) -1)
0xa1b: Push((int) 30541)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Return(); Pop(0)

0xa1f: Push((int) 30542)
0xa20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa22: PushEmpty(string)
0xa23: Stack[-1] = "Untrust"
0xa24: Call2 0x9b7

0xa25: Pop(1)
0xa26: Push((int) 529097)
0xa27: @@ SetMessage(Stack[-1])
0xa28: Pop(1)
0xa29: @@ ClearReplies()
0xa2a: Pop(0)
0xa2b: Push((int) 529098)
0xa2c: Push((int) -1)
0xa2d: Push((int) 30543)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Push((int) 541643)
0xa31: Push((int) -1)
0xa32: Push((int) 43815)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: Return(); Pop(0)

0xa36: Push((int) 30544)
0xa37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa39: PushEmpty(string)
0xa3a: Stack[-1] = "Sly"
0xa3b: Call2 0x9b7

0xa3c: Pop(1)
0xa3d: Push((int) 529099)
0xa3e: @@ SetMessage(Stack[-1])
0xa3f: Pop(1)
0xa40: @@ ClearReplies()
0xa41: Pop(0)
0xa42: Push((int) 529100)
0xa43: Push((int) 30546)
0xa44: Push((int) 30545)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Return(); Pop(0)

0xa48: Push((int) 30546)
0xa49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa4b: PushEmpty(string)
0xa4c: Stack[-1] = "Sly"
0xa4d: Call2 0x9b7

0xa4e: Pop(1)
0xa4f: Push((int) 529101)
0xa50: @@ SetMessage(Stack[-1])
0xa51: Pop(1)
0xa52: @@ ClearReplies()
0xa53: Pop(0)
0xa54: Push((int) 529102)
0xa55: Push((int) 27142)
0xa56: Push((int) 30547)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Return(); Pop(0)

0xa5a: Push((int) 27142)
0xa5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa5d: PushEmpty(string)
0xa5e: Stack[-1] = "Sly"
0xa5f: Call2 0x9b7

0xa60: Pop(1)
0xa61: Push((int) 525843)
0xa62: @@ SetMessage(Stack[-1])
0xa63: Pop(1)
0xa64: @@ ClearReplies()
0xa65: Pop(0)
0xa66: Push((int) 529103)
0xa67: Push((int) 30549)
0xa68: Push((int) 30548)
0xa69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6a: Pop(3)
0xa6b: Return(); Pop(0)

0xa6c: Push((int) 30549)
0xa6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Rage"
0xa71: Call2 0x9b7

0xa72: Pop(1)
0xa73: Push((int) 529104)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: Push((int) 529105)
0xa79: Push((int) 30551)
0xa7a: Push((int) 30550)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Push((int) 539587)
0xa7e: Push((int) 41533)
0xa7f: Push((int) 41532)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: Return(); Pop(0)

0xa83: Push((int) 41533)
0xa84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa86: PushEmpty(string)
0xa87: Stack[-1] = "Neutral"
0xa88: Call2 0x9b7

0xa89: Pop(1)
0xa8a: Push((int) 539588)
0xa8b: @@ SetMessage(Stack[-1])
0xa8c: Pop(1)
0xa8d: @@ ClearReplies()
0xa8e: Pop(0)
0xa8f: Push((int) 539589)
0xa90: Push((int) 30551)
0xa91: Push((int) 41534)
0xa92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa93: Pop(3)
0xa94: Return(); Pop(0)

0xa95: Push((int) 30551)
0xa96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa97: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xa98: PushEmpty(string)
0xa99: Stack[-1] = "Untrust"
0xa9a: Call2 0x9b7

0xa9b: Pop(1)
0xa9c: Push((int) 529106)
0xa9d: @@ SetMessage(Stack[-1])
0xa9e: Pop(1)
0xa9f: @@ ClearReplies()
0xaa0: Pop(0)
0xaa1: Push((int) 525844)
0xaa2: Push((int) -1)
0xaa3: Push((int) 27143)
0xaa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa5: Pop(3)
0xaa6: Return(); Pop(0)

0xaa7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaa8: PushEmpty(bool)
0xaa9: Call2 0x111f

0xaaa: Pop(0)
0xaab: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaac: @ lshStopAnimation()
0xaad: Pop(0)
0xaae: GOTO 0xab1

0xaaf: @ StopAnimation()
0xab0: Pop(0)
0xab1: Return(); Pop(0)

0xab2: GOTO 0x9ce

0xab3: Return(); Pop(0)

0xab4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xab5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xab6: PushEmpty(bool, object, float)
0xab7: Stack[-2] = Stack[-12]
0xab8: Stack[-1] = (float) 70.0
0xab9: Call2 0xf4b

0xaba: Pop(2)
0xabb: Pop(1); Push((bool) Stack[-1] == 0)
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-10] = (int) -2
0xabe: Return(); Pop(8)

0xabf: @ CreateDialog(Stack[-4])
0xac0: Pop(0)
0xac1: PushEmpty(int)
0xac2: Call2 0x1119

0xac3: Pop(0)
0xac4: @@ SetNPCName(Stack[-1])
0xac5: Pop(1)
0xac6: PushEmpty(int)
0xac7: Call2 0x1117

0xac8: Pop(0)
0xac9: @@ SetNPCDescription(Stack[-1])
0xaca: Pop(1)
0xacb: PushEmpty(string)
0xacc: Call2 0x111b

0xacd: Pop(0)
0xace: @@ SetPhoto(Stack[-1])
0xacf: Pop(1)
0xad0: PushEmpty(string)
0xad1: Call2 0x111d

0xad2: Pop(0)
0xad3: @@ SetPhoto2(Stack[-1])
0xad4: Pop(1)
0xad5: PushEmpty(int)
0xad6: Call2 0x1372

0xad7: Pop(0)
0xad8: @@ SetPlayerName(Stack[-1])
0xad9: Pop(1)
0xada: Stack[-2] = (int) -1
0xadb: @ IsOverrideActive(Stack[-3])
0xadc: Pop(0)
0xadd: Push(Stack[-3])
0xade: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xadf: Stack[-10] = (int) -2
0xae0: Return(); Pop(8)

0xae1: @ DoDialog(Stack[-4])
0xae2: Pop(0)
0xae3: PushEmpty(bool, object)
0xae4: PushEmpty(object)
0xae5: Call2 0x105f

0xae6: Stack[-2] = Stack[-1]
0xae7: Pop(1)
0xae8: Call2 0xfa0

0xae9: Pop(2)
0xaea: PushEmpty(object, object)
0xaeb: Stack[-2] = Stack[-11]
0xaec: Stack[-1] = Stack[-6]
0xaed: Push(-2, 4); TaskCall(13)
0xaee: Call2 0xb05

0xaef: Pop(-2, 4); TaskReturn
0xaf0: Pop(2)
0xaf1: @@ IsDialogEnd(Stack[-1])
0xaf2: Pop(0)
0xaf3: Pop(0); Push((bool) Stack[-1] == 0)
0xaf4: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaf5: @ sync()
0xaf6: Pop(0)
0xaf7: @@ IsDialogEnd(Stack[-1])
0xaf8: Pop(0)
0xaf9: GOTO 0xaf3

0xafa: PushEmpty(object)
0xafb: Stack[-1] = Stack[-10]
0xafc: Call2 0xf8f

0xafd: Pop(1)
0xafe: @ StopDialog(Stack[-4])
0xaff: Pop(0)
0xb00: @@ GetReturnValue(Stack[-2])
0xb01: Pop(0)
0xb02: Stack[-10] = Stack[-2]
0xb03: Return(); Pop(8)

0xb04: Stack[-4] = 0
0xb05: PushEmpty()
0xb06: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb07: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb08: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb09: Push((int) 1)
0xb0a: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb0b: PushEmpty(string)
0xb0c: Stack[-1] = "Rage"
0xb0d: Call2 0xb53

0xb0e: Pop(1)
0xb0f: Push((int) 526738)
0xb10: @@ SetMessage(Stack[-1])
0xb11: Pop(1)
0xb12: @@ ClearReplies()
0xb13: Pop(0)
0xb14: PushEmpty(bool, object)
0xb15: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb16: Call2 0x1277

0xb17: Pop(1)
0xb18: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb19: Push((int) 526739)
0xb1a: Push((int) 28017)
0xb1b: Push((int) 28016)
0xb1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1d: Pop(3)
0xb1e: PushEmpty(bool, object)
0xb1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb20: Call2 0x126b

0xb21: Pop(1)
0xb22: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb23: Push((int) 528763)
0xb24: Push((int) 30180)
0xb25: Push((int) 30179)
0xb26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb27: Pop(3)
0xb28: Push((int) 526742)
0xb29: Push((int) -1)
0xb2a: Push((int) 28019)
0xb2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(3)
0xb2d: Push((int) 528847)
0xb2e: Push((int) -1)
0xb2f: Push((int) 30265)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: GOTO 0xb35

0xb33: Return(); Pop(0)

0xb34: GOTO 0xb09

0xb35: PushEmpty(bool)
0xb36: Call2 0x111f

0xb37: Pop(0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb39: @ lshWaitForAnimEnd()
0xb3a: Pop(0)
0xb3b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb3d: GOTO 0xb43

0xb3e: PushEmpty(string)
0xb3f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb40: Call2 0x102a

0xb41: Pop(1)
0xb42: GOTO 0xb39

0xb43: GOTO 0xb52

0xb44: Push("all")
0xb45: Push("idle")
0xb46: @ PlayAnimation(Stack[-2], Stack[-1])
0xb47: Pop(2)
0xb48: @ WaitForAnimEnd()
0xb49: Pop(0)
0xb4a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb4b: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4c: GOTO 0xb52

0xb4d: Push("all")
0xb4e: Push("idle")
0xb4f: @ PlayAnimation(Stack[-2], Stack[-1])
0xb50: Pop(2)
0xb51: GOTO 0xb48

0xb52: Return(); Pop(0)

0xb53: PushEmpty()
0xb54: PushEmpty(bool)
0xb55: Call2 0x111f

0xb56: Pop(0)
0xb57: Pop(1); Push((bool) Stack[-1] == 0)
0xb58: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb59: Return(); Pop(0)

0xb5a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb5b: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5c: Return(); Pop(0)

0xb5d: PushEmpty(string, bool)
0xb5e: Stack[-2] = Stack[-3]
0xb5f: Push("")
0xb60: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb61: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb62: Stack[-1] = (bool) 0
0xb63: GOTO 0xb65

0xb64: Stack[-1] = (bool) 1
0xb65: Call2 0x103a

0xb66: Pop(2)
0xb67: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb68: Return(); Pop(0)

0xb69: PushEmpty()
0xb6a: Push((int) 1)
0xb6b: IF (Stack[-1] == 0) GOTO 0xc8d; Pop(1)

0xb6c: PushEmpty()
0xb6d: Call2 0x1058

0xb6e: Pop(0)
0xb6f: Push((int) 28018)
0xb70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb71: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb72: PushEmpty(object, object)
0xb73: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb75: Call2 0x11a2

0xb76: Pop(2)
0xb77: Push((int) 45451)
0xb78: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb79: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb7a: PushEmpty(object, object)
0xb7b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7d: Call2 0x11a2

0xb7e: Pop(2)
0xb7f: Push((int) 28015)
0xb80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb81: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xb82: PushEmpty(string)
0xb83: Stack[-1] = "Rage"
0xb84: Call2 0xb53

0xb85: Pop(1)
0xb86: Push((int) 526738)
0xb87: @@ SetMessage(Stack[-1])
0xb88: Pop(1)
0xb89: @@ ClearReplies()
0xb8a: Pop(0)
0xb8b: PushEmpty(bool, object)
0xb8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8d: Call2 0x1277

0xb8e: Pop(1)
0xb8f: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb90: Push((int) 526739)
0xb91: Push((int) 28017)
0xb92: Push((int) 28016)
0xb93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb94: Pop(3)
0xb95: PushEmpty(bool, object)
0xb96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb97: Call2 0x126b

0xb98: Pop(1)
0xb99: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9a: Push((int) 528763)
0xb9b: Push((int) 30180)
0xb9c: Push((int) 30179)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: Push((int) 526742)
0xba0: Push((int) -1)
0xba1: Push((int) 28019)
0xba2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba3: Pop(3)
0xba4: Push((int) 528847)
0xba5: Push((int) -1)
0xba6: Push((int) 30265)
0xba7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba8: Pop(3)
0xba9: Return(); Pop(0)

0xbaa: Push((int) 30180)
0xbab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbac: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbad: PushEmpty(string)
0xbae: Stack[-1] = "Rage"
0xbaf: Call2 0xb53

0xbb0: Pop(1)
0xbb1: Push((int) 528764)
0xbb2: @@ SetMessage(Stack[-1])
0xbb3: Pop(1)
0xbb4: @@ ClearReplies()
0xbb5: Pop(0)
0xbb6: Push((int) 542466)
0xbb7: Push((int) 44860)
0xbb8: Push((int) 44859)
0xbb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbba: Pop(3)
0xbbb: Push((int) 542463)
0xbbc: Push((int) 44857)
0xbbd: Push((int) 44856)
0xbbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbf: Pop(3)
0xbc0: Push((int) 528765)
0xbc1: Push((int) -1)
0xbc2: Push((int) 30181)
0xbc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc4: Pop(3)
0xbc5: Return(); Pop(0)

0xbc6: Push((int) 44857)
0xbc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbc9: PushEmpty(string)
0xbca: Stack[-1] = "Neutral"
0xbcb: Call2 0xb53

0xbcc: Pop(1)
0xbcd: Push((int) 542464)
0xbce: @@ SetMessage(Stack[-1])
0xbcf: Pop(1)
0xbd0: @@ ClearReplies()
0xbd1: Pop(0)
0xbd2: Push((int) 542465)
0xbd3: Push((int) -1)
0xbd4: Push((int) 44858)
0xbd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd6: Pop(3)
0xbd7: Return(); Pop(0)

0xbd8: Push((int) 44860)
0xbd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbdb: PushEmpty(string)
0xbdc: Stack[-1] = "Neutral"
0xbdd: Call2 0xb53

0xbde: Pop(1)
0xbdf: Push((int) 542467)
0xbe0: @@ SetMessage(Stack[-1])
0xbe1: Pop(1)
0xbe2: @@ ClearReplies()
0xbe3: Pop(0)
0xbe4: Push((int) 542468)
0xbe5: Push((int) -1)
0xbe6: Push((int) 44861)
0xbe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe8: Pop(3)
0xbe9: Push((int) 543008)
0xbea: Push((int) -1)
0xbeb: Push((int) 45460)
0xbec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbed: Pop(3)
0xbee: Return(); Pop(0)

0xbef: Push((int) 28017)
0xbf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf1: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xbf2: PushEmpty(string)
0xbf3: Stack[-1] = "Rage"
0xbf4: Call2 0xb53

0xbf5: Pop(1)
0xbf6: Push((int) 526740)
0xbf7: @@ SetMessage(Stack[-1])
0xbf8: Pop(1)
0xbf9: @@ ClearReplies()
0xbfa: Pop(0)
0xbfb: Push((int) 528841)
0xbfc: Push((int) 30260)
0xbfd: Push((int) 30259)
0xbfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbff: Pop(3)
0xc00: Push((int) 528848)
0xc01: Push((int) 30267)
0xc02: Push((int) 30266)
0xc03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc04: Pop(3)
0xc05: Return(); Pop(0)

0xc06: Push((int) 30267)
0xc07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc09: PushEmpty(string)
0xc0a: Stack[-1] = "Neutral"
0xc0b: Call2 0xb53

0xc0c: Pop(1)
0xc0d: Push((int) 528849)
0xc0e: @@ SetMessage(Stack[-1])
0xc0f: Pop(1)
0xc10: @@ ClearReplies()
0xc11: Pop(0)
0xc12: Push((int) 528850)
0xc13: Push((int) 45452)
0xc14: Push((int) 30268)
0xc15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc16: Pop(3)
0xc17: Push((int) 528851)
0xc18: Push((int) 45452)
0xc19: Push((int) 30269)
0xc1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1b: Pop(3)
0xc1c: Return(); Pop(0)

0xc1d: Push((int) 45452)
0xc1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc20: PushEmpty(string)
0xc21: Stack[-1] = "Neutral"
0xc22: Call2 0xb53

0xc23: Pop(1)
0xc24: Push((int) 543003)
0xc25: @@ SetMessage(Stack[-1])
0xc26: Pop(1)
0xc27: @@ ClearReplies()
0xc28: Pop(0)
0xc29: Push((int) 543005)
0xc2a: Push((int) 45457)
0xc2b: Push((int) 45456)
0xc2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2d: Pop(3)
0xc2e: Return(); Pop(0)

0xc2f: Push((int) 45457)
0xc30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc32: PushEmpty(string)
0xc33: Stack[-1] = "Sly"
0xc34: Call2 0xb53

0xc35: Pop(1)
0xc36: Push((int) 543006)
0xc37: @@ SetMessage(Stack[-1])
0xc38: Pop(1)
0xc39: @@ ClearReplies()
0xc3a: Pop(0)
0xc3b: Push((int) 543007)
0xc3c: Push((int) 30264)
0xc3d: Push((int) 45458)
0xc3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3f: Pop(3)
0xc40: Return(); Pop(0)

0xc41: Push((int) 30260)
0xc42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc44: PushEmpty(string)
0xc45: Stack[-1] = "Sly"
0xc46: Call2 0xb53

0xc47: Pop(1)
0xc48: Push((int) 528842)
0xc49: @@ SetMessage(Stack[-1])
0xc4a: Pop(1)
0xc4b: @@ ClearReplies()
0xc4c: Pop(0)
0xc4d: Push((int) 528843)
0xc4e: Push((int) 30262)
0xc4f: Push((int) 30261)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Return(); Pop(0)

0xc53: Push((int) 30262)
0xc54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc56: PushEmpty(string)
0xc57: Stack[-1] = "Rage"
0xc58: Call2 0xb53

0xc59: Pop(1)
0xc5a: Push((int) 528844)
0xc5b: @@ SetMessage(Stack[-1])
0xc5c: Pop(1)
0xc5d: @@ ClearReplies()
0xc5e: Pop(0)
0xc5f: Push((int) 528845)
0xc60: Push((int) 30264)
0xc61: Push((int) 30263)
0xc62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc63: Pop(3)
0xc64: Push((int) 543004)
0xc65: Push((int) 30264)
0xc66: Push((int) 45454)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: Return(); Pop(0)

0xc6a: Push((int) 30264)
0xc6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6c: IF (Stack[-1] == 0) GOTO 0xc81; Pop(1)

0xc6d: PushEmpty(string)
0xc6e: Stack[-1] = "Neutral"
0xc6f: Call2 0xb53

0xc70: Pop(1)
0xc71: Push((int) 528846)
0xc72: @@ SetMessage(Stack[-1])
0xc73: Pop(1)
0xc74: @@ ClearReplies()
0xc75: Pop(0)
0xc76: Push((int) 526741)
0xc77: Push((int) -1)
0xc78: Push((int) 28018)
0xc79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7a: Pop(3)
0xc7b: Push((int) 543002)
0xc7c: Push((int) -1)
0xc7d: Push((int) 45451)
0xc7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7f: Pop(3)
0xc80: Return(); Pop(0)

0xc81: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc82: PushEmpty(bool)
0xc83: Call2 0x111f

0xc84: Pop(0)
0xc85: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc86: @ lshStopAnimation()
0xc87: Pop(0)
0xc88: GOTO 0xc8b

0xc89: @ StopAnimation()
0xc8a: Pop(0)
0xc8b: Return(); Pop(0)

0xc8c: GOTO 0xb6a

0xc8d: Return(); Pop(0)

0xc8e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc8f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc90: PushEmpty(bool, object, float)
0xc91: Stack[-2] = Stack[-12]
0xc92: Stack[-1] = (float) 70.0
0xc93: Call2 0xf4b

0xc94: Pop(2)
0xc95: Pop(1); Push((bool) Stack[-1] == 0)
0xc96: IF (Stack[-1] == 0) GOTO 0xc99; Pop(1)

0xc97: Stack[-10] = (int) -2
0xc98: Return(); Pop(8)

0xc99: @ CreateDialog(Stack[-4])
0xc9a: Pop(0)
0xc9b: PushEmpty(int)
0xc9c: Call2 0x1119

0xc9d: Pop(0)
0xc9e: @@ SetNPCName(Stack[-1])
0xc9f: Pop(1)
0xca0: PushEmpty(int)
0xca1: Call2 0x1117

0xca2: Pop(0)
0xca3: @@ SetNPCDescription(Stack[-1])
0xca4: Pop(1)
0xca5: PushEmpty(string)
0xca6: Call2 0x111b

0xca7: Pop(0)
0xca8: @@ SetPhoto(Stack[-1])
0xca9: Pop(1)
0xcaa: PushEmpty(string)
0xcab: Call2 0x111d

0xcac: Pop(0)
0xcad: @@ SetPhoto2(Stack[-1])
0xcae: Pop(1)
0xcaf: PushEmpty(int)
0xcb0: Call2 0x1372

0xcb1: Pop(0)
0xcb2: @@ SetPlayerName(Stack[-1])
0xcb3: Pop(1)
0xcb4: Stack[-2] = (int) -1
0xcb5: @ IsOverrideActive(Stack[-3])
0xcb6: Pop(0)
0xcb7: Push(Stack[-3])
0xcb8: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcb9: Stack[-10] = (int) -2
0xcba: Return(); Pop(8)

0xcbb: @ DoDialog(Stack[-4])
0xcbc: Pop(0)
0xcbd: PushEmpty(bool, object)
0xcbe: PushEmpty(object)
0xcbf: Call2 0x105f

0xcc0: Stack[-2] = Stack[-1]
0xcc1: Pop(1)
0xcc2: Call2 0xfa0

0xcc3: Pop(2)
0xcc4: PushEmpty(object, object)
0xcc5: Stack[-2] = Stack[-11]
0xcc6: Stack[-1] = Stack[-6]
0xcc7: Push(-2, 4); TaskCall(15)
0xcc8: Call2 0xcdf

0xcc9: Pop(-2, 4); TaskReturn
0xcca: Pop(2)
0xccb: @@ IsDialogEnd(Stack[-1])
0xccc: Pop(0)
0xccd: Pop(0); Push((bool) Stack[-1] == 0)
0xcce: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xccf: @ sync()
0xcd0: Pop(0)
0xcd1: @@ IsDialogEnd(Stack[-1])
0xcd2: Pop(0)
0xcd3: GOTO 0xccd

0xcd4: PushEmpty(object)
0xcd5: Stack[-1] = Stack[-10]
0xcd6: Call2 0xf8f

0xcd7: Pop(1)
0xcd8: @ StopDialog(Stack[-4])
0xcd9: Pop(0)
0xcda: @@ GetReturnValue(Stack[-2])
0xcdb: Pop(0)
0xcdc: Stack[-10] = Stack[-2]
0xcdd: Return(); Pop(8)

0xcde: Stack[-4] = 0
0xcdf: PushEmpty()
0xce0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xce1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xce2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xce3: Push((int) 1)
0xce4: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call2 0xd1e

0xce8: Pop(1)
0xce9: Push((int) 535231)
0xcea: @@ SetMessage(Stack[-1])
0xceb: Pop(1)
0xcec: @@ ClearReplies()
0xced: Pop(0)
0xcee: Push((int) 535232)
0xcef: Push((int) 36953)
0xcf0: Push((int) 36907)
0xcf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(3)
0xcf3: Push((int) 535233)
0xcf4: Push((int) -1)
0xcf5: Push((int) 36908)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Push((int) 535280)
0xcf9: Push((int) -1)
0xcfa: Push((int) 36956)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: GOTO 0xd00

0xcfe: Return(); Pop(0)

0xcff: GOTO 0xce3

0xd00: PushEmpty(bool)
0xd01: Call2 0x111f

0xd02: Pop(0)
0xd03: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xd04: @ lshWaitForAnimEnd()
0xd05: Pop(0)
0xd06: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd07: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd08: GOTO 0xd0e

0xd09: PushEmpty(string)
0xd0a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0b: Call2 0x102a

0xd0c: Pop(1)
0xd0d: GOTO 0xd04

0xd0e: GOTO 0xd1d

0xd0f: Push("all")
0xd10: Push("idle")
0xd11: @ PlayAnimation(Stack[-2], Stack[-1])
0xd12: Pop(2)
0xd13: @ WaitForAnimEnd()
0xd14: Pop(0)
0xd15: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd16: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd17: GOTO 0xd1d

0xd18: Push("all")
0xd19: Push("idle")
0xd1a: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1b: Pop(2)
0xd1c: GOTO 0xd13

0xd1d: Return(); Pop(0)

0xd1e: PushEmpty()
0xd1f: PushEmpty(bool)
0xd20: Call2 0x111f

0xd21: Pop(0)
0xd22: Pop(1); Push((bool) Stack[-1] == 0)
0xd23: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd24: Return(); Pop(0)

0xd25: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd26: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd27: Return(); Pop(0)

0xd28: PushEmpty(string, bool)
0xd29: Stack[-2] = Stack[-3]
0xd2a: Push("")
0xd2b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2d: Stack[-1] = (bool) 0
0xd2e: GOTO 0xd30

0xd2f: Stack[-1] = (bool) 1
0xd30: Call2 0x103a

0xd31: Pop(2)
0xd32: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd33: Return(); Pop(0)

0xd34: PushEmpty()
0xd35: Push((int) 1)
0xd36: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd37: PushEmpty()
0xd38: Call2 0x1058

0xd39: Pop(0)
0xd3a: Push((int) 36906)
0xd3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3c: IF (Stack[-1] == 0) GOTO 0xd56; Pop(1)

0xd3d: PushEmpty(string)
0xd3e: Stack[-1] = "Neutral"
0xd3f: Call2 0xd1e

0xd40: Pop(1)
0xd41: Push((int) 535231)
0xd42: @@ SetMessage(Stack[-1])
0xd43: Pop(1)
0xd44: @@ ClearReplies()
0xd45: Pop(0)
0xd46: Push((int) 535232)
0xd47: Push((int) 36953)
0xd48: Push((int) 36907)
0xd49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4a: Pop(3)
0xd4b: Push((int) 535233)
0xd4c: Push((int) -1)
0xd4d: Push((int) 36908)
0xd4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4f: Pop(3)
0xd50: Push((int) 535280)
0xd51: Push((int) -1)
0xd52: Push((int) 36956)
0xd53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd54: Pop(3)
0xd55: Return(); Pop(0)

0xd56: Push((int) 36953)
0xd57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd58: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd59: PushEmpty(string)
0xd5a: Stack[-1] = "Neutral"
0xd5b: Call2 0xd1e

0xd5c: Pop(1)
0xd5d: Push((int) 535277)
0xd5e: @@ SetMessage(Stack[-1])
0xd5f: Pop(1)
0xd60: @@ ClearReplies()
0xd61: Pop(0)
0xd62: Push((int) 535278)
0xd63: Push((int) 36957)
0xd64: Push((int) 36954)
0xd65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd66: Pop(3)
0xd67: Push((int) 535279)
0xd68: Push((int) 36957)
0xd69: Push((int) 36955)
0xd6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6b: Pop(3)
0xd6c: Return(); Pop(0)

0xd6d: Push((int) 36957)
0xd6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6f: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd70: PushEmpty(string)
0xd71: Stack[-1] = "Neutral"
0xd72: Call2 0xd1e

0xd73: Pop(1)
0xd74: Push((int) 535281)
0xd75: @@ SetMessage(Stack[-1])
0xd76: Pop(1)
0xd77: @@ ClearReplies()
0xd78: Pop(0)
0xd79: Push((int) 535282)
0xd7a: Push((int) -1)
0xd7b: Push((int) 36958)
0xd7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7d: Pop(3)
0xd7e: Push((int) 535283)
0xd7f: Push((int) -1)
0xd80: Push((int) 36959)
0xd81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd82: Pop(3)
0xd83: Return(); Pop(0)

0xd84: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd85: PushEmpty(bool)
0xd86: Call2 0x111f

0xd87: Pop(0)
0xd88: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd89: @ lshStopAnimation()
0xd8a: Pop(0)
0xd8b: GOTO 0xd8e

0xd8c: @ StopAnimation()
0xd8d: Pop(0)
0xd8e: Return(); Pop(0)

0xd8f: GOTO 0xd35

0xd90: Return(); Pop(0)

0xd91: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd92: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd93: PushEmpty(bool, object, float)
0xd94: Stack[-2] = Stack[-12]
0xd95: Stack[-1] = (float) 70.0
0xd96: Call2 0xf4b

0xd97: Pop(2)
0xd98: Pop(1); Push((bool) Stack[-1] == 0)
0xd99: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd9a: Stack[-10] = (int) -2
0xd9b: Return(); Pop(8)

0xd9c: @ CreateDialog(Stack[-4])
0xd9d: Pop(0)
0xd9e: PushEmpty(int)
0xd9f: Call2 0x1119

0xda0: Pop(0)
0xda1: @@ SetNPCName(Stack[-1])
0xda2: Pop(1)
0xda3: PushEmpty(int)
0xda4: Call2 0x1117

0xda5: Pop(0)
0xda6: @@ SetNPCDescription(Stack[-1])
0xda7: Pop(1)
0xda8: PushEmpty(string)
0xda9: Call2 0x111b

0xdaa: Pop(0)
0xdab: @@ SetPhoto(Stack[-1])
0xdac: Pop(1)
0xdad: PushEmpty(string)
0xdae: Call2 0x111d

0xdaf: Pop(0)
0xdb0: @@ SetPhoto2(Stack[-1])
0xdb1: Pop(1)
0xdb2: PushEmpty(int)
0xdb3: Call2 0x1372

0xdb4: Pop(0)
0xdb5: @@ SetPlayerName(Stack[-1])
0xdb6: Pop(1)
0xdb7: Stack[-2] = (int) -1
0xdb8: @ IsOverrideActive(Stack[-3])
0xdb9: Pop(0)
0xdba: Push(Stack[-3])
0xdbb: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdbc: Stack[-10] = (int) -2
0xdbd: Return(); Pop(8)

0xdbe: @ DoDialog(Stack[-4])
0xdbf: Pop(0)
0xdc0: PushEmpty(bool, object)
0xdc1: PushEmpty(object)
0xdc2: Call2 0x105f

0xdc3: Stack[-2] = Stack[-1]
0xdc4: Pop(1)
0xdc5: Call2 0xfa0

0xdc6: Pop(2)
0xdc7: PushEmpty(object, object)
0xdc8: Stack[-2] = Stack[-11]
0xdc9: Stack[-1] = Stack[-6]
0xdca: Push(-2, 4); TaskCall(17)
0xdcb: Call2 0xde2

0xdcc: Pop(-2, 4); TaskReturn
0xdcd: Pop(2)
0xdce: @@ IsDialogEnd(Stack[-1])
0xdcf: Pop(0)
0xdd0: Pop(0); Push((bool) Stack[-1] == 0)
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd2: @ sync()
0xdd3: Pop(0)
0xdd4: @@ IsDialogEnd(Stack[-1])
0xdd5: Pop(0)
0xdd6: GOTO 0xdd0

0xdd7: PushEmpty(object)
0xdd8: Stack[-1] = Stack[-10]
0xdd9: Call2 0xf8f

0xdda: Pop(1)
0xddb: @ StopDialog(Stack[-4])
0xddc: Pop(0)
0xddd: @@ GetReturnValue(Stack[-2])
0xdde: Pop(0)
0xddf: Stack[-10] = Stack[-2]
0xde0: Return(); Pop(8)

0xde1: Stack[-4] = 0
0xde2: PushEmpty()
0xde3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xde4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xde5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xde6: Push((int) 1)
0xde7: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xde8: PushEmpty(string)
0xde9: Stack[-1] = "Neutral"
0xdea: Call2 0xe1c

0xdeb: Pop(1)
0xdec: Push((int) 540545)
0xded: @@ SetMessage(Stack[-1])
0xdee: Pop(1)
0xdef: @@ ClearReplies()
0xdf0: Pop(0)
0xdf1: Push((int) 540546)
0xdf2: Push((int) -1)
0xdf3: Push((int) 42555)
0xdf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf5: Pop(3)
0xdf6: Push((int) 540798)
0xdf7: Push((int) -1)
0xdf8: Push((int) 42847)
0xdf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfa: Pop(3)
0xdfb: GOTO 0xdfe

0xdfc: Return(); Pop(0)

0xdfd: GOTO 0xde6

0xdfe: PushEmpty(bool)
0xdff: Call2 0x111f

0xe00: Pop(0)
0xe01: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe02: @ lshWaitForAnimEnd()
0xe03: Pop(0)
0xe04: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe05: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe06: GOTO 0xe0c

0xe07: PushEmpty(string)
0xe08: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe09: Call2 0x102a

0xe0a: Pop(1)
0xe0b: GOTO 0xe02

0xe0c: GOTO 0xe1b

0xe0d: Push("all")
0xe0e: Push("idle")
0xe0f: @ PlayAnimation(Stack[-2], Stack[-1])
0xe10: Pop(2)
0xe11: @ WaitForAnimEnd()
0xe12: Pop(0)
0xe13: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe14: IF (Stack[-1] == 0) GOTO 0xe16; Pop(1)

0xe15: GOTO 0xe1b

0xe16: Push("all")
0xe17: Push("idle")
0xe18: @ PlayAnimation(Stack[-2], Stack[-1])
0xe19: Pop(2)
0xe1a: GOTO 0xe11

0xe1b: Return(); Pop(0)

0xe1c: PushEmpty()
0xe1d: PushEmpty(bool)
0xe1e: Call2 0x111f

0xe1f: Pop(0)
0xe20: Pop(1); Push((bool) Stack[-1] == 0)
0xe21: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe22: Return(); Pop(0)

0xe23: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe24: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe25: Return(); Pop(0)

0xe26: PushEmpty(string, bool)
0xe27: Stack[-2] = Stack[-3]
0xe28: Push("")
0xe29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe2b: Stack[-1] = (bool) 0
0xe2c: GOTO 0xe2e

0xe2d: Stack[-1] = (bool) 1
0xe2e: Call2 0x103a

0xe2f: Pop(2)
0xe30: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe31: Return(); Pop(0)

0xe32: PushEmpty()
0xe33: Push((int) 1)
0xe34: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe35: PushEmpty()
0xe36: Call2 0x1058

0xe37: Pop(0)
0xe38: Push((int) 42554)
0xe39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3a: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe3b: PushEmpty(string)
0xe3c: Stack[-1] = "Neutral"
0xe3d: Call2 0xe1c

0xe3e: Pop(1)
0xe3f: Push((int) 540545)
0xe40: @@ SetMessage(Stack[-1])
0xe41: Pop(1)
0xe42: @@ ClearReplies()
0xe43: Pop(0)
0xe44: Push((int) 540546)
0xe45: Push((int) -1)
0xe46: Push((int) 42555)
0xe47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe48: Pop(3)
0xe49: Push((int) 540798)
0xe4a: Push((int) -1)
0xe4b: Push((int) 42847)
0xe4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4d: Pop(3)
0xe4e: Return(); Pop(0)

0xe4f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe50: PushEmpty(bool)
0xe51: Call2 0x111f

0xe52: Pop(0)
0xe53: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe54: @ lshStopAnimation()
0xe55: Pop(0)
0xe56: GOTO 0xe59

0xe57: @ StopAnimation()
0xe58: Pop(0)
0xe59: Return(); Pop(0)

0xe5a: GOTO 0xe33

0xe5b: Return(); Pop(0)

0xe5c: Push(GlobalVars[2])
0xe5d: Stack[-1] = (bool) 0
0xe5e: GlobalVars[2] = Stack[-1]; Pop(1)
0xe5f: PushEmpty()
0xe60: Call2 0xe63

0xe61: Pop(0)
0xe62: Return(); Pop(0)

0xe63: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0xe64: Push((bool) 1)
0xe65: @ SensePlayerOnly(Stack[-1])
0xe66: Pop(1)
0xe67: PushEmpty()
0xe68: Call2 0xebb

0xe69: Pop(0)
0xe6a: @ GetScene(Stack[-11])
0xe6b: Pop(0)
0xe6c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xe6d: PushEmpty(string, int)
0xe6e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe6f: Call2 0x1109

0xe70: Pop(1)
0xe71: @@ GetLocator(Stack[-1], Stack[-11])
0xe72: Pop(1)
0xe73: Pop(0); Push((bool) Stack[-10] == 0)
0xe74: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe75: GOTO 0xe79

0xe76: Push((int) 1)
0xe77: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe78: GOTO 0xe6d

0xe79: PushEmpty(bool)
0xe7a: Call2 0xf46

0xe7b: Pop(0)
0xe7c: Pop(1); Push((bool) Stack[-1] == 0)
0xe7d: IF (Stack[-1] == 0) GOTO 0xe83; Pop(1)

0xe7e: PushEmpty()
0xe7f: Push(-0, 0); TaskCall(0)
0xe80: Call2 0x0

0xe81: Pop(-0, 0); TaskReturn
0xe82: Pop(0)
0xe83: PushEmpty()
0xe84: Call2 0xec3

0xe85: Pop(0)
0xe86: @ irand(Stack[-9], Stack[-2])
0xe87: Pop(0)
0xe88: PushEmpty(string, int)
0xe89: Stack[-1] = Stack[-11]
0xe8a: Call2 0x1109

0xe8b: Pop(1)
0xe8c: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0xe8d: Pop(1)
0xe8e: PushEmpty(cvector)
0xe8f: Call2 0xef2

0xe90: Pop(0)
0xe91: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0xe92: PushEmpty(float, cvector)
0xe93: Stack[-1] = Stack[-7]
0xe94: Call2 0x1082

0xe95: Pop(1)
0xe96: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0xe97: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xe98: @ GetHeight(Stack[-4])
0xe99: Pop(0)
0xe9a: Stack[-3] = Stack[-7]
0xe9b: Push(CvectorIndex(Stack[-3], 1))
0xe9c: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0xe9d: CvectorIndex(Stack[-4], 1) = Stack[-1];
0xe9e: @ CanReachByPF(Stack[-2], Stack[-3])
0xe9f: Pop(0)
0xea0: Push(Stack[-2])
0xea1: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xea2: Pop(0); Push(Stack[-5] | Stack[-5]);
0xea3: Pop(1); Push(Sqrt(Stack[-1]))
0xea4: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0xea5: Pop(1); Push(Stack[-6] * Stack[-1]);
0xea6: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0xea7: PushEmpty(bool, cvector, cvector)
0xea8: Stack[-2] = Stack[-4]
0xea9: Stack[-1] = Stack[-9]
0xeaa: Push(-3, 1); TaskCall(1)
0xeab: Call2 0xd

0xeac: Pop(-3, 1); TaskReturn
0xead: Pop(2)
0xeae: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeaf: PushEmpty(int)
0xeb0: Stack[-1] = Stack[-10]
0xeb1: Push(-1, 0); TaskCall(3)
0xeb2: Call2 0xc6

0xeb3: Pop(-1, 0); TaskReturn
0xeb4: Pop(1)
0xeb5: Push((int) 1)
0xeb6: @ Sleep(Stack[-1])
0xeb7: Pop(1)
0xeb8: GOTO 0xe86

0xeb9: Return(); Pop(22)

0xeba: Stack[-11] = 0
0xebb: PushEmpty(string, string)
0xebc: Push("loc")
0xebd: @ GetProperty(Stack[-1], Stack[-2])
0xebe: Pop(1)
0xebf: Push(GlobalVars[0])
0xec0: Stack[-1] = Stack[-2]
0xec1: GlobalVars[0] = Stack[-1]; Pop(1)
0xec2: Return(); Pop(2)

0xec3: PushEmpty(cvector, cvector, cvector, cvector)
0xec4: Push("all")
0xec5: Push("walk_stopl")
0xec6: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0xec7: Pop(2)
0xec8: Push("all")
0xec9: Push("walk_stopr")
0xeca: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xecb: Pop(2)
0xecc: Push(CvectorIndex(Stack[-2], 2))
0xecd: Push(CvectorIndex(Stack[-2], 2))
0xece: Pop(2); Push(Stack[-2] + Stack[-1]);
0xecf: Push((float)2.0)
0xed0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xed1: PushEmpty(float, float)
0xed2: Push(CvectorIndex(Stack[-4], 2))
0xed3: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0xed4: Call2 0x106f

0xed5: Pop(1)
0xed6: Push((int) 40)
0xed7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xed8: Return(); Pop(4)

0xed9: PushEmpty()
0xeda: Call2 0x1116

0xedb: Pop(0)
0xedc: PushEmpty()
0xedd: Push(-0, 0); TaskCall(0)
0xede: Call2 0x0

0xedf: Pop(-0, 0); TaskReturn
0xee0: Pop(0)
0xee1: Return(); Pop(0)

0xee2: PushEmpty(bool, bool)
0xee3: @ IsOverrideActive(Stack[-1])
0xee4: Pop(0)
0xee5: Pop(0); Push((bool) Stack[-1] == 0)
0xee6: IF (Stack[-1] == 0) GOTO 0xef1; Pop(1)

0xee7: EventDisable(0)
0xee8: PushEmpty(bool, object)
0xee9: Stack[-1] = Stack[-5]
0xeea: Call2 0xf32

0xeeb: Pop(2)
0xeec: EventEnable(0)
0xeed: PushEmpty(object)
0xeee: Stack[-1] = Stack[-4]
0xeef: Call2 0x1383

0xef0: Pop(1)
0xef1: Return(); Pop(2)

0xef2: PushEmpty(cvector, cvector)
0xef3: @ GetPosition(Stack[-1])
0xef4: Pop(0)
0xef5: Stack[-3] = Stack[-1]
0xef6: Return(); Pop(2)

0xef7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xef8: @ GetPosition(Stack[-3])
0xef9: Pop(0)
0xefa: @@ GetPosition(Stack[-2])
0xefb: Pop(0)
0xefc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xefd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xefe: Return(); Pop(6)

0xeff: PushEmpty(bool, bool)
0xf00: Push("HasProperty")
0xf01: Push((int) 2)
0xf02: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xf03: Pop(1); Push((bool) Stack[-1] == 0)
0xf04: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xf05: Stack[-5] = (bool) 0
0xf06: Return(); Pop(2)

0xf07: @@ HasProperty(Stack[-3], Stack[-1])
0xf08: Pop(0)
0xf09: Stack[-5] = Stack[-1]
0xf0a: Return(); Pop(2)

0xf0b: PushEmpty(float, float)
0xf0c: PushEmpty(bool, object, string)
0xf0d: Stack[-2] = Stack[-10]
0xf0e: Stack[-1] = Stack[-9]
0xf0f: Call2 0xeff

0xf10: Pop(2)
0xf11: Pop(1); Push((bool) Stack[-1] == 0)
0xf12: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf13: Stack[-8] = (bool) 0
0xf14: Return(); Pop(2)

0xf15: @@ GetProperty(Stack[-6], Stack[-1])
0xf16: Pop(0)
0xf17: PushEmpty(float, float, float, float)
0xf18: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xf19: Stack[-2] = Stack[-8]
0xf1a: Stack[-1] = Stack[-7]
0xf1b: Call2 0x1077

0xf1c: Pop(3)
0xf1d: @@ SetProperty(Stack[-7], Stack[-1])
0xf1e: Pop(1)
0xf1f: Stack[-8] = (bool) 1
0xf20: Return(); Pop(2)

0xf21: PushEmpty(int, int)
0xf22: @@ GetProperty(Stack[-4], Stack[-1])
0xf23: Pop(0)
0xf24: Pop(0); Push(Stack[-1] + Stack[-3]);
0xf25: @@ SetProperty(Stack[-5], Stack[-1])
0xf26: Pop(1)
0xf27: Return(); Pop(2)

0xf28: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xf29: @ GetPosition(Stack[-3])
0xf2a: Pop(0)
0xf2b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xf2c: Push(CvectorIndex(Stack[-2], 0))
0xf2d: Push(CvectorIndex(Stack[-3], 2))
0xf2e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf2f: Pop(2)
0xf30: Stack[-8] = Stack[-1]
0xf31: Return(); Pop(6)

0xf32: PushEmpty(cvector, cvector)
0xf33: @@ GetPosition(Stack[-1])
0xf34: Pop(0)
0xf35: PushEmpty(bool, cvector)
0xf36: Stack[-1] = Stack[-3]
0xf37: Call2 0xf28

0xf38: Stack[-6] = Stack[-2]
0xf39: Pop(2)
0xf3a: Return(); Pop(2)

0xf3b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf3c: @@ GetPosition(Stack[-3])
0xf3d: Pop(0)
0xf3e: @ GetPosition(Stack[-2])
0xf3f: Pop(0)
0xf40: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xf41: Push(CvectorIndex(Stack[-1], 0))
0xf42: Push(CvectorIndex(Stack[-2], 2))
0xf43: @ RotateAsync(Stack[-2], Stack[-1])
0xf44: Pop(2)
0xf45: Return(); Pop(6)

0xf46: PushEmpty(bool, bool)
0xf47: @ IsLoaded(Stack[-1])
0xf48: Pop(0)
0xf49: Stack[-3] = Stack[-1]
0xf4a: Return(); Pop(2)

0xf4b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf4c: @@ GetPosition(Stack[-8])
0xf4d: Pop(0)
0xf4e: @@ GetEyesHeight(Stack[-9])
0xf4f: Pop(0)
0xf50: Push(CvectorIndex(Stack[-8], 1))
0xf51: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf52: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf53: @ GetPosition(Stack[-7])
0xf54: Pop(0)
0xf55: @ GetEyesHeight(Stack[-9])
0xf56: Pop(0)
0xf57: Push(CvectorIndex(Stack[-7], 1))
0xf58: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf59: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf5a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf5b: Push(CvectorIndex(Stack[-6], 1))
0xf5c: Stack[-1] = (int) 0
0xf5d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf5e: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf5f: Pop(1); Push(Sqrt(Stack[-1]))
0xf60: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf61: Stack[-5] = -Stack[-6]; Pop(0);
0xf62: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf63: PushEmpty(cvector, cvector)
0xf64: Push(CVector(0.0, 1.0, 0.0))
0xf65: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf66: Call2 0x1065

0xf67: Pop(1)
0xf68: Push((int) 25)
0xf69: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf6a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf6b: Push(CVector(0.0, 10.0, 0.0))
0xf6c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xf6d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xf6e: @ IsOverrideActive(Stack[-2])
0xf6f: Pop(0)
0xf70: Push(Stack[-2])
0xf71: IF (Stack[-1] == 0) GOTO 0xf74; Pop(1)

0xf72: Stack[-21] = (bool) 0
0xf73: Return(); Pop(18)

0xf74: @ StopWorld()
0xf75: Pop(0)
0xf76: @ CameraTransit(Stack[-3], Stack[-5])
0xf77: Pop(0)
0xf78: Push(CvectorIndex(Stack[-4], 0))
0xf79: Push(CvectorIndex(Stack[-5], 2))
0xf7a: @ Rotate(Stack[-2], Stack[-1])
0xf7b: Pop(2)
0xf7c: PushEmpty(bool)
0xf7d: Call2 0x111f

0xf7e: Pop(0)
0xf7f: IF (Stack[-1] == 0) GOTO 0xf81; Pop(1)

0xf80: GOTO 0xf89

0xf81: Push("head")
0xf82: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf83: Pop(1)
0xf84: Push(Stack[-1])
0xf85: IF (Stack[-1] == 0) GOTO 0xf89; Pop(1)

0xf86: Push("head")
0xf87: @ LookAsyncCamera(Stack[-1])
0xf88: Pop(1)
0xf89: @ CameraWaitForPlayFinish()
0xf8a: Pop(0)
0xf8b: @ ResumeWorld()
0xf8c: Pop(0)
0xf8d: Stack[-21] = (bool) 1
0xf8e: Return(); Pop(18)

0xf8f: PushEmpty(bool, bool)
0xf90: @ CameraSwitchToNormal()
0xf91: Pop(0)
0xf92: PushEmpty(bool)
0xf93: Call2 0x111f

0xf94: Pop(0)
0xf95: IF (Stack[-1] == 0) GOTO 0xf97; Pop(1)

0xf96: GOTO 0xf9f

0xf97: Push("head")
0xf98: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf99: Pop(1)
0xf9a: Push(Stack[-1])
0xf9b: IF (Stack[-1] == 0) GOTO 0xf9f; Pop(1)

0xf9c: Push("head")
0xf9d: @ UnlookAsync(Stack[-1])
0xf9e: Pop(1)
0xf9f: Return(); Pop(2)

0xfa0: PushEmpty(int, int, int, int)
0xfa1: Push("voice_common")
0xfa2: @ GetVariable(Stack[-1], Stack[-3])
0xfa3: Pop(1)
0xfa4: Push(Stack[-2])
0xfa5: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfa6: PushEmpty(bool, object)
0xfa7: Stack[-1] = Stack[-7]
0xfa8: Call2 0xfda

0xfa9: Pop(1)
0xfaa: Pop(1); Push((bool) Stack[-1] == 0)
0xfab: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfac: PushEmpty(bool, object)
0xfad: Stack[-1] = Stack[-7]
0xfae: Call2 0xfff

0xfaf: Pop(1)
0xfb0: Pop(1); Push((bool) Stack[-1] == 0)
0xfb1: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfb2: Stack[-6] = (bool) 0
0xfb3: Return(); Pop(4)

0xfb4: Push((int) 2)
0xfb5: @ irand(Stack[-2], Stack[-1])
0xfb6: Pop(1)
0xfb7: Push(Stack[-1])
0xfb8: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfb9: Push("voice_common")
0xfba: Push((int) 1)
0xfbb: Pop(1); Push(Stack[-4] + Stack[-1]);
0xfbc: Push((int) 3)
0xfbd: Pop(2); Push(Stack[-2] % Stack[-1]);
0xfbe: @ SetVariable(Stack[-2], Stack[-1])
0xfbf: Pop(2)
0xfc0: GOTO 0xfc5

0xfc1: Push("voice_common")
0xfc2: Push((int) 0)
0xfc3: @ SetVariable(Stack[-2], Stack[-1])
0xfc4: Pop(2)
0xfc5: GOTO 0xfd8

0xfc6: PushEmpty(bool, object)
0xfc7: Stack[-1] = Stack[-7]
0xfc8: Call2 0xfff

0xfc9: Pop(1)
0xfca: Pop(1); Push((bool) Stack[-1] == 0)
0xfcb: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfcc: PushEmpty(bool, object)
0xfcd: Stack[-1] = Stack[-7]
0xfce: Call2 0xfda

0xfcf: Pop(1)
0xfd0: Pop(1); Push((bool) Stack[-1] == 0)
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd2: Stack[-6] = (bool) 0
0xfd3: Return(); Pop(4)

0xfd4: Push("voice_common")
0xfd5: Push((int) 1)
0xfd6: @ SetVariable(Stack[-2], Stack[-1])
0xfd7: Pop(2)
0xfd8: Stack[-6] = (bool) 1
0xfd9: Return(); Pop(4)

0xfda: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xfdb: Stack[-5] = "c"
0xfdc: Stack[-4] = (int) 0
0xfdd: Push((int) 1)
0xfde: IF (Stack[-1] == 0) GOTO 0xfea; Pop(1)

0xfdf: Push((int) 1)
0xfe0: Pop(1); Push(Stack[-5] + Stack[-1]);
0xfe1: Pop(1); Push(Stack[-6] + Stack[-1]);
0xfe2: @@ HasProperty(Stack[-1], Stack[-4])
0xfe3: Pop(1)
0xfe4: Pop(0); Push((bool) Stack[-3] == 0)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe6: GOTO 0xfea

0xfe7: Push((int) 1)
0xfe8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xfe9: GOTO 0xfdd

0xfea: Pop(0); Push((bool) Stack[-4] == 0)
0xfeb: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xfec: Stack[-12] = (bool) 0
0xfed: Return(); Pop(10)

0xfee: Stack[-2] = (int) 0
0xfef: Push((int) 1)
0xff0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xff1: IF (Stack[-1] == 0) GOTO 0xff4; Pop(1)

0xff2: @ irand(Stack[-2], Stack[-4])
0xff3: Pop(0)
0xff4: Push((int) 1)
0xff5: Pop(1); Push(Stack[-3] + Stack[-1]);
0xff6: Pop(1); Push(Stack[-6] + Stack[-1]);
0xff7: @@ GetProperty(Stack[-1], Stack[-2])
0xff8: Pop(1)
0xff9: PushEmpty(bool, string)
0xffa: Stack[-1] = Stack[-3]
0xffb: Call2 0x1049

0xffc: Stack[-14] = Stack[-2]
0xffd: Pop(2)
0xffe: Return(); Pop(10)

0xfff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1000: Push("d")
0x1001: PushEmpty(int)
0x1002: Call2 0x10e2

0x1003: Pop(0)
0x1004: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1005: Push("m")
0x1006: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1007: Stack[-4] = (int) 0
0x1008: Push((int) 1)
0x1009: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x100a: Push((int) 1)
0x100b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x100c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x100d: @@ HasProperty(Stack[-1], Stack[-4])
0x100e: Pop(1)
0x100f: Pop(0); Push((bool) Stack[-3] == 0)
0x1010: IF (Stack[-1] == 0) GOTO 0x1012; Pop(1)

0x1011: GOTO 0x1015

0x1012: Push((int) 1)
0x1013: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1014: GOTO 0x1008

0x1015: Pop(0); Push((bool) Stack[-4] == 0)
0x1016: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1017: Stack[-12] = (bool) 0
0x1018: Return(); Pop(10)

0x1019: Stack[-2] = (int) 0
0x101a: Push((int) 1)
0x101b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x101c: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x101d: @ irand(Stack[-2], Stack[-4])
0x101e: Pop(0)
0x101f: Push((int) 1)
0x1020: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1021: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1022: @@ GetProperty(Stack[-1], Stack[-2])
0x1023: Pop(1)
0x1024: PushEmpty(bool, string)
0x1025: Stack[-1] = Stack[-3]
0x1026: Call2 0x1049

0x1027: Stack[-14] = Stack[-2]
0x1028: Pop(2)
0x1029: Return(); Pop(10)

0x102a: PushEmpty(bool, float, float, bool, float, float)
0x102b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x102c: Pop(0)
0x102d: Push(Stack[-3])
0x102e: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x102f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1030: Pop(0)
0x1031: Push((bool) 0)
0x1032: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1033: Pop(1)
0x1034: GOTO 0x1039

0x1035: Push("Can't find lsh animation : ")
0x1036: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1037: @ Trace(Stack[-1])
0x1038: Pop(1)
0x1039: Return(); Pop(6)

0x103a: PushEmpty(bool, float, float, bool, float, float)
0x103b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x103c: Pop(0)
0x103d: Push(Stack[-3])
0x103e: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x103f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1040: Pop(0)
0x1041: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1042: Pop(0)
0x1043: GOTO 0x1048

0x1044: Push("Can't find lsh animation : ")
0x1045: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1046: @ Trace(Stack[-1])
0x1047: Pop(1)
0x1048: Return(); Pop(6)

0x1049: PushEmpty(bool, bool)
0x104a: PushEmpty(bool)
0x104b: Call2 0x111f

0x104c: Pop(0)
0x104d: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x104e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x104f: Pop(0)
0x1050: Push(Stack[-1])
0x1051: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1052: @ lshPlaySpeech(Stack[-3])
0x1053: Pop(0)
0x1054: Stack[-4] = (bool) 1
0x1055: Return(); Pop(2)

0x1056: Stack[-4] = (bool) 0
0x1057: Return(); Pop(2)

0x1058: PushEmpty(bool)
0x1059: Call2 0x111f

0x105a: Pop(0)
0x105b: IF (Stack[-1] == 0) GOTO 0x105e; Pop(1)

0x105c: @ lshStopSpeech()
0x105d: Pop(0)
0x105e: Return(); Pop(0)

0x105f: PushEmpty(object, object)
0x1060: @ self(Stack[-1])
0x1061: Pop(0)
0x1062: Stack[-3] = Stack[-1]
0x1063: Return(); Pop(2)

0x1064: Stack[-1] = 0
0x1065: PushEmpty(float, float)
0x1066: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1067: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1068: Push((float)0.0)
0x1069: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x106a: IF (Stack[-1] == 0) GOTO 0x106d; Pop(1)

0x106b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x106c: Return(); Pop(2)

0x106d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x106e: Return(); Pop(2)

0x106f: PushEmpty()
0x1070: Push((int) 0)
0x1071: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1072: IF (Stack[-1] == 0) GOTO 0x1075; Pop(1)

0x1073: Stack[-2] = -Stack[-1]; Pop(0);
0x1074: GOTO 0x1076

0x1075: Stack[-2] = Stack[-1]
0x1076: Return(); Pop(0)

0x1077: PushEmpty()
0x1078: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1079: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x107a: Stack[-4] = Stack[-2]
0x107b: Return(); Pop(0)

0x107c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x107d: IF (Stack[-1] == 0) GOTO 0x1080; Pop(1)

0x107e: Stack[-4] = Stack[-1]
0x107f: Return(); Pop(0)

0x1080: Stack[-4] = Stack[-3]
0x1081: Return(); Pop(0)

0x1082: PushEmpty()
0x1083: Push(CvectorIndex(Stack[-1], 0))
0x1084: Push(CvectorIndex(Stack[-2], 0))
0x1085: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1086: Push(CvectorIndex(Stack[-2], 2))
0x1087: Push(CvectorIndex(Stack[-3], 2))
0x1088: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1089: Pop(2); Push(Stack[-2] + Stack[-1]);
0x108a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x108b: Return(); Pop(0)

0x108c: PushEmpty(int, int)
0x108d: @ GetVariable(Stack[-3], Stack[-1])
0x108e: Pop(0)
0x108f: Stack[-4] = Stack[-1]
0x1090: Return(); Pop(2)

0x1091: PushEmpty(object, object)
0x1092: @ CreateIntVector(Stack[-1])
0x1093: Pop(0)
0x1094: @@ add(Stack[-4])
0x1095: Pop(0)
0x1096: @@ add(Stack[-3])
0x1097: Pop(0)
0x1098: Push((int) 3)
0x1099: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x109a: Pop(1)
0x109b: Return(); Pop(2)

0x109c: Stack[-1] = 0
0x109d: PushEmpty(int, int)
0x109e: PushEmpty(object, string, int)
0x109f: Stack[-3] = Stack[-7]
0x10a0: Stack[-2] = "money"
0x10a1: Stack[-1] = Stack[-6]
0x10a2: Call2 0xf21

0x10a3: Pop(3)
0x10a4: Push((int) 0)
0x10a5: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x10a6: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x10a7: Push("Money")
0x10a8: @ GetInvItemByName(Stack[-2], Stack[-1])
0x10a9: Pop(1)
0x10aa: PushEmpty(int, int)
0x10ab: Stack[-2] = Stack[-3]
0x10ac: Stack[-1] = Stack[-5]
0x10ad: Call2 0x1091

0x10ae: Pop(2)
0x10af: Return(); Pop(2)

0x10b0: PushEmpty()
0x10b1: Pop(0); Push((bool) Stack[-2] == 0)
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10b3: Stack[-3] = (bool) 0
0x10b4: Return(); Pop(0)

0x10b5: Push((int) 0)
0x10b6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10b7: IF (Stack[-1] == 0) GOTO 0x10bc; Pop(1)

0x10b8: Push((int) 8)
0x10b9: @ SendWorldWndMessage(Stack[-1])
0x10ba: Pop(1)
0x10bb: GOTO 0x10c5

0x10bc: Push((int) 0)
0x10bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x10be: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10bf: Push((int) 9)
0x10c0: @ SendWorldWndMessage(Stack[-1])
0x10c1: Pop(1)
0x10c2: GOTO 0x10c5

0x10c3: Stack[-3] = (bool) 0
0x10c4: Return(); Pop(0)

0x10c5: PushEmpty(float)
0x10c6: Stack[-1] = Stack[-2]
0x10c7: Call2 0x10d3

0x10c8: Pop(1)
0x10c9: PushEmpty(bool, object, string, float, float, float)
0x10ca: Stack[-5] = Stack[-8]
0x10cb: Stack[-4] = "reputation"
0x10cc: Stack[-3] = Stack[-7]
0x10cd: Stack[-2] = (int) 0
0x10ce: Stack[-1] = (int) 1
0x10cf: Call2 0xf0b

0x10d0: Pop(6)
0x10d1: Stack[-3] = (bool) 1
0x10d2: Return(); Pop(0)

0x10d3: PushEmpty(object, object)
0x10d4: @ CreateFloatVector(Stack[-1])
0x10d5: Pop(0)
0x10d6: @@ add(Stack[-3])
0x10d7: Pop(0)
0x10d8: Push((int) 16)
0x10d9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10da: Pop(1)
0x10db: Return(); Pop(2)

0x10dc: Stack[-1] = 0
0x10dd: PushEmpty(float, float)
0x10de: @ GetGameTime(Stack[-1])
0x10df: Pop(0)
0x10e0: Stack[-3] = Stack[-1]
0x10e1: Return(); Pop(2)

0x10e2: PushEmpty(float, float)
0x10e3: @ GetGameTime(Stack[-1])
0x10e4: Pop(0)
0x10e5: Push((int) 1)
0x10e6: PushEmpty(int)
0x10e7: Push((int) 24)
0x10e8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x10e9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x10ea: Return(); Pop(2)

0x10eb: PushEmpty()
0x10ec: PushEmpty(int)
0x10ed: Call2 0x10e2

0x10ee: Pop(0)
0x10ef: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x10f0: Return(); Pop(0)

0x10f1: PushEmpty(string, string)
0x10f2: Stack[-1] = "idle"
0x10f3: Push(Stack[-3])
0x10f4: IF (Stack[-1] == 0) GOTO 0x10f6; Pop(1)

0x10f5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x10f6: Stack[-4] = Stack[-1]
0x10f7: Return(); Pop(2)

0x10f8: PushEmpty(int, bool, int, bool)
0x10f9: Stack[-2] = (int) 0
0x10fa: Push("all")
0x10fb: PushEmpty(string, int)
0x10fc: Stack[-1] = Stack[-5]
0x10fd: Call2 0x10f1

0x10fe: Pop(1)
0x10ff: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1100: Pop(2)
0x1101: Pop(0); Push((bool) Stack[-1] == 0)
0x1102: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1103: GOTO 0x1107

0x1104: Push((int) 1)
0x1105: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1106: GOTO 0x10fa

0x1107: Stack[-5] = Stack[-2]
0x1108: Return(); Pop(4)

0x1109: PushEmpty()
0x110a: Push((int) 0)
0x110b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x110c: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x110d: Push("pt_")
0x110e: Push(GlobalVars[0])
0x110f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1110: GOTO 0x1115

0x1111: Push("pt_")
0x1112: Push(GlobalVars[0])
0x1113: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1114: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x1115: Return(); Pop(0)

0x1116: Return(); Pop(0)

0x1117: Stack[-1] = (int) 515547
0x1118: Return(); Pop(0)

0x1119: Stack[-1] = (int) 502872
0x111a: Return(); Pop(0)

0x111b: Stack[-1] = "ui/NPC_MladVlad.png"
0x111c: Return(); Pop(0)

0x111d: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x111e: Return(); Pop(0)

0x111f: Stack[-1] = (bool) 1
0x1120: Return(); Pop(0)

0x1121: PushEmpty()
0x1122: PushEmpty(bool, object, float)
0x1123: Stack[-2] = Stack[-5]
0x1124: Stack[-1] = (float) -0.05
0x1125: Call2 0x10b0

0x1126: Pop(3)
0x1127: Return(); Pop(0)

0x1128: PushEmpty(object, object)
0x1129: Push("k2q01")
0x112a: Push((int) 2)
0x112b: @ SetVariable(Stack[-2], Stack[-1])
0x112c: Pop(2)
0x112d: PushEmpty(object)
0x112e: Call2 0x1340

0x112f: Stack[-2] = Stack[-1]
0x1130: Pop(1)
0x1131: Push("k2q01MladVladGotoOspina")
0x1132: Push("pt_map_ospina")
0x1133: Push((int) 1)
0x1134: Push((int) 539374)
0x1135: PushEmpty(float)
0x1136: Call2 0x10dd

0x1137: Pop(0)
0x1138: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1139: Pop(5)
0x113a: PushEmpty()
0x113b: Call2 0x12a2

0x113c: Pop(0)
0x113d: Return(); Pop(2)

0x113e: Stack[-1] = 0
0x113f: PushEmpty()
0x1140: Push("ook2MladVlad1")
0x1141: Push((int) 1)
0x1142: @ SetVariable(Stack[-2], Stack[-1])
0x1143: Pop(2)
0x1144: Return(); Pop(0)

0x1145: PushEmpty(object, object)
0x1146: Push("k2q04")
0x1147: Push((int) 1)
0x1148: @ SetVariable(Stack[-2], Stack[-1])
0x1149: Pop(2)
0x114a: PushEmpty(object)
0x114b: Call2 0x1340

0x114c: Stack[-2] = Stack[-1]
0x114d: Pop(1)
0x114e: Push("k2q04MladVladGotoAnna")
0x114f: Push("pt_map_anna")
0x1150: Push((int) 0)
0x1151: Push((int) 508645)
0x1152: PushEmpty(float)
0x1153: Call2 0x10dd

0x1154: Pop(0)
0x1155: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1156: Pop(5)
0x1157: PushEmpty()
0x1158: Call2 0x12af

0x1159: Pop(0)
0x115a: PushEmpty()
0x115b: Call2 0x12f0

0x115c: Pop(0)
0x115d: Return(); Pop(2)

0x115e: Stack[-1] = 0
0x115f: PushEmpty()
0x1160: Push("ook2MladVlad2")
0x1161: Push((int) 1)
0x1162: @ SetVariable(Stack[-2], Stack[-1])
0x1163: Pop(2)
0x1164: Return(); Pop(0)

0x1165: PushEmpty(int, int)
0x1166: Push("k2q04")
0x1167: Push((int) 1000)
0x1168: @ SetVariable(Stack[-2], Stack[-1])
0x1169: Pop(2)
0x116a: PushEmpty()
0x116b: Call2 0x12bc

0x116c: Pop(0)
0x116d: Push("alpha_pills")
0x116e: Push((int) 4)
0x116f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1170: Pop(2)
0x1171: Push("beta_pills")
0x1172: Push((int) 4)
0x1173: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1174: Pop(2)
0x1175: Return(); Pop(2)

0x1176: PushEmpty()
0x1177: Push("k2q04")
0x1178: Push((int) 1000)
0x1179: @ SetVariable(Stack[-2], Stack[-1])
0x117a: Pop(2)
0x117b: PushEmpty()
0x117c: Call2 0x12c9

0x117d: Pop(0)
0x117e: Return(); Pop(0)

0x117f: PushEmpty()
0x1180: Push("k2q04")
0x1181: Push((int) 1000)
0x1182: @ SetVariable(Stack[-2], Stack[-1])
0x1183: Pop(2)
0x1184: PushEmpty()
0x1185: Call2 0x12d6

0x1186: Pop(0)
0x1187: Return(); Pop(0)

0x1188: PushEmpty()
0x1189: Push("k2q04")
0x118a: Push((int) 1000)
0x118b: @ SetVariable(Stack[-2], Stack[-1])
0x118c: Pop(2)
0x118d: PushEmpty()
0x118e: Call2 0x12e3

0x118f: Pop(0)
0x1190: Return(); Pop(0)

0x1191: PushEmpty()
0x1192: Push("ook3MladVlad1")
0x1193: Push((int) 1)
0x1194: @ SetVariable(Stack[-2], Stack[-1])
0x1195: Pop(2)
0x1196: Return(); Pop(0)

0x1197: PushEmpty()
0x1198: Push("ook5MladVlad1")
0x1199: Push((int) 1)
0x119a: @ SetVariable(Stack[-2], Stack[-1])
0x119b: Pop(2)
0x119c: Return(); Pop(0)

0x119d: PushEmpty()
0x119e: PushEmpty()
0x119f: Call2 0x12fd

0x11a0: Pop(0)
0x11a1: Return(); Pop(0)

0x11a2: PushEmpty()
0x11a3: Push("k6q02")
0x11a4: Push((int) 3)
0x11a5: @ SetVariable(Stack[-2], Stack[-1])
0x11a6: Pop(2)
0x11a7: PushEmpty()
0x11a8: Call2 0x130a

0x11a9: Pop(0)
0x11aa: Return(); Pop(0)

0x11ab: PushEmpty()
0x11ac: Push("money1000 is given")
0x11ad: @ Trace(Stack[-1])
0x11ae: Pop(1)
0x11af: PushEmpty(object, int)
0x11b0: Stack[-2] = Stack[-4]
0x11b1: Stack[-1] = (int) 1000
0x11b2: Call2 0x109d

0x11b3: Pop(2)
0x11b4: Return(); Pop(0)

0x11b5: PushEmpty()
0x11b6: Push("money500 is given")
0x11b7: @ Trace(Stack[-1])
0x11b8: Pop(1)
0x11b9: PushEmpty(object, int)
0x11ba: Stack[-2] = Stack[-4]
0x11bb: Stack[-1] = (int) 500
0x11bc: Call2 0x109d

0x11bd: Pop(2)
0x11be: Return(); Pop(0)

0x11bf: PushEmpty()
0x11c0: Push("playsound")
0x11c1: Push("givemoney")
0x11c2: @ TriggerWorld(Stack[-2], Stack[-1])
0x11c3: Pop(2)
0x11c4: Return(); Pop(0)

0x11c5: PushEmpty()
0x11c6: PushEmpty(bool, object, float)
0x11c7: Stack[-2] = Stack[-5]
0x11c8: Stack[-1] = (float) -0.02
0x11c9: Call2 0x10b0

0x11ca: Pop(3)
0x11cb: Return(); Pop(0)

0x11cc: PushEmpty()
0x11cd: PushEmpty(bool, object, float)
0x11ce: Stack[-2] = Stack[-5]
0x11cf: Stack[-1] = (float) 0.02
0x11d0: Call2 0x10b0

0x11d1: Pop(3)
0x11d2: Return(); Pop(0)

0x11d3: PushEmpty()
0x11d4: Push("ook5MladVlad2")
0x11d5: Push((int) 1)
0x11d6: @ SetVariable(Stack[-2], Stack[-1])
0x11d7: Pop(2)
0x11d8: Return(); Pop(0)

0x11d9: PushEmpty()
0x11da: PushEmpty(object, string, float)
0x11db: PushEmpty(object)
0x11dc: Call2 0x1340

0x11dd: Stack[-4] = Stack[-1]
0x11de: Pop(1)
0x11df: Stack[-2] = "pt_map_anna"
0x11e0: Stack[-1] = (int) 2
0x11e1: Call2 0x1351

0x11e2: Pop(3)
0x11e3: PushEmpty(object)
0x11e4: Call2 0x1340

0x11e5: Pop(0)
0x11e6: @@ ShowMap(Stack[-1])
0x11e7: Pop(1)
0x11e8: Return(); Pop(0)

0x11e9: PushEmpty()
0x11ea: PushEmpty(int, string)
0x11eb: Stack[-1] = "k2q01"
0x11ec: Call2 0x108c

0x11ed: Pop(1)
0x11ee: Push((int) 1)
0x11ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11f0: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11f1: Stack[-2] = (bool) 1
0x11f2: Return(); Pop(0)

0x11f3: Stack[-2] = (bool) 0
0x11f4: Return(); Pop(0)

0x11f5: PushEmpty()
0x11f6: PushEmpty(int, string)
0x11f7: Stack[-1] = "ook2MladVlad1"
0x11f8: Call2 0x108c

0x11f9: Pop(1)
0x11fa: Push((int) 0)
0x11fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11fc: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11fd: Stack[-2] = (bool) 1
0x11fe: Return(); Pop(0)

0x11ff: Stack[-2] = (bool) 0
0x1200: Return(); Pop(0)

0x1201: PushEmpty()
0x1202: PushEmpty(int, string)
0x1203: Stack[-1] = "k2q04"
0x1204: Call2 0x108c

0x1205: Pop(1)
0x1206: Push((int) 2)
0x1207: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1208: IF (Stack[-1] == 0) GOTO 0x120b; Pop(1)

0x1209: Stack[-2] = (bool) 1
0x120a: Return(); Pop(0)

0x120b: Stack[-2] = (bool) 0
0x120c: Return(); Pop(0)

0x120d: PushEmpty()
0x120e: PushEmpty(int, string)
0x120f: Stack[-1] = "k2q04"
0x1210: Call2 0x108c

0x1211: Pop(1)
0x1212: Push((int) 3)
0x1213: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1214: IF (Stack[-1] == 0) GOTO 0x1217; Pop(1)

0x1215: Stack[-2] = (bool) 1
0x1216: Return(); Pop(0)

0x1217: Stack[-2] = (bool) 0
0x1218: Return(); Pop(0)

0x1219: PushEmpty()
0x121a: PushEmpty(bool, object)
0x121b: Stack[-1] = Stack[-3]
0x121c: Call2 0x128f

0x121d: Pop(1)
0x121e: IF (Stack[-1] == 0) GOTO 0x1221; Pop(1)

0x121f: Stack[-2] = (bool) 1
0x1220: Return(); Pop(0)

0x1221: Stack[-2] = (bool) 0
0x1222: Return(); Pop(0)

0x1223: PushEmpty()
0x1224: PushEmpty(int, string)
0x1225: Stack[-1] = "ook2MladVlad2"
0x1226: Call2 0x108c

0x1227: Pop(1)
0x1228: Push((int) 0)
0x1229: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x122a: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122b: Stack[-2] = (bool) 1
0x122c: Return(); Pop(0)

0x122d: Stack[-2] = (bool) 0
0x122e: Return(); Pop(0)

0x122f: PushEmpty()
0x1230: PushEmpty(int, string)
0x1231: Stack[-1] = "k2q04"
0x1232: Call2 0x108c

0x1233: Pop(1)
0x1234: Push((int) 9)
0x1235: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1236: IF (Stack[-1] == 0) GOTO 0x1239; Pop(1)

0x1237: Stack[-2] = (bool) 1
0x1238: Return(); Pop(0)

0x1239: Stack[-2] = (bool) 0
0x123a: Return(); Pop(0)

0x123b: PushEmpty()
0x123c: PushEmpty(int, string)
0x123d: Stack[-1] = "k3q01"
0x123e: Call2 0x108c

0x123f: Pop(1)
0x1240: Push((int) 2)
0x1241: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1242: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x1243: Stack[-2] = (bool) 1
0x1244: Return(); Pop(0)

0x1245: Stack[-2] = (bool) 0
0x1246: Return(); Pop(0)

0x1247: PushEmpty()
0x1248: PushEmpty(int, string)
0x1249: Stack[-1] = "ook3MladVlad1"
0x124a: Call2 0x108c

0x124b: Pop(1)
0x124c: Push((int) 0)
0x124d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x124e: IF (Stack[-1] == 0) GOTO 0x1251; Pop(1)

0x124f: Stack[-2] = (bool) 1
0x1250: Return(); Pop(0)

0x1251: Stack[-2] = (bool) 0
0x1252: Return(); Pop(0)

0x1253: PushEmpty()
0x1254: PushEmpty(int, string)
0x1255: Stack[-1] = "k5q01"
0x1256: Call2 0x108c

0x1257: Pop(1)
0x1258: Push((int) 1)
0x1259: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x125a: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x125b: Stack[-2] = (bool) 1
0x125c: Return(); Pop(0)

0x125d: Stack[-2] = (bool) 0
0x125e: Return(); Pop(0)

0x125f: PushEmpty()
0x1260: PushEmpty(int, string)
0x1261: Stack[-1] = "ook5MladVlad1"
0x1262: Call2 0x108c

0x1263: Pop(1)
0x1264: Push((int) 0)
0x1265: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1266: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1267: Stack[-2] = (bool) 1
0x1268: Return(); Pop(0)

0x1269: Stack[-2] = (bool) 0
0x126a: Return(); Pop(0)

0x126b: PushEmpty()
0x126c: PushEmpty(int, string)
0x126d: Stack[-1] = "k6q01"
0x126e: Call2 0x108c

0x126f: Pop(1)
0x1270: Push((int) 1)
0x1271: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1272: IF (Stack[-1] == 0) GOTO 0x1275; Pop(1)

0x1273: Stack[-2] = (bool) 1
0x1274: Return(); Pop(0)

0x1275: Stack[-2] = (bool) 0
0x1276: Return(); Pop(0)

0x1277: PushEmpty()
0x1278: PushEmpty(int, string)
0x1279: Stack[-1] = "k6q02"
0x127a: Call2 0x108c

0x127b: Pop(1)
0x127c: Push((int) 2)
0x127d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x127e: IF (Stack[-1] == 0) GOTO 0x1281; Pop(1)

0x127f: Stack[-2] = (bool) 1
0x1280: Return(); Pop(0)

0x1281: Stack[-2] = (bool) 0
0x1282: Return(); Pop(0)

0x1283: PushEmpty()
0x1284: PushEmpty(int, string)
0x1285: Stack[-1] = "ook5MladVlad2"
0x1286: Call2 0x108c

0x1287: Pop(1)
0x1288: Push((int) 0)
0x1289: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x128a: IF (Stack[-1] == 0) GOTO 0x128d; Pop(1)

0x128b: Stack[-2] = (bool) 1
0x128c: Return(); Pop(0)

0x128d: Stack[-2] = (bool) 0
0x128e: Return(); Pop(0)

0x128f: PushEmpty(int, int)
0x1290: Push("alpha_pills")
0x1291: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1292: Pop(1)
0x1293: Push((int) 4)
0x1294: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1295: IF (Stack[-1] == 0) GOTO 0x1298; Pop(1)

0x1296: Stack[-4] = (bool) 0
0x1297: Return(); Pop(2)

0x1298: Push("beta_pills")
0x1299: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x129a: Pop(1)
0x129b: Push((int) 4)
0x129c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x129d: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129e: Stack[-4] = (bool) 0
0x129f: Return(); Pop(2)

0x12a0: Stack[-4] = (bool) 1
0x12a1: Return(); Pop(2)

0x12a2: PushEmpty(object, object)
0x12a3: Push((int) 463)
0x12a4: Push((int) 1)
0x12a5: Push((int) 527779)
0x12a6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12a7: Pop(3)
0x12a8: PushEmpty(bool, object, int)
0x12a9: Stack[-2] = Stack[-4]
0x12aa: Stack[-1] = (int) 461
0x12ab: Call2 0x1324

0x12ac: Pop(3)
0x12ad: Return(); Pop(2)

0x12ae: Stack[-1] = 0
0x12af: PushEmpty(object, object)
0x12b0: Push((int) 507)
0x12b1: Push((int) 2)
0x12b2: Push((int) 529706)
0x12b3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12b4: Pop(3)
0x12b5: PushEmpty(bool, object, int)
0x12b6: Stack[-2] = Stack[-4]
0x12b7: Stack[-1] = (int) -1
0x12b8: Call2 0x1324

0x12b9: Pop(3)
0x12ba: Return(); Pop(2)

0x12bb: Stack[-1] = 0
0x12bc: PushEmpty(object, object)
0x12bd: Push((int) 513)
0x12be: Push((int) 2)
0x12bf: Push((int) 529712)
0x12c0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12c1: Pop(3)
0x12c2: PushEmpty(bool, object, int)
0x12c3: Stack[-2] = Stack[-4]
0x12c4: Stack[-1] = (int) 507
0x12c5: Call2 0x1324

0x12c6: Pop(3)
0x12c7: Return(); Pop(2)

0x12c8: Stack[-1] = 0
0x12c9: PushEmpty(object, object)
0x12ca: Push((int) 514)
0x12cb: Push((int) 2)
0x12cc: Push((int) 529713)
0x12cd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12ce: Pop(3)
0x12cf: PushEmpty(bool, object, int)
0x12d0: Stack[-2] = Stack[-4]
0x12d1: Stack[-1] = (int) 507
0x12d2: Call2 0x1324

0x12d3: Pop(3)
0x12d4: Return(); Pop(2)

0x12d5: Stack[-1] = 0
0x12d6: PushEmpty(object, object)
0x12d7: Push((int) 515)
0x12d8: Push((int) 2)
0x12d9: Push((int) 529714)
0x12da: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12db: Pop(3)
0x12dc: PushEmpty(bool, object, int)
0x12dd: Stack[-2] = Stack[-4]
0x12de: Stack[-1] = (int) 507
0x12df: Call2 0x1324

0x12e0: Pop(3)
0x12e1: Return(); Pop(2)

0x12e2: Stack[-1] = 0
0x12e3: PushEmpty(object, object)
0x12e4: Push((int) 516)
0x12e5: Push((int) 2)
0x12e6: Push((int) 529715)
0x12e7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e8: Pop(3)
0x12e9: PushEmpty(bool, object, int)
0x12ea: Stack[-2] = Stack[-4]
0x12eb: Stack[-1] = (int) 507
0x12ec: Call2 0x1324

0x12ed: Pop(3)
0x12ee: Return(); Pop(2)

0x12ef: Stack[-1] = 0
0x12f0: PushEmpty(object, object)
0x12f1: Push((int) 508)
0x12f2: Push((int) 2)
0x12f3: Push((int) 529707)
0x12f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12f5: Pop(3)
0x12f6: PushEmpty(bool, object, int)
0x12f7: Stack[-2] = Stack[-4]
0x12f8: Stack[-1] = (int) 507
0x12f9: Call2 0x1324

0x12fa: Pop(3)
0x12fb: Return(); Pop(2)

0x12fc: Stack[-1] = 0
0x12fd: PushEmpty(object, object)
0x12fe: Push((int) 392)
0x12ff: Push((int) 1)
0x1300: Push((int) 525885)
0x1301: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1302: Pop(3)
0x1303: PushEmpty(bool, object, int)
0x1304: Stack[-2] = Stack[-4]
0x1305: Stack[-1] = (int) 390
0x1306: Call2 0x1324

0x1307: Pop(3)
0x1308: Return(); Pop(2)

0x1309: Stack[-1] = 0
0x130a: PushEmpty(object, object)
0x130b: Push((int) 503)
0x130c: Push((int) 2)
0x130d: Push((int) 528769)
0x130e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x130f: Pop(3)
0x1310: PushEmpty(bool, object, int)
0x1311: Stack[-2] = Stack[-4]
0x1312: Stack[-1] = (int) 500
0x1313: Call2 0x1324

0x1314: Pop(3)
0x1315: Return(); Pop(2)

0x1316: Stack[-1] = 0
0x1317: PushEmpty(object, object)
0x1318: @ GetDiaryRoot(Stack[-1])
0x1319: Pop(0)
0x131a: Pop(0); Push((bool) Stack[-1] == 0)
0x131b: IF (Stack[-1] == 0) GOTO 0x1321; Pop(1)

0x131c: Push("Can't retrieve diary root")
0x131d: @ Trace(Stack[-1])
0x131e: Pop(1)
0x131f: Stack[-3] = (bool) 0
0x1320: Return(); Pop(2)

0x1321: Stack[-3] = Stack[-1]
0x1322: Return(); Pop(2)

0x1323: Stack[-1] = 0
0x1324: PushEmpty(object, object, int, object, object, int)
0x1325: PushEmpty(object)
0x1326: Call2 0x1317

0x1327: Stack[-4] = Stack[-1]
0x1328: Pop(1)
0x1329: @@ Find(Stack[-7], Stack[-2])
0x132a: Pop(0)
0x132b: Pop(0); Push((bool) Stack[-2] == 0)
0x132c: IF (Stack[-1] == 0) GOTO 0x1333; Pop(1)

0x132d: Push("Can't find diary parent with id: ")
0x132e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x132f: @ Trace(Stack[-1])
0x1330: Pop(1)
0x1331: Stack[-9] = (bool) 0
0x1332: Return(); Pop(6)

0x1333: @@ AddChild(Stack[-8])
0x1334: Pop(0)
0x1335: Push((int) 7)
0x1336: @ SendWorldWndMessage(Stack[-1])
0x1337: Pop(1)
0x1338: @@ GetCategory(Stack[-1])
0x1339: Pop(0)
0x133a: @ SetDiarySection(Stack[-1])
0x133b: Pop(0)
0x133c: Stack[-9] = (bool) 0
0x133d: Return(); Pop(6)

0x133e: Stack[-2] = 0
0x133f: Stack[-3] = 0
0x1340: PushEmpty(object, object, object, object)
0x1341: @ GetMainOutdoorScene(Stack[-2])
0x1342: Pop(0)
0x1343: Pop(0); Push((bool) Stack[-2] == 0)
0x1344: IF (Stack[-1] == 0) GOTO 0x134b; Pop(1)

0x1345: Push("Can't find main outdoor scene")
0x1346: @ Trace(Stack[-1])
0x1347: Pop(1)
0x1348: Stack[-1] = 0
0x1349: Stack[-5] = Stack[-1]
0x134a: Return(); Pop(4)

0x134b: @@ GetMap(Stack[-1])
0x134c: Pop(0)
0x134d: Stack[-5] = Stack[-1]
0x134e: Return(); Pop(4)

0x134f: Stack[-1] = 0
0x1350: Stack[-2] = 0
0x1351: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1352: @ GetMainOutdoorScene(Stack[-2])
0x1353: Pop(0)
0x1354: Pop(0); Push((bool) Stack[-2] == 0)
0x1355: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1356: Push("Can't find main outdoor scene")
0x1357: @ Trace(Stack[-1])
0x1358: Pop(1)
0x1359: Return(); Pop(8)

0x135a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x135b: Pop(0)
0x135c: Pop(0); Push((bool) Stack[-1] == 0)
0x135d: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x135e: Push("Warning: outdoor scene locator ")
0x135f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1360: Push(" doesnt exist")
0x1361: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1362: @ Trace(Stack[-1])
0x1363: Pop(1)
0x1364: @@ GetMap(Stack[-11])
0x1365: Pop(0)
0x1366: Pop(0); Push((bool) Stack[-11] == 0)
0x1367: IF (Stack[-1] == 0) GOTO 0x136c; Pop(1)

0x1368: Push("Can't find map")
0x1369: @ Trace(Stack[-1])
0x136a: Pop(1)
0x136b: Return(); Pop(8)

0x136c: Push(CvectorIndex(Stack[-4], 0))
0x136d: Push(CvectorIndex(Stack[-5], 2))
0x136e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x136f: Pop(2)
0x1370: Return(); Pop(8)

0x1371: Stack[-2] = 0
0x1372: PushEmpty(int, int)
0x1373: Push("branch")
0x1374: @ GetVariable(Stack[-1], Stack[-2])
0x1375: Pop(1)
0x1376: Push((int) 0)
0x1377: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1378: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x1379: Stack[-3] = (int) 1
0x137a: Return(); Pop(2)

0x137b: GOTO 0x1381

0x137c: Push((int) 1)
0x137d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137e: IF (Stack[-1] == 0) GOTO 0x1381; Pop(1)

0x137f: Stack[-3] = (int) 2
0x1380: Return(); Pop(2)

0x1381: Stack[-3] = (int) 3
0x1382: Return(); Pop(2)

0x1383: PushEmpty()
0x1384: Push(GlobalVars[2])
0x1385: Pop(1); Push((bool) Stack[-1] == 0)
0x1386: IF (Stack[-1] == 0) GOTO 0x1390; Pop(1)

0x1387: PushEmpty(int, object)
0x1388: Stack[-1] = Stack[-3]
0x1389: Push(-2, 1); TaskCall(8)
0x138a: Call2 0x82d

0x138b: Pop(-2, 1); TaskReturn
0x138c: Pop(2)
0x138d: Push(GlobalVars[2])
0x138e: Stack[-1] = (bool) 1
0x138f: GlobalVars[2] = Stack[-1]; Pop(1)
0x1390: PushEmpty(bool, int)
0x1391: Stack[-1] = (int) 2
0x1392: Call2 0x10eb

0x1393: Pop(1)
0x1394: IF (Stack[-1] == 0) GOTO 0x139c; Pop(1)

0x1395: PushEmpty(int, object)
0x1396: Stack[-1] = Stack[-3]
0x1397: Push(-2, 1); TaskCall(4)
0x1398: Call2 0x11a

0x1399: Pop(-2, 1); TaskReturn
0x139a: Pop(2)
0x139b: Return(); Pop(0)

0x139c: PushEmpty(bool, int)
0x139d: Stack[-1] = (int) 3
0x139e: Call2 0x10eb

0x139f: Pop(1)
0x13a0: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a1: PushEmpty(int, object)
0x13a2: Stack[-1] = Stack[-3]
0x13a3: Push(-2, 1); TaskCall(6)
0x13a4: Call2 0x643

0x13a5: Pop(-2, 1); TaskReturn
0x13a6: Pop(2)
0x13a7: Return(); Pop(0)

0x13a8: PushEmpty(bool, int)
0x13a9: Stack[-1] = (int) 5
0x13aa: Call2 0x10eb

0x13ab: Pop(1)
0x13ac: IF (Stack[-1] == 0) GOTO 0x13b4; Pop(1)

0x13ad: PushEmpty(int, object)
0x13ae: Stack[-1] = Stack[-3]
0x13af: Push(-2, 1); TaskCall(10)
0x13b0: Call2 0x90f

0x13b1: Pop(-2, 1); TaskReturn
0x13b2: Pop(2)
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty(bool, int)
0x13b5: Stack[-1] = (int) 6
0x13b6: Call2 0x10eb

0x13b7: Pop(1)
0x13b8: IF (Stack[-1] == 0) GOTO 0x13c0; Pop(1)

0x13b9: PushEmpty(int, object)
0x13ba: Stack[-1] = Stack[-3]
0x13bb: Push(-2, 1); TaskCall(12)
0x13bc: Call2 0xab4

0x13bd: Pop(-2, 1); TaskReturn
0x13be: Pop(2)
0x13bf: Return(); Pop(0)

0x13c0: PushEmpty(bool, int)
0x13c1: Stack[-1] = (int) 12
0x13c2: Call2 0x10eb

0x13c3: Pop(1)
0x13c4: IF (Stack[-1] == 0) GOTO 0x13cc; Pop(1)

0x13c5: PushEmpty(int, object)
0x13c6: Stack[-1] = Stack[-3]
0x13c7: Push(-2, 1); TaskCall(14)
0x13c8: Call2 0xc8e

0x13c9: Pop(-2, 1); TaskReturn
0x13ca: Pop(2)
0x13cb: Return(); Pop(0)

0x13cc: PushEmpty(int, object)
0x13cd: Stack[-1] = Stack[-3]
0x13ce: Push(-2, 1); TaskCall(16)
0x13cf: Call2 0xd91

0x13d0: Pop(-2, 1); TaskReturn
0x13d1: Pop(2)
0x13d2: Return(); Pop(0)

