GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
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
	all
	idle
	Hope
	Untrust
	Independence
	Fear
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	reputation
	add
	ui/NPC_Julia.png
	ui/NPC_Julia_b.png
	k3q02
	k3q02JuliaGotoEva
	pt_map_eva
	AddMark
	k6q01
	k6q01IfAnna
	pt_map_anna
	k6q01IfEva
	k6q01IfLara
	pt_map_lara
	k6q01IfOspina
	pt_map_ospina
	quest_k6_01
	place_danko
	k11q01SoulCount
	ook11Julia1
	ook3Julia1
	pt_map_theater
	ShowMap
	k6StopKaterinaTalks
	k11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x845
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x385 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x548 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6c6 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x81b Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x891 Vars = (int)
		EVENT_6 Op = 0x8b7 Vars = ()
		EVENT_5 Op = 0x8c6 Vars = ()
		EVENT_45 Op = 0x8d3 Vars = (bool)
		EVENT_0 Op = 0x8df Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x98a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb25

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb23

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb27

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb29

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xcec

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xa9e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x9df

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x9ce

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 525486)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525487)
0x61: Push((int) 30760)
0x62: Push((int) 26843)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 540677)
0x66: Push((int) -1)
0x67: Push((int) 42710)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xb2b

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xa69

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0xb2b

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0xa79

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xa97

0xa6: Pop(0)
0xa7: Push((int) 26842)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525486)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525487)
0xb4: Push((int) 30760)
0xb5: Push((int) 26843)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 540677)
0xb9: Push((int) -1)
0xba: Push((int) 42710)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 30760)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 529306)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 529307)
0xcb: Push((int) 30762)
0xcc: Push((int) 30761)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 540678)
0xd0: Push((int) -1)
0xd1: Push((int) 42711)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 30762)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 529308)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 529309)
0xe2: Push((int) -1)
0xe3: Push((int) 30763)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 529310)
0xe7: Push((int) -1)
0xe8: Push((int) 30764)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed: PushEmpty(bool)
0xee: Call2 0xb2b

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: @ lshStopAnimation()
0xf2: Pop(0)
0xf3: GOTO 0xf6

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: GOTO 0xa2

0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 70.0
0xfe: Call2 0x98a

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0xb25

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0xb23

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0xb27

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0xb29

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0xcec

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: PushEmpty(object)
0x12a: Call2 0xa9e

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0x9df

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[-11]
0x131: Stack[-1] = Stack[-6]
0x132: Push(-2, 4); TaskCall(3)
0x133: Call2 0x14a

0x134: Pop(-2, 4); TaskReturn
0x135: Pop(2)
0x136: @@ IsDialogEnd(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: @ sync()
0x13b: Pop(0)
0x13c: @@ IsDialogEnd(Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x138

0x13f: PushEmpty(object)
0x140: Stack[-1] = Stack[-10]
0x141: Call2 0x9ce

0x142: Pop(1)
0x143: @ StopDialog(Stack[-4])
0x144: Pop(0)
0x145: @@ GetReturnValue(Stack[-2])
0x146: Pop(0)
0x147: Stack[-10] = Stack[-2]
0x148: Return(); Pop(8)

0x149: Stack[-4] = 0
0x14a: PushEmpty()
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14e: Push((int) 1)
0x14f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0x192

0x153: Pop(1)
0x154: Push((int) 525534)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0xbe0

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0xc10

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 525541)
0x168: Push((int) 42712)
0x169: Push((int) 26897)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 525546)
0x16d: Push((int) -1)
0x16e: Push((int) 26902)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: GOTO 0x174

0x172: Return(); Pop(0)

0x173: GOTO 0x14e

0x174: PushEmpty(bool)
0x175: Call2 0xb2b

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x178: @ lshWaitForAnimEnd()
0x179: Pop(0)
0x17a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x182

0x17d: PushEmpty(string)
0x17e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17f: Call2 0xa69

0x180: Pop(1)
0x181: GOTO 0x178

0x182: GOTO 0x191

0x183: Push("all")
0x184: Push("idle")
0x185: @ PlayAnimation(Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: @ WaitForAnimEnd()
0x188: Pop(0)
0x189: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: GOTO 0x191

0x18c: Push("all")
0x18d: Push("idle")
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: GOTO 0x187

0x191: Return(); Pop(0)

0x192: PushEmpty()
0x193: PushEmpty(bool)
0x194: Call2 0xb2b

0x195: Pop(0)
0x196: Pop(1); Push((bool) Stack[-1] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Return(); Pop(0)

0x199: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(0)

0x19c: PushEmpty(string, bool)
0x19d: Stack[-2] = Stack[-3]
0x19e: Push("")
0x19f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-1] = (bool) 0
0x1a2: GOTO 0x1a4

0x1a3: Stack[-1] = (bool) 1
0x1a4: Call2 0xa79

0x1a5: Pop(2)
0x1a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: Push((int) 1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x1ab: PushEmpty()
0x1ac: Call2 0xa97

0x1ad: Pop(0)
0x1ae: Push((int) 26897)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call2 0xbb4

0x1b5: Pop(2)
0x1b6: Push((int) 26901)
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0xb2d

0x1bd: Pop(2)
0x1be: Push((int) 42735)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0xb2d

0x1c5: Pop(2)
0x1c6: Push((int) 42731)
0x1c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Call2 0xb2d

0x1cd: Pop(2)
0x1ce: Push((int) 42732)
0x1cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0xb2d

0x1d5: Pop(2)
0x1d6: Push((int) 42726)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0xbd9

0x1dd: Pop(2)
0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call2 0xbca

0x1e2: Pop(2)
0x1e3: Push((int) 26890)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0x192

0x1e9: Pop(1)
0x1ea: Push((int) 525534)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0xbe0

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0xc10

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[-1] = (bool) 1
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: Push((int) 525541)
0x1fe: Push((int) 42712)
0x1ff: Push((int) 26897)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 525546)
0x203: Push((int) -1)
0x204: Push((int) 26902)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 42712)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Hope"
0x20d: Call2 0x192

0x20e: Pop(1)
0x20f: Push((int) 540679)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 540680)
0x215: Push((int) 42715)
0x216: Push((int) 42713)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 540681)
0x21a: Push((int) 42718)
0x21b: Push((int) 42714)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 42715)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Hope"
0x224: Call2 0x192

0x225: Pop(1)
0x226: Push((int) 540682)
0x227: @@ SetMessage(Stack[-1])
0x228: Pop(1)
0x229: @@ ClearReplies()
0x22a: Pop(0)
0x22b: Push((int) 540683)
0x22c: Push((int) 42722)
0x22d: Push((int) 42716)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Push((int) 540684)
0x231: Push((int) 42718)
0x232: Push((int) 42717)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 42718)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Untrust"
0x23b: Call2 0x192

0x23c: Pop(1)
0x23d: Push((int) 540685)
0x23e: @@ SetMessage(Stack[-1])
0x23f: Pop(1)
0x240: @@ ClearReplies()
0x241: Pop(0)
0x242: Push((int) 540686)
0x243: Push((int) 42722)
0x244: Push((int) 42720)
0x245: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x246: Pop(3)
0x247: Push((int) 540687)
0x248: Push((int) 42722)
0x249: Push((int) 42721)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 42722)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Independence"
0x252: Call2 0x192

0x253: Pop(1)
0x254: Push((int) 540688)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 540689)
0x25a: Push((int) 42727)
0x25b: Push((int) 42725)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Push((int) 540690)
0x25f: Push((int) -1)
0x260: Push((int) 42726)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 42727)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Fear"
0x269: Call2 0x192

0x26a: Pop(1)
0x26b: Push((int) 540691)
0x26c: @@ SetMessage(Stack[-1])
0x26d: Pop(1)
0x26e: @@ ClearReplies()
0x26f: Pop(0)
0x270: Push((int) 540692)
0x271: Push((int) 26898)
0x272: Push((int) 42728)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Push((int) 26898)
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Fear"
0x27b: Call2 0x192

0x27c: Pop(1)
0x27d: Push((int) 525542)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 525543)
0x283: Push((int) 26900)
0x284: Push((int) 26899)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Push((int) 540693)
0x288: Push((int) 42730)
0x289: Push((int) 42729)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Push((int) 42730)
0x28e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral"
0x292: Call2 0x192

0x293: Pop(1)
0x294: Push((int) 540694)
0x295: @@ SetMessage(Stack[-1])
0x296: Pop(1)
0x297: @@ ClearReplies()
0x298: Pop(0)
0x299: Push((int) 540695)
0x29a: Push((int) -1)
0x29b: Push((int) 42731)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: Push((int) 540696)
0x29f: Push((int) -1)
0x2a0: Push((int) 42732)
0x2a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(3)
0x2a3: Return(); Pop(0)

0x2a4: Push((int) 26900)
0x2a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "Independence"
0x2a9: Call2 0x192

0x2aa: Pop(1)
0x2ab: Push((int) 525544)
0x2ac: @@ SetMessage(Stack[-1])
0x2ad: Pop(1)
0x2ae: @@ ClearReplies()
0x2af: Pop(0)
0x2b0: Push((int) 540697)
0x2b1: Push((int) 42734)
0x2b2: Push((int) 42733)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: Push((int) 540699)
0x2b6: Push((int) -1)
0x2b7: Push((int) 42735)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 42734)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Untrust"
0x2c0: Call2 0x192

0x2c1: Pop(1)
0x2c2: Push((int) 540698)
0x2c3: @@ SetMessage(Stack[-1])
0x2c4: Pop(1)
0x2c5: @@ ClearReplies()
0x2c6: Pop(0)
0x2c7: Push((int) 525545)
0x2c8: Push((int) -1)
0x2c9: Push((int) 26901)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: Return(); Pop(0)

0x2cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ce: PushEmpty(bool)
0x2cf: Call2 0xb2b

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: @ lshStopAnimation()
0x2d3: Pop(0)
0x2d4: GOTO 0x2d7

0x2d5: @ StopAnimation()
0x2d6: Pop(0)
0x2d7: Return(); Pop(0)

0x2d8: GOTO 0x1a9

0x2d9: Return(); Pop(0)

0x2da: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2db: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2dc: PushEmpty(bool, object, float)
0x2dd: Stack[-2] = Stack[-12]
0x2de: Stack[-1] = (float) 70.0
0x2df: Call2 0x98a

0x2e0: Pop(2)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-10] = (int) -2
0x2e4: Return(); Pop(8)

0x2e5: @ CreateDialog(Stack[-4])
0x2e6: Pop(0)
0x2e7: PushEmpty(int)
0x2e8: Call2 0xb25

0x2e9: Pop(0)
0x2ea: @@ SetNPCName(Stack[-1])
0x2eb: Pop(1)
0x2ec: PushEmpty(int)
0x2ed: Call2 0xb23

0x2ee: Pop(0)
0x2ef: @@ SetNPCDescription(Stack[-1])
0x2f0: Pop(1)
0x2f1: PushEmpty(string)
0x2f2: Call2 0xb27

0x2f3: Pop(0)
0x2f4: @@ SetPhoto(Stack[-1])
0x2f5: Pop(1)
0x2f6: PushEmpty(string)
0x2f7: Call2 0xb29

0x2f8: Pop(0)
0x2f9: @@ SetPhoto2(Stack[-1])
0x2fa: Pop(1)
0x2fb: PushEmpty(int)
0x2fc: Call2 0xcec

0x2fd: Pop(0)
0x2fe: @@ SetPlayerName(Stack[-1])
0x2ff: Pop(1)
0x300: Stack[-2] = (int) -1
0x301: @ IsOverrideActive(Stack[-3])
0x302: Pop(0)
0x303: Push(Stack[-3])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-10] = (int) -2
0x306: Return(); Pop(8)

0x307: @ DoDialog(Stack[-4])
0x308: Pop(0)
0x309: PushEmpty(bool, object)
0x30a: PushEmpty(object)
0x30b: Call2 0xa9e

0x30c: Stack[-2] = Stack[-1]
0x30d: Pop(1)
0x30e: Call2 0x9df

