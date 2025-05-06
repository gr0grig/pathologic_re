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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0xe7a
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
		EVENT_11 Op = 0x231 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x710 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ec Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9eb Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb87 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd52 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe50 Vars = (int, int)
	GTASK_18 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0xef7 Vars = ()
		EVENT_0 Op = 0xf00 Vars = (object)

Events:
EVENT_6 Op = 0x1136 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xf64

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
0x15: Call2 0xf46

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
0x3d: Call2 0x1136

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
0x50: Call2 0xf50

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-4]
0x55: Call2 0x13a3

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
0x84: Call2 0xf15

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
0x9c: Call2 0xf59

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x1136

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
0xb9: Call2 0xf50

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[-4]
0xbe: Call2 0x13a3

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
0xe6: Call2 0x1118

0xe7: Stack[-3] = Stack[-1]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all")
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x1111

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x1136

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
0x11f: Call2 0xf69

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x1139

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x1137

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x113b

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x113d

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x1392

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
0x14b: Call2 0x107f

0x14c: Stack[-2] = Stack[-1]
0x14d: Pop(1)
0x14e: Call2 0xfc0

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
0x162: Call2 0xfae

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
0x170: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x1215

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0x1209

0x17b: Pop(1)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 1
0x17f: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x182: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x183: Call2 0x115f

0x184: Pop(2)
0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0x21b

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
0x193: Push((int) 539465)
0x194: Push((int) 44260)
0x195: Push((int) 41388)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: GOTO 0x1fd

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral"
0x19b: Call2 0x21b

0x19c: Pop(1)
0x19d: Push((int) 525237)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x1209

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 525238)
0x1a8: Push((int) 26607)
0x1a9: Push((int) 26606)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: PushEmpty(bool)
0x1ad: Stack[-1] = (bool) 0
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x1221

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x1243

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: Push((int) 525372)
0x1bb: Push((int) 26741)
0x1bc: Push((int) 26740)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: PushEmpty(bool)
0x1c0: Stack[-1] = (bool) 0
0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0x1239

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x124f

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: Push((int) 525369)
0x1ce: Push((int) 44309)
0x1cf: Push((int) 26737)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0x1239

0x1d7: Pop(1)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Call2 0x124f

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-1] = (bool) 1
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: Push((int) 525381)
0x1e2: Push((int) 26750)
0x1e3: Push((int) 26749)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call2 0x122d

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: Push((int) 525375)
0x1ec: Push((int) 26744)
0x1ed: Push((int) 26743)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Push((int) 525243)
0x1f1: Push((int) -1)
0x1f2: Push((int) 26611)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Push((int) 529207)
0x1f6: Push((int) -1)
0x1f7: Push((int) 30658)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: GOTO 0x1fd

0x1fb: Return(); Pop(0)

0x1fc: GOTO 0x16f

0x1fd: PushEmpty(bool)
0x1fe: Call2 0x113f

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x201: @ lshWaitForAnimEnd()
0x202: Pop(0)
0x203: Push( Stack[3 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x20b

0x206: PushEmpty(string)
0x207: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x208: Call2 0x104a

0x209: Pop(1)
0x20a: GOTO 0x201

0x20b: GOTO 0x21a

0x20c: Push("all")
0x20d: Push("idle")
0x20e: @ PlayAnimation(Stack[-2], Stack[-1])
0x20f: Pop(2)
0x210: @ WaitForAnimEnd()
0x211: Pop(0)
0x212: Push( Stack[3 + Tasks[-1].StackPointer] )
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: GOTO 0x21a

0x215: Push("all")
0x216: Push("idle")
0x217: @ PlayAnimation(Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: GOTO 0x210

0x21a: Return(); Pop(0)

0x21b: PushEmpty()
0x21c: PushEmpty(bool)
0x21d: Call2 0x113f

0x21e: Pop(0)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Return(); Pop(0)

0x222: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Return(); Pop(0)

0x225: PushEmpty(string, bool)
0x226: Stack[-2] = Stack[-3]
0x227: Push("")
0x228: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22a: Stack[-1] = (bool) 0
0x22b: GOTO 0x22d

0x22c: Stack[-1] = (bool) 1
0x22d: Call2 0x105a

0x22e: Pop(2)
0x22f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: Push((int) 1)
0x233: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x234: PushEmpty()
0x235: Call2 0x1078

0x236: Pop(0)
0x237: Push((int) 26708)
0x238: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23a: PushEmpty(object, object)
0x23b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23d: Call2 0x1165

0x23e: Pop(2)
0x23f: PushEmpty(object, object)
0x240: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x241: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x242: Call2 0x11f9

0x243: Pop(2)
0x244: Push((int) 44290)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(object, object)
0x248: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x249: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24a: Call2 0x1141

0x24b: Pop(2)
0x24c: Push((int) 44277)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x11e5

0x253: Pop(2)
0x254: Push((int) 26610)
0x255: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty(object, object)
0x258: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x259: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25a: Call2 0x1148

0x25b: Pop(2)
0x25c: Push((int) 44473)
0x25d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: PushEmpty(object, object)
0x260: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x261: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x262: Call2 0x1148

0x263: Pop(2)
0x264: Push((int) 26740)
0x265: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object, object)
0x268: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x269: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26a: Call2 0x117f

0x26b: Pop(2)
0x26c: Push((int) 26739)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0x1185

0x273: Pop(2)
0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0x11d5

0x278: Pop(2)
0x279: PushEmpty(object, object)
0x27a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call2 0x11df

0x27d: Pop(2)
0x27e: Push((int) 26751)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x1196

0x285: Pop(2)
0x286: PushEmpty(object, object)
0x287: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x288: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x289: Call2 0x1141

0x28a: Pop(2)
0x28b: Push((int) 26748)
0x28c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(object, object)
0x28f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x290: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x291: Call2 0x119f

0x292: Pop(2)
0x293: PushEmpty(object, object)
0x294: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x295: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x296: Call2 0x11cb

0x297: Pop(2)
0x298: PushEmpty(object, object)
0x299: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x11df

0x29c: Pop(2)
0x29d: Push((int) 26746)
0x29e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a0: PushEmpty(object, object)
0x2a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a3: Call2 0x11a8

0x2a4: Pop(2)
0x2a5: PushEmpty(object, object)
0x2a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a8: Call2 0x11ec

0x2a9: Pop(2)
0x2aa: Push((int) 26705)
0x2ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x2ad: PushEmpty(bool)
0x2ae: Stack[-1] = (bool) 0
0x2af: PushEmpty(bool, object)
0x2b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Call2 0x1215

0x2b2: Pop(1)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b4: PushEmpty(bool, object)
0x2b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b6: Call2 0x1209

0x2b7: Pop(1)
0x2b8: Pop(1); Push((bool) Stack[-1] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[-1] = (bool) 1
0x2bb: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2bc: PushEmpty(object, object)
0x2bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bf: Call2 0x115f

0x2c0: Pop(2)
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral"
0x2c3: Call2 0x21b

0x2c4: Pop(1)
0x2c5: Push((int) 525337)
0x2c6: @@ SetMessage(Stack[-1])
0x2c7: Pop(1)
0x2c8: @@ ClearReplies()
0x2c9: Pop(0)
0x2ca: Push((int) 525338)
0x2cb: Push((int) 44250)
0x2cc: Push((int) 26706)
0x2cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: Push((int) 539465)
0x2d0: Push((int) 44260)
0x2d1: Push((int) 41388)
0x2d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d3: Pop(3)
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Neutral"
0x2d7: Call2 0x21b

0x2d8: Pop(1)
0x2d9: Push((int) 525237)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: PushEmpty(bool, object)
0x2df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Call2 0x1209

0x2e1: Pop(1)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e3: Push((int) 525238)
0x2e4: Push((int) 26607)
0x2e5: Push((int) 26606)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: PushEmpty(bool)
0x2e9: Stack[-1] = (bool) 0
0x2ea: PushEmpty(bool, object)
0x2eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ec: Call2 0x1221

0x2ed: Pop(1)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ef: PushEmpty(bool, object)
0x2f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f1: Call2 0x1243

0x2f2: Pop(1)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = (bool) 1
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: Push((int) 525372)
0x2f7: Push((int) 26741)
0x2f8: Push((int) 26740)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: PushEmpty(bool)
0x2fc: Stack[-1] = (bool) 0
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Call2 0x1239

0x300: Pop(1)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0x124f

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (bool) 1
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: Push((int) 525369)
0x30a: Push((int) 44309)
0x30b: Push((int) 26737)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: PushEmpty(bool)
0x30f: Stack[-1] = (bool) 0
0x310: PushEmpty(bool, object)
0x311: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x312: Call2 0x1239

0x313: Pop(1)
0x314: Pop(1); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x318: Call2 0x124f

0x319: Pop(1)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[-1] = (bool) 1
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 525381)
0x31e: Push((int) 26750)
0x31f: Push((int) 26749)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x324: Call2 0x122d

0x325: Pop(1)
0x326: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x327: Push((int) 525375)
0x328: Push((int) 26744)
0x329: Push((int) 26743)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 525243)
0x32d: Push((int) -1)
0x32e: Push((int) 26611)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 529207)
0x332: Push((int) -1)
0x333: Push((int) 30658)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 26744)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Untrust"
0x33c: Call2 0x21b

0x33d: Pop(1)
0x33e: Push((int) 525376)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 542113)
0x344: Push((int) 44419)
0x345: Push((int) 44418)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: Push((int) 44419)
0x34a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Untrust"
0x34e: Call2 0x21b

0x34f: Pop(1)
0x350: Push((int) 542114)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: Push((int) 542115)
0x356: Push((int) 44421)
0x357: Push((int) 44420)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Return(); Pop(0)

0x35b: Push((int) 44421)
0x35c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Untrust"
0x360: Call2 0x21b

0x361: Pop(1)
0x362: Push((int) 542116)
0x363: @@ SetMessage(Stack[-1])
0x364: Pop(1)
0x365: @@ ClearReplies()
0x366: Pop(0)
0x367: Push((int) 525377)
0x368: Push((int) 26747)
0x369: Push((int) 26745)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Push((int) 542117)
0x36d: Push((int) 44423)
0x36e: Push((int) 44422)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 44423)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call2 0x21b

0x378: Pop(1)
0x379: Push((int) 542118)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 525378)
0x37f: Push((int) -1)
0x380: Push((int) 26746)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 26747)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Sly"
0x389: Call2 0x21b

0x38a: Pop(1)
0x38b: Push((int) 525379)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 525380)
0x391: Push((int) -1)
0x392: Push((int) 26748)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 26750)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Fear"
0x39b: Call2 0x21b

0x39c: Pop(1)
0x39d: Push((int) 525382)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 525383)
0x3a3: Push((int) -1)
0x3a4: Push((int) 26751)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 44309)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Sly"
0x3ad: Call2 0x21b

0x3ae: Pop(1)
0x3af: Push((int) 542032)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 542033)
0x3b5: Push((int) 44311)
0x3b6: Push((int) 44310)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 44311)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Untrust"
0x3bf: Call2 0x21b

0x3c0: Pop(1)
0x3c1: Push((int) 542034)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 542035)
0x3c7: Push((int) 44428)
0x3c8: Push((int) 44312)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Push((int) 542120)
0x3cc: Push((int) 26738)
0x3cd: Push((int) 44425)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: Push((int) 44428)
0x3d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d4: PushEmpty(string)
0x3d5: Stack[-1] = "Neutral"
0x3d6: Call2 0x21b

0x3d7: Pop(1)
0x3d8: Push((int) 542122)
0x3d9: @@ SetMessage(Stack[-1])
0x3da: Pop(1)
0x3db: @@ ClearReplies()
0x3dc: Pop(0)
0x3dd: Push((int) 542123)
0x3de: Push((int) 44430)
0x3df: Push((int) 44429)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: Push((int) 542126)
0x3e3: Push((int) 26738)
0x3e4: Push((int) 44432)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Return(); Pop(0)

0x3e8: Push((int) 44430)
0x3e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Neutral"
0x3ed: Call2 0x21b

0x3ee: Pop(1)
0x3ef: Push((int) 542124)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 542125)
0x3f5: Push((int) 26738)
0x3f6: Push((int) 44431)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Return(); Pop(0)

0x3fa: Push((int) 26738)
0x3fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = "Neutral"
0x3ff: Call2 0x21b

0x400: Pop(1)
0x401: Push((int) 525370)
0x402: @@ SetMessage(Stack[-1])
0x403: Pop(1)
0x404: @@ ClearReplies()
0x405: Pop(0)
0x406: Push((int) 525371)
0x407: Push((int) -1)
0x408: Push((int) 26739)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 26741)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x40f: PushEmpty(string)
0x410: Stack[-1] = "Fear"
0x411: Call2 0x21b

0x412: Pop(1)
0x413: Push((int) 525373)
0x414: @@ SetMessage(Stack[-1])
0x415: Pop(1)
0x416: @@ ClearReplies()
0x417: Pop(0)
0x418: Push((int) 525374)
0x419: Push((int) 44313)
0x41a: Push((int) 26742)
0x41b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(3)
0x41d: Return(); Pop(0)

0x41e: Push((int) 44313)
0x41f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x421: PushEmpty(string)
0x422: Stack[-1] = "Untrust"
0x423: Call2 0x21b

0x424: Pop(1)
0x425: Push((int) 542036)
0x426: @@ SetMessage(Stack[-1])
0x427: Pop(1)
0x428: @@ ClearReplies()
0x429: Pop(0)
0x42a: Push((int) 542119)
0x42b: Push((int) -1)
0x42c: Push((int) 44424)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Return(); Pop(0)

0x430: Push((int) 26607)
0x431: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x433: PushEmpty(string)
0x434: Stack[-1] = "Neutral"
0x435: Call2 0x21b

0x436: Pop(1)
0x437: Push((int) 525239)
0x438: @@ SetMessage(Stack[-1])
0x439: Pop(1)
0x43a: @@ ClearReplies()
0x43b: Pop(0)
0x43c: Push((int) 529208)
0x43d: Push((int) 44301)
0x43e: Push((int) 30659)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Push((int) 529212)
0x442: Push((int) 44453)
0x443: Push((int) 30663)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: Push((int) 44453)
0x448: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x44a: PushEmpty(string)
0x44b: Stack[-1] = "Rage"
0x44c: Call2 0x21b

0x44d: Pop(1)
0x44e: Push((int) 542140)
0x44f: @@ SetMessage(Stack[-1])
0x450: Pop(1)
0x451: @@ ClearReplies()
0x452: Pop(0)
0x453: Push((int) 542141)
0x454: Push((int) 44458)
0x455: Push((int) 44454)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 44458)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Rage"
0x45e: Call2 0x21b

0x45f: Pop(1)
0x460: Push((int) 542145)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 542146)
0x466: Push((int) 30660)
0x467: Push((int) 44459)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 44301)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Untrust"
0x470: Call2 0x21b

0x471: Pop(1)
0x472: Push((int) 542024)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: Push((int) 542025)
0x478: Push((int) 30660)
0x479: Push((int) 44302)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Push((int) 542143)
0x47d: Push((int) 44457)
0x47e: Push((int) 44456)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 44457)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x485: PushEmpty(string)
0x486: Stack[-1] = "Neutral"
0x487: Call2 0x21b

0x488: Pop(1)
0x489: Push((int) 542144)
0x48a: @@ SetMessage(Stack[-1])
0x48b: Pop(1)
0x48c: @@ ClearReplies()
0x48d: Pop(0)
0x48e: Push((int) 542147)
0x48f: Push((int) 30660)
0x490: Push((int) 44462)
0x491: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: Return(); Pop(0)

0x494: Push((int) 30660)
0x495: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x497: PushEmpty(string)
0x498: Stack[-1] = "Fear"
0x499: Call2 0x21b

0x49a: Pop(1)
0x49b: Push((int) 529209)
0x49c: @@ SetMessage(Stack[-1])
0x49d: Pop(1)
0x49e: @@ ClearReplies()
0x49f: Pop(0)
0x4a0: Push((int) 529210)
0x4a1: Push((int) 30662)
0x4a2: Push((int) 30661)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 30662)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Sly"
0x4ab: Call2 0x21b

0x4ac: Pop(1)
0x4ad: Push((int) 529211)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 525240)
0x4b3: Push((int) 26609)
0x4b4: Push((int) 26608)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Push((int) 542150)
0x4b8: Push((int) 44466)
0x4b9: Push((int) 44465)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Return(); Pop(0)

0x4bd: Push((int) 44466)
0x4be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c0: PushEmpty(string)
0x4c1: Stack[-1] = "Neutral"
0x4c2: Call2 0x21b

0x4c3: Pop(1)
0x4c4: Push((int) 542151)
0x4c5: @@ SetMessage(Stack[-1])
0x4c6: Pop(1)
0x4c7: @@ ClearReplies()
0x4c8: Pop(0)
0x4c9: Push((int) 542152)
0x4ca: Push((int) 44468)
0x4cb: Push((int) 44467)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: Return(); Pop(0)

0x4cf: Push((int) 44468)
0x4d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = "Neutral"
0x4d4: Call2 0x21b

0x4d5: Pop(1)
0x4d6: Push((int) 542153)
0x4d7: @@ SetMessage(Stack[-1])
0x4d8: Pop(1)
0x4d9: @@ ClearReplies()
0x4da: Pop(0)
0x4db: Push((int) 542154)
0x4dc: Push((int) 26609)
0x4dd: Push((int) 44469)
0x4de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Return(); Pop(0)

0x4e1: Push((int) 26609)
0x4e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = "Sly"
0x4e6: Call2 0x21b

0x4e7: Pop(1)
0x4e8: Push((int) 525241)
0x4e9: @@ SetMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ ClearReplies()
0x4ec: Pop(0)
0x4ed: Push((int) 542022)
0x4ee: Push((int) 44300)
0x4ef: Push((int) 44299)
0x4f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f1: Pop(3)
0x4f2: Return(); Pop(0)

0x4f3: Push((int) 44300)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f6: PushEmpty(string)
0x4f7: Stack[-1] = "Untrust"
0x4f8: Call2 0x21b

0x4f9: Pop(1)
0x4fa: Push((int) 542023)
0x4fb: @@ SetMessage(Stack[-1])
0x4fc: Pop(1)
0x4fd: @@ ClearReplies()
0x4fe: Pop(0)
0x4ff: Push((int) 542155)
0x500: Push((int) 44472)
0x501: Push((int) 44471)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: Push((int) 44472)
0x506: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x508: PushEmpty(string)
0x509: Stack[-1] = "Neutral"
0x50a: Call2 0x21b