0x30f: Pop(2)
0x310: PushEmpty(object, object)
0x311: Stack[-2] = Stack[-11]
0x312: Stack[-1] = Stack[-6]
0x313: Push(-2, 4); TaskCall(5)
0x314: Call2 0x32b

0x315: Pop(-2, 4); TaskReturn
0x316: Pop(2)
0x317: @@ IsDialogEnd(Stack[-1])
0x318: Pop(0)
0x319: Pop(0); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: @ sync()
0x31c: Pop(0)
0x31d: @@ IsDialogEnd(Stack[-1])
0x31e: Pop(0)
0x31f: GOTO 0x319

0x320: PushEmpty(object)
0x321: Stack[-1] = Stack[-10]
0x322: Call2 0x9ce

0x323: Pop(1)
0x324: @ StopDialog(Stack[-4])
0x325: Pop(0)
0x326: @@ GetReturnValue(Stack[-2])
0x327: Pop(0)
0x328: Stack[-10] = Stack[-2]
0x329: Return(); Pop(8)

0x32a: Stack[-4] = 0
0x32b: PushEmpty()
0x32c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x32d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x32e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x32f: Push((int) 1)
0x330: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Hope"
0x333: Call2 0x36f

0x334: Pop(1)
0x335: Push((int) 526045)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: PushEmpty(bool, object)
0x33b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33c: Call2 0xbec

0x33d: Pop(1)
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: Push((int) 526046)
0x340: Push((int) 27332)
0x341: Push((int) 27331)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Push((int) 526063)
0x345: Push((int) -1)
0x346: Push((int) 27348)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Push((int) 528877)
0x34a: Push((int) -1)
0x34b: Push((int) 30300)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: GOTO 0x351

0x34f: Return(); Pop(0)

0x350: GOTO 0x32f

0x351: PushEmpty(bool)
0x352: Call2 0xb2b

0x353: Pop(0)
0x354: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x355: @ lshWaitForAnimEnd()
0x356: Pop(0)
0x357: Push( Stack[3 + Tasks[-1].StackPointer] )
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x35f

0x35a: PushEmpty(string)
0x35b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x35c: Call2 0xa69

0x35d: Pop(1)
0x35e: GOTO 0x355

0x35f: GOTO 0x36e

0x360: Push("all")
0x361: Push("idle")
0x362: @ PlayAnimation(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: @ WaitForAnimEnd()
0x365: Pop(0)
0x366: Push( Stack[3 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36e

0x369: Push("all")
0x36a: Push("idle")
0x36b: @ PlayAnimation(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: GOTO 0x364

0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: PushEmpty(bool)
0x371: Call2 0xb2b

0x372: Pop(0)
0x373: Pop(1); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Return(); Pop(0)

0x376: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: Return(); Pop(0)

0x379: PushEmpty(string, bool)
0x37a: Stack[-2] = Stack[-3]
0x37b: Push("")
0x37c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-1] = (bool) 0
0x37f: GOTO 0x381

0x380: Stack[-1] = (bool) 1
0x381: Call2 0xa79

0x382: Pop(2)
0x383: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: Push((int) 1)
0x387: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x388: PushEmpty()
0x389: Call2 0xa97

0x38a: Pop(0)
0x38b: Push((int) 27331)
0x38c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38e: PushEmpty(object, object)
0x38f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x390: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x391: Call2 0xbd3

0x392: Pop(2)
0x393: Push((int) 27347)
0x394: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x396: PushEmpty(object, object)
0x397: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x398: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x399: Call2 0xb44

0x39a: Pop(2)
0x39b: PushEmpty(object, object)
0x39c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39e: Call2 0xbba

0x39f: Pop(2)
0x3a0: Push((int) 27330)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "Hope"
0x3a5: Call2 0x36f

0x3a6: Pop(1)
0x3a7: Push((int) 526045)
0x3a8: @@ SetMessage(Stack[-1])
0x3a9: Pop(1)
0x3aa: @@ ClearReplies()
0x3ab: Pop(0)
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Call2 0xbec

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b1: Push((int) 526046)
0x3b2: Push((int) 27332)
0x3b3: Push((int) 27331)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Push((int) 526063)
0x3b7: Push((int) -1)
0x3b8: Push((int) 27348)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Push((int) 528877)
0x3bc: Push((int) -1)
0x3bd: Push((int) 30300)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Return(); Pop(0)

0x3c1: Push((int) 27332)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Hope"
0x3c6: Call2 0x36f

0x3c7: Pop(1)
0x3c8: Push((int) 526047)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 526048)
0x3ce: Push((int) 27334)
0x3cf: Push((int) 27333)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Push((int) 528878)
0x3d3: Push((int) 27334)
0x3d4: Push((int) 30301)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Return(); Pop(0)

0x3d8: Push((int) 27334)
0x3d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3db: PushEmpty(string)
0x3dc: Stack[-1] = "Hope"
0x3dd: Call2 0x36f

0x3de: Pop(1)
0x3df: Push((int) 526049)
0x3e0: @@ SetMessage(Stack[-1])
0x3e1: Pop(1)
0x3e2: @@ ClearReplies()
0x3e3: Pop(0)
0x3e4: Push((int) 526050)
0x3e5: Push((int) 27336)
0x3e6: Push((int) 27335)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Push((int) 528879)
0x3ea: Push((int) 27338)
0x3eb: Push((int) 30303)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 27336)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Fear"
0x3f4: Call2 0x36f

0x3f5: Pop(1)
0x3f6: Push((int) 526051)
0x3f7: @@ SetMessage(Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ ClearReplies()
0x3fa: Pop(0)
0x3fb: Push((int) 526052)
0x3fc: Push((int) 27338)
0x3fd: Push((int) 27337)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Push((int) 27338)
0x402: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x404: PushEmpty(string)
0x405: Stack[-1] = "Fear"
0x406: Call2 0x36f

0x407: Pop(1)
0x408: Push((int) 526053)
0x409: @@ SetMessage(Stack[-1])
0x40a: Pop(1)
0x40b: @@ ClearReplies()
0x40c: Pop(0)
0x40d: Push((int) 528880)
0x40e: Push((int) 30306)
0x40f: Push((int) 30305)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Push((int) 528882)
0x413: Push((int) 30306)
0x414: Push((int) 30307)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Return(); Pop(0)

0x418: Push((int) 30306)
0x419: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41b: PushEmpty(string)
0x41c: Stack[-1] = "Fear"
0x41d: Call2 0x36f

0x41e: Pop(1)
0x41f: Push((int) 528881)
0x420: @@ SetMessage(Stack[-1])
0x421: Pop(1)
0x422: @@ ClearReplies()
0x423: Pop(0)
0x424: Push((int) 526054)
0x425: Push((int) 27340)
0x426: Push((int) 27339)
0x427: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: Return(); Pop(0)

0x42a: Push((int) 27342)
0x42b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42d: Push((int) 27340)
0x42e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x430: PushEmpty(string)
0x431: Stack[-1] = "Independence"
0x432: Call2 0x36f

0x433: Pop(1)
0x434: Push((int) 526055)
0x435: @@ SetMessage(Stack[-1])
0x436: Pop(1)
0x437: @@ ClearReplies()
0x438: Pop(0)
0x439: Push((int) 528883)
0x43a: Push((int) 27344)
0x43b: Push((int) 30309)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: Return(); Pop(0)

0x43f: Push((int) 27344)
0x440: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Untrust"
0x444: Call2 0x36f

0x445: Pop(1)
0x446: Push((int) 526059)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: Push((int) 528886)
0x44c: Push((int) 30314)
0x44d: Push((int) 30313)
0x44e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44f: Pop(3)
0x450: Push((int) 540972)
0x451: Push((int) 43062)
0x452: Push((int) 43061)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: Push((int) 43062)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Fear"
0x45b: Call2 0x36f

0x45c: Pop(1)
0x45d: Push((int) 540973)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 540974)
0x463: Push((int) 30314)
0x464: Push((int) 43063)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Return(); Pop(0)

0x468: Push((int) 30314)
0x469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Untrust"
0x46d: Call2 0x36f

0x46e: Pop(1)
0x46f: Push((int) 528887)
0x470: @@ SetMessage(Stack[-1])
0x471: Pop(1)
0x472: @@ ClearReplies()
0x473: Pop(0)
0x474: Push((int) 526060)
0x475: Push((int) 27346)
0x476: Push((int) 27345)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Return(); Pop(0)

0x47a: Push((int) 27346)
0x47b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x47d: PushEmpty(string)
0x47e: Stack[-1] = "Neutral"
0x47f: Call2 0x36f

0x480: Pop(1)
0x481: Push((int) 526061)
0x482: @@ SetMessage(Stack[-1])
0x483: Pop(1)
0x484: @@ ClearReplies()
0x485: Pop(0)
0x486: Push((int) 526062)
0x487: Push((int) -1)
0x488: Push((int) 27347)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Return(); Pop(0)

0x48c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x48d: PushEmpty(bool)
0x48e: Call2 0xb2b

0x48f: Pop(0)
0x490: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x491: @ lshStopAnimation()
0x492: Pop(0)
0x493: GOTO 0x496

0x494: @ StopAnimation()
0x495: Pop(0)
0x496: Return(); Pop(0)

0x497: GOTO 0x386

0x498: Return(); Pop(0)

0x499: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x49a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x49b: PushEmpty(bool, object, float)
0x49c: Stack[-2] = Stack[-12]
0x49d: Stack[-1] = (float) 70.0
0x49e: Call2 0x98a

0x49f: Pop(2)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-10] = (int) -2
0x4a3: Return(); Pop(8)

0x4a4: @ CreateDialog(Stack[-4])
0x4a5: Pop(0)
0x4a6: PushEmpty(int)
0x4a7: Call2 0xb25

0x4a8: Pop(0)
0x4a9: @@ SetNPCName(Stack[-1])
0x4aa: Pop(1)
0x4ab: PushEmpty(int)
0x4ac: Call2 0xb23

0x4ad: Pop(0)
0x4ae: @@ SetNPCDescription(Stack[-1])
0x4af: Pop(1)
0x4b0: PushEmpty(string)
0x4b1: Call2 0xb27

0x4b2: Pop(0)
0x4b3: @@ SetPhoto(Stack[-1])
0x4b4: Pop(1)
0x4b5: PushEmpty(string)
0x4b6: Call2 0xb29

0x4b7: Pop(0)
0x4b8: @@ SetPhoto2(Stack[-1])
0x4b9: Pop(1)
0x4ba: PushEmpty(int)
0x4bb: Call2 0xcec

0x4bc: Pop(0)
0x4bd: @@ SetPlayerName(Stack[-1])
0x4be: Pop(1)
0x4bf: Stack[-2] = (int) -1
0x4c0: @ IsOverrideActive(Stack[-3])
0x4c1: Pop(0)
0x4c2: Push(Stack[-3])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-10] = (int) -2
0x4c5: Return(); Pop(8)

0x4c6: @ DoDialog(Stack[-4])
0x4c7: Pop(0)
0x4c8: PushEmpty(bool, object)
0x4c9: PushEmpty(object)
0x4ca: Call2 0xa9e

0x4cb: Stack[-2] = Stack[-1]
0x4cc: Pop(1)
0x4cd: Call2 0x9df

0x4ce: Pop(2)
0x4cf: PushEmpty(object, object)
0x4d0: Stack[-2] = Stack[-11]
0x4d1: Stack[-1] = Stack[-6]
0x4d2: Push(-2, 4); TaskCall(7)
0x4d3: Call2 0x4ea

0x4d4: Pop(-2, 4); TaskReturn
0x4d5: Pop(2)
0x4d6: @@ IsDialogEnd(Stack[-1])
0x4d7: Pop(0)
0x4d8: Pop(0); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: @ sync()
0x4db: Pop(0)
0x4dc: @@ IsDialogEnd(Stack[-1])
0x4dd: Pop(0)
0x4de: GOTO 0x4d8

0x4df: PushEmpty(object)
0x4e0: Stack[-1] = Stack[-10]
0x4e1: Call2 0x9ce

0x4e2: Pop(1)
0x4e3: @ StopDialog(Stack[-4])
0x4e4: Pop(0)
0x4e5: @@ GetReturnValue(Stack[-2])
0x4e6: Pop(0)
0x4e7: Stack[-10] = Stack[-2]
0x4e8: Return(); Pop(8)

0x4e9: Stack[-4] = 0
0x4ea: PushEmpty()
0x4eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4ed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4ee: Push((int) 1)
0x4ef: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x4f0: PushEmpty(string)
0x4f1: Stack[-1] = "Neutral"
0x4f2: Call2 0x532

0x4f3: Pop(1)
0x4f4: Push((int) 527568)
0x4f5: @@ SetMessage(Stack[-1])
0x4f6: Pop(1)
0x4f7: @@ ClearReplies()
0x4f8: Pop(0)
0x4f9: PushEmpty(bool)
0x4fa: Stack[-1] = (bool) 0
0x4fb: PushEmpty(bool, object)
0x4fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fd: Call2 0xc04

0x4fe: Pop(1)
0x4ff: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x500: PushEmpty(bool, object)
0x501: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x502: Call2 0xbf8

0x503: Pop(1)
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Stack[-1] = (bool) 1
0x506: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x507: Push((int) 527570)
0x508: Push((int) 28913)
0x509: Push((int) 28912)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Push((int) 527569)
0x50d: Push((int) -1)
0x50e: Push((int) 28911)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: GOTO 0x514

0x512: Return(); Pop(0)

0x513: GOTO 0x4ee

0x514: PushEmpty(bool)
0x515: Call2 0xb2b

0x516: Pop(0)
0x517: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x518: @ lshWaitForAnimEnd()
0x519: Pop(0)
0x51a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: GOTO 0x522

0x51d: PushEmpty(string)
0x51e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x51f: Call2 0xa69

0x520: Pop(1)
0x521: GOTO 0x518

0x522: GOTO 0x531

0x523: Push("all")
0x524: Push("idle")
0x525: @ PlayAnimation(Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: @ WaitForAnimEnd()
0x528: Pop(0)
0x529: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: GOTO 0x531

0x52c: Push("all")
0x52d: Push("idle")
0x52e: @ PlayAnimation(Stack[-2], Stack[-1])
0x52f: Pop(2)
0x530: GOTO 0x527

0x531: Return(); Pop(0)

0x532: PushEmpty()
0x533: PushEmpty(bool)
0x534: Call2 0xb2b

0x535: Pop(0)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: Return(); Pop(0)

0x539: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Return(); Pop(0)

0x53c: PushEmpty(string, bool)
0x53d: Stack[-2] = Stack[-3]
0x53e: Push("")
0x53f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-1] = (bool) 0
0x542: GOTO 0x544

0x543: Stack[-1] = (bool) 1
0x544: Call2 0xa79

0x545: Pop(2)
0x546: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: Push((int) 1)
0x54a: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x54b: PushEmpty()
0x54c: Call2 0xa97

0x54d: Pop(0)
0x54e: Push((int) 28912)
0x54f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x551: PushEmpty(object, object)
0x552: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x553: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x554: Call2 0xbae

0x555: Pop(2)
0x556: Push((int) 28924)
0x557: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x559: PushEmpty(object, object)
0x55a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55c: Call2 0xb7b

0x55d: Pop(2)
0x55e: Push((int) 28929)
0x55f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x561: PushEmpty(object, object)
0x562: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x563: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x564: Call2 0xb7b

0x565: Pop(2)
0x566: Push((int) 28910)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x532

0x56c: Pop(1)
0x56d: Push((int) 527568)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: PushEmpty(bool)
0x573: Stack[-1] = (bool) 0
0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x576: Call2 0xc04

0x577: Pop(1)
0x578: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x579: PushEmpty(bool, object)
0x57a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57b: Call2 0xbf8

0x57c: Pop(1)
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Stack[-1] = (bool) 1
0x57f: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x580: Push((int) 527570)
0x581: Push((int) 28913)
0x582: Push((int) 28912)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Push((int) 527569)
0x586: Push((int) -1)
0x587: Push((int) 28911)
0x588: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 28913)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x58e: PushEmpty(string)
0x58f: Stack[-1] = "Fear"
0x590: Call2 0x532

0x591: Pop(1)
0x592: Push((int) 527571)
0x593: @@ SetMessage(Stack[-1])
0x594: Pop(1)
0x595: @@ ClearReplies()
0x596: Pop(0)
0x597: Push((int) 527572)
0x598: Push((int) 28915)
0x599: Push((int) 28914)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: Push((int) 527583)
0x59d: Push((int) 28926)
0x59e: Push((int) 28925)
0x59f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a0: Pop(3)
0x5a1: Return(); Pop(0)

0x5a2: Push((int) 28926)
0x5a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = "Independence"
0x5a7: Call2 0x532

0x5a8: Pop(1)
0x5a9: Push((int) 527584)
0x5aa: @@ SetMessage(Stack[-1])
0x5ab: Pop(1)
0x5ac: @@ ClearReplies()
0x5ad: Pop(0)
0x5ae: Push((int) 527585)
0x5af: Push((int) 28917)
0x5b0: Push((int) 28927)
0x5b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(3)
0x5b3: Return(); Pop(0)

0x5b4: Push((int) 28915)
0x5b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5b7: PushEmpty(string)
0x5b8: Stack[-1] = "Hope"
0x5b9: Call2 0x532

0x5ba: Pop(1)
0x5bb: Push((int) 527573)
0x5bc: @@ SetMessage(Stack[-1])
0x5bd: Pop(1)
0x5be: @@ ClearReplies()
0x5bf: Pop(0)
0x5c0: Push((int) 527574)
0x5c1: Push((int) 28917)
0x5c2: Push((int) 28916)
0x5c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c4: Pop(3)
0x5c5: Return(); Pop(0)

0x5c6: Push((int) 28917)
0x5c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5c9: PushEmpty(string)
0x5ca: Stack[-1] = "Untrust"
0x5cb: Call2 0x532

0x5cc: Pop(1)
0x5cd: Push((int) 527575)
0x5ce: @@ SetMessage(Stack[-1])
0x5cf: Pop(1)
0x5d0: @@ ClearReplies()
0x5d1: Pop(0)
0x5d2: Push((int) 527576)
0x5d3: Push((int) 28919)
0x5d4: Push((int) 28918)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Return(); Pop(0)

0x5d8: Push((int) 28919)
0x5d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Untrust"
0x5dd: Call2 0x532

0x5de: Pop(1)
0x5df: Push((int) 527577)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 527578)
0x5e5: Push((int) 28921)
0x5e6: Push((int) 28920)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Return(); Pop(0)

0x5ea: Push((int) 28921)
0x5eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5ed: PushEmpty(string)
0x5ee: Stack[-1] = "Hope"
0x5ef: Call2 0x532

0x5f0: Pop(1)
0x5f1: Push((int) 527579)
0x5f2: @@ SetMessage(Stack[-1])
0x5f3: Pop(1)
0x5f4: @@ ClearReplies()
0x5f5: Pop(0)
0x5f6: Push((int) 527580)
0x5f7: Push((int) 28923)
0x5f8: Push((int) 28922)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Return(); Pop(0)

0x5fc: Push((int) 28923)
0x5fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x5ff: PushEmpty(string)
0x600: Stack[-1] = "Hope"
0x601: Call2 0x532

0x602: Pop(1)
0x603: Push((int) 527581)
0x604: @@ SetMessage(Stack[-1])
0x605: Pop(1)
0x606: @@ ClearReplies()
0x607: Pop(0)
0x608: Push((int) 527582)
0x609: Push((int) -1)
0x60a: Push((int) 28924)
0x60b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(3)
0x60d: Push((int) 527586)
0x60e: Push((int) -1)
0x60f: Push((int) 28929)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Return(); Pop(0)

0x613: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x614: PushEmpty(bool)
0x615: Call2 0xb2b

0x616: Pop(0)
0x617: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x618: @ lshStopAnimation()
0x619: Pop(0)
0x61a: GOTO 0x61d

0x61b: @ StopAnimation()
0x61c: Pop(0)
0x61d: Return(); Pop(0)

0x61e: GOTO 0x549

0x61f: Return(); Pop(0)

0x620: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x621: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x622: PushEmpty(bool, object, float)
0x623: Stack[-2] = Stack[-12]
0x624: Stack[-1] = (float) 70.0
0x625: Call2 0x98a

0x626: Pop(2)
0x627: Pop(1); Push((bool) Stack[-1] == 0)
0x628: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x629: Stack[-10] = (int) -2
0x62a: Return(); Pop(8)

0x62b: @ CreateDialog(Stack[-4])
0x62c: Pop(0)
0x62d: PushEmpty(int)
0x62e: Call2 0xb25

0x62f: Pop(0)
0x630: @@ SetNPCName(Stack[-1])
0x631: Pop(1)
0x632: PushEmpty(int)
0x633: Call2 0xb23

0x634: Pop(0)
0x635: @@ SetNPCDescription(Stack[-1])
0x636: Pop(1)
0x637: PushEmpty(string)
0x638: Call2 0xb27

0x639: Pop(0)
0x63a: @@ SetPhoto(Stack[-1])
0x63b: Pop(1)
0x63c: PushEmpty(string)
0x63d: Call2 0xb29

0x63e: Pop(0)
0x63f: @@ SetPhoto2(Stack[-1])
0x640: Pop(1)
0x641: PushEmpty(int)
0x642: Call2 0xcec

0x643: Pop(0)
0x644: @@ SetPlayerName(Stack[-1])
0x645: Pop(1)
0x646: Stack[-2] = (int) -1
0x647: @ IsOverrideActive(Stack[-3])
0x648: Pop(0)
0x649: Push(Stack[-3])
0x64a: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64b: Stack[-10] = (int) -2
0x64c: Return(); Pop(8)

0x64d: @ DoDialog(Stack[-4])
0x64e: Pop(0)
0x64f: PushEmpty(bool, object)
0x650: PushEmpty(object)
0x651: Call2 0xa9e

0x652: Stack[-2] = Stack[-1]
0x653: Pop(1)
0x654: Call2 0x9df

0x655: Pop(2)
0x656: PushEmpty(object, object)
0x657: Stack[-2] = Stack[-11]
0x658: Stack[-1] = Stack[-6]
0x659: Push(-2, 4); TaskCall(9)
0x65a: Call2 0x671