0x50b: Pop(1)
0x50c: Push((int) 542156)
0x50d: @@ SetMessage(Stack[-1])
0x50e: Pop(1)
0x50f: @@ ClearReplies()
0x510: Pop(0)
0x511: Push((int) 525242)
0x512: Push((int) -1)
0x513: Push((int) 26610)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Push((int) 542157)
0x517: Push((int) -1)
0x518: Push((int) 44473)
0x519: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51a: Pop(3)
0x51b: Return(); Pop(0)

0x51c: Push((int) 44260)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Sly"
0x521: Call2 0x21b

0x522: Pop(1)
0x523: Push((int) 541993)
0x524: @@ SetMessage(Stack[-1])
0x525: Pop(1)
0x526: @@ ClearReplies()
0x527: Pop(0)
0x528: Push((int) 541994)
0x529: Push((int) 44250)
0x52a: Push((int) 44261)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Push((int) 541995)
0x52e: Push((int) 44263)
0x52f: Push((int) 44262)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Return(); Pop(0)

0x533: Push((int) 44263)
0x534: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Sly"
0x538: Call2 0x21b

0x539: Pop(1)
0x53a: Push((int) 541996)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: Push((int) 541997)
0x540: Push((int) 44250)
0x541: Push((int) 44264)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Return(); Pop(0)

0x545: Push((int) 44250)
0x546: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Untrust"
0x54a: Call2 0x21b

0x54b: Pop(1)
0x54c: Push((int) 541985)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 541986)
0x552: Push((int) 26707)
0x553: Push((int) 44251)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Push((int) 541998)
0x557: Push((int) 44252)
0x558: Push((int) 44266)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Return(); Pop(0)

0x55c: Push((int) 44252)
0x55d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x55f: PushEmpty(string)
0x560: Stack[-1] = "Neutral"
0x561: Call2 0x21b

0x562: Pop(1)
0x563: Push((int) 541987)
0x564: @@ SetMessage(Stack[-1])
0x565: Pop(1)
0x566: @@ ClearReplies()
0x567: Pop(0)
0x568: Push((int) 541988)
0x569: Push((int) 44268)
0x56a: Push((int) 44253)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Push((int) 542001)
0x56e: Push((int) 26707)
0x56f: Push((int) 44270)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Return(); Pop(0)

0x573: Push((int) 26707)
0x574: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x576: PushEmpty(string)
0x577: Stack[-1] = "Untrust"
0x578: Call2 0x21b

0x579: Pop(1)
0x57a: Push((int) 525339)
0x57b: @@ SetMessage(Stack[-1])
0x57c: Pop(1)
0x57d: @@ ClearReplies()
0x57e: Pop(0)
0x57f: Push((int) 541989)
0x580: Push((int) 44268)
0x581: Push((int) 44254)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: Push((int) 542002)
0x585: Push((int) 44273)
0x586: Push((int) 44272)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: Push((int) 44273)
0x58b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral"
0x58f: Call2 0x21b

0x590: Pop(1)
0x591: Push((int) 542003)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: Push((int) 542004)
0x597: Push((int) 44268)
0x598: Push((int) 44274)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Push((int) 542005)
0x59c: Push((int) 44276)
0x59d: Push((int) 44275)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Return(); Pop(0)

0x5a1: Push((int) 44276)
0x5a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5a4: PushEmpty(string)
0x5a5: Stack[-1] = "Untrust"
0x5a6: Call2 0x21b

0x5a7: Pop(1)
0x5a8: Push((int) 542006)
0x5a9: @@ SetMessage(Stack[-1])
0x5aa: Pop(1)
0x5ab: @@ ClearReplies()
0x5ac: Pop(0)
0x5ad: Push((int) 542007)
0x5ae: Push((int) -1)
0x5af: Push((int) 44277)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: Push((int) 542008)
0x5b3: Push((int) 44255)
0x5b4: Push((int) 44278)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 44268)
0x5b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Sly"
0x5bd: Call2 0x21b

0x5be: Pop(1)
0x5bf: Push((int) 541999)
0x5c0: @@ SetMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: @@ ClearReplies()
0x5c3: Pop(0)
0x5c4: Push((int) 542000)
0x5c5: Push((int) 44255)
0x5c6: Push((int) 44269)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Push((int) 542009)
0x5ca: Push((int) 44286)
0x5cb: Push((int) 44281)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Return(); Pop(0)

0x5cf: Push((int) 44255)
0x5d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Sly"
0x5d4: Call2 0x21b

0x5d5: Pop(1)
0x5d6: Push((int) 541990)
0x5d7: @@ SetMessage(Stack[-1])
0x5d8: Pop(1)
0x5d9: @@ ClearReplies()
0x5da: Pop(0)
0x5db: Push((int) 542010)
0x5dc: Push((int) 44284)
0x5dd: Push((int) 44283)
0x5de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5df: Pop(3)
0x5e0: Push((int) 542012)
0x5e1: Push((int) 44286)
0x5e2: Push((int) 44285)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Return(); Pop(0)

0x5e6: Push((int) 44286)
0x5e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5e9: PushEmpty(string)
0x5ea: Stack[-1] = "Rage"
0x5eb: Call2 0x21b

0x5ec: Pop(1)
0x5ed: Push((int) 542013)
0x5ee: @@ SetMessage(Stack[-1])
0x5ef: Pop(1)
0x5f0: @@ ClearReplies()
0x5f1: Pop(0)
0x5f2: Push((int) 542015)
0x5f3: Push((int) -1)
0x5f4: Push((int) 44290)
0x5f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: Push((int) 542014)
0x5f8: Push((int) 44284)
0x5f9: Push((int) 44289)
0x5fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(3)
0x5fc: Return(); Pop(0)

0x5fd: Push((int) 44284)
0x5fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x600: PushEmpty(string)
0x601: Stack[-1] = "Sly"
0x602: Call2 0x21b

0x603: Pop(1)
0x604: Push((int) 542011)
0x605: @@ SetMessage(Stack[-1])
0x606: Pop(1)
0x607: @@ ClearReplies()
0x608: Pop(0)
0x609: Push((int) 541991)
0x60a: Push((int) 44257)
0x60b: Push((int) 44256)
0x60c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60d: Pop(3)
0x60e: Push((int) 542016)
0x60f: Push((int) 44293)
0x610: Push((int) 44292)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Return(); Pop(0)

0x614: Push((int) 44293)
0x615: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x617: PushEmpty(string)
0x618: Stack[-1] = "Rage"
0x619: Call2 0x21b

0x61a: Pop(1)
0x61b: Push((int) 542017)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: Push((int) 542018)
0x621: Push((int) 44297)
0x622: Push((int) 44294)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Push((int) 542019)
0x626: Push((int) 44257)
0x627: Push((int) 44295)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Return(); Pop(0)

0x62b: Push((int) 44297)
0x62c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Sly"
0x630: Call2 0x21b

0x631: Pop(1)
0x632: Push((int) 542020)
0x633: @@ SetMessage(Stack[-1])
0x634: Pop(1)
0x635: @@ ClearReplies()
0x636: Pop(0)
0x637: Push((int) 542021)
0x638: Push((int) 44257)
0x639: Push((int) 44298)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: Return(); Pop(0)

0x63d: Push((int) 44257)
0x63e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x640: PushEmpty(string)
0x641: Stack[-1] = "Neutral"
0x642: Call2 0x21b

0x643: Pop(1)
0x644: Push((int) 541992)
0x645: @@ SetMessage(Stack[-1])
0x646: Pop(1)
0x647: @@ ClearReplies()
0x648: Pop(0)
0x649: Push((int) 525340)
0x64a: Push((int) -1)
0x64b: Push((int) 26708)
0x64c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(3)
0x64e: Push((int) 525341)
0x64f: Push((int) -1)
0x650: Push((int) 26709)
0x651: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x652: Pop(3)
0x653: Return(); Pop(0)

0x654: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x655: PushEmpty(bool)
0x656: Call2 0x113f

0x657: Pop(0)
0x658: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x659: @ lshStopAnimation()
0x65a: Pop(0)
0x65b: GOTO 0x65e

0x65c: @ StopAnimation()
0x65d: Pop(0)
0x65e: Return(); Pop(0)

0x65f: GOTO 0x232

0x660: Return(); Pop(0)

0x661: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x662: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x663: PushEmpty(bool, object, float)
0x664: Stack[-2] = Stack[-12]
0x665: Stack[-1] = (float) 70.0
0x666: Call2 0xf69

0x667: Pop(2)
0x668: Pop(1); Push((bool) Stack[-1] == 0)
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-10] = (int) -2
0x66b: Return(); Pop(8)

0x66c: @ CreateDialog(Stack[-4])
0x66d: Pop(0)
0x66e: PushEmpty(int)
0x66f: Call2 0x1139

0x670: Pop(0)
0x671: @@ SetNPCName(Stack[-1])
0x672: Pop(1)
0x673: PushEmpty(int)
0x674: Call2 0x1137

0x675: Pop(0)
0x676: @@ SetNPCDescription(Stack[-1])
0x677: Pop(1)
0x678: PushEmpty(string)
0x679: Call2 0x113b

0x67a: Pop(0)
0x67b: @@ SetPhoto(Stack[-1])
0x67c: Pop(1)
0x67d: PushEmpty(string)
0x67e: Call2 0x113d

0x67f: Pop(0)
0x680: @@ SetPhoto2(Stack[-1])
0x681: Pop(1)
0x682: PushEmpty(int)
0x683: Call2 0x1392

0x684: Pop(0)
0x685: @@ SetPlayerName(Stack[-1])
0x686: Pop(1)
0x687: Stack[-2] = (int) -1
0x688: @ IsOverrideActive(Stack[-3])
0x689: Pop(0)
0x68a: Push(Stack[-3])
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-10] = (int) -2
0x68d: Return(); Pop(8)

0x68e: @ DoDialog(Stack[-4])
0x68f: Pop(0)
0x690: PushEmpty(bool, object)
0x691: PushEmpty(object)
0x692: Call2 0x107f

0x693: Stack[-2] = Stack[-1]
0x694: Pop(1)
0x695: Call2 0xfc0

0x696: Pop(2)
0x697: PushEmpty(object, object)
0x698: Stack[-2] = Stack[-11]
0x699: Stack[-1] = Stack[-6]
0x69a: Push(-2, 4); TaskCall(7)
0x69b: Call2 0x6b2