0x65b: Pop(-2, 4); TaskReturn
0x65c: Pop(2)
0x65d: @@ IsDialogEnd(Stack[-1])
0x65e: Pop(0)
0x65f: Pop(0); Push((bool) Stack[-1] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x661: @ sync()
0x662: Pop(0)
0x663: @@ IsDialogEnd(Stack[-1])
0x664: Pop(0)
0x665: GOTO 0x65f

0x666: PushEmpty(object)
0x667: Stack[-1] = Stack[-10]
0x668: Call2 0x9ce

0x669: Pop(1)
0x66a: @ StopDialog(Stack[-4])
0x66b: Pop(0)
0x66c: @@ GetReturnValue(Stack[-2])
0x66d: Pop(0)
0x66e: Stack[-10] = Stack[-2]
0x66f: Return(); Pop(8)

0x670: Stack[-4] = 0
0x671: PushEmpty()
0x672: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x673: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x674: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x675: Push((int) 1)
0x676: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral"
0x679: Call2 0x6b0

0x67a: Pop(1)
0x67b: Push((int) 539300)
0x67c: @@ SetMessage(Stack[-1])
0x67d: Pop(1)
0x67e: @@ ClearReplies()
0x67f: Pop(0)
0x680: Push((int) 542585)
0x681: Push((int) 44986)
0x682: Push((int) 44985)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Push((int) 539301)
0x686: Push((int) -1)
0x687: Push((int) 41244)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Push((int) 542584)
0x68b: Push((int) -1)
0x68c: Push((int) 44984)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: GOTO 0x692

0x690: Return(); Pop(0)

0x691: GOTO 0x675

0x692: PushEmpty(bool)
0x693: Call2 0xb2b

0x694: Pop(0)
0x695: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x696: @ lshWaitForAnimEnd()
0x697: Pop(0)
0x698: Push( Stack[3 + Tasks[-1].StackPointer] )
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: GOTO 0x6a0

0x69b: PushEmpty(string)
0x69c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x69d: Call2 0xa69

0x69e: Pop(1)
0x69f: GOTO 0x696

0x6a0: GOTO 0x6af

0x6a1: Push("all")
0x6a2: Push("idle")
0x6a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a4: Pop(2)
0x6a5: @ WaitForAnimEnd()
0x6a6: Pop(0)
0x6a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a8: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a9: GOTO 0x6af

0x6aa: Push("all")
0x6ab: Push("idle")
0x6ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ad: Pop(2)
0x6ae: GOTO 0x6a5

0x6af: Return(); Pop(0)

0x6b0: PushEmpty()
0x6b1: PushEmpty(bool)
0x6b2: Call2 0xb2b

0x6b3: Pop(0)
0x6b4: Pop(1); Push((bool) Stack[-1] == 0)
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b6: Return(); Pop(0)

0x6b7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b9: Return(); Pop(0)

0x6ba: PushEmpty(string, bool)
0x6bb: Stack[-2] = Stack[-3]
0x6bc: Push("")
0x6bd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: Stack[-1] = (bool) 0
0x6c0: GOTO 0x6c2

0x6c1: Stack[-1] = (bool) 1
0x6c2: Call2 0xa79

0x6c3: Pop(2)
0x6c4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty()
0x6c7: Push((int) 1)
0x6c8: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x6c9: PushEmpty()
0x6ca: Call2 0xa97

0x6cb: Pop(0)
0x6cc: Push((int) 41243)
0x6cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Neutral"
0x6d1: Call2 0x6b0

0x6d2: Pop(1)
0x6d3: Push((int) 539300)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 542585)
0x6d9: Push((int) 44986)
0x6da: Push((int) 44985)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Push((int) 539301)
0x6de: Push((int) -1)
0x6df: Push((int) 41244)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Push((int) 542584)
0x6e3: Push((int) -1)
0x6e4: Push((int) 44984)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Return(); Pop(0)

0x6e8: Push((int) 44986)
0x6e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6eb: PushEmpty(string)
0x6ec: Stack[-1] = "Hope"
0x6ed: Call2 0x6b0

0x6ee: Pop(1)
0x6ef: Push((int) 542586)
0x6f0: @@ SetMessage(Stack[-1])
0x6f1: Pop(1)
0x6f2: @@ ClearReplies()
0x6f3: Pop(0)
0x6f4: Push((int) 542587)
0x6f5: Push((int) 44989)
0x6f6: Push((int) 44987)
0x6f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: Push((int) 542588)
0x6fa: Push((int) -1)
0x6fb: Push((int) 44988)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: Return(); Pop(0)

0x6ff: Push((int) 44989)
0x700: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x702: PushEmpty(string)
0x703: Stack[-1] = "Hope"
0x704: Call2 0x6b0

0x705: Pop(1)
0x706: Push((int) 542589)
0x707: @@ SetMessage(Stack[-1])
0x708: Pop(1)
0x709: @@ ClearReplies()
0x70a: Pop(0)
0x70b: Push((int) 542590)
0x70c: Push((int) 44991)
0x70d: Push((int) 44990)
0x70e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70f: Pop(3)
0x710: Push((int) 542594)
0x711: Push((int) 44993)
0x712: Push((int) 44994)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Return(); Pop(0)

0x716: Push((int) 44991)
0x717: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x719: PushEmpty(string)
0x71a: Stack[-1] = "Hope"
0x71b: Call2 0x6b0

0x71c: Pop(1)
0x71d: Push((int) 542591)
0x71e: @@ SetMessage(Stack[-1])
0x71f: Pop(1)
0x720: @@ ClearReplies()
0x721: Pop(0)
0x722: Push((int) 542592)
0x723: Push((int) 44993)
0x724: Push((int) 44992)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: Return(); Pop(0)

0x728: Push((int) 44993)
0x729: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x72b: PushEmpty(string)
0x72c: Stack[-1] = "Neutral"
0x72d: Call2 0x6b0

0x72e: Pop(1)
0x72f: Push((int) 542593)
0x730: @@ SetMessage(Stack[-1])
0x731: Pop(1)
0x732: @@ ClearReplies()
0x733: Pop(0)
0x734: Push((int) 542595)
0x735: Push((int) 44997)
0x736: Push((int) 44996)
0x737: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x738: Pop(3)
0x739: Return(); Pop(0)

0x73a: Push((int) 44997)
0x73b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x73d: PushEmpty(string)
0x73e: Stack[-1] = "Neutral"
0x73f: Call2 0x6b0

0x740: Pop(1)
0x741: Push((int) 542596)
0x742: @@ SetMessage(Stack[-1])
0x743: Pop(1)
0x744: @@ ClearReplies()
0x745: Pop(0)
0x746: Push((int) 542597)
0x747: Push((int) 45000)
0x748: Push((int) 44998)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Push((int) 542598)
0x74c: Push((int) -1)
0x74d: Push((int) 44999)
0x74e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(3)
0x750: Return(); Pop(0)

0x751: Push((int) 45000)
0x752: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x754: PushEmpty(string)
0x755: Stack[-1] = "Neutral"
0x756: Call2 0x6b0

0x757: Pop(1)
0x758: Push((int) 542599)
0x759: @@ SetMessage(Stack[-1])
0x75a: Pop(1)
0x75b: @@ ClearReplies()
0x75c: Pop(0)
0x75d: Push((int) 542600)
0x75e: Push((int) -1)
0x75f: Push((int) 45001)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Push((int) 542601)
0x763: Push((int) -1)
0x764: Push((int) 45002)
0x765: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: Push((int) 542602)
0x768: Push((int) -1)
0x769: Push((int) 45003)
0x76a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76b: Pop(3)
0x76c: Return(); Pop(0)

0x76d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x76e: PushEmpty(bool)
0x76f: Call2 0xb2b

0x770: Pop(0)
0x771: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x772: @ lshStopAnimation()
0x773: Pop(0)
0x774: GOTO 0x777

0x775: @ StopAnimation()
0x776: Pop(0)
0x777: Return(); Pop(0)

0x778: GOTO 0x6c7

0x779: Return(); Pop(0)

0x77a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x77b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x77c: PushEmpty(bool, object, float)
0x77d: Stack[-2] = Stack[-12]
0x77e: Stack[-1] = (float) 70.0
0x77f: Call2 0x98a

0x780: Pop(2)
0x781: Pop(1); Push((bool) Stack[-1] == 0)
0x782: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x783: Stack[-10] = (int) -2
0x784: Return(); Pop(8)

0x785: @ CreateDialog(Stack[-4])
0x786: Pop(0)
0x787: PushEmpty(int)
0x788: Call2 0xb25

0x789: Pop(0)
0x78a: @@ SetNPCName(Stack[-1])
0x78b: Pop(1)
0x78c: PushEmpty(int)
0x78d: Call2 0xb23

0x78e: Pop(0)
0x78f: @@ SetNPCDescription(Stack[-1])
0x790: Pop(1)
0x791: PushEmpty(string)
0x792: Call2 0xb27

0x793: Pop(0)
0x794: @@ SetPhoto(Stack[-1])
0x795: Pop(1)
0x796: PushEmpty(string)
0x797: Call2 0xb29

0x798: Pop(0)
0x799: @@ SetPhoto2(Stack[-1])
0x79a: Pop(1)
0x79b: PushEmpty(int)
0x79c: Call2 0xcec

0x79d: Pop(0)
0x79e: @@ SetPlayerName(Stack[-1])
0x79f: Pop(1)
0x7a0: Stack[-2] = (int) -1
0x7a1: @ IsOverrideActive(Stack[-3])
0x7a2: Pop(0)
0x7a3: Push(Stack[-3])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-10] = (int) -2
0x7a6: Return(); Pop(8)

0x7a7: @ DoDialog(Stack[-4])
0x7a8: Pop(0)
0x7a9: PushEmpty(bool, object)
0x7aa: PushEmpty(object)
0x7ab: Call2 0xa9e

0x7ac: Stack[-2] = Stack[-1]
0x7ad: Pop(1)
0x7ae: Call2 0x9df

0x7af: Pop(2)
0x7b0: PushEmpty(object, object)
0x7b1: Stack[-2] = Stack[-11]
0x7b2: Stack[-1] = Stack[-6]
0x7b3: Push(-2, 4); TaskCall(11)
0x7b4: Call2 0x7cb