0x69c: Pop(-2, 4); TaskReturn
0x69d: Pop(2)
0x69e: @@ IsDialogEnd(Stack[-1])
0x69f: Pop(0)
0x6a0: Pop(0); Push((bool) Stack[-1] == 0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a2: @ sync()
0x6a3: Pop(0)
0x6a4: @@ IsDialogEnd(Stack[-1])
0x6a5: Pop(0)
0x6a6: GOTO 0x6a0

0x6a7: PushEmpty(object)
0x6a8: Stack[-1] = Stack[-10]
0x6a9: Call2 0xfae

0x6aa: Pop(1)
0x6ab: @ StopDialog(Stack[-4])
0x6ac: Pop(0)
0x6ad: @@ GetReturnValue(Stack[-2])
0x6ae: Pop(0)
0x6af: Stack[-10] = Stack[-2]
0x6b0: Return(); Pop(8)

0x6b1: Stack[-4] = 0
0x6b2: PushEmpty()
0x6b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6b6: Push((int) 1)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "Neutral"
0x6ba: Call2 0x6fa

0x6bb: Pop(1)
0x6bc: Push((int) 525414)
0x6bd: @@ SetMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ ClearReplies()
0x6c0: Pop(0)
0x6c1: PushEmpty(bool)
0x6c2: Stack[-1] = (bool) 0
0x6c3: PushEmpty(bool, object)
0x6c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c5: Call2 0x125b

0x6c6: Pop(1)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c8: PushEmpty(bool, object)
0x6c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ca: Call2 0x1267

0x6cb: Pop(1)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: Stack[-1] = (bool) 1
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6cf: Push((int) 525415)
0x6d0: Push((int) 42567)
0x6d1: Push((int) 26783)
0x6d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d3: Pop(3)
0x6d4: Push((int) 525418)
0x6d5: Push((int) -1)
0x6d6: Push((int) 26786)
0x6d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(3)
0x6d9: GOTO 0x6dc

0x6da: Return(); Pop(0)

0x6db: GOTO 0x6b6

0x6dc: PushEmpty(bool)
0x6dd: Call2 0x113f

0x6de: Pop(0)
0x6df: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e0: @ lshWaitForAnimEnd()
0x6e1: Pop(0)
0x6e2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: GOTO 0x6ea

0x6e5: PushEmpty(string)
0x6e6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6e7: Call2 0x104a

0x6e8: Pop(1)
0x6e9: GOTO 0x6e0

0x6ea: GOTO 0x6f9

0x6eb: Push("all")
0x6ec: Push("idle")
0x6ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ee: Pop(2)
0x6ef: @ WaitForAnimEnd()
0x6f0: Pop(0)
0x6f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: GOTO 0x6f9

0x6f4: Push("all")
0x6f5: Push("idle")
0x6f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f7: Pop(2)
0x6f8: GOTO 0x6ef

0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: PushEmpty(bool)
0x6fc: Call2 0x113f

0x6fd: Pop(0)
0x6fe: Pop(1); Push((bool) Stack[-1] == 0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Return(); Pop(0)

0x701: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x702: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x703: Return(); Pop(0)

0x704: PushEmpty(string, bool)
0x705: Stack[-2] = Stack[-3]
0x706: Push("")
0x707: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x709: Stack[-1] = (bool) 0
0x70a: GOTO 0x70c

0x70b: Stack[-1] = (bool) 1
0x70c: Call2 0x105a

0x70d: Pop(2)
0x70e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x713: PushEmpty()
0x714: Call2 0x1078

0x715: Pop(0)
0x716: Push((int) 26783)
0x717: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x719: PushEmpty(object, object)
0x71a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x71b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x71c: Call2 0x11b1

0x71d: Pop(2)
0x71e: Push((int) 26782)
0x71f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x721: PushEmpty(string)
0x722: Stack[-1] = "Neutral"
0x723: Call2 0x6fa

0x724: Pop(1)
0x725: Push((int) 525414)
0x726: @@ SetMessage(Stack[-1])
0x727: Pop(1)
0x728: @@ ClearReplies()
0x729: Pop(0)
0x72a: PushEmpty(bool)
0x72b: Stack[-1] = (bool) 0
0x72c: PushEmpty(bool, object)
0x72d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72e: Call2 0x125b

0x72f: Pop(1)
0x730: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call2 0x1267

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Stack[-1] = (bool) 1
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: Push((int) 525415)
0x739: Push((int) 42567)
0x73a: Push((int) 26783)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Push((int) 525418)
0x73e: Push((int) -1)
0x73f: Push((int) 26786)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Return(); Pop(0)

0x743: Push((int) 42567)
0x744: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x746: PushEmpty(string)
0x747: Stack[-1] = "Untrust"
0x748: Call2 0x6fa

0x749: Pop(1)
0x74a: Push((int) 540558)
0x74b: @@ SetMessage(Stack[-1])
0x74c: Pop(1)
0x74d: @@ ClearReplies()
0x74e: Pop(0)
0x74f: Push((int) 540559)
0x750: Push((int) 26784)
0x751: Push((int) 42568)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Push((int) 540560)
0x755: Push((int) 40922)
0x756: Push((int) 42569)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Return(); Pop(0)

0x75a: Push((int) 26784)
0x75b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75c: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x75d: PushEmpty(string)
0x75e: Stack[-1] = "Untrust"
0x75f: Call2 0x6fa

0x760: Pop(1)
0x761: Push((int) 525416)
0x762: @@ SetMessage(Stack[-1])
0x763: Pop(1)
0x764: @@ ClearReplies()
0x765: Pop(0)
0x766: Push((int) 525417)
0x767: Push((int) 40922)
0x768: Push((int) 26785)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Push((int) 540561)
0x76c: Push((int) 40924)
0x76d: Push((int) 42571)
0x76e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76f: Pop(3)
0x770: Return(); Pop(0)

0x771: Push((int) 40922)
0x772: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x774: PushEmpty(string)
0x775: Stack[-1] = "Fear"
0x776: Call2 0x6fa

0x777: Pop(1)
0x778: Push((int) 538982)
0x779: @@ SetMessage(Stack[-1])
0x77a: Pop(1)
0x77b: @@ ClearReplies()
0x77c: Pop(0)
0x77d: Push((int) 538983)
0x77e: Push((int) 40924)
0x77f: Push((int) 40923)
0x780: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x781: Pop(3)
0x782: Return(); Pop(0)

0x783: Push((int) 40924)
0x784: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x786: PushEmpty(string)
0x787: Stack[-1] = "Neutral"
0x788: Call2 0x6fa

0x789: Pop(1)
0x78a: Push((int) 538984)
0x78b: @@ SetMessage(Stack[-1])
0x78c: Pop(1)
0x78d: @@ ClearReplies()
0x78e: Pop(0)
0x78f: Push((int) 538985)
0x790: Push((int) 40926)
0x791: Push((int) 40925)
0x792: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x793: Pop(3)
0x794: Push((int) 538988)
0x795: Push((int) 40929)
0x796: Push((int) 40928)
0x797: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x798: Pop(3)
0x799: Return(); Pop(0)

0x79a: Push((int) 40929)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x79d: PushEmpty(string)
0x79e: Stack[-1] = "Untrust"
0x79f: Call2 0x6fa

0x7a0: Pop(1)
0x7a1: Push((int) 538989)
0x7a2: @@ SetMessage(Stack[-1])
0x7a3: Pop(1)
0x7a4: @@ ClearReplies()
0x7a5: Pop(0)
0x7a6: Push((int) 540565)
0x7a7: Push((int) 42578)
0x7a8: Push((int) 42577)
0x7a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7aa: Pop(3)
0x7ab: Push((int) 538990)
0x7ac: Push((int) 40931)
0x7ad: Push((int) 40930)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Return(); Pop(0)

0x7b1: Push((int) 40931)
0x7b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7b4: PushEmpty(string)
0x7b5: Stack[-1] = "Fear"
0x7b6: Call2 0x6fa

0x7b7: Pop(1)
0x7b8: Push((int) 538991)
0x7b9: @@ SetMessage(Stack[-1])
0x7ba: Pop(1)
0x7bb: @@ ClearReplies()
0x7bc: Pop(0)
0x7bd: Push((int) 538992)
0x7be: Push((int) -1)
0x7bf: Push((int) 40932)
0x7c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c1: Pop(3)
0x7c2: Push((int) 540575)
0x7c3: Push((int) -1)
0x7c4: Push((int) 42589)
0x7c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c6: Pop(3)
0x7c7: Return(); Pop(0)

0x7c8: Push((int) 40926)
0x7c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7cb: PushEmpty(string)
0x7cc: Stack[-1] = "Untrust"
0x7cd: Call2 0x6fa

0x7ce: Pop(1)
0x7cf: Push((int) 538986)
0x7d0: @@ SetMessage(Stack[-1])
0x7d1: Pop(1)
0x7d2: @@ ClearReplies()
0x7d3: Pop(0)
0x7d4: Push((int) 538987)
0x7d5: Push((int) 42573)
0x7d6: Push((int) 40927)
0x7d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d8: Pop(3)
0x7d9: Return(); Pop(0)

0x7da: Push((int) 42573)
0x7db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7dd: PushEmpty(string)
0x7de: Stack[-1] = "Rage"
0x7df: Call2 0x6fa

0x7e0: Pop(1)
0x7e1: Push((int) 540562)
0x7e2: @@ SetMessage(Stack[-1])
0x7e3: Pop(1)
0x7e4: @@ ClearReplies()
0x7e5: Pop(0)
0x7e6: Push((int) 540563)
0x7e7: Push((int) 40929)
0x7e8: Push((int) 42574)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Push((int) 540564)
0x7ec: Push((int) 42578)
0x7ed: Push((int) 42576)
0x7ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ef: Pop(3)
0x7f0: Return(); Pop(0)

0x7f1: Push((int) 42578)
0x7f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7f4: PushEmpty(string)
0x7f5: Stack[-1] = "Rage"
0x7f6: Call2 0x6fa

0x7f7: Pop(1)
0x7f8: Push((int) 540566)
0x7f9: @@ SetMessage(Stack[-1])
0x7fa: Pop(1)
0x7fb: @@ ClearReplies()
0x7fc: Pop(0)
0x7fd: Push((int) 540592)
0x7fe: Push((int) 42607)
0x7ff: Push((int) 42606)
0x800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Return(); Pop(0)

0x803: Push((int) 42607)
0x804: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x806: PushEmpty(string)
0x807: Stack[-1] = "Rage"
0x808: Call2 0x6fa

0x809: Pop(1)
0x80a: Push((int) 540593)
0x80b: @@ SetMessage(Stack[-1])
0x80c: Pop(1)
0x80d: @@ ClearReplies()
0x80e: Pop(0)
0x80f: Push((int) 540594)
0x810: Push((int) 42609)
0x811: Push((int) 42608)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Push((int) 540601)
0x815: Push((int) -1)
0x816: Push((int) 42615)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: Return(); Pop(0)

0x81a: Push((int) 42609)
0x81b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x81d: PushEmpty(string)
0x81e: Stack[-1] = "Neutral"
0x81f: Call2 0x6fa

0x820: Pop(1)
0x821: Push((int) 540595)
0x822: @@ SetMessage(Stack[-1])
0x823: Pop(1)
0x824: @@ ClearReplies()
0x825: Pop(0)
0x826: Push((int) 540596)
0x827: Push((int) 42611)
0x828: Push((int) 42610)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Return(); Pop(0)

0x82c: Push((int) 42611)
0x82d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x82f: PushEmpty(string)
0x830: Stack[-1] = "Neutral"
0x831: Call2 0x6fa

0x832: Pop(1)
0x833: Push((int) 540597)
0x834: @@ SetMessage(Stack[-1])
0x835: Pop(1)
0x836: @@ ClearReplies()
0x837: Pop(0)
0x838: Push((int) 540600)
0x839: Push((int) -1)
0x83a: Push((int) 42614)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Return(); Pop(0)

0x83e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x83f: PushEmpty(bool)
0x840: Call2 0x113f

0x841: Pop(0)
0x842: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x843: @ lshStopAnimation()
0x844: Pop(0)
0x845: GOTO 0x848

0x846: @ StopAnimation()
0x847: Pop(0)
0x848: Return(); Pop(0)

0x849: GOTO 0x711

0x84a: Return(); Pop(0)

0x84b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x84c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x84d: PushEmpty(bool, object, float)
0x84e: Stack[-2] = Stack[-12]
0x84f: Stack[-1] = (float) 70.0
0x850: Call2 0xf69

0x851: Pop(2)
0x852: Pop(1); Push((bool) Stack[-1] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-10] = (int) -2
0x855: Return(); Pop(8)

0x856: @ CreateDialog(Stack[-4])
0x857: Pop(0)
0x858: PushEmpty(int)
0x859: Call2 0x1139

0x85a: Pop(0)
0x85b: @@ SetNPCName(Stack[-1])
0x85c: Pop(1)
0x85d: PushEmpty(int)
0x85e: Call2 0x1137

0x85f: Pop(0)
0x860: @@ SetNPCDescription(Stack[-1])
0x861: Pop(1)
0x862: PushEmpty(string)
0x863: Call2 0x113b

0x864: Pop(0)
0x865: @@ SetPhoto(Stack[-1])
0x866: Pop(1)
0x867: PushEmpty(string)
0x868: Call2 0x113d

0x869: Pop(0)
0x86a: @@ SetPhoto2(Stack[-1])
0x86b: Pop(1)
0x86c: PushEmpty(int)
0x86d: Call2 0x1392

0x86e: Pop(0)
0x86f: @@ SetPlayerName(Stack[-1])
0x870: Pop(1)
0x871: Stack[-2] = (int) -1
0x872: @ IsOverrideActive(Stack[-3])
0x873: Pop(0)
0x874: Push(Stack[-3])
0x875: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x876: Stack[-10] = (int) -2
0x877: Return(); Pop(8)

0x878: @ DoDialog(Stack[-4])
0x879: Pop(0)
0x87a: PushEmpty(bool, object)
0x87b: PushEmpty(object)
0x87c: Call2 0x107f

0x87d: Stack[-2] = Stack[-1]
0x87e: Pop(1)
0x87f: Call2 0xfc0

0x880: Pop(2)
0x881: PushEmpty(object, object)
0x882: Stack[-2] = Stack[-11]
0x883: Stack[-1] = Stack[-6]
0x884: Push(-2, 4); TaskCall(9)
0x885: Call2 0x89c

0x886: Pop(-2, 4); TaskReturn
0x887: Pop(2)
0x888: @@ IsDialogEnd(Stack[-1])
0x889: Pop(0)
0x88a: Pop(0); Push((bool) Stack[-1] == 0)
0x88b: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88c: @ sync()
0x88d: Pop(0)
0x88e: @@ IsDialogEnd(Stack[-1])
0x88f: Pop(0)
0x890: GOTO 0x88a

0x891: PushEmpty(object)
0x892: Stack[-1] = Stack[-10]
0x893: Call2 0xfae

0x894: Pop(1)
0x895: @ StopDialog(Stack[-4])
0x896: Pop(0)
0x897: @@ GetReturnValue(Stack[-2])
0x898: Pop(0)
0x899: Stack[-10] = Stack[-2]
0x89a: Return(); Pop(8)

0x89b: Stack[-4] = 0
0x89c: PushEmpty()
0x89d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x89e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x89f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a0: Push((int) 1)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = "Neutral"
0x8a4: Call2 0x8d6

0x8a5: Pop(1)
0x8a6: Push((int) 525513)
0x8a7: @@ SetMessage(Stack[-1])
0x8a8: Pop(1)
0x8a9: @@ ClearReplies()
0x8aa: Pop(0)
0x8ab: Push((int) 525514)
0x8ac: Push((int) 30738)
0x8ad: Push((int) 26870)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Push((int) 529284)
0x8b1: Push((int) 30738)
0x8b2: Push((int) 30737)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: GOTO 0x8b8

0x8b6: Return(); Pop(0)

0x8b7: GOTO 0x8a0

0x8b8: PushEmpty(bool)
0x8b9: Call2 0x113f

0x8ba: Pop(0)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8bc: @ lshWaitForAnimEnd()
0x8bd: Pop(0)
0x8be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: GOTO 0x8c6

0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c3: Call2 0x104a

0x8c4: Pop(1)
0x8c5: GOTO 0x8bc

0x8c6: GOTO 0x8d5

0x8c7: Push("all")
0x8c8: Push("idle")
0x8c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ca: Pop(2)
0x8cb: @ WaitForAnimEnd()
0x8cc: Pop(0)
0x8cd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cf: GOTO 0x8d5

0x8d0: Push("all")
0x8d1: Push("idle")
0x8d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d3: Pop(2)
0x8d4: GOTO 0x8cb

0x8d5: Return(); Pop(0)

0x8d6: PushEmpty()
0x8d7: PushEmpty(bool)
0x8d8: Call2 0x113f

0x8d9: Pop(0)
0x8da: Pop(1); Push((bool) Stack[-1] == 0)
0x8db: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8dc: Return(); Pop(0)

0x8dd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: Return(); Pop(0)

0x8e0: PushEmpty(string, bool)
0x8e1: Stack[-2] = Stack[-3]
0x8e2: Push("")
0x8e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-1] = (bool) 0
0x8e6: GOTO 0x8e8

0x8e7: Stack[-1] = (bool) 1
0x8e8: Call2 0x105a

0x8e9: Pop(2)
0x8ea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8eb: Return(); Pop(0)

0x8ec: PushEmpty()
0x8ed: Push((int) 1)
0x8ee: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x8ef: PushEmpty()
0x8f0: Call2 0x1078

0x8f1: Pop(0)
0x8f2: Push((int) 26869)
0x8f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x8f5: PushEmpty(string)
0x8f6: Stack[-1] = "Neutral"
0x8f7: Call2 0x8d6

0x8f8: Pop(1)
0x8f9: Push((int) 525513)
0x8fa: @@ SetMessage(Stack[-1])
0x8fb: Pop(1)
0x8fc: @@ ClearReplies()
0x8fd: Pop(0)
0x8fe: Push((int) 525514)
0x8ff: Push((int) 30738)
0x900: Push((int) 26870)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: Push((int) 529284)
0x904: Push((int) 30738)
0x905: Push((int) 30737)
0x906: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x907: Pop(3)
0x908: Return(); Pop(0)

0x909: Push((int) 30738)
0x90a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90b: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x90c: PushEmpty(string)
0x90d: Stack[-1] = "Neutral"
0x90e: Call2 0x8d6

0x90f: Pop(1)
0x910: Push((int) 529285)
0x911: @@ SetMessage(Stack[-1])
0x912: Pop(1)
0x913: @@ ClearReplies()
0x914: Pop(0)
0x915: Push((int) 529286)
0x916: Push((int) -1)
0x917: Push((int) 30740)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Push((int) 529287)
0x91b: Push((int) -1)
0x91c: Push((int) 30741)
0x91d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91e: Pop(3)
0x91f: Return(); Pop(0)

0x920: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x921: PushEmpty(bool)
0x922: Call2 0x113f

0x923: Pop(0)
0x924: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x925: @ lshStopAnimation()
0x926: Pop(0)
0x927: GOTO 0x92a

0x928: @ StopAnimation()
0x929: Pop(0)
0x92a: Return(); Pop(0)

0x92b: GOTO 0x8ed

0x92c: Return(); Pop(0)

0x92d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x92e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x92f: PushEmpty(bool, object, float)
0x930: Stack[-2] = Stack[-12]
0x931: Stack[-1] = (float) 70.0
0x932: Call2 0xf69

0x933: Pop(2)
0x934: Pop(1); Push((bool) Stack[-1] == 0)
0x935: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x936: Stack[-10] = (int) -2
0x937: Return(); Pop(8)

0x938: @ CreateDialog(Stack[-4])
0x939: Pop(0)
0x93a: PushEmpty(int)
0x93b: Call2 0x1139

0x93c: Pop(0)
0x93d: @@ SetNPCName(Stack[-1])
0x93e: Pop(1)
0x93f: PushEmpty(int)
0x940: Call2 0x1137

0x941: Pop(0)
0x942: @@ SetNPCDescription(Stack[-1])
0x943: Pop(1)
0x944: PushEmpty(string)
0x945: Call2 0x113b

0x946: Pop(0)
0x947: @@ SetPhoto(Stack[-1])
0x948: Pop(1)
0x949: PushEmpty(string)
0x94a: Call2 0x113d

0x94b: Pop(0)
0x94c: @@ SetPhoto2(Stack[-1])
0x94d: Pop(1)
0x94e: PushEmpty(int)
0x94f: Call2 0x1392

0x950: Pop(0)
0x951: @@ SetPlayerName(Stack[-1])
0x952: Pop(1)
0x953: Stack[-2] = (int) -1
0x954: @ IsOverrideActive(Stack[-3])
0x955: Pop(0)
0x956: Push(Stack[-3])
0x957: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x958: Stack[-10] = (int) -2
0x959: Return(); Pop(8)

0x95a: @ DoDialog(Stack[-4])
0x95b: Pop(0)
0x95c: PushEmpty(bool, object)
0x95d: PushEmpty(object)
0x95e: Call2 0x107f

0x95f: Stack[-2] = Stack[-1]
0x960: Pop(1)
0x961: Call2 0xfc0

0x962: Pop(2)
0x963: PushEmpty(object, object)
0x964: Stack[-2] = Stack[-11]
0x965: Stack[-1] = Stack[-6]
0x966: Push(-2, 4); TaskCall(11)
0x967: Call2 0x97e

0x968: Pop(-2, 4); TaskReturn
0x969: Pop(2)
0x96a: @@ IsDialogEnd(Stack[-1])
0x96b: Pop(0)
0x96c: Pop(0); Push((bool) Stack[-1] == 0)
0x96d: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x96e: @ sync()
0x96f: Pop(0)
0x970: @@ IsDialogEnd(Stack[-1])
0x971: Pop(0)
0x972: GOTO 0x96c

0x973: PushEmpty(object)
0x974: Stack[-1] = Stack[-10]
0x975: Call2 0xfae

0x976: Pop(1)
0x977: @ StopDialog(Stack[-4])
0x978: Pop(0)
0x979: @@ GetReturnValue(Stack[-2])
0x97a: Pop(0)
0x97b: Stack[-10] = Stack[-2]
0x97c: Return(); Pop(8)

0x97d: Stack[-4] = 0
0x97e: PushEmpty()
0x97f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x980: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x981: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x982: Push((int) 1)
0x983: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x984: PushEmpty(string)
0x985: Stack[-1] = "Neutral"
0x986: Call2 0x9d5

0x987: Pop(1)
0x988: Push((int) 525841)
0x989: @@ SetMessage(Stack[-1])
0x98a: Pop(1)
0x98b: @@ ClearReplies()
0x98c: Pop(0)
0x98d: PushEmpty(bool)
0x98e: Stack[-1] = (bool) 0
0x98f: PushEmpty(bool, object)
0x990: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x991: Call2 0x1273

0x992: Pop(1)
0x993: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x994: PushEmpty(bool, object)
0x995: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x996: Call2 0x127f

0x997: Pop(1)
0x998: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x999: Stack[-1] = (bool) 1
0x99a: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x99b: Push((int) 525842)
0x99c: Push((int) 30544)
0x99d: Push((int) 27141)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: PushEmpty(bool, object)
0x9a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Call2 0x12a3

0x9a3: Pop(1)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x9a5: Push((int) 525845)
0x9a6: Push((int) 30542)
0x9a7: Push((int) 27144)
0x9a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: Push((int) 529095)
0x9ab: Push((int) -1)
0x9ac: Push((int) 30540)
0x9ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ae: Pop(3)
0x9af: Push((int) 529096)
0x9b0: Push((int) -1)
0x9b1: Push((int) 30541)
0x9b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b3: Pop(3)
0x9b4: GOTO 0x9b7

0x9b5: Return(); Pop(0)

0x9b6: GOTO 0x982

0x9b7: PushEmpty(bool)
0x9b8: Call2 0x113f

0x9b9: Pop(0)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9bb: @ lshWaitForAnimEnd()
0x9bc: Pop(0)
0x9bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: GOTO 0x9c5

0x9c0: PushEmpty(string)
0x9c1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c2: Call2 0x104a

0x9c3: Pop(1)
0x9c4: GOTO 0x9bb

0x9c5: GOTO 0x9d4

0x9c6: Push("all")
0x9c7: Push("idle")
0x9c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c9: Pop(2)
0x9ca: @ WaitForAnimEnd()
0x9cb: Pop(0)
0x9cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9cd: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9ce: GOTO 0x9d4

0x9cf: Push("all")
0x9d0: Push("idle")
0x9d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d2: Pop(2)
0x9d3: GOTO 0x9ca

0x9d4: Return(); Pop(0)

0x9d5: PushEmpty()
0x9d6: PushEmpty(bool)
0x9d7: Call2 0x113f

0x9d8: Pop(0)
0x9d9: Pop(1); Push((bool) Stack[-1] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: Return(); Pop(0)

0x9dc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9de: Return(); Pop(0)

0x9df: PushEmpty(string, bool)
0x9e0: Stack[-2] = Stack[-3]
0x9e1: Push("")
0x9e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9e4: Stack[-1] = (bool) 0
0x9e5: GOTO 0x9e7

0x9e6: Stack[-1] = (bool) 1
0x9e7: Call2 0x105a

0x9e8: Pop(2)
0x9e9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9ea: Return(); Pop(0)

0x9eb: PushEmpty()
0x9ec: Push((int) 1)
0x9ed: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0x9ee: PushEmpty()
0x9ef: Call2 0x1078

0x9f0: Pop(0)
0x9f1: Push((int) 27141)
0x9f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f4: PushEmpty(object, object)
0x9f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f7: Call2 0x11b7

0x9f8: Pop(2)
0x9f9: Push((int) 27143)
0x9fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9fb: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fc: PushEmpty(object, object)
0x9fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ff: Call2 0x11bd

0xa00: Pop(2)
0xa01: Push((int) 27144)
0xa02: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa04: PushEmpty(object, object)
0xa05: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa06: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa07: Call2 0x11f3

0xa08: Pop(2)
0xa09: Push((int) 27140)
0xa0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa0c: PushEmpty(string)
0xa0d: Stack[-1] = "Neutral"
0xa0e: Call2 0x9d5

0xa0f: Pop(1)
0xa10: Push((int) 525841)
0xa11: @@ SetMessage(Stack[-1])
0xa12: Pop(1)
0xa13: @@ ClearReplies()
0xa14: Pop(0)
0xa15: PushEmpty(bool)
0xa16: Stack[-1] = (bool) 0
0xa17: PushEmpty(bool, object)
0xa18: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa19: Call2 0x1273

0xa1a: Pop(1)
0xa1b: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa1c: PushEmpty(bool, object)
0xa1d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1e: Call2 0x127f

0xa1f: Pop(1)
0xa20: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa21: Stack[-1] = (bool) 1
0xa22: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa23: Push((int) 525842)
0xa24: Push((int) 30544)
0xa25: Push((int) 27141)
0xa26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa27: Pop(3)
0xa28: PushEmpty(bool, object)
0xa29: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2a: Call2 0x12a3

0xa2b: Pop(1)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa2d: Push((int) 525845)
0xa2e: Push((int) 30542)
0xa2f: Push((int) 27144)
0xa30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa31: Pop(3)
0xa32: Push((int) 529095)
0xa33: Push((int) -1)
0xa34: Push((int) 30540)
0xa35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa36: Pop(3)
0xa37: Push((int) 529096)
0xa38: Push((int) -1)
0xa39: Push((int) 30541)
0xa3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3b: Pop(3)
0xa3c: Return(); Pop(0)

0xa3d: Push((int) 30542)
0xa3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa40: PushEmpty(string)
0xa41: Stack[-1] = "Untrust"
0xa42: Call2 0x9d5

0xa43: Pop(1)
0xa44: Push((int) 529097)
0xa45: @@ SetMessage(Stack[-1])
0xa46: Pop(1)
0xa47: @@ ClearReplies()
0xa48: Pop(0)
0xa49: Push((int) 529098)
0xa4a: Push((int) -1)
0xa4b: Push((int) 30543)
0xa4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4d: Pop(3)
0xa4e: Push((int) 541643)
0xa4f: Push((int) -1)
0xa50: Push((int) 43815)
0xa51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa52: Pop(3)
0xa53: Return(); Pop(0)

0xa54: Push((int) 30544)
0xa55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa57: PushEmpty(string)
0xa58: Stack[-1] = "Sly"
0xa59: Call2 0x9d5

0xa5a: Pop(1)
0xa5b: Push((int) 529099)
0xa5c: @@ SetMessage(Stack[-1])
0xa5d: Pop(1)
0xa5e: @@ ClearReplies()
0xa5f: Pop(0)
0xa60: Push((int) 529100)
0xa61: Push((int) 30546)
0xa62: Push((int) 30545)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: Return(); Pop(0)

0xa66: Push((int) 30546)
0xa67: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa68: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa69: PushEmpty(string)
0xa6a: Stack[-1] = "Sly"
0xa6b: Call2 0x9d5

0xa6c: Pop(1)
0xa6d: Push((int) 529101)
0xa6e: @@ SetMessage(Stack[-1])
0xa6f: Pop(1)
0xa70: @@ ClearReplies()
0xa71: Pop(0)
0xa72: Push((int) 529102)
0xa73: Push((int) 27142)
0xa74: Push((int) 30547)
0xa75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa76: Pop(3)
0xa77: Return(); Pop(0)

0xa78: Push((int) 27142)
0xa79: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa7b: PushEmpty(string)
0xa7c: Stack[-1] = "Sly"
0xa7d: Call2 0x9d5

0xa7e: Pop(1)
0xa7f: Push((int) 525843)
0xa80: @@ SetMessage(Stack[-1])
0xa81: Pop(1)
0xa82: @@ ClearReplies()
0xa83: Pop(0)
0xa84: Push((int) 529103)
0xa85: Push((int) 30549)
0xa86: Push((int) 30548)
0xa87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa88: Pop(3)
0xa89: Return(); Pop(0)

0xa8a: Push((int) 30549)
0xa8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8c: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa8d: PushEmpty(string)
0xa8e: Stack[-1] = "Rage"
0xa8f: Call2 0x9d5

0xa90: Pop(1)
0xa91: Push((int) 529104)
0xa92: @@ SetMessage(Stack[-1])
0xa93: Pop(1)
0xa94: @@ ClearReplies()
0xa95: Pop(0)
0xa96: Push((int) 529105)
0xa97: Push((int) 30551)
0xa98: Push((int) 30550)
0xa99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9a: Pop(3)
0xa9b: Push((int) 539587)
0xa9c: Push((int) 41533)
0xa9d: Push((int) 41532)
0xa9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9f: Pop(3)
0xaa0: Return(); Pop(0)

0xaa1: Push((int) 41533)
0xaa2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xaa4: PushEmpty(string)
0xaa5: Stack[-1] = "Neutral"
0xaa6: Call2 0x9d5

0xaa7: Pop(1)
0xaa8: Push((int) 539588)
0xaa9: @@ SetMessage(Stack[-1])
0xaaa: Pop(1)
0xaab: @@ ClearReplies()
0xaac: Pop(0)
0xaad: Push((int) 539589)
0xaae: Push((int) 30551)
0xaaf: Push((int) 41534)
0xab0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab1: Pop(3)
0xab2: Return(); Pop(0)

0xab3: Push((int) 30551)
0xab4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab5: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xab6: PushEmpty(string)
0xab7: Stack[-1] = "Untrust"
0xab8: Call2 0x9d5

0xab9: Pop(1)
0xaba: Push((int) 529106)
0xabb: @@ SetMessage(Stack[-1])
0xabc: Pop(1)
0xabd: @@ ClearReplies()
0xabe: Pop(0)
0xabf: Push((int) 525844)
0xac0: Push((int) -1)
0xac1: Push((int) 27143)
0xac2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac3: Pop(3)
0xac4: Return(); Pop(0)

0xac5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xac6: PushEmpty(bool)
0xac7: Call2 0x113f

0xac8: Pop(0)
0xac9: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xaca: @ lshStopAnimation()
0xacb: Pop(0)
0xacc: GOTO 0xacf

0xacd: @ StopAnimation()
0xace: Pop(0)
0xacf: Return(); Pop(0)

0xad0: GOTO 0x9ec

0xad1: Return(); Pop(0)

0xad2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xad3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xad4: PushEmpty(bool, object, float)
0xad5: Stack[-2] = Stack[-12]
0xad6: Stack[-1] = (float) 70.0
0xad7: Call2 0xf69

0xad8: Pop(2)
0xad9: Pop(1); Push((bool) Stack[-1] == 0)
0xada: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xadb: Stack[-10] = (int) -2
0xadc: Return(); Pop(8)

0xadd: @ CreateDialog(Stack[-4])
0xade: Pop(0)
0xadf: PushEmpty(int)
0xae0: Call2 0x1139

0xae1: Pop(0)
0xae2: @@ SetNPCName(Stack[-1])
0xae3: Pop(1)
0xae4: PushEmpty(int)
0xae5: Call2 0x1137

0xae6: Pop(0)
0xae7: @@ SetNPCDescription(Stack[-1])
0xae8: Pop(1)
0xae9: PushEmpty(string)
0xaea: Call2 0x113b

0xaeb: Pop(0)
0xaec: @@ SetPhoto(Stack[-1])
0xaed: Pop(1)
0xaee: PushEmpty(string)
0xaef: Call2 0x113d

0xaf0: Pop(0)
0xaf1: @@ SetPhoto2(Stack[-1])
0xaf2: Pop(1)
0xaf3: PushEmpty(int)
0xaf4: Call2 0x1392

0xaf5: Pop(0)
0xaf6: @@ SetPlayerName(Stack[-1])
0xaf7: Pop(1)
0xaf8: Stack[-2] = (int) -1
0xaf9: @ IsOverrideActive(Stack[-3])
0xafa: Pop(0)
0xafb: Push(Stack[-3])
0xafc: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafd: Stack[-10] = (int) -2
0xafe: Return(); Pop(8)

0xaff: @ DoDialog(Stack[-4])
0xb00: Pop(0)
0xb01: PushEmpty(bool, object)
0xb02: PushEmpty(object)
0xb03: Call2 0x107f

0xb04: Stack[-2] = Stack[-1]
0xb05: Pop(1)
0xb06: Call2 0xfc0

0xb07: Pop(2)
0xb08: PushEmpty(object, object)
0xb09: Stack[-2] = Stack[-11]
0xb0a: Stack[-1] = Stack[-6]
0xb0b: Push(-2, 4); TaskCall(13)
0xb0c: Call2 0xb23

0xb0d: Pop(-2, 4); TaskReturn
0xb0e: Pop(2)
0xb0f: @@ IsDialogEnd(Stack[-1])
0xb10: Pop(0)
0xb11: Pop(0); Push((bool) Stack[-1] == 0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb13: @ sync()
0xb14: Pop(0)
0xb15: @@ IsDialogEnd(Stack[-1])
0xb16: Pop(0)
0xb17: GOTO 0xb11

0xb18: PushEmpty(object)
0xb19: Stack[-1] = Stack[-10]
0xb1a: Call2 0xfae

0xb1b: Pop(1)
0xb1c: @ StopDialog(Stack[-4])
0xb1d: Pop(0)
0xb1e: @@ GetReturnValue(Stack[-2])
0xb1f: Pop(0)
0xb20: Stack[-10] = Stack[-2]
0xb21: Return(); Pop(8)

0xb22: Stack[-4] = 0
0xb23: PushEmpty()
0xb24: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb25: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb26: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb27: Push((int) 1)
0xb28: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb29: PushEmpty(string)
0xb2a: Stack[-1] = "Rage"
0xb2b: Call2 0xb71

0xb2c: Pop(1)
0xb2d: Push((int) 526738)
0xb2e: @@ SetMessage(Stack[-1])
0xb2f: Pop(1)
0xb30: @@ ClearReplies()
0xb31: Pop(0)
0xb32: PushEmpty(bool, object)
0xb33: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb34: Call2 0x1297

0xb35: Pop(1)
0xb36: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb37: Push((int) 526739)
0xb38: Push((int) 28017)
0xb39: Push((int) 28016)
0xb3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3b: Pop(3)
0xb3c: PushEmpty(bool, object)
0xb3d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3e: Call2 0x128b

0xb3f: Pop(1)
0xb40: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb41: Push((int) 528763)
0xb42: Push((int) 30180)
0xb43: Push((int) 30179)
0xb44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb45: Pop(3)
0xb46: Push((int) 526742)
0xb47: Push((int) -1)
0xb48: Push((int) 28019)
0xb49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4a: Pop(3)
0xb4b: Push((int) 528847)
0xb4c: Push((int) -1)
0xb4d: Push((int) 30265)
0xb4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4f: Pop(3)
0xb50: GOTO 0xb53

0xb51: Return(); Pop(0)

0xb52: GOTO 0xb27

0xb53: PushEmpty(bool)
0xb54: Call2 0x113f

0xb55: Pop(0)
0xb56: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb57: @ lshWaitForAnimEnd()
0xb58: Pop(0)
0xb59: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5a: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb5b: GOTO 0xb61

0xb5c: PushEmpty(string)
0xb5d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb5e: Call2 0x104a

0xb5f: Pop(1)
0xb60: GOTO 0xb57

0xb61: GOTO 0xb70

0xb62: Push("all")
0xb63: Push("idle")
0xb64: @ PlayAnimation(Stack[-2], Stack[-1])
0xb65: Pop(2)
0xb66: @ WaitForAnimEnd()
0xb67: Pop(0)
0xb68: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb69: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb6a: GOTO 0xb70

0xb6b: Push("all")
0xb6c: Push("idle")
0xb6d: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6e: Pop(2)
0xb6f: GOTO 0xb66

0xb70: Return(); Pop(0)

0xb71: PushEmpty()
0xb72: PushEmpty(bool)
0xb73: Call2 0x113f

0xb74: Pop(0)
0xb75: Pop(1); Push((bool) Stack[-1] == 0)
0xb76: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb77: Return(); Pop(0)

0xb78: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb79: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb7a: Return(); Pop(0)

0xb7b: PushEmpty(string, bool)
0xb7c: Stack[-2] = Stack[-3]
0xb7d: Push("")
0xb7e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7f: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb80: Stack[-1] = (bool) 0
0xb81: GOTO 0xb83

0xb82: Stack[-1] = (bool) 1
0xb83: Call2 0x105a

0xb84: Pop(2)
0xb85: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb86: Return(); Pop(0)

0xb87: PushEmpty()
0xb88: Push((int) 1)
0xb89: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xb8a: PushEmpty()
0xb8b: Call2 0x1078

0xb8c: Pop(0)
0xb8d: Push((int) 28018)
0xb8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb90: PushEmpty(object, object)
0xb91: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb92: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb93: Call2 0x11c2

0xb94: Pop(2)
0xb95: Push((int) 45451)
0xb96: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb97: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb98: PushEmpty(object, object)
0xb99: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9b: Call2 0x11c2

0xb9c: Pop(2)
0xb9d: Push((int) 28015)
0xb9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9f: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xba0: PushEmpty(string)
0xba1: Stack[-1] = "Rage"
0xba2: Call2 0xb71

0xba3: Pop(1)
0xba4: Push((int) 526738)
0xba5: @@ SetMessage(Stack[-1])
0xba6: Pop(1)
0xba7: @@ ClearReplies()
0xba8: Pop(0)
0xba9: PushEmpty(bool, object)
0xbaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbab: Call2 0x1297

0xbac: Pop(1)
0xbad: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbae: Push((int) 526739)
0xbaf: Push((int) 28017)
0xbb0: Push((int) 28016)
0xbb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb2: Pop(3)
0xbb3: PushEmpty(bool, object)
0xbb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb5: Call2 0x128b

0xbb6: Pop(1)
0xbb7: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbb8: Push((int) 528763)
0xbb9: Push((int) 30180)
0xbba: Push((int) 30179)
0xbbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbc: Pop(3)
0xbbd: Push((int) 526742)
0xbbe: Push((int) -1)
0xbbf: Push((int) 28019)
0xbc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc1: Pop(3)
0xbc2: Push((int) 528847)
0xbc3: Push((int) -1)
0xbc4: Push((int) 30265)
0xbc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc6: Pop(3)
0xbc7: Return(); Pop(0)

0xbc8: Push((int) 30180)
0xbc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbcb: PushEmpty(string)
0xbcc: Stack[-1] = "Rage"
0xbcd: Call2 0xb71

0xbce: Pop(1)
0xbcf: Push((int) 528764)
0xbd0: @@ SetMessage(Stack[-1])
0xbd1: Pop(1)
0xbd2: @@ ClearReplies()
0xbd3: Pop(0)
0xbd4: Push((int) 542466)
0xbd5: Push((int) 44860)
0xbd6: Push((int) 44859)
0xbd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd8: Pop(3)
0xbd9: Push((int) 542463)
0xbda: Push((int) 44857)
0xbdb: Push((int) 44856)
0xbdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdd: Pop(3)
0xbde: Push((int) 528765)
0xbdf: Push((int) -1)
0xbe0: Push((int) 30181)
0xbe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe2: Pop(3)
0xbe3: Return(); Pop(0)

0xbe4: Push((int) 44857)
0xbe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbe7: PushEmpty(string)
0xbe8: Stack[-1] = "Neutral"
0xbe9: Call2 0xb71

0xbea: Pop(1)
0xbeb: Push((int) 542464)
0xbec: @@ SetMessage(Stack[-1])
0xbed: Pop(1)
0xbee: @@ ClearReplies()
0xbef: Pop(0)
0xbf0: Push((int) 542465)
0xbf1: Push((int) -1)
0xbf2: Push((int) 44858)
0xbf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf4: Pop(3)
0xbf5: Return(); Pop(0)

0xbf6: Push((int) 44860)
0xbf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xbf9: PushEmpty(string)
0xbfa: Stack[-1] = "Neutral"
0xbfb: Call2 0xb71

0xbfc: Pop(1)
0xbfd: Push((int) 542467)
0xbfe: @@ SetMessage(Stack[-1])
0xbff: Pop(1)
0xc00: @@ ClearReplies()
0xc01: Pop(0)
0xc02: Push((int) 542468)
0xc03: Push((int) -1)
0xc04: Push((int) 44861)
0xc05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: Push((int) 543008)
0xc08: Push((int) -1)
0xc09: Push((int) 45460)
0xc0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0b: Pop(3)
0xc0c: Return(); Pop(0)

0xc0d: Push((int) 28017)
0xc0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0f: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc10: PushEmpty(string)
0xc11: Stack[-1] = "Rage"
0xc12: Call2 0xb71

0xc13: Pop(1)
0xc14: Push((int) 526740)
0xc15: @@ SetMessage(Stack[-1])
0xc16: Pop(1)
0xc17: @@ ClearReplies()
0xc18: Pop(0)
0xc19: Push((int) 528841)
0xc1a: Push((int) 30260)
0xc1b: Push((int) 30259)
0xc1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1d: Pop(3)
0xc1e: Push((int) 528848)
0xc1f: Push((int) 30267)
0xc20: Push((int) 30266)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: Return(); Pop(0)

0xc24: Push((int) 30267)
0xc25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc26: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc27: PushEmpty(string)
0xc28: Stack[-1] = "Neutral"
0xc29: Call2 0xb71

0xc2a: Pop(1)
0xc2b: Push((int) 528849)
0xc2c: @@ SetMessage(Stack[-1])
0xc2d: Pop(1)
0xc2e: @@ ClearReplies()
0xc2f: Pop(0)
0xc30: Push((int) 528850)
0xc31: Push((int) 45452)
0xc32: Push((int) 30268)
0xc33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc34: Pop(3)
0xc35: Push((int) 528851)
0xc36: Push((int) 45452)
0xc37: Push((int) 30269)
0xc38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc39: Pop(3)
0xc3a: Return(); Pop(0)

0xc3b: Push((int) 45452)
0xc3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3d: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xc3e: PushEmpty(string)
0xc3f: Stack[-1] = "Neutral"
0xc40: Call2 0xb71

0xc41: Pop(1)
0xc42: Push((int) 543003)
0xc43: @@ SetMessage(Stack[-1])
0xc44: Pop(1)
0xc45: @@ ClearReplies()
0xc46: Pop(0)
0xc47: Push((int) 543005)
0xc48: Push((int) 45457)
0xc49: Push((int) 45456)
0xc4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4b: Pop(3)
0xc4c: Return(); Pop(0)

0xc4d: Push((int) 45457)
0xc4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4f: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc50: PushEmpty(string)
0xc51: Stack[-1] = "Sly"
0xc52: Call2 0xb71

0xc53: Pop(1)
0xc54: Push((int) 543006)
0xc55: @@ SetMessage(Stack[-1])
0xc56: Pop(1)
0xc57: @@ ClearReplies()
0xc58: Pop(0)
0xc59: Push((int) 543007)
0xc5a: Push((int) 30264)
0xc5b: Push((int) 45458)
0xc5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5d: Pop(3)
0xc5e: Return(); Pop(0)

0xc5f: Push((int) 30260)
0xc60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc62: PushEmpty(string)
0xc63: Stack[-1] = "Sly"
0xc64: Call2 0xb71

0xc65: Pop(1)
0xc66: Push((int) 528842)
0xc67: @@ SetMessage(Stack[-1])
0xc68: Pop(1)
0xc69: @@ ClearReplies()
0xc6a: Pop(0)
0xc6b: Push((int) 528843)
0xc6c: Push((int) 30262)
0xc6d: Push((int) 30261)
0xc6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6f: Pop(3)
0xc70: Return(); Pop(0)

0xc71: Push((int) 30262)
0xc72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc73: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc74: PushEmpty(string)
0xc75: Stack[-1] = "Rage"
0xc76: Call2 0xb71

0xc77: Pop(1)
0xc78: Push((int) 528844)
0xc79: @@ SetMessage(Stack[-1])
0xc7a: Pop(1)
0xc7b: @@ ClearReplies()
0xc7c: Pop(0)
0xc7d: Push((int) 528845)
0xc7e: Push((int) 30264)
0xc7f: Push((int) 30263)
0xc80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc81: Pop(3)
0xc82: Push((int) 543004)
0xc83: Push((int) 30264)
0xc84: Push((int) 45454)
0xc85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc86: Pop(3)
0xc87: Return(); Pop(0)

0xc88: Push((int) 30264)
0xc89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8a: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc8b: PushEmpty(string)
0xc8c: Stack[-1] = "Neutral"
0xc8d: Call2 0xb71

0xc8e: Pop(1)
0xc8f: Push((int) 528846)
0xc90: @@ SetMessage(Stack[-1])
0xc91: Pop(1)
0xc92: @@ ClearReplies()
0xc93: Pop(0)
0xc94: Push((int) 526741)
0xc95: Push((int) -1)
0xc96: Push((int) 28018)
0xc97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc98: Pop(3)
0xc99: Push((int) 543002)
0xc9a: Push((int) -1)
0xc9b: Push((int) 45451)
0xc9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9d: Pop(3)
0xc9e: Return(); Pop(0)

0xc9f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xca0: PushEmpty(bool)
0xca1: Call2 0x113f

0xca2: Pop(0)
0xca3: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca4: @ lshStopAnimation()
0xca5: Pop(0)
0xca6: GOTO 0xca9

0xca7: @ StopAnimation()
0xca8: Pop(0)
0xca9: Return(); Pop(0)

0xcaa: GOTO 0xb88

0xcab: Return(); Pop(0)

0xcac: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcad: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcae: PushEmpty(bool, object, float)
0xcaf: Stack[-2] = Stack[-12]
0xcb0: Stack[-1] = (float) 70.0
0xcb1: Call2 0xf69

0xcb2: Pop(2)
0xcb3: Pop(1); Push((bool) Stack[-1] == 0)
0xcb4: IF (Stack[-1] == 0) GOTO 0xcb7; Pop(1)

0xcb5: Stack[-10] = (int) -2
0xcb6: Return(); Pop(8)

0xcb7: @ CreateDialog(Stack[-4])
0xcb8: Pop(0)
0xcb9: PushEmpty(int)
0xcba: Call2 0x1139

0xcbb: Pop(0)
0xcbc: @@ SetNPCName(Stack[-1])
0xcbd: Pop(1)
0xcbe: PushEmpty(int)
0xcbf: Call2 0x1137

0xcc0: Pop(0)
0xcc1: @@ SetNPCDescription(Stack[-1])
0xcc2: Pop(1)
0xcc3: PushEmpty(string)
0xcc4: Call2 0x113b

0xcc5: Pop(0)
0xcc6: @@ SetPhoto(Stack[-1])
0xcc7: Pop(1)
0xcc8: PushEmpty(string)
0xcc9: Call2 0x113d

0xcca: Pop(0)
0xccb: @@ SetPhoto2(Stack[-1])
0xccc: Pop(1)
0xccd: PushEmpty(int)
0xcce: Call2 0x1392

0xccf: Pop(0)
0xcd0: @@ SetPlayerName(Stack[-1])
0xcd1: Pop(1)
0xcd2: Stack[-2] = (int) -1
0xcd3: @ IsOverrideActive(Stack[-3])
0xcd4: Pop(0)
0xcd5: Push(Stack[-3])
0xcd6: IF (Stack[-1] == 0) GOTO 0xcd9; Pop(1)

0xcd7: Stack[-10] = (int) -2
0xcd8: Return(); Pop(8)

0xcd9: @ DoDialog(Stack[-4])
0xcda: Pop(0)
0xcdb: PushEmpty(bool, object)
0xcdc: PushEmpty(object)
0xcdd: Call2 0x107f

0xcde: Stack[-2] = Stack[-1]
0xcdf: Pop(1)
0xce0: Call2 0xfc0

0xce1: Pop(2)
0xce2: PushEmpty(object, object)
0xce3: Stack[-2] = Stack[-11]
0xce4: Stack[-1] = Stack[-6]
0xce5: Push(-2, 4); TaskCall(15)
0xce6: Call2 0xcfd

0xce7: Pop(-2, 4); TaskReturn
0xce8: Pop(2)
0xce9: @@ IsDialogEnd(Stack[-1])
0xcea: Pop(0)
0xceb: Pop(0); Push((bool) Stack[-1] == 0)
0xcec: IF (Stack[-1] == 0) GOTO 0xcf2; Pop(1)

0xced: @ sync()
0xcee: Pop(0)
0xcef: @@ IsDialogEnd(Stack[-1])
0xcf0: Pop(0)
0xcf1: GOTO 0xceb

0xcf2: PushEmpty(object)
0xcf3: Stack[-1] = Stack[-10]
0xcf4: Call2 0xfae

0xcf5: Pop(1)
0xcf6: @ StopDialog(Stack[-4])
0xcf7: Pop(0)
0xcf8: @@ GetReturnValue(Stack[-2])
0xcf9: Pop(0)
0xcfa: Stack[-10] = Stack[-2]
0xcfb: Return(); Pop(8)

0xcfc: Stack[-4] = 0
0xcfd: PushEmpty()
0xcfe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcff: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd00: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd01: Push((int) 1)
0xd02: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd03: PushEmpty(string)
0xd04: Stack[-1] = "Neutral"
0xd05: Call2 0xd3c

0xd06: Pop(1)
0xd07: Push((int) 535231)
0xd08: @@ SetMessage(Stack[-1])
0xd09: Pop(1)
0xd0a: @@ ClearReplies()
0xd0b: Pop(0)
0xd0c: Push((int) 535232)
0xd0d: Push((int) 36953)
0xd0e: Push((int) 36907)
0xd0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd10: Pop(3)
0xd11: Push((int) 535233)
0xd12: Push((int) -1)
0xd13: Push((int) 36908)
0xd14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd15: Pop(3)
0xd16: Push((int) 535280)
0xd17: Push((int) -1)
0xd18: Push((int) 36956)
0xd19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1a: Pop(3)
0xd1b: GOTO 0xd1e

0xd1c: Return(); Pop(0)

0xd1d: GOTO 0xd01

0xd1e: PushEmpty(bool)
0xd1f: Call2 0x113f

0xd20: Pop(0)
0xd21: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd22: @ lshWaitForAnimEnd()
0xd23: Pop(0)
0xd24: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd25: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd26: GOTO 0xd2c

0xd27: PushEmpty(string)
0xd28: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd29: Call2 0x104a

0xd2a: Pop(1)
0xd2b: GOTO 0xd22

0xd2c: GOTO 0xd3b

0xd2d: Push("all")
0xd2e: Push("idle")
0xd2f: @ PlayAnimation(Stack[-2], Stack[-1])
0xd30: Pop(2)
0xd31: @ WaitForAnimEnd()
0xd32: Pop(0)
0xd33: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd34: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd35: GOTO 0xd3b

0xd36: Push("all")
0xd37: Push("idle")
0xd38: @ PlayAnimation(Stack[-2], Stack[-1])
0xd39: Pop(2)
0xd3a: GOTO 0xd31

0xd3b: Return(); Pop(0)

0xd3c: PushEmpty()
0xd3d: PushEmpty(bool)
0xd3e: Call2 0x113f

0xd3f: Pop(0)
0xd40: Pop(1); Push((bool) Stack[-1] == 0)
0xd41: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd42: Return(); Pop(0)

0xd43: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd44: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd45: Return(); Pop(0)

0xd46: PushEmpty(string, bool)
0xd47: Stack[-2] = Stack[-3]
0xd48: Push("")
0xd49: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd4b: Stack[-1] = (bool) 0
0xd4c: GOTO 0xd4e

0xd4d: Stack[-1] = (bool) 1
0xd4e: Call2 0x105a

0xd4f: Pop(2)
0xd50: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd51: Return(); Pop(0)

0xd52: PushEmpty()
0xd53: Push((int) 1)
0xd54: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xd55: PushEmpty()
0xd56: Call2 0x1078

0xd57: Pop(0)
0xd58: Push((int) 36906)
0xd59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd5b: PushEmpty(string)
0xd5c: Stack[-1] = "Neutral"
0xd5d: Call2 0xd3c

0xd5e: Pop(1)
0xd5f: Push((int) 535231)
0xd60: @@ SetMessage(Stack[-1])
0xd61: Pop(1)
0xd62: @@ ClearReplies()
0xd63: Pop(0)
0xd64: Push((int) 535232)
0xd65: Push((int) 36953)
0xd66: Push((int) 36907)
0xd67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd68: Pop(3)
0xd69: Push((int) 535233)
0xd6a: Push((int) -1)
0xd6b: Push((int) 36908)
0xd6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6d: Pop(3)
0xd6e: Push((int) 535280)
0xd6f: Push((int) -1)
0xd70: Push((int) 36956)
0xd71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd72: Pop(3)
0xd73: Return(); Pop(0)

0xd74: Push((int) 36953)
0xd75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd76: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd77: PushEmpty(string)
0xd78: Stack[-1] = "Neutral"
0xd79: Call2 0xd3c

0xd7a: Pop(1)
0xd7b: Push((int) 535277)
0xd7c: @@ SetMessage(Stack[-1])
0xd7d: Pop(1)
0xd7e: @@ ClearReplies()
0xd7f: Pop(0)
0xd80: Push((int) 535278)
0xd81: Push((int) 36957)
0xd82: Push((int) 36954)
0xd83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(3)
0xd85: Push((int) 535279)
0xd86: Push((int) 36957)
0xd87: Push((int) 36955)
0xd88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd89: Pop(3)
0xd8a: Return(); Pop(0)

0xd8b: Push((int) 36957)
0xd8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8d: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd8e: PushEmpty(string)
0xd8f: Stack[-1] = "Neutral"
0xd90: Call2 0xd3c

0xd91: Pop(1)
0xd92: Push((int) 535281)
0xd93: @@ SetMessage(Stack[-1])
0xd94: Pop(1)
0xd95: @@ ClearReplies()
0xd96: Pop(0)
0xd97: Push((int) 535282)
0xd98: Push((int) -1)
0xd99: Push((int) 36958)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: Push((int) 535283)
0xd9d: Push((int) -1)
0xd9e: Push((int) 36959)
0xd9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda0: Pop(3)
0xda1: Return(); Pop(0)

0xda2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xda3: PushEmpty(bool)
0xda4: Call2 0x113f

0xda5: Pop(0)
0xda6: IF (Stack[-1] == 0) GOTO 0xdaa; Pop(1)

0xda7: @ lshStopAnimation()
0xda8: Pop(0)
0xda9: GOTO 0xdac

0xdaa: @ StopAnimation()
0xdab: Pop(0)
0xdac: Return(); Pop(0)

0xdad: GOTO 0xd53

0xdae: Return(); Pop(0)

0xdaf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdb0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xdb1: PushEmpty(bool, object, float)
0xdb2: Stack[-2] = Stack[-12]
0xdb3: Stack[-1] = (float) 70.0
0xdb4: Call2 0xf69

0xdb5: Pop(2)
0xdb6: Pop(1); Push((bool) Stack[-1] == 0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb8: Stack[-10] = (int) -2
0xdb9: Return(); Pop(8)

0xdba: @ CreateDialog(Stack[-4])
0xdbb: Pop(0)
0xdbc: PushEmpty(int)
0xdbd: Call2 0x1139

0xdbe: Pop(0)
0xdbf: @@ SetNPCName(Stack[-1])
0xdc0: Pop(1)
0xdc1: PushEmpty(int)
0xdc2: Call2 0x1137

0xdc3: Pop(0)
0xdc4: @@ SetNPCDescription(Stack[-1])
0xdc5: Pop(1)
0xdc6: PushEmpty(string)
0xdc7: Call2 0x113b

0xdc8: Pop(0)
0xdc9: @@ SetPhoto(Stack[-1])
0xdca: Pop(1)
0xdcb: PushEmpty(string)
0xdcc: Call2 0x113d

0xdcd: Pop(0)
0xdce: @@ SetPhoto2(Stack[-1])
0xdcf: Pop(1)
0xdd0: PushEmpty(int)
0xdd1: Call2 0x1392

0xdd2: Pop(0)
0xdd3: @@ SetPlayerName(Stack[-1])
0xdd4: Pop(1)
0xdd5: Stack[-2] = (int) -1
0xdd6: @ IsOverrideActive(Stack[-3])
0xdd7: Pop(0)
0xdd8: Push(Stack[-3])
0xdd9: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xdda: Stack[-10] = (int) -2
0xddb: Return(); Pop(8)

0xddc: @ DoDialog(Stack[-4])
0xddd: Pop(0)
0xdde: PushEmpty(bool, object)
0xddf: PushEmpty(object)
0xde0: Call2 0x107f

0xde1: Stack[-2] = Stack[-1]
0xde2: Pop(1)
0xde3: Call2 0xfc0

0xde4: Pop(2)
0xde5: PushEmpty(object, object)
0xde6: Stack[-2] = Stack[-11]
0xde7: Stack[-1] = Stack[-6]
0xde8: Push(-2, 4); TaskCall(17)
0xde9: Call2 0xe00

0xdea: Pop(-2, 4); TaskReturn
0xdeb: Pop(2)
0xdec: @@ IsDialogEnd(Stack[-1])
0xded: Pop(0)
0xdee: Pop(0); Push((bool) Stack[-1] == 0)
0xdef: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf0: @ sync()
0xdf1: Pop(0)
0xdf2: @@ IsDialogEnd(Stack[-1])
0xdf3: Pop(0)
0xdf4: GOTO 0xdee

0xdf5: PushEmpty(object)
0xdf6: Stack[-1] = Stack[-10]
0xdf7: Call2 0xfae

0xdf8: Pop(1)
0xdf9: @ StopDialog(Stack[-4])
0xdfa: Pop(0)
0xdfb: @@ GetReturnValue(Stack[-2])
0xdfc: Pop(0)
0xdfd: Stack[-10] = Stack[-2]
0xdfe: Return(); Pop(8)

0xdff: Stack[-4] = 0
0xe00: PushEmpty()
0xe01: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe02: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe03: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe04: Push((int) 1)
0xe05: IF (Stack[-1] == 0) GOTO 0xe1c; Pop(1)

0xe06: PushEmpty(string)
0xe07: Stack[-1] = "Neutral"
0xe08: Call2 0xe3a

0xe09: Pop(1)
0xe0a: Push((int) 540545)
0xe0b: @@ SetMessage(Stack[-1])
0xe0c: Pop(1)
0xe0d: @@ ClearReplies()
0xe0e: Pop(0)
0xe0f: Push((int) 540546)
0xe10: Push((int) -1)
0xe11: Push((int) 42555)
0xe12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe13: Pop(3)
0xe14: Push((int) 540798)
0xe15: Push((int) -1)
0xe16: Push((int) 42847)
0xe17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe18: Pop(3)
0xe19: GOTO 0xe1c

0xe1a: Return(); Pop(0)

0xe1b: GOTO 0xe04

0xe1c: PushEmpty(bool)
0xe1d: Call2 0x113f

0xe1e: Pop(0)
0xe1f: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe20: @ lshWaitForAnimEnd()
0xe21: Pop(0)
0xe22: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe23: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe24: GOTO 0xe2a

0xe25: PushEmpty(string)
0xe26: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe27: Call2 0x104a

0xe28: Pop(1)
0xe29: GOTO 0xe20

0xe2a: GOTO 0xe39

0xe2b: Push("all")
0xe2c: Push("idle")
0xe2d: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2e: Pop(2)
0xe2f: @ WaitForAnimEnd()
0xe30: Pop(0)
0xe31: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe32: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe33: GOTO 0xe39

0xe34: Push("all")
0xe35: Push("idle")
0xe36: @ PlayAnimation(Stack[-2], Stack[-1])
0xe37: Pop(2)
0xe38: GOTO 0xe2f

0xe39: Return(); Pop(0)

0xe3a: PushEmpty()
0xe3b: PushEmpty(bool)
0xe3c: Call2 0x113f

0xe3d: Pop(0)
0xe3e: Pop(1); Push((bool) Stack[-1] == 0)
0xe3f: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe40: Return(); Pop(0)

0xe41: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe42: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe43: Return(); Pop(0)

0xe44: PushEmpty(string, bool)
0xe45: Stack[-2] = Stack[-3]
0xe46: Push("")
0xe47: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe48: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe49: Stack[-1] = (bool) 0
0xe4a: GOTO 0xe4c

0xe4b: Stack[-1] = (bool) 1
0xe4c: Call2 0x105a

0xe4d: Pop(2)
0xe4e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe4f: Return(); Pop(0)

0xe50: PushEmpty()
0xe51: Push((int) 1)
0xe52: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe53: PushEmpty()
0xe54: Call2 0x1078

0xe55: Pop(0)
0xe56: Push((int) 42554)
0xe57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe59: PushEmpty(string)
0xe5a: Stack[-1] = "Neutral"
0xe5b: Call2 0xe3a

0xe5c: Pop(1)
0xe5d: Push((int) 540545)
0xe5e: @@ SetMessage(Stack[-1])
0xe5f: Pop(1)
0xe60: @@ ClearReplies()
0xe61: Pop(0)
0xe62: Push((int) 540546)
0xe63: Push((int) -1)
0xe64: Push((int) 42555)
0xe65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe66: Pop(3)
0xe67: Push((int) 540798)
0xe68: Push((int) -1)
0xe69: Push((int) 42847)
0xe6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6b: Pop(3)
0xe6c: Return(); Pop(0)

0xe6d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe6e: PushEmpty(bool)
0xe6f: Call2 0x113f

0xe70: Pop(0)
0xe71: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe72: @ lshStopAnimation()
0xe73: Pop(0)
0xe74: GOTO 0xe77

0xe75: @ StopAnimation()
0xe76: Pop(0)
0xe77: Return(); Pop(0)

0xe78: GOTO 0xe51

0xe79: Return(); Pop(0)

0xe7a: Push(GlobalVars[2])
0xe7b: Stack[-1] = (bool) 0
0xe7c: GlobalVars[2] = Stack[-1]; Pop(1)
0xe7d: PushEmpty()
0xe7e: Call2 0xe81

0xe7f: Pop(0)
0xe80: Return(); Pop(0)

0xe81: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0xe82: Push((bool) 1)
0xe83: @ SensePlayerOnly(Stack[-1])
0xe84: Pop(1)
0xe85: PushEmpty()
0xe86: Call2 0xed9

0xe87: Pop(0)
0xe88: @ GetScene(Stack[-11])
0xe89: Pop(0)
0xe8a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xe8b: PushEmpty(string, int)
0xe8c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe8d: Call2 0x1129

0xe8e: Pop(1)
0xe8f: @@ GetLocator(Stack[-1], Stack[-11])
0xe90: Pop(1)
0xe91: Pop(0); Push((bool) Stack[-10] == 0)
0xe92: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe93: GOTO 0xe97

0xe94: Push((int) 1)
0xe95: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe96: GOTO 0xe8b

0xe97: PushEmpty(bool)
0xe98: Call2 0xf64

0xe99: Pop(0)
0xe9a: Pop(1); Push((bool) Stack[-1] == 0)
0xe9b: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9c: PushEmpty()
0xe9d: Push(-0, 0); TaskCall(0)
0xe9e: Call2 0x0

0xe9f: Pop(-0, 0); TaskReturn
0xea0: Pop(0)
0xea1: PushEmpty()
0xea2: Call2 0xee1

0xea3: Pop(0)
0xea4: @ irand(Stack[-9], Stack[-2])
0xea5: Pop(0)
0xea6: PushEmpty(string, int)
0xea7: Stack[-1] = Stack[-11]
0xea8: Call2 0x1129

0xea9: Pop(1)
0xeaa: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0xeab: Pop(1)
0xeac: PushEmpty(cvector)
0xead: Call2 0xf10

0xeae: Pop(0)
0xeaf: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0xeb0: PushEmpty(float, cvector)
0xeb1: Stack[-1] = Stack[-7]
0xeb2: Call2 0x10a2

0xeb3: Pop(1)
0xeb4: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0xeb5: IF (Stack[-1] == 0) GOTO 0xed3; Pop(1)

0xeb6: @ GetHeight(Stack[-4])
0xeb7: Pop(0)
0xeb8: Stack[-3] = Stack[-7]
0xeb9: Push(CvectorIndex(Stack[-3], 1))
0xeba: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0xebb: CvectorIndex(Stack[-4], 1) = Stack[-1];
0xebc: @ CanReachByPF(Stack[-2], Stack[-3])
0xebd: Pop(0)
0xebe: Push(Stack[-2])
0xebf: IF (Stack[-1] == 0) GOTO 0xed3; Pop(1)

0xec0: Pop(0); Push(Stack[-5] | Stack[-5]);
0xec1: Pop(1); Push(Sqrt(Stack[-1]))
0xec2: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0xec3: Pop(1); Push(Stack[-6] * Stack[-1]);
0xec4: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0xec5: PushEmpty(bool, cvector, cvector)
0xec6: Stack[-2] = Stack[-4]
0xec7: Stack[-1] = Stack[-9]
0xec8: Push(-3, 1); TaskCall(1)
0xec9: Call2 0xd

0xeca: Pop(-3, 1); TaskReturn
0xecb: Pop(2)
0xecc: IF (Stack[-1] == 0) GOTO 0xed3; Pop(1)

0xecd: PushEmpty(int)
0xece: Stack[-1] = Stack[-10]
0xecf: Push(-1, 0); TaskCall(3)
0xed0: Call2 0xc6

0xed1: Pop(-1, 0); TaskReturn
0xed2: Pop(1)
0xed3: Push((int) 1)
0xed4: @ Sleep(Stack[-1])
0xed5: Pop(1)
0xed6: GOTO 0xea4

0xed7: Return(); Pop(22)

0xed8: Stack[-11] = 0
0xed9: PushEmpty(string, string)
0xeda: Push("loc")
0xedb: @ GetProperty(Stack[-1], Stack[-2])
0xedc: Pop(1)
0xedd: Push(GlobalVars[0])
0xede: Stack[-1] = Stack[-2]
0xedf: GlobalVars[0] = Stack[-1]; Pop(1)
0xee0: Return(); Pop(2)

0xee1: PushEmpty(cvector, cvector, cvector, cvector)
0xee2: Push("all")
0xee3: Push("walk_stopl")
0xee4: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0xee5: Pop(2)
0xee6: Push("all")
0xee7: Push("walk_stopr")
0xee8: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xee9: Pop(2)
0xeea: Push(CvectorIndex(Stack[-2], 2))
0xeeb: Push(CvectorIndex(Stack[-2], 2))
0xeec: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeed: Push((float)2.0)
0xeee: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xeef: PushEmpty(float, float)
0xef0: Push(CvectorIndex(Stack[-4], 2))
0xef1: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0xef2: Call2 0x108f

0xef3: Pop(1)
0xef4: Push((int) 40)
0xef5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xef6: Return(); Pop(4)

0xef7: PushEmpty()
0xef8: Call2 0x1136

0xef9: Pop(0)
0xefa: PushEmpty()
0xefb: Push(-0, 0); TaskCall(0)
0xefc: Call2 0x0

0xefd: Pop(-0, 0); TaskReturn
0xefe: Pop(0)
0xeff: Return(); Pop(0)

0xf00: PushEmpty(bool, bool)
0xf01: @ IsOverrideActive(Stack[-1])
0xf02: Pop(0)
0xf03: Pop(0); Push((bool) Stack[-1] == 0)
0xf04: IF (Stack[-1] == 0) GOTO 0xf0f; Pop(1)

0xf05: EventDisable(0)
0xf06: PushEmpty(bool, object)
0xf07: Stack[-1] = Stack[-5]
0xf08: Call2 0xf50

0xf09: Pop(2)
0xf0a: EventEnable(0)
0xf0b: PushEmpty(object)
0xf0c: Stack[-1] = Stack[-4]
0xf0d: Call2 0x13a3

0xf0e: Pop(1)
0xf0f: Return(); Pop(2)

0xf10: PushEmpty(cvector, cvector)
0xf11: @ GetPosition(Stack[-1])
0xf12: Pop(0)
0xf13: Stack[-3] = Stack[-1]
0xf14: Return(); Pop(2)

0xf15: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf16: @ GetPosition(Stack[-3])
0xf17: Pop(0)
0xf18: @@ GetPosition(Stack[-2])
0xf19: Pop(0)
0xf1a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xf1b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xf1c: Return(); Pop(6)

0xf1d: PushEmpty(bool, bool)
0xf1e: Push("HasProperty")
0xf1f: Push((int) 2)
0xf20: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xf21: Pop(1); Push((bool) Stack[-1] == 0)
0xf22: IF (Stack[-1] == 0) GOTO 0xf25; Pop(1)

0xf23: Stack[-5] = (bool) 0
0xf24: Return(); Pop(2)

0xf25: @@ HasProperty(Stack[-3], Stack[-1])
0xf26: Pop(0)
0xf27: Stack[-5] = Stack[-1]
0xf28: Return(); Pop(2)

0xf29: PushEmpty(float, float)
0xf2a: PushEmpty(bool, object, string)
0xf2b: Stack[-2] = Stack[-10]
0xf2c: Stack[-1] = Stack[-9]
0xf2d: Call2 0xf1d

0xf2e: Pop(2)
0xf2f: Pop(1); Push((bool) Stack[-1] == 0)
0xf30: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf31: Stack[-8] = (bool) 0
0xf32: Return(); Pop(2)

0xf33: @@ GetProperty(Stack[-6], Stack[-1])
0xf34: Pop(0)
0xf35: PushEmpty(float, float, float, float)
0xf36: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xf37: Stack[-2] = Stack[-8]
0xf38: Stack[-1] = Stack[-7]
0xf39: Call2 0x1097

0xf3a: Pop(3)
0xf3b: @@ SetProperty(Stack[-7], Stack[-1])
0xf3c: Pop(1)
0xf3d: Stack[-8] = (bool) 1
0xf3e: Return(); Pop(2)

0xf3f: PushEmpty(int, int)
0xf40: @@ GetProperty(Stack[-4], Stack[-1])
0xf41: Pop(0)
0xf42: Pop(0); Push(Stack[-1] + Stack[-3]);
0xf43: @@ SetProperty(Stack[-5], Stack[-1])
0xf44: Pop(1)
0xf45: Return(); Pop(2)

0xf46: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xf47: @ GetPosition(Stack[-3])
0xf48: Pop(0)
0xf49: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xf4a: Push(CvectorIndex(Stack[-2], 0))
0xf4b: Push(CvectorIndex(Stack[-3], 2))
0xf4c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf4d: Pop(2)
0xf4e: Stack[-8] = Stack[-1]
0xf4f: Return(); Pop(6)

0xf50: PushEmpty(cvector, cvector)
0xf51: @@ GetPosition(Stack[-1])
0xf52: Pop(0)
0xf53: PushEmpty(bool, cvector)
0xf54: Stack[-1] = Stack[-3]
0xf55: Call2 0xf46

0xf56: Stack[-6] = Stack[-2]
0xf57: Pop(2)
0xf58: Return(); Pop(2)

0xf59: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf5a: @@ GetPosition(Stack[-3])
0xf5b: Pop(0)
0xf5c: @ GetPosition(Stack[-2])
0xf5d: Pop(0)
0xf5e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xf5f: Push(CvectorIndex(Stack[-1], 0))
0xf60: Push(CvectorIndex(Stack[-2], 2))
0xf61: @ RotateAsync(Stack[-2], Stack[-1])
0xf62: Pop(2)
0xf63: Return(); Pop(6)

0xf64: PushEmpty(bool, bool)
0xf65: @ IsLoaded(Stack[-1])
0xf66: Pop(0)
0xf67: Stack[-3] = Stack[-1]
0xf68: Return(); Pop(2)

0xf69: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf6a: @@ GetPosition(Stack[-8])
0xf6b: Pop(0)
0xf6c: @@ GetEyesHeight(Stack[-9])
0xf6d: Pop(0)
0xf6e: Push(CvectorIndex(Stack[-8], 1))
0xf6f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf70: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf71: @ GetPosition(Stack[-7])
0xf72: Pop(0)
0xf73: @ GetEyesHeight(Stack[-9])
0xf74: Pop(0)
0xf75: Push(CvectorIndex(Stack[-7], 1))
0xf76: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf77: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf78: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf79: Push(CvectorIndex(Stack[-6], 1))
0xf7a: Stack[-1] = (int) 0
0xf7b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf7c: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf7d: Pop(1); Push(Sqrt(Stack[-1]))
0xf7e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf7f: Stack[-5] = -Stack[-6]; Pop(0);
0xf80: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf81: PushEmpty(cvector, cvector)
0xf82: Push(CVector(0.0, 1.0, 0.0))
0xf83: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf84: Call2 0x1085

0xf85: Pop(1)
0xf86: Push((int) 25)
0xf87: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf88: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf89: Push(CVector(0.0, 10.0, 0.0))
0xf8a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xf8b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xf8c: @ IsOverrideActive(Stack[-2])
0xf8d: Pop(0)
0xf8e: Push(Stack[-2])
0xf8f: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf90: Stack[-21] = (bool) 0
0xf91: Return(); Pop(18)

0xf92: @ StopWorld()
0xf93: Pop(0)
0xf94: Push((bool) 1)
0xf95: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xf96: Pop(1)
0xf97: Push(CvectorIndex(Stack[-4], 0))
0xf98: Push(CvectorIndex(Stack[-5], 2))
0xf99: @ Rotate(Stack[-2], Stack[-1])
0xf9a: Pop(2)
0xf9b: PushEmpty(bool)
0xf9c: Call2 0x113f

0xf9d: Pop(0)
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf9f: GOTO 0xfa8

0xfa0: Push("head")
0xfa1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfa2: Pop(1)
0xfa3: Push(Stack[-1])
0xfa4: IF (Stack[-1] == 0) GOTO 0xfa8; Pop(1)

0xfa5: Push("head")
0xfa6: @ LookAsyncCamera(Stack[-1])
0xfa7: Pop(1)
0xfa8: @ CameraWaitForPlayFinish()
0xfa9: Pop(0)
0xfaa: @ ResumeWorld()
0xfab: Pop(0)
0xfac: Stack[-21] = (bool) 1
0xfad: Return(); Pop(18)

0xfae: PushEmpty(bool, bool)
0xfaf: Push((bool) 1)
0xfb0: @ CameraSwitchToNormal(Stack[-1])
0xfb1: Pop(1)
0xfb2: PushEmpty(bool)
0xfb3: Call2 0x113f

0xfb4: Pop(0)
0xfb5: IF (Stack[-1] == 0) GOTO 0xfb7; Pop(1)

0xfb6: GOTO 0xfbf

0xfb7: Push("head")
0xfb8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfb9: Pop(1)
0xfba: Push(Stack[-1])
0xfbb: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfbc: Push("head")
0xfbd: @ UnlookAsync(Stack[-1])
0xfbe: Pop(1)
0xfbf: Return(); Pop(2)

0xfc0: PushEmpty(int, int, int, int)
0xfc1: Push("voice_common")
0xfc2: @ GetVariable(Stack[-1], Stack[-3])
0xfc3: Pop(1)
0xfc4: Push(Stack[-2])
0xfc5: IF (Stack[-1] == 0) GOTO 0xfe6; Pop(1)

0xfc6: PushEmpty(bool, object)
0xfc7: Stack[-1] = Stack[-7]
0xfc8: Call2 0xffa

0xfc9: Pop(1)
0xfca: Pop(1); Push((bool) Stack[-1] == 0)
0xfcb: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfcc: PushEmpty(bool, object)
0xfcd: Stack[-1] = Stack[-7]
0xfce: Call2 0x101f

0xfcf: Pop(1)
0xfd0: Pop(1); Push((bool) Stack[-1] == 0)
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd2: Stack[-6] = (bool) 0
0xfd3: Return(); Pop(4)

0xfd4: Push((int) 2)
0xfd5: @ irand(Stack[-2], Stack[-1])
0xfd6: Pop(1)
0xfd7: Push(Stack[-1])
0xfd8: IF (Stack[-1] == 0) GOTO 0xfe1; Pop(1)

0xfd9: Push("voice_common")
0xfda: Push((int) 1)
0xfdb: Pop(1); Push(Stack[-4] + Stack[-1]);
0xfdc: Push((int) 3)
0xfdd: Pop(2); Push(Stack[-2] % Stack[-1]);
0xfde: @ SetVariable(Stack[-2], Stack[-1])
0xfdf: Pop(2)
0xfe0: GOTO 0xfe5

0xfe1: Push("voice_common")
0xfe2: Push((int) 0)
0xfe3: @ SetVariable(Stack[-2], Stack[-1])
0xfe4: Pop(2)
0xfe5: GOTO 0xff8

0xfe6: PushEmpty(bool, object)
0xfe7: Stack[-1] = Stack[-7]
0xfe8: Call2 0x101f

0xfe9: Pop(1)
0xfea: Pop(1); Push((bool) Stack[-1] == 0)
0xfeb: IF (Stack[-1] == 0) GOTO 0xff4; Pop(1)

0xfec: PushEmpty(bool, object)
0xfed: Stack[-1] = Stack[-7]
0xfee: Call2 0xffa

0xfef: Pop(1)
0xff0: Pop(1); Push((bool) Stack[-1] == 0)
0xff1: IF (Stack[-1] == 0) GOTO 0xff4; Pop(1)

0xff2: Stack[-6] = (bool) 0
0xff3: Return(); Pop(4)

0xff4: Push("voice_common")
0xff5: Push((int) 1)
0xff6: @ SetVariable(Stack[-2], Stack[-1])
0xff7: Pop(2)
0xff8: Stack[-6] = (bool) 1
0xff9: Return(); Pop(4)

0xffa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xffb: Stack[-5] = "c"
0xffc: Stack[-4] = (int) 0
0xffd: Push((int) 1)
0xffe: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0xfff: Push((int) 1)
0x1000: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1001: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1002: @@ HasProperty(Stack[-1], Stack[-4])
0x1003: Pop(1)
0x1004: Pop(0); Push((bool) Stack[-3] == 0)
0x1005: IF (Stack[-1] == 0) GOTO 0x1007; Pop(1)

0x1006: GOTO 0x100a

0x1007: Push((int) 1)
0x1008: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1009: GOTO 0xffd

0x100a: Pop(0); Push((bool) Stack[-4] == 0)
0x100b: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x100c: Stack[-12] = (bool) 0
0x100d: Return(); Pop(10)

0x100e: Stack[-2] = (int) 0
0x100f: Push((int) 1)
0x1010: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1011: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1012: @ irand(Stack[-2], Stack[-4])
0x1013: Pop(0)
0x1014: Push((int) 1)
0x1015: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1016: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1017: @@ GetProperty(Stack[-1], Stack[-2])
0x1018: Pop(1)
0x1019: PushEmpty(bool, string)
0x101a: Stack[-1] = Stack[-3]
0x101b: Call2 0x1069

0x101c: Stack[-14] = Stack[-2]
0x101d: Pop(2)
0x101e: Return(); Pop(10)

0x101f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1020: Push("d")
0x1021: PushEmpty(int)
0x1022: Call2 0x1102

0x1023: Pop(0)
0x1024: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1025: Push("m")
0x1026: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1027: Stack[-4] = (int) 0
0x1028: Push((int) 1)
0x1029: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x102a: Push((int) 1)
0x102b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x102c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x102d: @@ HasProperty(Stack[-1], Stack[-4])
0x102e: Pop(1)
0x102f: Pop(0); Push((bool) Stack[-3] == 0)
0x1030: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1031: GOTO 0x1035

0x1032: Push((int) 1)
0x1033: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1034: GOTO 0x1028

0x1035: Pop(0); Push((bool) Stack[-4] == 0)
0x1036: IF (Stack[-1] == 0) GOTO 0x1039; Pop(1)

0x1037: Stack[-12] = (bool) 0
0x1038: Return(); Pop(10)

0x1039: Stack[-2] = (int) 0
0x103a: Push((int) 1)
0x103b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x103c: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x103d: @ irand(Stack[-2], Stack[-4])
0x103e: Pop(0)
0x103f: Push((int) 1)
0x1040: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1041: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1042: @@ GetProperty(Stack[-1], Stack[-2])
0x1043: Pop(1)
0x1044: PushEmpty(bool, string)
0x1045: Stack[-1] = Stack[-3]
0x1046: Call2 0x1069

0x1047: Stack[-14] = Stack[-2]
0x1048: Pop(2)
0x1049: Return(); Pop(10)

0x104a: PushEmpty(bool, float, float, bool, float, float)
0x104b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x104c: Pop(0)
0x104d: Push(Stack[-3])
0x104e: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x104f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1050: Pop(0)
0x1051: Push((bool) 0)
0x1052: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1053: Pop(1)
0x1054: GOTO 0x1059

0x1055: Push("Can't find lsh animation : ")
0x1056: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1057: @ Trace(Stack[-1])
0x1058: Pop(1)
0x1059: Return(); Pop(6)

0x105a: PushEmpty(bool, float, float, bool, float, float)
0x105b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x105c: Pop(0)
0x105d: Push(Stack[-3])
0x105e: IF (Stack[-1] == 0) GOTO 0x1064; Pop(1)

0x105f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1060: Pop(0)
0x1061: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1062: Pop(0)
0x1063: GOTO 0x1068

0x1064: Push("Can't find lsh animation : ")
0x1065: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1066: @ Trace(Stack[-1])
0x1067: Pop(1)
0x1068: Return(); Pop(6)

0x1069: PushEmpty(bool, bool)
0x106a: PushEmpty(bool)
0x106b: Call2 0x113f

0x106c: Pop(0)
0x106d: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x106e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x106f: Pop(0)
0x1070: Push(Stack[-1])
0x1071: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1072: @ lshPlaySpeech(Stack[-3])
0x1073: Pop(0)
0x1074: Stack[-4] = (bool) 1
0x1075: Return(); Pop(2)

0x1076: Stack[-4] = (bool) 0
0x1077: Return(); Pop(2)

0x1078: PushEmpty(bool)
0x1079: Call2 0x113f

0x107a: Pop(0)
0x107b: IF (Stack[-1] == 0) GOTO 0x107e; Pop(1)

0x107c: @ lshStopSpeech()
0x107d: Pop(0)
0x107e: Return(); Pop(0)

0x107f: PushEmpty(object, object)
0x1080: @ self(Stack[-1])
0x1081: Pop(0)
0x1082: Stack[-3] = Stack[-1]
0x1083: Return(); Pop(2)

0x1084: Stack[-1] = 0
0x1085: PushEmpty(float, float)
0x1086: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1087: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1088: Push((float)0.0)
0x1089: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x108a: IF (Stack[-1] == 0) GOTO 0x108d; Pop(1)

0x108b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x108c: Return(); Pop(2)

0x108d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x108e: Return(); Pop(2)

0x108f: PushEmpty()
0x1090: Push((int) 0)
0x1091: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1092: IF (Stack[-1] == 0) GOTO 0x1095; Pop(1)

0x1093: Stack[-2] = -Stack[-1]; Pop(0);
0x1094: GOTO 0x1096

0x1095: Stack[-2] = Stack[-1]
0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1099: IF (Stack[-1] == 0) GOTO 0x109c; Pop(1)

0x109a: Stack[-4] = Stack[-2]
0x109b: Return(); Pop(0)

0x109c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x109d: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x109e: Stack[-4] = Stack[-1]
0x109f: Return(); Pop(0)

0x10a0: Stack[-4] = Stack[-3]
0x10a1: Return(); Pop(0)

0x10a2: PushEmpty()
0x10a3: Push(CvectorIndex(Stack[-1], 0))
0x10a4: Push(CvectorIndex(Stack[-2], 0))
0x10a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10a6: Push(CvectorIndex(Stack[-2], 2))
0x10a7: Push(CvectorIndex(Stack[-3], 2))
0x10a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10aa: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty(int, int)
0x10ad: @ GetVariable(Stack[-3], Stack[-1])
0x10ae: Pop(0)
0x10af: Stack[-4] = Stack[-1]
0x10b0: Return(); Pop(2)

0x10b1: PushEmpty(object, object)
0x10b2: @ CreateIntVector(Stack[-1])
0x10b3: Pop(0)
0x10b4: @@ add(Stack[-4])
0x10b5: Pop(0)
0x10b6: @@ add(Stack[-3])
0x10b7: Pop(0)
0x10b8: Push((int) 3)
0x10b9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10ba: Pop(1)
0x10bb: Return(); Pop(2)

0x10bc: Stack[-1] = 0
0x10bd: PushEmpty(int, int)
0x10be: PushEmpty(object, string, int)
0x10bf: Stack[-3] = Stack[-7]
0x10c0: Stack[-2] = "money"
0x10c1: Stack[-1] = Stack[-6]
0x10c2: Call2 0xf3f

0x10c3: Pop(3)
0x10c4: Push((int) 0)
0x10c5: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10cf; Pop(1)

0x10c7: Push("Money")
0x10c8: @ GetInvItemByName(Stack[-2], Stack[-1])
0x10c9: Pop(1)
0x10ca: PushEmpty(int, int)
0x10cb: Stack[-2] = Stack[-3]
0x10cc: Stack[-1] = Stack[-5]
0x10cd: Call2 0x10b1

0x10ce: Pop(2)
0x10cf: Return(); Pop(2)

0x10d0: PushEmpty()
0x10d1: Pop(0); Push((bool) Stack[-2] == 0)
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10d3: Stack[-3] = (bool) 0
0x10d4: Return(); Pop(0)

0x10d5: Push((int) 0)
0x10d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10d7: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10d8: Push((int) 8)
0x10d9: @ SendWorldWndMessage(Stack[-1])
0x10da: Pop(1)
0x10db: GOTO 0x10e5

0x10dc: Push((int) 0)
0x10dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x10de: IF (Stack[-1] == 0) GOTO 0x10e3; Pop(1)

0x10df: Push((int) 9)
0x10e0: @ SendWorldWndMessage(Stack[-1])
0x10e1: Pop(1)
0x10e2: GOTO 0x10e5

0x10e3: Stack[-3] = (bool) 0
0x10e4: Return(); Pop(0)

0x10e5: PushEmpty(float)
0x10e6: Stack[-1] = Stack[-2]
0x10e7: Call2 0x10f3

0x10e8: Pop(1)
0x10e9: PushEmpty(bool, object, string, float, float, float)
0x10ea: Stack[-5] = Stack[-8]
0x10eb: Stack[-4] = "reputation"
0x10ec: Stack[-3] = Stack[-7]
0x10ed: Stack[-2] = (int) 0
0x10ee: Stack[-1] = (int) 1
0x10ef: Call2 0xf29

0x10f0: Pop(6)
0x10f1: Stack[-3] = (bool) 1
0x10f2: Return(); Pop(0)

0x10f3: PushEmpty(object, object)
0x10f4: @ CreateFloatVector(Stack[-1])
0x10f5: Pop(0)
0x10f6: @@ add(Stack[-3])
0x10f7: Pop(0)
0x10f8: Push((int) 16)
0x10f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10fa: Pop(1)
0x10fb: Return(); Pop(2)

0x10fc: Stack[-1] = 0
0x10fd: PushEmpty(float, float)
0x10fe: @ GetGameTime(Stack[-1])
0x10ff: Pop(0)
0x1100: Stack[-3] = Stack[-1]
0x1101: Return(); Pop(2)

0x1102: PushEmpty(float, float)
0x1103: @ GetGameTime(Stack[-1])
0x1104: Pop(0)
0x1105: Push((int) 1)
0x1106: PushEmpty(int)
0x1107: Push((int) 24)
0x1108: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1109: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x110a: Return(); Pop(2)

0x110b: PushEmpty()
0x110c: PushEmpty(int)
0x110d: Call2 0x1102

0x110e: Pop(0)
0x110f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1110: Return(); Pop(0)

0x1111: PushEmpty(string, string)
0x1112: Stack[-1] = "idle"
0x1113: Push(Stack[-3])
0x1114: IF (Stack[-1] == 0) GOTO 0x1116; Pop(1)

0x1115: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1116: Stack[-4] = Stack[-1]
0x1117: Return(); Pop(2)

0x1118: PushEmpty(int, bool, int, bool)
0x1119: Stack[-2] = (int) 0
0x111a: Push("all")
0x111b: PushEmpty(string, int)
0x111c: Stack[-1] = Stack[-5]
0x111d: Call2 0x1111

0x111e: Pop(1)
0x111f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1120: Pop(2)
0x1121: Pop(0); Push((bool) Stack[-1] == 0)
0x1122: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x1123: GOTO 0x1127

0x1124: Push((int) 1)
0x1125: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1126: GOTO 0x111a

0x1127: Stack[-5] = Stack[-2]
0x1128: Return(); Pop(4)

0x1129: PushEmpty()
0x112a: Push((int) 0)
0x112b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112c: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x112d: Push("pt_")
0x112e: Push(GlobalVars[0])
0x112f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1130: GOTO 0x1135

0x1131: Push("pt_")
0x1132: Push(GlobalVars[0])
0x1133: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1134: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x1135: Return(); Pop(0)

0x1136: Return(); Pop(0)

0x1137: Stack[-1] = (int) 515547
0x1138: Return(); Pop(0)

0x1139: Stack[-1] = (int) 502872
0x113a: Return(); Pop(0)

0x113b: Stack[-1] = "ui/NPC_MladVlad.png"
0x113c: Return(); Pop(0)

0x113d: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x113e: Return(); Pop(0)

0x113f: Stack[-1] = (bool) 1
0x1140: Return(); Pop(0)

0x1141: PushEmpty()
0x1142: PushEmpty(bool, object, float)
0x1143: Stack[-2] = Stack[-5]
0x1144: Stack[-1] = (float) -0.05
0x1145: Call2 0x10d0

0x1146: Pop(3)
0x1147: Return(); Pop(0)

0x1148: PushEmpty(object, object)
0x1149: Push("k2q01")
0x114a: Push((int) 2)
0x114b: @ SetVariable(Stack[-2], Stack[-1])
0x114c: Pop(2)
0x114d: PushEmpty(object)
0x114e: Call2 0x1360

0x114f: Stack[-2] = Stack[-1]
0x1150: Pop(1)
0x1151: Push("k2q01MladVladGotoOspina")
0x1152: Push("pt_map_ospina")
0x1153: Push((int) 1)
0x1154: Push((int) 539374)
0x1155: PushEmpty(float)
0x1156: Call2 0x10fd

0x1157: Pop(0)
0x1158: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1159: Pop(5)
0x115a: PushEmpty()
0x115b: Call2 0x12c2

0x115c: Pop(0)
0x115d: Return(); Pop(2)

0x115e: Stack[-1] = 0
0x115f: PushEmpty()
0x1160: Push("ook2MladVlad1")
0x1161: Push((int) 1)
0x1162: @ SetVariable(Stack[-2], Stack[-1])
0x1163: Pop(2)
0x1164: Return(); Pop(0)

0x1165: PushEmpty(object, object)
0x1166: Push("k2q04")
0x1167: Push((int) 1)
0x1168: @ SetVariable(Stack[-2], Stack[-1])
0x1169: Pop(2)
0x116a: PushEmpty(object)
0x116b: Call2 0x1360

0x116c: Stack[-2] = Stack[-1]
0x116d: Pop(1)
0x116e: Push("k2q04MladVladGotoAnna")
0x116f: Push("pt_map_anna")
0x1170: Push((int) 0)
0x1171: Push((int) 508645)
0x1172: PushEmpty(float)
0x1173: Call2 0x10fd

0x1174: Pop(0)
0x1175: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1176: Pop(5)
0x1177: PushEmpty()
0x1178: Call2 0x12cf

0x1179: Pop(0)
0x117a: PushEmpty()
0x117b: Call2 0x1310

0x117c: Pop(0)
0x117d: Return(); Pop(2)

0x117e: Stack[-1] = 0
0x117f: PushEmpty()
0x1180: Push("ook2MladVlad2")
0x1181: Push((int) 1)
0x1182: @ SetVariable(Stack[-2], Stack[-1])
0x1183: Pop(2)
0x1184: Return(); Pop(0)

0x1185: PushEmpty(int, int)
0x1186: Push("k2q04")
0x1187: Push((int) 1000)
0x1188: @ SetVariable(Stack[-2], Stack[-1])
0x1189: Pop(2)
0x118a: PushEmpty()
0x118b: Call2 0x12dc

0x118c: Pop(0)
0x118d: Push("alpha_pills")
0x118e: Push((int) 4)
0x118f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1190: Pop(2)
0x1191: Push("beta_pills")
0x1192: Push((int) 4)
0x1193: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1194: Pop(2)
0x1195: Return(); Pop(2)

0x1196: PushEmpty()
0x1197: Push("k2q04")
0x1198: Push((int) 1000)
0x1199: @ SetVariable(Stack[-2], Stack[-1])
0x119a: Pop(2)
0x119b: PushEmpty()
0x119c: Call2 0x12e9

0x119d: Pop(0)
0x119e: Return(); Pop(0)

0x119f: PushEmpty()
0x11a0: Push("k2q04")
0x11a1: Push((int) 1000)
0x11a2: @ SetVariable(Stack[-2], Stack[-1])
0x11a3: Pop(2)
0x11a4: PushEmpty()
0x11a5: Call2 0x12f6

0x11a6: Pop(0)
0x11a7: Return(); Pop(0)

0x11a8: PushEmpty()
0x11a9: Push("k2q04")
0x11aa: Push((int) 1000)
0x11ab: @ SetVariable(Stack[-2], Stack[-1])
0x11ac: Pop(2)
0x11ad: PushEmpty()
0x11ae: Call2 0x1303

0x11af: Pop(0)
0x11b0: Return(); Pop(0)

0x11b1: PushEmpty()
0x11b2: Push("ook3MladVlad1")
0x11b3: Push((int) 1)
0x11b4: @ SetVariable(Stack[-2], Stack[-1])
0x11b5: Pop(2)
0x11b6: Return(); Pop(0)

0x11b7: PushEmpty()
0x11b8: Push("ook5MladVlad1")
0x11b9: Push((int) 1)
0x11ba: @ SetVariable(Stack[-2], Stack[-1])
0x11bb: Pop(2)
0x11bc: Return(); Pop(0)

0x11bd: PushEmpty()
0x11be: PushEmpty()
0x11bf: Call2 0x131d

0x11c0: Pop(0)
0x11c1: Return(); Pop(0)

0x11c2: PushEmpty()
0x11c3: Push("k6q02")
0x11c4: Push((int) 3)
0x11c5: @ SetVariable(Stack[-2], Stack[-1])
0x11c6: Pop(2)
0x11c7: PushEmpty()
0x11c8: Call2 0x132a

0x11c9: Pop(0)
0x11ca: Return(); Pop(0)

0x11cb: PushEmpty()
0x11cc: Push("money1000 is given")
0x11cd: @ Trace(Stack[-1])
0x11ce: Pop(1)
0x11cf: PushEmpty(object, int)
0x11d0: Stack[-2] = Stack[-4]
0x11d1: Stack[-1] = (int) 1000
0x11d2: Call2 0x10bd

0x11d3: Pop(2)
0x11d4: Return(); Pop(0)

0x11d5: PushEmpty()
0x11d6: Push("money500 is given")
0x11d7: @ Trace(Stack[-1])
0x11d8: Pop(1)
0x11d9: PushEmpty(object, int)
0x11da: Stack[-2] = Stack[-4]
0x11db: Stack[-1] = (int) 500
0x11dc: Call2 0x10bd

0x11dd: Pop(2)
0x11de: Return(); Pop(0)

0x11df: PushEmpty()
0x11e0: Push("playsound")
0x11e1: Push("givemoney")
0x11e2: @ TriggerWorld(Stack[-2], Stack[-1])
0x11e3: Pop(2)
0x11e4: Return(); Pop(0)

0x11e5: PushEmpty()
0x11e6: PushEmpty(bool, object, float)
0x11e7: Stack[-2] = Stack[-5]
0x11e8: Stack[-1] = (float) -0.02
0x11e9: Call2 0x10d0

0x11ea: Pop(3)
0x11eb: Return(); Pop(0)

0x11ec: PushEmpty()
0x11ed: PushEmpty(bool, object, float)
0x11ee: Stack[-2] = Stack[-5]
0x11ef: Stack[-1] = (float) 0.02
0x11f0: Call2 0x10d0

0x11f1: Pop(3)
0x11f2: Return(); Pop(0)

0x11f3: PushEmpty()
0x11f4: Push("ook5MladVlad2")
0x11f5: Push((int) 1)
0x11f6: @ SetVariable(Stack[-2], Stack[-1])
0x11f7: Pop(2)
0x11f8: Return(); Pop(0)

0x11f9: PushEmpty()
0x11fa: PushEmpty(object, string, float)
0x11fb: PushEmpty(object)
0x11fc: Call2 0x1360

0x11fd: Stack[-4] = Stack[-1]
0x11fe: Pop(1)
0x11ff: Stack[-2] = "pt_map_anna"
0x1200: Stack[-1] = (int) 2
0x1201: Call2 0x1371

0x1202: Pop(3)
0x1203: PushEmpty(object)
0x1204: Call2 0x1360

0x1205: Pop(0)
0x1206: @@ ShowMap(Stack[-1])
0x1207: Pop(1)
0x1208: Return(); Pop(0)

0x1209: PushEmpty()
0x120a: PushEmpty(int, string)
0x120b: Stack[-1] = "k2q01"
0x120c: Call2 0x10ac

0x120d: Pop(1)
0x120e: Push((int) 1)
0x120f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1210: IF (Stack[-1] == 0) GOTO 0x1213; Pop(1)

0x1211: Stack[-2] = (bool) 1
0x1212: Return(); Pop(0)

0x1213: Stack[-2] = (bool) 0
0x1214: Return(); Pop(0)

0x1215: PushEmpty()
0x1216: PushEmpty(int, string)
0x1217: Stack[-1] = "ook2MladVlad1"
0x1218: Call2 0x10ac

0x1219: Pop(1)
0x121a: Push((int) 0)
0x121b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x121c: IF (Stack[-1] == 0) GOTO 0x121f; Pop(1)

0x121d: Stack[-2] = (bool) 1
0x121e: Return(); Pop(0)

0x121f: Stack[-2] = (bool) 0
0x1220: Return(); Pop(0)

0x1221: PushEmpty()
0x1222: PushEmpty(int, string)
0x1223: Stack[-1] = "k2q04"
0x1224: Call2 0x10ac

0x1225: Pop(1)
0x1226: Push((int) 2)
0x1227: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1228: IF (Stack[-1] == 0) GOTO 0x122b; Pop(1)

0x1229: Stack[-2] = (bool) 1
0x122a: Return(); Pop(0)

0x122b: Stack[-2] = (bool) 0
0x122c: Return(); Pop(0)

0x122d: PushEmpty()
0x122e: PushEmpty(int, string)
0x122f: Stack[-1] = "k2q04"
0x1230: Call2 0x10ac

0x1231: Pop(1)
0x1232: Push((int) 3)
0x1233: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1234: IF (Stack[-1] == 0) GOTO 0x1237; Pop(1)

0x1235: Stack[-2] = (bool) 1
0x1236: Return(); Pop(0)

0x1237: Stack[-2] = (bool) 0
0x1238: Return(); Pop(0)

0x1239: PushEmpty()
0x123a: PushEmpty(bool, object)
0x123b: Stack[-1] = Stack[-3]
0x123c: Call2 0x12af

0x123d: Pop(1)
0x123e: IF (Stack[-1] == 0) GOTO 0x1241; Pop(1)

0x123f: Stack[-2] = (bool) 1
0x1240: Return(); Pop(0)

0x1241: Stack[-2] = (bool) 0
0x1242: Return(); Pop(0)

0x1243: PushEmpty()
0x1244: PushEmpty(int, string)
0x1245: Stack[-1] = "ook2MladVlad2"
0x1246: Call2 0x10ac

0x1247: Pop(1)
0x1248: Push((int) 0)
0x1249: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x124a: IF (Stack[-1] == 0) GOTO 0x124d; Pop(1)

0x124b: Stack[-2] = (bool) 1
0x124c: Return(); Pop(0)

0x124d: Stack[-2] = (bool) 0
0x124e: Return(); Pop(0)

0x124f: PushEmpty()
0x1250: PushEmpty(int, string)
0x1251: Stack[-1] = "k2q04"
0x1252: Call2 0x10ac

0x1253: Pop(1)
0x1254: Push((int) 9)
0x1255: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1256: IF (Stack[-1] == 0) GOTO 0x1259; Pop(1)

0x1257: Stack[-2] = (bool) 1
0x1258: Return(); Pop(0)

0x1259: Stack[-2] = (bool) 0
0x125a: Return(); Pop(0)

0x125b: PushEmpty()
0x125c: PushEmpty(int, string)
0x125d: Stack[-1] = "k3q01"
0x125e: Call2 0x10ac

0x125f: Pop(1)
0x1260: Push((int) 2)
0x1261: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1262: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1263: Stack[-2] = (bool) 1
0x1264: Return(); Pop(0)

0x1265: Stack[-2] = (bool) 0
0x1266: Return(); Pop(0)

0x1267: PushEmpty()
0x1268: PushEmpty(int, string)
0x1269: Stack[-1] = "ook3MladVlad1"
0x126a: Call2 0x10ac

0x126b: Pop(1)
0x126c: Push((int) 0)
0x126d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126e: IF (Stack[-1] == 0) GOTO 0x1271; Pop(1)

0x126f: Stack[-2] = (bool) 1
0x1270: Return(); Pop(0)

0x1271: Stack[-2] = (bool) 0
0x1272: Return(); Pop(0)

0x1273: PushEmpty()
0x1274: PushEmpty(int, string)
0x1275: Stack[-1] = "k5q01"
0x1276: Call2 0x10ac

0x1277: Pop(1)
0x1278: Push((int) 1)
0x1279: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x127a: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x127b: Stack[-2] = (bool) 1
0x127c: Return(); Pop(0)

0x127d: Stack[-2] = (bool) 0
0x127e: Return(); Pop(0)

0x127f: PushEmpty()
0x1280: PushEmpty(int, string)
0x1281: Stack[-1] = "ook5MladVlad1"
0x1282: Call2 0x10ac

0x1283: Pop(1)
0x1284: Push((int) 0)
0x1285: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1286: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1287: Stack[-2] = (bool) 1
0x1288: Return(); Pop(0)

0x1289: Stack[-2] = (bool) 0
0x128a: Return(); Pop(0)

0x128b: PushEmpty()
0x128c: PushEmpty(int, string)
0x128d: Stack[-1] = "k6q01"
0x128e: Call2 0x10ac

0x128f: Pop(1)
0x1290: Push((int) 1)
0x1291: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1292: IF (Stack[-1] == 0) GOTO 0x1295; Pop(1)

0x1293: Stack[-2] = (bool) 1
0x1294: Return(); Pop(0)

0x1295: Stack[-2] = (bool) 0
0x1296: Return(); Pop(0)

0x1297: PushEmpty()
0x1298: PushEmpty(int, string)
0x1299: Stack[-1] = "k6q02"
0x129a: Call2 0x10ac

0x129b: Pop(1)
0x129c: Push((int) 2)
0x129d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x129e: IF (Stack[-1] == 0) GOTO 0x12a1; Pop(1)

0x129f: Stack[-2] = (bool) 1
0x12a0: Return(); Pop(0)

0x12a1: Stack[-2] = (bool) 0
0x12a2: Return(); Pop(0)

0x12a3: PushEmpty()
0x12a4: PushEmpty(int, string)
0x12a5: Stack[-1] = "ook5MladVlad2"
0x12a6: Call2 0x10ac

0x12a7: Pop(1)
0x12a8: Push((int) 0)
0x12a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12aa: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12ab: Stack[-2] = (bool) 1
0x12ac: Return(); Pop(0)

0x12ad: Stack[-2] = (bool) 0
0x12ae: Return(); Pop(0)

0x12af: PushEmpty(int, int)
0x12b0: Push("alpha_pills")
0x12b1: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x12b2: Pop(1)
0x12b3: Push((int) 4)
0x12b4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b5: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b6: Stack[-4] = (bool) 0
0x12b7: Return(); Pop(2)

0x12b8: Push("beta_pills")
0x12b9: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x12ba: Pop(1)
0x12bb: Push((int) 4)
0x12bc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12bd: IF (Stack[-1] == 0) GOTO 0x12c0; Pop(1)

0x12be: Stack[-4] = (bool) 0
0x12bf: Return(); Pop(2)

0x12c0: Stack[-4] = (bool) 1
0x12c1: Return(); Pop(2)

0x12c2: PushEmpty(object, object)
0x12c3: Push((int) 463)
0x12c4: Push((int) 1)
0x12c5: Push((int) 527779)
0x12c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12c7: Pop(3)
0x12c8: PushEmpty(bool, object, int)
0x12c9: Stack[-2] = Stack[-4]
0x12ca: Stack[-1] = (int) 461
0x12cb: Call2 0x1344

0x12cc: Pop(3)
0x12cd: Return(); Pop(2)

0x12ce: Stack[-1] = 0
0x12cf: PushEmpty(object, object)
0x12d0: Push((int) 507)
0x12d1: Push((int) 2)
0x12d2: Push((int) 529706)
0x12d3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12d4: Pop(3)
0x12d5: PushEmpty(bool, object, int)
0x12d6: Stack[-2] = Stack[-4]
0x12d7: Stack[-1] = (int) -1
0x12d8: Call2 0x1344

0x12d9: Pop(3)
0x12da: Return(); Pop(2)

0x12db: Stack[-1] = 0
0x12dc: PushEmpty(object, object)
0x12dd: Push((int) 513)
0x12de: Push((int) 2)
0x12df: Push((int) 529712)
0x12e0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e1: Pop(3)
0x12e2: PushEmpty(bool, object, int)
0x12e3: Stack[-2] = Stack[-4]
0x12e4: Stack[-1] = (int) 507
0x12e5: Call2 0x1344

0x12e6: Pop(3)
0x12e7: Return(); Pop(2)

0x12e8: Stack[-1] = 0
0x12e9: PushEmpty(object, object)
0x12ea: Push((int) 514)
0x12eb: Push((int) 2)
0x12ec: Push((int) 529713)
0x12ed: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12ee: Pop(3)
0x12ef: PushEmpty(bool, object, int)
0x12f0: Stack[-2] = Stack[-4]
0x12f1: Stack[-1] = (int) 507
0x12f2: Call2 0x1344

0x12f3: Pop(3)
0x12f4: Return(); Pop(2)

0x12f5: Stack[-1] = 0
0x12f6: PushEmpty(object, object)
0x12f7: Push((int) 515)
0x12f8: Push((int) 2)
0x12f9: Push((int) 529714)
0x12fa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12fb: Pop(3)
0x12fc: PushEmpty(bool, object, int)
0x12fd: Stack[-2] = Stack[-4]
0x12fe: Stack[-1] = (int) 507
0x12ff: Call2 0x1344

0x1300: Pop(3)
0x1301: Return(); Pop(2)

0x1302: Stack[-1] = 0
0x1303: PushEmpty(object, object)
0x1304: Push((int) 516)
0x1305: Push((int) 2)
0x1306: Push((int) 529715)
0x1307: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1308: Pop(3)
0x1309: PushEmpty(bool, object, int)
0x130a: Stack[-2] = Stack[-4]
0x130b: Stack[-1] = (int) 507
0x130c: Call2 0x1344

0x130d: Pop(3)
0x130e: Return(); Pop(2)

0x130f: Stack[-1] = 0
0x1310: PushEmpty(object, object)
0x1311: Push((int) 508)
0x1312: Push((int) 2)
0x1313: Push((int) 529707)
0x1314: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1315: Pop(3)
0x1316: PushEmpty(bool, object, int)
0x1317: Stack[-2] = Stack[-4]
0x1318: Stack[-1] = (int) 507
0x1319: Call2 0x1344

0x131a: Pop(3)
0x131b: Return(); Pop(2)

0x131c: Stack[-1] = 0
0x131d: PushEmpty(object, object)
0x131e: Push((int) 392)
0x131f: Push((int) 1)
0x1320: Push((int) 525885)
0x1321: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1322: Pop(3)
0x1323: PushEmpty(bool, object, int)
0x1324: Stack[-2] = Stack[-4]
0x1325: Stack[-1] = (int) 390
0x1326: Call2 0x1344

0x1327: Pop(3)
0x1328: Return(); Pop(2)

0x1329: Stack[-1] = 0
0x132a: PushEmpty(object, object)
0x132b: Push((int) 503)
0x132c: Push((int) 2)
0x132d: Push((int) 528769)
0x132e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x132f: Pop(3)
0x1330: PushEmpty(bool, object, int)
0x1331: Stack[-2] = Stack[-4]
0x1332: Stack[-1] = (int) 500
0x1333: Call2 0x1344

0x1334: Pop(3)
0x1335: Return(); Pop(2)

0x1336: Stack[-1] = 0
0x1337: PushEmpty(object, object)
0x1338: @ GetDiaryRoot(Stack[-1])
0x1339: Pop(0)
0x133a: Pop(0); Push((bool) Stack[-1] == 0)
0x133b: IF (Stack[-1] == 0) GOTO 0x1341; Pop(1)

0x133c: Push("Can't retrieve diary root")
0x133d: @ Trace(Stack[-1])
0x133e: Pop(1)
0x133f: Stack[-3] = (bool) 0
0x1340: Return(); Pop(2)

0x1341: Stack[-3] = Stack[-1]
0x1342: Return(); Pop(2)

0x1343: Stack[-1] = 0
0x1344: PushEmpty(object, object, int, object, object, int)
0x1345: PushEmpty(object)
0x1346: Call2 0x1337

0x1347: Stack[-4] = Stack[-1]
0x1348: Pop(1)
0x1349: @@ Find(Stack[-7], Stack[-2])
0x134a: Pop(0)
0x134b: Pop(0); Push((bool) Stack[-2] == 0)
0x134c: IF (Stack[-1] == 0) GOTO 0x1353; Pop(1)

0x134d: Push("Can't find diary parent with id: ")
0x134e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x134f: @ Trace(Stack[-1])
0x1350: Pop(1)
0x1351: Stack[-9] = (bool) 0
0x1352: Return(); Pop(6)

0x1353: @@ AddChild(Stack[-8])
0x1354: Pop(0)
0x1355: Push((int) 7)
0x1356: @ SendWorldWndMessage(Stack[-1])
0x1357: Pop(1)
0x1358: @@ GetCategory(Stack[-1])
0x1359: Pop(0)
0x135a: @ SetDiarySection(Stack[-1])
0x135b: Pop(0)
0x135c: Stack[-9] = (bool) 0
0x135d: Return(); Pop(6)

0x135e: Stack[-2] = 0
0x135f: Stack[-3] = 0
0x1360: PushEmpty(object, object, object, object)
0x1361: @ GetMainOutdoorScene(Stack[-2])
0x1362: Pop(0)
0x1363: Pop(0); Push((bool) Stack[-2] == 0)
0x1364: IF (Stack[-1] == 0) GOTO 0x136b; Pop(1)

0x1365: Push("Can't find main outdoor scene")
0x1366: @ Trace(Stack[-1])
0x1367: Pop(1)
0x1368: Stack[-1] = 0
0x1369: Stack[-5] = Stack[-1]
0x136a: Return(); Pop(4)

0x136b: @@ GetMap(Stack[-1])
0x136c: Pop(0)
0x136d: Stack[-5] = Stack[-1]
0x136e: Return(); Pop(4)

0x136f: Stack[-1] = 0
0x1370: Stack[-2] = 0
0x1371: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1372: @ GetMainOutdoorScene(Stack[-2])
0x1373: Pop(0)
0x1374: Pop(0); Push((bool) Stack[-2] == 0)
0x1375: IF (Stack[-1] == 0) GOTO 0x137a; Pop(1)

0x1376: Push("Can't find main outdoor scene")
0x1377: @ Trace(Stack[-1])
0x1378: Pop(1)
0x1379: Return(); Pop(8)

0x137a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x137b: Pop(0)
0x137c: Pop(0); Push((bool) Stack[-1] == 0)
0x137d: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x137e: Push("Warning: outdoor scene locator ")
0x137f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1380: Push(" doesnt exist")
0x1381: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1382: @ Trace(Stack[-1])
0x1383: Pop(1)
0x1384: @@ GetMap(Stack[-11])
0x1385: Pop(0)
0x1386: Pop(0); Push((bool) Stack[-11] == 0)
0x1387: IF (Stack[-1] == 0) GOTO 0x138c; Pop(1)

0x1388: Push("Can't find map")
0x1389: @ Trace(Stack[-1])
0x138a: Pop(1)
0x138b: Return(); Pop(8)

0x138c: Push(CvectorIndex(Stack[-4], 0))
0x138d: Push(CvectorIndex(Stack[-5], 2))
0x138e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x138f: Pop(2)
0x1390: Return(); Pop(8)

0x1391: Stack[-2] = 0
0x1392: PushEmpty(int, int)
0x1393: Push("branch")
0x1394: @ GetVariable(Stack[-1], Stack[-2])
0x1395: Pop(1)
0x1396: Push((int) 0)
0x1397: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1398: IF (Stack[-1] == 0) GOTO 0x139c; Pop(1)

0x1399: Stack[-3] = (int) 1
0x139a: Return(); Pop(2)

0x139b: GOTO 0x13a1

0x139c: Push((int) 1)
0x139d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139e: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139f: Stack[-3] = (int) 2
0x13a0: Return(); Pop(2)

0x13a1: Stack[-3] = (int) 3
0x13a2: Return(); Pop(2)

0x13a3: PushEmpty()
0x13a4: Push(GlobalVars[2])
0x13a5: Pop(1); Push((bool) Stack[-1] == 0)
0x13a6: IF (Stack[-1] == 0) GOTO 0x13b0; Pop(1)

0x13a7: PushEmpty(int, object)
0x13a8: Stack[-1] = Stack[-3]
0x13a9: Push(-2, 1); TaskCall(8)
0x13aa: Call2 0x84b

0x13ab: Pop(-2, 1); TaskReturn
0x13ac: Pop(2)
0x13ad: Push(GlobalVars[2])
0x13ae: Stack[-1] = (bool) 1
0x13af: GlobalVars[2] = Stack[-1]; Pop(1)
0x13b0: PushEmpty(bool, int)
0x13b1: Stack[-1] = (int) 2
0x13b2: Call2 0x110b

0x13b3: Pop(1)
0x13b4: IF (Stack[-1] == 0) GOTO 0x13bc; Pop(1)

0x13b5: PushEmpty(int, object)
0x13b6: Stack[-1] = Stack[-3]
0x13b7: Push(-2, 1); TaskCall(4)
0x13b8: Call2 0x11a

0x13b9: Pop(-2, 1); TaskReturn
0x13ba: Pop(2)
0x13bb: Return(); Pop(0)

0x13bc: PushEmpty(bool, int)
0x13bd: Stack[-1] = (int) 3
0x13be: Call2 0x110b

0x13bf: Pop(1)
0x13c0: IF (Stack[-1] == 0) GOTO 0x13c8; Pop(1)

0x13c1: PushEmpty(int, object)
0x13c2: Stack[-1] = Stack[-3]
0x13c3: Push(-2, 1); TaskCall(6)
0x13c4: Call2 0x661

0x13c5: Pop(-2, 1); TaskReturn
0x13c6: Pop(2)
0x13c7: Return(); Pop(0)

0x13c8: PushEmpty(bool, int)
0x13c9: Stack[-1] = (int) 5
0x13ca: Call2 0x110b

0x13cb: Pop(1)
0x13cc: IF (Stack[-1] == 0) GOTO 0x13d4; Pop(1)

0x13cd: PushEmpty(int, object)
0x13ce: Stack[-1] = Stack[-3]
0x13cf: Push(-2, 1); TaskCall(10)
0x13d0: Call2 0x92d

0x13d1: Pop(-2, 1); TaskReturn
0x13d2: Pop(2)
0x13d3: Return(); Pop(0)

0x13d4: PushEmpty(bool, int)
0x13d5: Stack[-1] = (int) 6
0x13d6: Call2 0x110b

0x13d7: Pop(1)
0x13d8: IF (Stack[-1] == 0) GOTO 0x13e0; Pop(1)

0x13d9: PushEmpty(int, object)
0x13da: Stack[-1] = Stack[-3]
0x13db: Push(-2, 1); TaskCall(12)
0x13dc: Call2 0xad2

0x13dd: Pop(-2, 1); TaskReturn
0x13de: Pop(2)
0x13df: Return(); Pop(0)

0x13e0: PushEmpty(bool, int)
0x13e1: Stack[-1] = (int) 12
0x13e2: Call2 0x110b

0x13e3: Pop(1)
0x13e4: IF (Stack[-1] == 0) GOTO 0x13ec; Pop(1)

0x13e5: PushEmpty(int, object)
0x13e6: Stack[-1] = Stack[-3]
0x13e7: Push(-2, 1); TaskCall(14)
0x13e8: Call2 0xcac

0x13e9: Pop(-2, 1); TaskReturn
0x13ea: Pop(2)
0x13eb: Return(); Pop(0)

0x13ec: PushEmpty(int, object)
0x13ed: Stack[-1] = Stack[-3]
0x13ee: Push(-2, 1); TaskCall(16)
0x13ef: Call2 0xdaf

0x13f0: Pop(-2, 1); TaskReturn
0x13f1: Pop(2)
0x13f2: Return(); Pop(0)