0x7b5: Pop(-2, 4); TaskReturn
0x7b6: Pop(2)
0x7b7: @@ IsDialogEnd(Stack[-1])
0x7b8: Pop(0)
0x7b9: Pop(0); Push((bool) Stack[-1] == 0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bb: @ sync()
0x7bc: Pop(0)
0x7bd: @@ IsDialogEnd(Stack[-1])
0x7be: Pop(0)
0x7bf: GOTO 0x7b9

0x7c0: PushEmpty(object)
0x7c1: Stack[-1] = Stack[-10]
0x7c2: Call2 0x9ce

0x7c3: Pop(1)
0x7c4: @ StopDialog(Stack[-4])
0x7c5: Pop(0)
0x7c6: @@ GetReturnValue(Stack[-2])
0x7c7: Pop(0)
0x7c8: Stack[-10] = Stack[-2]
0x7c9: Return(); Pop(8)

0x7ca: Stack[-4] = 0
0x7cb: PushEmpty()
0x7cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7cf: Push((int) 1)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7d1: PushEmpty(string)
0x7d2: Stack[-1] = "Neutral"
0x7d3: Call2 0x805

0x7d4: Pop(1)
0x7d5: Push((int) 540539)
0x7d6: @@ SetMessage(Stack[-1])
0x7d7: Pop(1)
0x7d8: @@ ClearReplies()
0x7d9: Pop(0)
0x7da: Push((int) 540540)
0x7db: Push((int) -1)
0x7dc: Push((int) 42549)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Push((int) 540799)
0x7e0: Push((int) -1)
0x7e1: Push((int) 42848)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: GOTO 0x7e7

0x7e5: Return(); Pop(0)

0x7e6: GOTO 0x7cf

0x7e7: PushEmpty(bool)
0x7e8: Call2 0xb2b

0x7e9: Pop(0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7eb: @ lshWaitForAnimEnd()
0x7ec: Pop(0)
0x7ed: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ef: GOTO 0x7f5

0x7f0: PushEmpty(string)
0x7f1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f2: Call2 0xa69

0x7f3: Pop(1)
0x7f4: GOTO 0x7eb

0x7f5: GOTO 0x804

0x7f6: Push("all")
0x7f7: Push("idle")
0x7f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f9: Pop(2)
0x7fa: @ WaitForAnimEnd()
0x7fb: Pop(0)
0x7fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7fd: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fe: GOTO 0x804

0x7ff: Push("all")
0x800: Push("idle")
0x801: @ PlayAnimation(Stack[-2], Stack[-1])
0x802: Pop(2)
0x803: GOTO 0x7fa

0x804: Return(); Pop(0)

0x805: PushEmpty()
0x806: PushEmpty(bool)
0x807: Call2 0xb2b

0x808: Pop(0)
0x809: Pop(1); Push((bool) Stack[-1] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: Return(); Pop(0)

0x80c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: Return(); Pop(0)

0x80f: PushEmpty(string, bool)
0x810: Stack[-2] = Stack[-3]
0x811: Push("")
0x812: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x814: Stack[-1] = (bool) 0
0x815: GOTO 0x817

0x816: Stack[-1] = (bool) 1
0x817: Call2 0xa79

0x818: Pop(2)
0x819: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x81a: Return(); Pop(0)

0x81b: PushEmpty()
0x81c: Push((int) 1)
0x81d: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x81e: PushEmpty()
0x81f: Call2 0xa97

0x820: Pop(0)
0x821: Push((int) 42548)
0x822: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x824: PushEmpty(string)
0x825: Stack[-1] = "Neutral"
0x826: Call2 0x805

0x827: Pop(1)
0x828: Push((int) 540539)
0x829: @@ SetMessage(Stack[-1])
0x82a: Pop(1)
0x82b: @@ ClearReplies()
0x82c: Pop(0)
0x82d: Push((int) 540540)
0x82e: Push((int) -1)
0x82f: Push((int) 42549)
0x830: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x831: Pop(3)
0x832: Push((int) 540799)
0x833: Push((int) -1)
0x834: Push((int) 42848)
0x835: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x836: Pop(3)
0x837: Return(); Pop(0)

0x838: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x839: PushEmpty(bool)
0x83a: Call2 0xb2b

0x83b: Pop(0)
0x83c: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83d: @ lshStopAnimation()
0x83e: Pop(0)
0x83f: GOTO 0x842

0x840: @ StopAnimation()
0x841: Pop(0)
0x842: Return(); Pop(0)

0x843: GOTO 0x81c

0x844: Return(); Pop(0)

0x845: Push(GlobalVars[1])
0x846: Stack[-1] = (bool) 0
0x847: GlobalVars[1] = Stack[-1]; Pop(1)
0x848: PushEmpty()
0x849: Call2 0x84c

0x84a: Pop(0)
0x84b: Return(); Pop(0)

0x84c: PushEmpty(bool)
0x84d: Call2 0x985

0x84e: Pop(0)
0x84f: Pop(1); Push((bool) Stack[-1] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x851: @ Hold()
0x852: Pop(0)
0x853: @ GetDirection(Stack[-0])
0x854: Pop(0)
0x855: PushEmpty()
0x856: Call2 0x8fc

0x857: Pop(0)
0x858: GOTO 0x855

0x859: Return(); Pop(0)

0x85a: PushEmpty(object, object)
0x85b: Push("player")
0x85c: @ FindActor(Stack[-2], Stack[-1])
0x85d: Pop(1)
0x85e: Pop(0); Push((bool) Stack[-1] == 0)
0x85f: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x860: Stack[-3] = (bool) 0
0x861: Return(); Pop(2)

0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[-3]
0x864: Call2 0x97c

0x865: Stack[-5] = Stack[-2]
0x866: Pop(2)
0x867: Return(); Pop(2)

0x868: Stack[-1] = 0
0x869: Push(CvectorIndex(Stack[-0], 0))
0x86a: Push(CvectorIndex(Stack[-0], 2))
0x86b: @ RotateAsync(Stack[-2], Stack[-1])
0x86c: Pop(2)
0x86d: Return(); Pop(0)

0x86e: PushEmpty(object, bool, object, bool)
0x86f: Push("player")
0x870: @ FindActor(Stack[-3], Stack[-1])
0x871: Pop(1)
0x872: Pop(0); Push((bool) Stack[-2] == 0)
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-5] = (bool) 0
0x875: Return(); Pop(4)

0x876: PushEmpty(float, object)
0x877: Stack[-1] = Stack[-4]
0x878: Call2 0x948

0x879: Pop(1)
0x87a: Push((float)90000.0)
0x87b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87d: Stack[-5] = (bool) 0
0x87e: Return(); Pop(4)

0x87f: @ CanSee(Stack[-1], Stack[-2])
0x880: Pop(0)
0x881: Stack[-5] = Stack[-1]
0x882: Return(); Pop(4)

0x883: Stack[-2] = 0
0x884: PushEmpty(float, float)
0x885: Push((int) 8)
0x886: Push((int) 16)
0x887: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x888: Pop(2)
0x889: Push((int) 10)
0x88a: @ SetTimer(Stack[-1], Stack[-2])
0x88b: Pop(1)
0x88c: Return(); Pop(2)

0x88d: Push((int) 10)
0x88e: @ KillTimer(Stack[-1])
0x88f: Pop(1)
0x890: Return(); Pop(0)

0x891: PushEmpty()
0x892: Push((int) 10)
0x893: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x895: PushEmpty()
0x896: Call2 0x88d

0x897: Pop(0)
0x898: PushEmpty(bool)
0x899: Stack[-1] = (bool) 0
0x89a: PushEmpty(bool)
0x89b: Call2 0x985

0x89c: Pop(0)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89e: PushEmpty(bool)
0x89f: Call2 0x86e

0x8a0: Pop(0)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Stack[-1] = (bool) 1
0x8a3: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8a4: PushEmpty(bool)
0x8a5: Call2 0x85a

0x8a6: Pop(0)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8a8: PushEmpty(bool, object)
0x8a9: PushEmpty(object)
0x8aa: Call2 0xa9e

0x8ab: Stack[-2] = Stack[-1]
0x8ac: Pop(1)
0x8ad: Call2 0xa19

0x8ae: Pop(2)
0x8af: GOTO 0x8b6

0x8b0: PushEmpty()
0x8b1: Call2 0x869

0x8b2: Pop(0)
0x8b3: PushEmpty()
0x8b4: Call2 0x884

0x8b5: Pop(0)
0x8b6: Return(); Pop(0)

0x8b7: PushEmpty()
0x8b8: Call2 0x943

0x8b9: Pop(0)
0x8ba: PushEmpty()
0x8bb: Call2 0x88d

0x8bc: Pop(0)
0x8bd: @ lshStopSpeech()
0x8be: Pop(0)
0x8bf: @ lshStopAnimation()
0x8c0: Pop(0)
0x8c1: @ StopAsync()
0x8c2: Pop(0)
0x8c3: @ Hold()
0x8c4: Pop(0)
0x8c5: Return(); Pop(0)

0x8c6: @ StopGroup0()
0x8c7: Pop(0)
0x8c8: PushEmpty()
0x8c9: Call2 0x88d

0x8ca: Pop(0)
0x8cb: PushEmpty(string)
0x8cc: Stack[-1] = "Neutral"
0x8cd: Call2 0xa69

0x8ce: Pop(1)
0x8cf: PushEmpty()
0x8d0: Call2 0x884

0x8d1: Pop(0)
0x8d2: Return(); Pop(0)

0x8d3: PushEmpty()
0x8d4: Push(Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d6: PushEmpty()
0x8d7: Call2 0x884

0x8d8: Pop(0)
0x8d9: GOTO 0x8de

0x8da: PushEmpty(string)
0x8db: Stack[-1] = "Neutral"
0x8dc: Call2 0xa69

0x8dd: Pop(1)
0x8de: Return(); Pop(0)

0x8df: PushEmpty(bool, bool)
0x8e0: @ IsOverrideActive(Stack[-1])
0x8e1: Pop(0)
0x8e2: Pop(0); Push((bool) Stack[-1] == 0)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8e4: EventDisable(0)
0x8e5: PushEmpty()
0x8e6: Call2 0x943

0x8e7: Pop(0)
0x8e8: PushEmpty(bool, object)
0x8e9: Stack[-1] = Stack[-5]
0x8ea: Call2 0x97c

0x8eb: Pop(2)
0x8ec: EventEnable(0)
0x8ed: PushEmpty(object)
0x8ee: Stack[-1] = Stack[-4]
0x8ef: Call2 0xcfd

0x8f0: Pop(1)
0x8f1: PushEmpty(string)
0x8f2: Stack[-1] = "Neutral"
0x8f3: Call2 0xa69

0x8f4: Pop(1)
0x8f5: PushEmpty()
0x8f6: Call2 0x88d

0x8f7: Pop(0)
0x8f8: PushEmpty()
0x8f9: Call2 0x884

0x8fa: Pop(0)
0x8fb: Return(); Pop(2)

0x8fc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x8fd: @ WaitForAnimEnd()
0x8fe: Pop(0)
0x8ff: PushEmpty(bool)
0x900: Call2 0x985

0x901: Pop(0)
0x902: Pop(1); Push((bool) Stack[-1] == 0)
0x903: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x904: Return(); Pop(12)

0x905: PushEmpty(int)
0x906: Call2 0xb12

0x907: Stack[-7] = Stack[-1]
0x908: Pop(1)
0x909: Stack[-5] = (int) 0
0x90a: PushEmpty(bool)
0x90b: Stack[-1] = (bool) 0
0x90c: Push((int) 5)
0x90d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90f: PushEmpty(bool)
0x910: Call2 0x985

0x911: Pop(0)
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: Stack[-1] = (bool) 1
0x914: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x915: Pop(0); Push((bool) Stack[-6] == 0)
0x916: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x917: Push((int) 3)
0x918: @ Sleep(Stack[-1], Stack[-5])
0x919: Pop(1)
0x91a: Pop(0); Push((bool) Stack[-4] == 0)
0x91b: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x91c: GOTO 0x93e

0x91d: GOTO 0x933

0x91e: @ irand(Stack[-3], Stack[-6])
0x91f: Pop(0)
0x920: Push((int) 5)
0x921: @ irand(Stack[-3], Stack[-1])
0x922: Pop(1)
0x923: Push((int) 0)
0x924: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x926: Stack[-3] = (int) 0
0x927: Push("all")
0x928: PushEmpty(string, int)
0x929: Stack[-1] = Stack[-6]
0x92a: Call2 0xb0b

0x92b: Pop(1)
0x92c: @ PlayAnimation(Stack[-2], Stack[-1])
0x92d: Pop(2)
0x92e: @ WaitForAnimEnd(Stack[-1])
0x92f: Pop(0)
0x930: Pop(0); Push((bool) Stack[-1] == 0)
0x931: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x932: GOTO 0x93e

0x933: PushEmpty(bool)
0x934: Call2 0x941

0x935: Pop(0)
0x936: Pop(1); Push((bool) Stack[-1] == 0)
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: GOTO 0x93e

0x939: @ ResetAAS()
0x93a: Pop(0)
0x93b: Push((int) 1)
0x93c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x93d: GOTO 0x90a

0x93e: @ ResetAAS()
0x93f: Pop(0)
0x940: Return(); Pop(12)

0x941: Stack[-1] = (bool) 1
0x942: Return(); Pop(0)

0x943: @ StopAnimation()
0x944: Pop(0)
0x945: @ StopGroup0()
0x946: Pop(0)
0x947: Return(); Pop(0)

0x948: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x949: @ GetPosition(Stack[-3])
0x94a: Pop(0)
0x94b: @@ GetPosition(Stack[-2])
0x94c: Pop(0)
0x94d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x94e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x94f: Return(); Pop(6)

0x950: PushEmpty(bool, bool)
0x951: Push("HasProperty")
0x952: Push((int) 2)
0x953: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x954: Pop(1); Push((bool) Stack[-1] == 0)
0x955: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x956: Stack[-5] = (bool) 0
0x957: Return(); Pop(2)

0x958: @@ HasProperty(Stack[-3], Stack[-1])
0x959: Pop(0)
0x95a: Stack[-5] = Stack[-1]
0x95b: Return(); Pop(2)

0x95c: PushEmpty(float, float)
0x95d: PushEmpty(bool, object, string)
0x95e: Stack[-2] = Stack[-10]
0x95f: Stack[-1] = Stack[-9]
0x960: Call2 0x950

0x961: Pop(2)
0x962: Pop(1); Push((bool) Stack[-1] == 0)
0x963: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x964: Stack[-8] = (bool) 0
0x965: Return(); Pop(2)

0x966: @@ GetProperty(Stack[-6], Stack[-1])
0x967: Pop(0)
0x968: PushEmpty(float, float, float, float)
0x969: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x96a: Stack[-2] = Stack[-8]
0x96b: Stack[-1] = Stack[-7]
0x96c: Call2 0xaae

0x96d: Pop(3)
0x96e: @@ SetProperty(Stack[-7], Stack[-1])
0x96f: Pop(1)
0x970: Stack[-8] = (bool) 1
0x971: Return(); Pop(2)

0x972: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x973: @ GetPosition(Stack[-3])
0x974: Pop(0)
0x975: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x976: Push(CvectorIndex(Stack[-2], 0))
0x977: Push(CvectorIndex(Stack[-3], 2))
0x978: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x979: Pop(2)
0x97a: Stack[-8] = Stack[-1]
0x97b: Return(); Pop(6)

0x97c: PushEmpty(cvector, cvector)
0x97d: @@ GetPosition(Stack[-1])
0x97e: Pop(0)
0x97f: PushEmpty(bool, cvector)
0x980: Stack[-1] = Stack[-3]
0x981: Call2 0x972

0x982: Stack[-6] = Stack[-2]
0x983: Pop(2)
0x984: Return(); Pop(2)

0x985: PushEmpty(bool, bool)
0x986: @ IsLoaded(Stack[-1])
0x987: Pop(0)
0x988: Stack[-3] = Stack[-1]
0x989: Return(); Pop(2)

0x98a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x98b: @@ GetPosition(Stack[-8])
0x98c: Pop(0)
0x98d: @@ GetEyesHeight(Stack[-9])
0x98e: Pop(0)
0x98f: Push(CvectorIndex(Stack[-8], 1))
0x990: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x991: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x992: @ GetPosition(Stack[-7])
0x993: Pop(0)
0x994: @ GetEyesHeight(Stack[-9])
0x995: Pop(0)
0x996: Push(CvectorIndex(Stack[-7], 1))
0x997: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x998: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x999: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x99a: Push(CvectorIndex(Stack[-6], 1))
0x99b: Stack[-1] = (int) 0
0x99c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x99d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x99e: Pop(1); Push(Sqrt(Stack[-1]))
0x99f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x9a0: Stack[-5] = -Stack[-6]; Pop(0);
0x9a1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x9a2: PushEmpty(cvector, cvector)
0x9a3: Push(CVector(0.0, 1.0, 0.0))
0x9a4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x9a5: Call2 0xaa4

0x9a6: Pop(1)
0x9a7: Push((int) 25)
0x9a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9aa: Push(CVector(0.0, 10.0, 0.0))
0x9ab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9ac: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x9ad: @ IsOverrideActive(Stack[-2])
0x9ae: Pop(0)
0x9af: Push(Stack[-2])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b1: Stack[-21] = (bool) 0
0x9b2: Return(); Pop(18)

0x9b3: @ StopWorld()
0x9b4: Pop(0)
0x9b5: @ CameraTransit(Stack[-3], Stack[-5])
0x9b6: Pop(0)
0x9b7: Push(CvectorIndex(Stack[-4], 0))
0x9b8: Push(CvectorIndex(Stack[-5], 2))
0x9b9: @ Rotate(Stack[-2], Stack[-1])
0x9ba: Pop(2)
0x9bb: PushEmpty(bool)
0x9bc: Call2 0xb2b

0x9bd: Pop(0)
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: GOTO 0x9c8

0x9c0: Push("head")
0x9c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9c2: Pop(1)
0x9c3: Push(Stack[-1])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c5: Push("head")
0x9c6: @ LookAsyncCamera(Stack[-1])
0x9c7: Pop(1)
0x9c8: @ CameraWaitForPlayFinish()
0x9c9: Pop(0)
0x9ca: @ ResumeWorld()
0x9cb: Pop(0)
0x9cc: Stack[-21] = (bool) 1
0x9cd: Return(); Pop(18)

0x9ce: PushEmpty(bool, bool)
0x9cf: @ CameraSwitchToNormal()
0x9d0: Pop(0)
0x9d1: PushEmpty(bool)
0x9d2: Call2 0xb2b

0x9d3: Pop(0)
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d5: GOTO 0x9de

0x9d6: Push("head")
0x9d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9d8: Pop(1)
0x9d9: Push(Stack[-1])
0x9da: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9db: Push("head")
0x9dc: @ UnlookAsync(Stack[-1])
0x9dd: Pop(1)
0x9de: Return(); Pop(2)

0x9df: PushEmpty(int, int, int, int)
0x9e0: Push("voice_common")
0x9e1: @ GetVariable(Stack[-1], Stack[-3])
0x9e2: Pop(1)
0x9e3: Push(Stack[-2])
0x9e4: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9e5: PushEmpty(bool, object)
0x9e6: Stack[-1] = Stack[-7]
0x9e7: Call2 0xa19

0x9e8: Pop(1)
0x9e9: Pop(1); Push((bool) Stack[-1] == 0)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9eb: PushEmpty(bool, object)
0x9ec: Stack[-1] = Stack[-7]
0x9ed: Call2 0xa3e

0x9ee: Pop(1)
0x9ef: Pop(1); Push((bool) Stack[-1] == 0)
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f1: Stack[-6] = (bool) 0
0x9f2: Return(); Pop(4)

0x9f3: Push((int) 2)
0x9f4: @ irand(Stack[-2], Stack[-1])
0x9f5: Pop(1)
0x9f6: Push(Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9f8: Push("voice_common")
0x9f9: Push((int) 1)
0x9fa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x9fb: Push((int) 3)
0x9fc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x9fd: @ SetVariable(Stack[-2], Stack[-1])
0x9fe: Pop(2)
0x9ff: GOTO 0xa04

0xa00: Push("voice_common")
0xa01: Push((int) 0)
0xa02: @ SetVariable(Stack[-2], Stack[-1])
0xa03: Pop(2)
0xa04: GOTO 0xa17

0xa05: PushEmpty(bool, object)
0xa06: Stack[-1] = Stack[-7]
0xa07: Call2 0xa3e

0xa08: Pop(1)
0xa09: Pop(1); Push((bool) Stack[-1] == 0)
0xa0a: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[-7]
0xa0d: Call2 0xa19

0xa0e: Pop(1)
0xa0f: Pop(1); Push((bool) Stack[-1] == 0)
0xa10: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa11: Stack[-6] = (bool) 0
0xa12: Return(); Pop(4)

0xa13: Push("voice_common")
0xa14: Push((int) 1)
0xa15: @ SetVariable(Stack[-2], Stack[-1])
0xa16: Pop(2)
0xa17: Stack[-6] = (bool) 1
0xa18: Return(); Pop(4)

0xa19: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa1a: Stack[-5] = "c"
0xa1b: Stack[-4] = (int) 0
0xa1c: Push((int) 1)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa1e: Push((int) 1)
0xa1f: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa20: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa21: @@ HasProperty(Stack[-1], Stack[-4])
0xa22: Pop(1)
0xa23: Pop(0); Push((bool) Stack[-3] == 0)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: GOTO 0xa29

0xa26: Push((int) 1)
0xa27: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa28: GOTO 0xa1c

0xa29: Pop(0); Push((bool) Stack[-4] == 0)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa2b: Stack[-12] = (bool) 0
0xa2c: Return(); Pop(10)

0xa2d: Stack[-2] = (int) 0
0xa2e: Push((int) 1)
0xa2f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa30: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa31: @ irand(Stack[-2], Stack[-4])
0xa32: Pop(0)
0xa33: Push((int) 1)
0xa34: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa35: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa36: @@ GetProperty(Stack[-1], Stack[-2])
0xa37: Pop(1)
0xa38: PushEmpty(bool, string)
0xa39: Stack[-1] = Stack[-3]
0xa3a: Call2 0xa88

0xa3b: Stack[-14] = Stack[-2]
0xa3c: Pop(2)
0xa3d: Return(); Pop(10)

0xa3e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa3f: Push("d")
0xa40: PushEmpty(int)
0xa41: Call2 0xafc

0xa42: Pop(0)
0xa43: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa44: Push("m")
0xa45: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa46: Stack[-4] = (int) 0
0xa47: Push((int) 1)
0xa48: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa49: Push((int) 1)
0xa4a: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa4b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa4c: @@ HasProperty(Stack[-1], Stack[-4])
0xa4d: Pop(1)
0xa4e: Pop(0); Push((bool) Stack[-3] == 0)
0xa4f: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa50: GOTO 0xa54

0xa51: Push((int) 1)
0xa52: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa53: GOTO 0xa47

0xa54: Pop(0); Push((bool) Stack[-4] == 0)
0xa55: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa56: Stack[-12] = (bool) 0
0xa57: Return(); Pop(10)

0xa58: Stack[-2] = (int) 0
0xa59: Push((int) 1)
0xa5a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5c: @ irand(Stack[-2], Stack[-4])
0xa5d: Pop(0)
0xa5e: Push((int) 1)
0xa5f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa60: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa61: @@ GetProperty(Stack[-1], Stack[-2])
0xa62: Pop(1)
0xa63: PushEmpty(bool, string)
0xa64: Stack[-1] = Stack[-3]
0xa65: Call2 0xa88

0xa66: Stack[-14] = Stack[-2]
0xa67: Pop(2)
0xa68: Return(); Pop(10)

0xa69: PushEmpty(bool, float, float, bool, float, float)
0xa6a: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa6b: Pop(0)
0xa6c: Push(Stack[-3])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa6e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa6f: Pop(0)
0xa70: Push((bool) 0)
0xa71: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa72: Pop(1)
0xa73: GOTO 0xa78

0xa74: Push("Can't find lsh animation : ")
0xa75: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa76: @ Trace(Stack[-1])
0xa77: Pop(1)
0xa78: Return(); Pop(6)

0xa79: PushEmpty(bool, float, float, bool, float, float)
0xa7a: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa7b: Pop(0)
0xa7c: Push(Stack[-3])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa7e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa7f: Pop(0)
0xa80: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa81: Pop(0)
0xa82: GOTO 0xa87

0xa83: Push("Can't find lsh animation : ")
0xa84: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa85: @ Trace(Stack[-1])
0xa86: Pop(1)
0xa87: Return(); Pop(6)

0xa88: PushEmpty(bool, bool)
0xa89: PushEmpty(bool)
0xa8a: Call2 0xb2b

0xa8b: Pop(0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa8d: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa8e: Pop(0)
0xa8f: Push(Stack[-1])
0xa90: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa91: @ lshPlaySpeech(Stack[-3])
0xa92: Pop(0)
0xa93: Stack[-4] = (bool) 1
0xa94: Return(); Pop(2)

0xa95: Stack[-4] = (bool) 0
0xa96: Return(); Pop(2)

0xa97: PushEmpty(bool)
0xa98: Call2 0xb2b

0xa99: Pop(0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9b: @ lshStopSpeech()
0xa9c: Pop(0)
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty(object, object)
0xa9f: @ self(Stack[-1])
0xaa0: Pop(0)
0xaa1: Stack[-3] = Stack[-1]
0xaa2: Return(); Pop(2)

0xaa3: Stack[-1] = 0
0xaa4: PushEmpty(float, float)
0xaa5: Pop(0); Push(Stack[-3] | Stack[-3]);
0xaa6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xaa7: Push((float)0.0)
0xaa8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaaa: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xaab: Return(); Pop(2)

0xaac: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xaad: Return(); Pop(2)

0xaae: PushEmpty()
0xaaf: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xab0: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xab1: Stack[-4] = Stack[-2]
0xab2: Return(); Pop(0)

0xab3: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab5: Stack[-4] = Stack[-1]
0xab6: Return(); Pop(0)

0xab7: Stack[-4] = Stack[-3]
0xab8: Return(); Pop(0)

0xab9: PushEmpty(int, int)
0xaba: @ GetVariable(Stack[-3], Stack[-1])
0xabb: Pop(0)
0xabc: Stack[-4] = Stack[-1]
0xabd: Return(); Pop(2)

0xabe: PushEmpty()
0xabf: Pop(0); Push((bool) Stack[-2] == 0)
0xac0: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xac1: Stack[-3] = (bool) 0
0xac2: Return(); Pop(0)

0xac3: Push((int) 0)
0xac4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xac5: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac6: Push((int) 8)
0xac7: @ SendWorldWndMessage(Stack[-1])
0xac8: Pop(1)
0xac9: GOTO 0xad3

0xaca: Push((int) 0)
0xacb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacd: Push((int) 9)
0xace: @ SendWorldWndMessage(Stack[-1])
0xacf: Pop(1)
0xad0: GOTO 0xad3

0xad1: Stack[-3] = (bool) 0
0xad2: Return(); Pop(0)

0xad3: PushEmpty(float)
0xad4: Stack[-1] = Stack[-2]
0xad5: Call2 0xae1

0xad6: Pop(1)
0xad7: PushEmpty(bool, object, string, float, float, float)
0xad8: Stack[-5] = Stack[-8]
0xad9: Stack[-4] = "reputation"
0xada: Stack[-3] = Stack[-7]
0xadb: Stack[-2] = (int) 0
0xadc: Stack[-1] = (int) 1
0xadd: Call2 0x95c

0xade: Pop(6)
0xadf: Stack[-3] = (bool) 1
0xae0: Return(); Pop(0)

0xae1: PushEmpty(object, object)
0xae2: @ CreateFloatVector(Stack[-1])
0xae3: Pop(0)
0xae4: @@ add(Stack[-3])
0xae5: Pop(0)
0xae6: Push((int) 16)
0xae7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xae8: Pop(1)
0xae9: Return(); Pop(2)

0xaea: Stack[-1] = 0
0xaeb: PushEmpty(object, object)
0xaec: @ FindActor(Stack[-1], Stack[-4])
0xaed: Pop(0)
0xaee: Pop(0); Push((bool) Stack[-1] == 0)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xaf0: Stack[-5] = (bool) 0
0xaf1: Return(); Pop(2)

0xaf2: @ Trigger(Stack[-1], Stack[-3])
0xaf3: Pop(0)
0xaf4: Stack[-5] = (bool) 1
0xaf5: Return(); Pop(2)

0xaf6: Stack[-1] = 0
0xaf7: PushEmpty(float, float)
0xaf8: @ GetGameTime(Stack[-1])
0xaf9: Pop(0)
0xafa: Stack[-3] = Stack[-1]
0xafb: Return(); Pop(2)

0xafc: PushEmpty(float, float)
0xafd: @ GetGameTime(Stack[-1])
0xafe: Pop(0)
0xaff: Push((int) 1)
0xb00: PushEmpty(int)
0xb01: Push((int) 24)
0xb02: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb03: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb04: Return(); Pop(2)

0xb05: PushEmpty()
0xb06: PushEmpty(int)
0xb07: Call2 0xafc

0xb08: Pop(0)
0xb09: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb0a: Return(); Pop(0)

0xb0b: PushEmpty(string, string)
0xb0c: Stack[-1] = "idle"
0xb0d: Push(Stack[-3])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb10: Stack[-4] = Stack[-1]
0xb11: Return(); Pop(2)

0xb12: PushEmpty(int, bool, int, bool)
0xb13: Stack[-2] = (int) 0
0xb14: Push("all")
0xb15: PushEmpty(string, int)
0xb16: Stack[-1] = Stack[-5]
0xb17: Call2 0xb0b

0xb18: Pop(1)
0xb19: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb1a: Pop(2)
0xb1b: Pop(0); Push((bool) Stack[-1] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1d: GOTO 0xb21

0xb1e: Push((int) 1)
0xb1f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb20: GOTO 0xb14

0xb21: Stack[-5] = Stack[-2]
0xb22: Return(); Pop(4)

0xb23: Stack[-1] = (int) 515537
0xb24: Return(); Pop(0)

0xb25: Stack[-1] = (int) 502862
0xb26: Return(); Pop(0)

0xb27: Stack[-1] = "ui/NPC_Julia.png"
0xb28: Return(); Pop(0)

0xb29: Stack[-1] = "ui/NPC_Julia_b.png"
0xb2a: Return(); Pop(0)

0xb2b: Stack[-1] = (bool) 1
0xb2c: Return(); Pop(0)

0xb2d: PushEmpty(object, object)
0xb2e: Push("k3q02")
0xb2f: Push((int) 2)
0xb30: @ SetVariable(Stack[-2], Stack[-1])
0xb31: Pop(2)
0xb32: PushEmpty(object)
0xb33: Call2 0xcba

0xb34: Stack[-2] = Stack[-1]
0xb35: Pop(1)
0xb36: Push("k3q02JuliaGotoEva")
0xb37: Push("pt_map_eva")
0xb38: Push((int) 0)
0xb39: Push((int) 525573)
0xb3a: PushEmpty(float)
0xb3b: Call2 0xaf7

0xb3c: Pop(0)
0xb3d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(5)
0xb3f: PushEmpty()
0xb40: Call2 0xc77

0xb41: Pop(0)
0xb42: Return(); Pop(2)

0xb43: Stack[-1] = 0
0xb44: PushEmpty(object, object)
0xb45: Push("k6q01")
0xb46: Push((int) 2)
0xb47: @ SetVariable(Stack[-2], Stack[-1])
0xb48: Pop(2)
0xb49: PushEmpty(object)
0xb4a: Call2 0xcba

0xb4b: Stack[-2] = Stack[-1]
0xb4c: Pop(1)
0xb4d: Push("k6q01IfAnna")
0xb4e: Push("pt_map_anna")
0xb4f: Push((int) 1)
0xb50: Push((int) 541591)
0xb51: PushEmpty(float)
0xb52: Call2 0xaf7

0xb53: Pop(0)
0xb54: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(5)
0xb56: Push("k6q01IfEva")
0xb57: Push("pt_map_eva")
0xb58: Push((int) 1)
0xb59: Push((int) 541594)
0xb5a: PushEmpty(float)
0xb5b: Call2 0xaf7

0xb5c: Pop(0)
0xb5d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb5e: Pop(5)
0xb5f: Push("k6q01IfLara")
0xb60: Push("pt_map_lara")
0xb61: Push((int) 1)
0xb62: Push((int) 541592)
0xb63: PushEmpty(float)
0xb64: Call2 0xaf7

0xb65: Pop(0)
0xb66: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb67: Pop(5)
0xb68: Push("k6q01IfOspina")
0xb69: Push("pt_map_ospina")
0xb6a: Push((int) 1)
0xb6b: Push((int) 541593)
0xb6c: PushEmpty(float)
0xb6d: Call2 0xaf7

0xb6e: Pop(0)
0xb6f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb70: Pop(5)
0xb71: PushEmpty()
0xb72: Call2 0xc84

0xb73: Pop(0)
0xb74: PushEmpty(bool, string, string)
0xb75: Stack[-2] = "quest_k6_01"
0xb76: Stack[-1] = "place_danko"
0xb77: Call2 0xaeb

0xb78: Pop(3)
0xb79: Return(); Pop(2)

0xb7a: Stack[-1] = 0
0xb7b: PushEmpty(int, int)
0xb7c: Push("k11q01SoulCount")
0xb7d: @ GetVariable(Stack[-1], Stack[-2])
0xb7e: Pop(1)
0xb7f: Push((int) 1)
0xb80: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb81: Push("k11q01SoulCount")
0xb82: @ SetVariable(Stack[-1], Stack[-2])
0xb83: Pop(1)
0xb84: Push((int) 2)
0xb85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb87: PushEmpty()
0xb88: Call2 0xc5d

0xb89: Pop(0)
0xb8a: GOTO 0xbad

0xb8b: Push((int) 3)
0xb8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8d: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb8e: PushEmpty()
0xb8f: Call2 0xc50

0xb90: Pop(0)
0xb91: GOTO 0xbad

0xb92: Push((int) 4)
0xb93: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb94: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb95: PushEmpty()
0xb96: Call2 0xc43

0xb97: Pop(0)
0xb98: GOTO 0xbad

0xb99: Push((int) 5)
0xb9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9c: PushEmpty()
0xb9d: Call2 0xc36

0xb9e: Pop(0)
0xb9f: GOTO 0xbad

0xba0: Push((int) 6)
0xba1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba3: PushEmpty()
0xba4: Call2 0xc29

0xba5: Pop(0)
0xba6: GOTO 0xbad

0xba7: Push((int) 7)
0xba8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xbaa: PushEmpty()
0xbab: Call2 0xc1c

0xbac: Pop(0)
0xbad: Return(); Pop(2)

0xbae: PushEmpty()
0xbaf: Push("ook11Julia1")
0xbb0: Push((int) 1)
0xbb1: @ SetVariable(Stack[-2], Stack[-1])
0xbb2: Pop(2)
0xbb3: Return(); Pop(0)

0xbb4: PushEmpty()
0xbb5: Push("ook3Julia1")
0xbb6: Push((int) 1)
0xbb7: @ SetVariable(Stack[-2], Stack[-1])
0xbb8: Pop(2)
0xbb9: Return(); Pop(0)

0xbba: PushEmpty()
0xbbb: PushEmpty(object, string, float)
0xbbc: PushEmpty(object)
0xbbd: Call2 0xcba

0xbbe: Stack[-4] = Stack[-1]
0xbbf: Pop(1)
0xbc0: Stack[-2] = "pt_map_theater"
0xbc1: Stack[-1] = (int) 1
0xbc2: Call2 0xccb

0xbc3: Pop(3)
0xbc4: PushEmpty(object)
0xbc5: Call2 0xcba

0xbc6: Pop(0)
0xbc7: @@ ShowMap(Stack[-1])
0xbc8: Pop(1)
0xbc9: Return(); Pop(0)

0xbca: PushEmpty()
0xbcb: Push("k3q02")
0xbcc: Push((int) -1)
0xbcd: @ SetVariable(Stack[-2], Stack[-1])
0xbce: Pop(2)
0xbcf: PushEmpty()
0xbd0: Call2 0xc6a

0xbd1: Pop(0)
0xbd2: Return(); Pop(0)

0xbd3: PushEmpty()
0xbd4: Push("k6StopKaterinaTalks")
0xbd5: Push((int) 1)
0xbd6: @ SetVariable(Stack[-2], Stack[-1])
0xbd7: Pop(2)
0xbd8: Return(); Pop(0)

0xbd9: PushEmpty()
0xbda: PushEmpty(bool, object, float)
0xbdb: Stack[-2] = Stack[-5]
0xbdc: Stack[-1] = (float) 0.3
0xbdd: Call2 0xabe

0xbde: Pop(3)
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: PushEmpty(int, string)
0xbe2: Stack[-1] = "k3q02"
0xbe3: Call2 0xab9

0xbe4: Pop(1)
0xbe5: Push((int) 1)
0xbe6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbe7: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe8: Stack[-2] = (bool) 1
0xbe9: Return(); Pop(0)

0xbea: Stack[-2] = (bool) 0
0xbeb: Return(); Pop(0)

0xbec: PushEmpty()
0xbed: PushEmpty(int, string)
0xbee: Stack[-1] = "k6q01"
0xbef: Call2 0xab9

0xbf0: Pop(1)
0xbf1: Push((int) 1)
0xbf2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf3: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbf4: Stack[-2] = (bool) 1
0xbf5: Return(); Pop(0)

0xbf6: Stack[-2] = (bool) 0
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty()
0xbf9: PushEmpty(int, string)
0xbfa: Stack[-1] = "k11q01"
0xbfb: Call2 0xab9

0xbfc: Pop(1)
0xbfd: Push((int) 9)
0xbfe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbff: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xc00: Stack[-2] = (bool) 1
0xc01: Return(); Pop(0)

0xc02: Stack[-2] = (bool) 0
0xc03: Return(); Pop(0)

0xc04: PushEmpty()
0xc05: PushEmpty(int, string)
0xc06: Stack[-1] = "ook11Julia1"
0xc07: Call2 0xab9

0xc08: Pop(1)
0xc09: Push((int) 0)
0xc0a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xc0c: Stack[-2] = (bool) 1
0xc0d: Return(); Pop(0)

0xc0e: Stack[-2] = (bool) 0
0xc0f: Return(); Pop(0)

0xc10: PushEmpty()
0xc11: PushEmpty(int, string)
0xc12: Stack[-1] = "ook3Julia1"
0xc13: Call2 0xab9

0xc14: Pop(1)
0xc15: Push((int) 0)
0xc16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc18: Stack[-2] = (bool) 1
0xc19: Return(); Pop(0)

0xc1a: Stack[-2] = (bool) 0
0xc1b: Return(); Pop(0)

0xc1c: PushEmpty(object, object)
0xc1d: Push((int) 498)
0xc1e: Push((int) 1)
0xc1f: Push((int) 528065)
0xc20: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc21: Pop(3)
0xc22: PushEmpty(bool, object, int)
0xc23: Stack[-2] = Stack[-4]
0xc24: Stack[-1] = (int) 480
0xc25: Call2 0xc9e

0xc26: Pop(3)
0xc27: Return(); Pop(2)

0xc28: Stack[-1] = 0
0xc29: PushEmpty(object, object)
0xc2a: Push((int) 497)
0xc2b: Push((int) 1)
0xc2c: Push((int) 528064)
0xc2d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc2e: Pop(3)
0xc2f: PushEmpty(bool, object, int)
0xc30: Stack[-2] = Stack[-4]
0xc31: Stack[-1] = (int) 480
0xc32: Call2 0xc9e

0xc33: Pop(3)
0xc34: Return(); Pop(2)

0xc35: Stack[-1] = 0
0xc36: PushEmpty(object, object)
0xc37: Push((int) 496)
0xc38: Push((int) 1)
0xc39: Push((int) 528063)
0xc3a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: PushEmpty(bool, object, int)
0xc3d: Stack[-2] = Stack[-4]
0xc3e: Stack[-1] = (int) 480
0xc3f: Call2 0xc9e

0xc40: Pop(3)
0xc41: Return(); Pop(2)

0xc42: Stack[-1] = 0
0xc43: PushEmpty(object, object)
0xc44: Push((int) 495)
0xc45: Push((int) 1)
0xc46: Push((int) 528062)
0xc47: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc48: Pop(3)
0xc49: PushEmpty(bool, object, int)
0xc4a: Stack[-2] = Stack[-4]
0xc4b: Stack[-1] = (int) 480
0xc4c: Call2 0xc9e

0xc4d: Pop(3)
0xc4e: Return(); Pop(2)

0xc4f: Stack[-1] = 0
0xc50: PushEmpty(object, object)
0xc51: Push((int) 494)
0xc52: Push((int) 1)
0xc53: Push((int) 528061)
0xc54: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc55: Pop(3)
0xc56: PushEmpty(bool, object, int)
0xc57: Stack[-2] = Stack[-4]
0xc58: Stack[-1] = (int) 480
0xc59: Call2 0xc9e

0xc5a: Pop(3)
0xc5b: Return(); Pop(2)

0xc5c: Stack[-1] = 0
0xc5d: PushEmpty(object, object)
0xc5e: Push((int) 493)
0xc5f: Push((int) 1)
0xc60: Push((int) 528060)
0xc61: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc62: Pop(3)
0xc63: PushEmpty(bool, object, int)
0xc64: Stack[-2] = Stack[-4]
0xc65: Stack[-1] = (int) 480
0xc66: Call2 0xc9e

0xc67: Pop(3)
0xc68: Return(); Pop(2)

0xc69: Stack[-1] = 0
0xc6a: PushEmpty(object, object)
0xc6b: Push((int) 782)
0xc6c: Push((int) 2)
0xc6d: Push((int) 542095)
0xc6e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc6f: Pop(3)
0xc70: PushEmpty(bool, object, int)
0xc71: Stack[-2] = Stack[-4]
0xc72: Stack[-1] = (int) 344
0xc73: Call2 0xc9e

0xc74: Pop(3)
0xc75: Return(); Pop(2)

0xc76: Stack[-1] = 0
0xc77: PushEmpty(object, object)
0xc78: Push((int) 346)
0xc79: Push((int) 2)
0xc7a: Push((int) 525568)
0xc7b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc7c: Pop(3)
0xc7d: PushEmpty(bool, object, int)
0xc7e: Stack[-2] = Stack[-4]
0xc7f: Stack[-1] = (int) 344
0xc80: Call2 0xc9e

0xc81: Pop(3)
0xc82: Return(); Pop(2)

0xc83: Stack[-1] = 0
0xc84: PushEmpty(object, object)
0xc85: Push((int) 411)
0xc86: Push((int) 1)
0xc87: Push((int) 526112)
0xc88: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc89: Pop(3)
0xc8a: PushEmpty(bool, object, int)
0xc8b: Stack[-2] = Stack[-4]
0xc8c: Stack[-1] = (int) 408
0xc8d: Call2 0xc9e

0xc8e: Pop(3)
0xc8f: Return(); Pop(2)

0xc90: Stack[-1] = 0
0xc91: PushEmpty(object, object)
0xc92: @ GetDiaryRoot(Stack[-1])
0xc93: Pop(0)
0xc94: Pop(0); Push((bool) Stack[-1] == 0)
0xc95: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc96: Push("Can't retrieve diary root")
0xc97: @ Trace(Stack[-1])
0xc98: Pop(1)
0xc99: Stack[-3] = (bool) 0
0xc9a: Return(); Pop(2)

0xc9b: Stack[-3] = Stack[-1]
0xc9c: Return(); Pop(2)

0xc9d: Stack[-1] = 0
0xc9e: PushEmpty(object, object, int, object, object, int)
0xc9f: PushEmpty(object)
0xca0: Call2 0xc91

0xca1: Stack[-4] = Stack[-1]
0xca2: Pop(1)
0xca3: @@ Find(Stack[-7], Stack[-2])
0xca4: Pop(0)
0xca5: Pop(0); Push((bool) Stack[-2] == 0)
0xca6: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xca7: Push("Can't find diary parent with id: ")
0xca8: Pop(1); Push(Stack[-1] + Stack[-8]);
0xca9: @ Trace(Stack[-1])
0xcaa: Pop(1)
0xcab: Stack[-9] = (bool) 0
0xcac: Return(); Pop(6)

0xcad: @@ AddChild(Stack[-8])
0xcae: Pop(0)
0xcaf: Push((int) 7)
0xcb0: @ SendWorldWndMessage(Stack[-1])
0xcb1: Pop(1)
0xcb2: @@ GetCategory(Stack[-1])
0xcb3: Pop(0)
0xcb4: @ SetDiarySection(Stack[-1])
0xcb5: Pop(0)
0xcb6: Stack[-9] = (bool) 0
0xcb7: Return(); Pop(6)

0xcb8: Stack[-2] = 0
0xcb9: Stack[-3] = 0
0xcba: PushEmpty(object, object, object, object)
0xcbb: @ GetMainOutdoorScene(Stack[-2])
0xcbc: Pop(0)
0xcbd: Pop(0); Push((bool) Stack[-2] == 0)
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcbf: Push("Can't find main outdoor scene")
0xcc0: @ Trace(Stack[-1])
0xcc1: Pop(1)
0xcc2: Stack[-1] = 0
0xcc3: Stack[-5] = Stack[-1]
0xcc4: Return(); Pop(4)

0xcc5: @@ GetMap(Stack[-1])
0xcc6: Pop(0)
0xcc7: Stack[-5] = Stack[-1]
0xcc8: Return(); Pop(4)

0xcc9: Stack[-1] = 0
0xcca: Stack[-2] = 0
0xccb: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xccc: @ GetMainOutdoorScene(Stack[-2])
0xccd: Pop(0)
0xcce: Pop(0); Push((bool) Stack[-2] == 0)
0xccf: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd0: Push("Can't find main outdoor scene")
0xcd1: @ Trace(Stack[-1])
0xcd2: Pop(1)
0xcd3: Return(); Pop(8)

0xcd4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xcd5: Pop(0)
0xcd6: Pop(0); Push((bool) Stack[-1] == 0)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcd8: Push("Warning: outdoor scene locator ")
0xcd9: Pop(1); Push(Stack[-1] + Stack[-11]);
0xcda: Push(" doesnt exist")
0xcdb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcdc: @ Trace(Stack[-1])
0xcdd: Pop(1)
0xcde: @@ GetMap(Stack[-11])
0xcdf: Pop(0)
0xce0: Pop(0); Push((bool) Stack[-11] == 0)
0xce1: IF (Stack[-1] == 0) GOTO 0xce6; Pop(1)

0xce2: Push("Can't find map")
0xce3: @ Trace(Stack[-1])
0xce4: Pop(1)
0xce5: Return(); Pop(8)

0xce6: Push(CvectorIndex(Stack[-4], 0))
0xce7: Push(CvectorIndex(Stack[-5], 2))
0xce8: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xce9: Pop(2)
0xcea: Return(); Pop(8)

0xceb: Stack[-2] = 0
0xcec: PushEmpty(int, int)
0xced: Push("branch")
0xcee: @ GetVariable(Stack[-1], Stack[-2])
0xcef: Pop(1)
0xcf0: Push((int) 0)
0xcf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf3: Stack[-3] = (int) 1
0xcf4: Return(); Pop(2)

0xcf5: GOTO 0xcfb

0xcf6: Push((int) 1)
0xcf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf8: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf9: Stack[-3] = (int) 2
0xcfa: Return(); Pop(2)

0xcfb: Stack[-3] = (int) 3
0xcfc: Return(); Pop(2)

0xcfd: PushEmpty()
0xcfe: Push(GlobalVars[1])
0xcff: Pop(1); Push((bool) Stack[-1] == 0)
0xd00: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd01: PushEmpty(int, object)
0xd02: Stack[-1] = Stack[-3]
0xd03: Push(-2, 1); TaskCall(0)
0xd04: Call2 0x0

0xd05: Pop(-2, 1); TaskReturn
0xd06: Pop(2)
0xd07: Push(GlobalVars[1])
0xd08: Stack[-1] = (bool) 1
0xd09: GlobalVars[1] = Stack[-1]; Pop(1)
0xd0a: PushEmpty(bool, int)
0xd0b: Stack[-1] = (int) 3
0xd0c: Call2 0xb05

0xd0d: Pop(1)
0xd0e: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd0f: PushEmpty(int, object)
0xd10: Stack[-1] = Stack[-3]
0xd11: Push(-2, 1); TaskCall(2)
0xd12: Call2 0xf9

0xd13: Pop(-2, 1); TaskReturn
0xd14: Pop(2)
0xd15: Return(); Pop(0)

0xd16: PushEmpty(bool, int)
0xd17: Stack[-1] = (int) 6
0xd18: Call2 0xb05

0xd19: Pop(1)
0xd1a: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd1b: PushEmpty(int, object)
0xd1c: Stack[-1] = Stack[-3]
0xd1d: Push(-2, 1); TaskCall(4)
0xd1e: Call2 0x2da

0xd1f: Pop(-2, 1); TaskReturn
0xd20: Pop(2)
0xd21: Return(); Pop(0)

0xd22: PushEmpty(bool, int)
0xd23: Stack[-1] = (int) 11
0xd24: Call2 0xb05

0xd25: Pop(1)
0xd26: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd27: PushEmpty(int, object)
0xd28: Stack[-1] = Stack[-3]
0xd29: Push(-2, 1); TaskCall(6)
0xd2a: Call2 0x499

0xd2b: Pop(-2, 1); TaskReturn
0xd2c: Pop(2)
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty(bool, int)
0xd2f: Stack[-1] = (int) 12
0xd30: Call2 0xb05

0xd31: Pop(1)
0xd32: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd33: PushEmpty(int, object)
0xd34: Stack[-1] = Stack[-3]
0xd35: Push(-2, 1); TaskCall(8)
0xd36: Call2 0x620

0xd37: Pop(-2, 1); TaskReturn
0xd38: Pop(2)
0xd39: Return(); Pop(0)

0xd3a: PushEmpty(int, object)
0xd3b: Stack[-1] = Stack[-3]
0xd3c: Push(-2, 1); TaskCall(10)
0xd3d: Call2 0x77a

0xd3e: Pop(-2, 1); TaskReturn
0xd3f: Pop(2)
0xd40: Return(); Pop(0)

