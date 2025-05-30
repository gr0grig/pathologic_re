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

RunOp = 0x859
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
		EVENT_11 Op = 0x55c Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6da Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x82f Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x8a5 Vars = (int)
		EVENT_6 Op = 0x8cb Vars = ()
		EVENT_5 Op = 0x8da Vars = ()
		EVENT_45 Op = 0x8e7 Vars = (bool)
		EVENT_0 Op = 0x8f3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x99e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb3b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb39

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb3d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb3f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd02

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
0x31: Call2 0xab4

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x9f5

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
0x48: Call2 0x9e3

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
0x6e: Call2 0xb41

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xa7f

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
0x8d: Call2 0xb41

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
0x9d: Call2 0xa8f

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xaad

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
0xee: Call2 0xb41

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
0xfe: Call2 0x99e

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0xb3b

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0xb39

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0xb3d

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0xb3f

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0xd02

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
0x12a: Call2 0xab4

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0x9f5

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
0x141: Call2 0x9e3

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
0x15d: Call2 0xbf6

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0xc26

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
0x175: Call2 0xb41

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x178: @ lshWaitForAnimEnd()
0x179: Pop(0)
0x17a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x182

0x17d: PushEmpty(string)
0x17e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17f: Call2 0xa7f

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
0x194: Call2 0xb41

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
0x1a4: Call2 0xa8f

0x1a5: Pop(2)
0x1a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: Push((int) 1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x1ab: PushEmpty()
0x1ac: Call2 0xaad

0x1ad: Pop(0)
0x1ae: Push((int) 26897)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call2 0xbca

0x1b5: Pop(2)
0x1b6: Push((int) 26901)
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0xb43

0x1bd: Pop(2)
0x1be: Push((int) 42735)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0xb43

0x1c5: Pop(2)
0x1c6: Push((int) 42731)
0x1c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Call2 0xb43

0x1cd: Pop(2)
0x1ce: Push((int) 42732)
0x1cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0xb43

0x1d5: Pop(2)
0x1d6: Push((int) 42726)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0xbef

0x1dd: Pop(2)
0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call2 0xbe0

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
0x1f3: Call2 0xbf6

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0xc26

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
0x2cf: Call2 0xb41

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
0x2df: Call2 0x99e

0x2e0: Pop(2)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-10] = (int) -2
0x2e4: Return(); Pop(8)

0x2e5: @ CreateDialog(Stack[-4])
0x2e6: Pop(0)
0x2e7: PushEmpty(int)
0x2e8: Call2 0xb3b

0x2e9: Pop(0)
0x2ea: @@ SetNPCName(Stack[-1])
0x2eb: Pop(1)
0x2ec: PushEmpty(int)
0x2ed: Call2 0xb39

0x2ee: Pop(0)
0x2ef: @@ SetNPCDescription(Stack[-1])
0x2f0: Pop(1)
0x2f1: PushEmpty(string)
0x2f2: Call2 0xb3d

0x2f3: Pop(0)
0x2f4: @@ SetPhoto(Stack[-1])
0x2f5: Pop(1)
0x2f6: PushEmpty(string)
0x2f7: Call2 0xb3f

0x2f8: Pop(0)
0x2f9: @@ SetPhoto2(Stack[-1])
0x2fa: Pop(1)
0x2fb: PushEmpty(int)
0x2fc: Call2 0xd02

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
0x30b: Call2 0xab4

0x30c: Stack[-2] = Stack[-1]
0x30d: Pop(1)
0x30e: Call2 0x9f5

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
0x322: Call2 0x9e3

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
0x33c: Call2 0xc02

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
0x352: Call2 0xb41

0x353: Pop(0)
0x354: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x355: @ lshWaitForAnimEnd()
0x356: Pop(0)
0x357: Push( Stack[3 + Tasks[-1].StackPointer] )
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x35f

0x35a: PushEmpty(string)
0x35b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x35c: Call2 0xa7f

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
0x371: Call2 0xb41

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
0x381: Call2 0xa8f

0x382: Pop(2)
0x383: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: Push((int) 1)
0x387: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x388: PushEmpty()
0x389: Call2 0xaad

0x38a: Pop(0)
0x38b: Push((int) 27331)
0x38c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38e: PushEmpty(object, object)
0x38f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x390: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x391: Call2 0xbe9

0x392: Pop(2)
0x393: Push((int) 27347)
0x394: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x396: PushEmpty(object, object)
0x397: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x398: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x399: Call2 0xb5a

0x39a: Pop(2)
0x39b: PushEmpty(object, object)
0x39c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39e: Call2 0xbd0

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
0x3ae: Call2 0xc02

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
0x41a: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

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
0x429: Push((int) 526056)
0x42a: Push((int) 27342)
0x42b: Push((int) 27341)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Return(); Pop(0)

0x42f: Push((int) 27342)
0x430: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x432: PushEmpty(string)
0x433: Stack[-1] = "Independence"
0x434: Call2 0x36f

0x435: Pop(1)
0x436: Push((int) 526057)
0x437: @@ SetMessage(Stack[-1])
0x438: Pop(1)
0x439: @@ ClearReplies()
0x43a: Pop(0)
0x43b: Push((int) 526058)
0x43c: Push((int) 27344)
0x43d: Push((int) 27343)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: Push((int) 27340)
0x442: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x444: PushEmpty(string)
0x445: Stack[-1] = "Independence"
0x446: Call2 0x36f

0x447: Pop(1)
0x448: Push((int) 526055)
0x449: @@ SetMessage(Stack[-1])
0x44a: Pop(1)
0x44b: @@ ClearReplies()
0x44c: Pop(0)
0x44d: Push((int) 528883)
0x44e: Push((int) 27344)
0x44f: Push((int) 30309)
0x450: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x451: Pop(3)
0x452: Return(); Pop(0)

0x453: Push((int) 27344)
0x454: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x456: PushEmpty(string)
0x457: Stack[-1] = "Untrust"
0x458: Call2 0x36f

0x459: Pop(1)
0x45a: Push((int) 526059)
0x45b: @@ SetMessage(Stack[-1])
0x45c: Pop(1)
0x45d: @@ ClearReplies()
0x45e: Pop(0)
0x45f: Push((int) 528886)
0x460: Push((int) 30314)
0x461: Push((int) 30313)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Push((int) 540972)
0x465: Push((int) 43062)
0x466: Push((int) 43061)
0x467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: Return(); Pop(0)

0x46a: Push((int) 43062)
0x46b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x46d: PushEmpty(string)
0x46e: Stack[-1] = "Fear"
0x46f: Call2 0x36f

0x470: Pop(1)
0x471: Push((int) 540973)
0x472: @@ SetMessage(Stack[-1])
0x473: Pop(1)
0x474: @@ ClearReplies()
0x475: Pop(0)
0x476: Push((int) 540974)
0x477: Push((int) 30314)
0x478: Push((int) 43063)
0x479: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47a: Pop(3)
0x47b: Return(); Pop(0)

0x47c: Push((int) 30314)
0x47d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x47f: PushEmpty(string)
0x480: Stack[-1] = "Untrust"
0x481: Call2 0x36f

0x482: Pop(1)
0x483: Push((int) 528887)
0x484: @@ SetMessage(Stack[-1])
0x485: Pop(1)
0x486: @@ ClearReplies()
0x487: Pop(0)
0x488: Push((int) 526060)
0x489: Push((int) 27346)
0x48a: Push((int) 27345)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: Return(); Pop(0)

0x48e: Push((int) 27346)
0x48f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x491: PushEmpty(string)
0x492: Stack[-1] = "Neutral"
0x493: Call2 0x36f

0x494: Pop(1)
0x495: Push((int) 526061)
0x496: @@ SetMessage(Stack[-1])
0x497: Pop(1)
0x498: @@ ClearReplies()
0x499: Pop(0)
0x49a: Push((int) 526062)
0x49b: Push((int) -1)
0x49c: Push((int) 27347)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4a1: PushEmpty(bool)
0x4a2: Call2 0xb41

0x4a3: Pop(0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a5: @ lshStopAnimation()
0x4a6: Pop(0)
0x4a7: GOTO 0x4aa

0x4a8: @ StopAnimation()
0x4a9: Pop(0)
0x4aa: Return(); Pop(0)

0x4ab: GOTO 0x386

0x4ac: Return(); Pop(0)

0x4ad: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4ae: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4af: PushEmpty(bool, object, float)
0x4b0: Stack[-2] = Stack[-12]
0x4b1: Stack[-1] = (float) 70.0
0x4b2: Call2 0x99e

0x4b3: Pop(2)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-10] = (int) -2
0x4b7: Return(); Pop(8)

0x4b8: @ CreateDialog(Stack[-4])
0x4b9: Pop(0)
0x4ba: PushEmpty(int)
0x4bb: Call2 0xb3b

0x4bc: Pop(0)
0x4bd: @@ SetNPCName(Stack[-1])
0x4be: Pop(1)
0x4bf: PushEmpty(int)
0x4c0: Call2 0xb39

0x4c1: Pop(0)
0x4c2: @@ SetNPCDescription(Stack[-1])
0x4c3: Pop(1)
0x4c4: PushEmpty(string)
0x4c5: Call2 0xb3d

0x4c6: Pop(0)
0x4c7: @@ SetPhoto(Stack[-1])
0x4c8: Pop(1)
0x4c9: PushEmpty(string)
0x4ca: Call2 0xb3f

0x4cb: Pop(0)
0x4cc: @@ SetPhoto2(Stack[-1])
0x4cd: Pop(1)
0x4ce: PushEmpty(int)
0x4cf: Call2 0xd02

0x4d0: Pop(0)
0x4d1: @@ SetPlayerName(Stack[-1])
0x4d2: Pop(1)
0x4d3: Stack[-2] = (int) -1
0x4d4: @ IsOverrideActive(Stack[-3])
0x4d5: Pop(0)
0x4d6: Push(Stack[-3])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-10] = (int) -2
0x4d9: Return(); Pop(8)

0x4da: @ DoDialog(Stack[-4])
0x4db: Pop(0)
0x4dc: PushEmpty(bool, object)
0x4dd: PushEmpty(object)
0x4de: Call2 0xab4

0x4df: Stack[-2] = Stack[-1]
0x4e0: Pop(1)
0x4e1: Call2 0x9f5

0x4e2: Pop(2)
0x4e3: PushEmpty(object, object)
0x4e4: Stack[-2] = Stack[-11]
0x4e5: Stack[-1] = Stack[-6]
0x4e6: Push(-2, 4); TaskCall(7)
0x4e7: Call2 0x4fe

0x4e8: Pop(-2, 4); TaskReturn
0x4e9: Pop(2)
0x4ea: @@ IsDialogEnd(Stack[-1])
0x4eb: Pop(0)
0x4ec: Pop(0); Push((bool) Stack[-1] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: @ sync()
0x4ef: Pop(0)
0x4f0: @@ IsDialogEnd(Stack[-1])
0x4f1: Pop(0)
0x4f2: GOTO 0x4ec

0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-10]
0x4f5: Call2 0x9e3

0x4f6: Pop(1)
0x4f7: @ StopDialog(Stack[-4])
0x4f8: Pop(0)
0x4f9: @@ GetReturnValue(Stack[-2])
0x4fa: Pop(0)
0x4fb: Stack[-10] = Stack[-2]
0x4fc: Return(); Pop(8)

0x4fd: Stack[-4] = 0
0x4fe: PushEmpty()
0x4ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x500: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x501: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x502: Push((int) 1)
0x503: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x504: PushEmpty(string)
0x505: Stack[-1] = "Neutral"
0x506: Call2 0x546

0x507: Pop(1)
0x508: Push((int) 527568)
0x509: @@ SetMessage(Stack[-1])
0x50a: Pop(1)
0x50b: @@ ClearReplies()
0x50c: Pop(0)
0x50d: PushEmpty(bool)
0x50e: Stack[-1] = (bool) 0
0x50f: PushEmpty(bool, object)
0x510: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x511: Call2 0xc1a

0x512: Pop(1)
0x513: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x516: Call2 0xc0e

0x517: Pop(1)
0x518: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x519: Stack[-1] = (bool) 1
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: Push((int) 527570)
0x51c: Push((int) 28913)
0x51d: Push((int) 28912)
0x51e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(3)
0x520: Push((int) 527569)
0x521: Push((int) -1)
0x522: Push((int) 28911)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: GOTO 0x528

0x526: Return(); Pop(0)

0x527: GOTO 0x502

0x528: PushEmpty(bool)
0x529: Call2 0xb41

0x52a: Pop(0)
0x52b: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x52c: @ lshWaitForAnimEnd()
0x52d: Pop(0)
0x52e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: GOTO 0x536

0x531: PushEmpty(string)
0x532: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x533: Call2 0xa7f

0x534: Pop(1)
0x535: GOTO 0x52c

0x536: GOTO 0x545

0x537: Push("all")
0x538: Push("idle")
0x539: @ PlayAnimation(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: @ WaitForAnimEnd()
0x53c: Pop(0)
0x53d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: GOTO 0x545

0x540: Push("all")
0x541: Push("idle")
0x542: @ PlayAnimation(Stack[-2], Stack[-1])
0x543: Pop(2)
0x544: GOTO 0x53b

0x545: Return(); Pop(0)

0x546: PushEmpty()
0x547: PushEmpty(bool)
0x548: Call2 0xb41

0x549: Pop(0)
0x54a: Pop(1); Push((bool) Stack[-1] == 0)
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: Return(); Pop(0)

0x54d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Return(); Pop(0)

0x550: PushEmpty(string, bool)
0x551: Stack[-2] = Stack[-3]
0x552: Push("")
0x553: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-1] = (bool) 0
0x556: GOTO 0x558

0x557: Stack[-1] = (bool) 1
0x558: Call2 0xa8f

0x559: Pop(2)
0x55a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x55b: Return(); Pop(0)

0x55c: PushEmpty()
0x55d: Push((int) 1)
0x55e: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x55f: PushEmpty()
0x560: Call2 0xaad

0x561: Pop(0)
0x562: Push((int) 28912)
0x563: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x565: PushEmpty(object, object)
0x566: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x567: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x568: Call2 0xbc4

0x569: Pop(2)
0x56a: Push((int) 28924)
0x56b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56d: PushEmpty(object, object)
0x56e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x570: Call2 0xb91

0x571: Pop(2)
0x572: Push((int) 28929)
0x573: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x575: PushEmpty(object, object)
0x576: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x577: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x578: Call2 0xb91

0x579: Pop(2)
0x57a: Push((int) 28910)
0x57b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x57d: PushEmpty(string)
0x57e: Stack[-1] = "Neutral"
0x57f: Call2 0x546

0x580: Pop(1)
0x581: Push((int) 527568)
0x582: @@ SetMessage(Stack[-1])
0x583: Pop(1)
0x584: @@ ClearReplies()
0x585: Pop(0)
0x586: PushEmpty(bool)
0x587: Stack[-1] = (bool) 0
0x588: PushEmpty(bool, object)
0x589: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58a: Call2 0xc1a

0x58b: Pop(1)
0x58c: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58d: PushEmpty(bool, object)
0x58e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58f: Call2 0xc0e

0x590: Pop(1)
0x591: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x592: Stack[-1] = (bool) 1
0x593: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x594: Push((int) 527570)
0x595: Push((int) 28913)
0x596: Push((int) 28912)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Push((int) 527569)
0x59a: Push((int) -1)
0x59b: Push((int) 28911)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: Return(); Pop(0)

0x59f: Push((int) 28913)
0x5a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5a2: PushEmpty(string)
0x5a3: Stack[-1] = "Fear"
0x5a4: Call2 0x546

0x5a5: Pop(1)
0x5a6: Push((int) 527571)
0x5a7: @@ SetMessage(Stack[-1])
0x5a8: Pop(1)
0x5a9: @@ ClearReplies()
0x5aa: Pop(0)
0x5ab: Push((int) 527572)
0x5ac: Push((int) 28915)
0x5ad: Push((int) 28914)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Push((int) 527583)
0x5b1: Push((int) 28926)
0x5b2: Push((int) 28925)
0x5b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b4: Pop(3)
0x5b5: Return(); Pop(0)

0x5b6: Push((int) 28926)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Independence"
0x5bb: Call2 0x546

0x5bc: Pop(1)
0x5bd: Push((int) 527584)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: Push((int) 527585)
0x5c3: Push((int) 28917)
0x5c4: Push((int) 28927)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 28915)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Hope"
0x5cd: Call2 0x546

0x5ce: Pop(1)
0x5cf: Push((int) 527573)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 527574)
0x5d5: Push((int) 28917)
0x5d6: Push((int) 28916)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Return(); Pop(0)

0x5da: Push((int) 28917)
0x5db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5dd: PushEmpty(string)
0x5de: Stack[-1] = "Untrust"
0x5df: Call2 0x546

0x5e0: Pop(1)
0x5e1: Push((int) 527575)
0x5e2: @@ SetMessage(Stack[-1])
0x5e3: Pop(1)
0x5e4: @@ ClearReplies()
0x5e5: Pop(0)
0x5e6: Push((int) 527576)
0x5e7: Push((int) 28919)
0x5e8: Push((int) 28918)
0x5e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(3)
0x5eb: Return(); Pop(0)

0x5ec: Push((int) 28919)
0x5ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5ef: PushEmpty(string)
0x5f0: Stack[-1] = "Untrust"
0x5f1: Call2 0x546

0x5f2: Pop(1)
0x5f3: Push((int) 527577)
0x5f4: @@ SetMessage(Stack[-1])
0x5f5: Pop(1)
0x5f6: @@ ClearReplies()
0x5f7: Pop(0)
0x5f8: Push((int) 527578)
0x5f9: Push((int) 28921)
0x5fa: Push((int) 28920)
0x5fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: Return(); Pop(0)

0x5fe: Push((int) 28921)
0x5ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Hope"
0x603: Call2 0x546

0x604: Pop(1)
0x605: Push((int) 527579)
0x606: @@ SetMessage(Stack[-1])
0x607: Pop(1)
0x608: @@ ClearReplies()
0x609: Pop(0)
0x60a: Push((int) 527580)
0x60b: Push((int) 28923)
0x60c: Push((int) 28922)
0x60d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(3)
0x60f: Return(); Pop(0)

0x610: Push((int) 28923)
0x611: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x613: PushEmpty(string)
0x614: Stack[-1] = "Hope"
0x615: Call2 0x546

0x616: Pop(1)
0x617: Push((int) 527581)
0x618: @@ SetMessage(Stack[-1])
0x619: Pop(1)
0x61a: @@ ClearReplies()
0x61b: Pop(0)
0x61c: Push((int) 527582)
0x61d: Push((int) -1)
0x61e: Push((int) 28924)
0x61f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x620: Pop(3)
0x621: Push((int) 527586)
0x622: Push((int) -1)
0x623: Push((int) 28929)
0x624: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x628: PushEmpty(bool)
0x629: Call2 0xb41

0x62a: Pop(0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62c: @ lshStopAnimation()
0x62d: Pop(0)
0x62e: GOTO 0x631

0x62f: @ StopAnimation()
0x630: Pop(0)
0x631: Return(); Pop(0)

0x632: GOTO 0x55d

0x633: Return(); Pop(0)

0x634: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x635: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x636: PushEmpty(bool, object, float)
0x637: Stack[-2] = Stack[-12]
0x638: Stack[-1] = (float) 70.0
0x639: Call2 0x99e

0x63a: Pop(2)
0x63b: Pop(1); Push((bool) Stack[-1] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-10] = (int) -2
0x63e: Return(); Pop(8)

0x63f: @ CreateDialog(Stack[-4])
0x640: Pop(0)
0x641: PushEmpty(int)
0x642: Call2 0xb3b

0x643: Pop(0)
0x644: @@ SetNPCName(Stack[-1])
0x645: Pop(1)
0x646: PushEmpty(int)
0x647: Call2 0xb39

0x648: Pop(0)
0x649: @@ SetNPCDescription(Stack[-1])
0x64a: Pop(1)
0x64b: PushEmpty(string)
0x64c: Call2 0xb3d

0x64d: Pop(0)
0x64e: @@ SetPhoto(Stack[-1])
0x64f: Pop(1)
0x650: PushEmpty(string)
0x651: Call2 0xb3f

0x652: Pop(0)
0x653: @@ SetPhoto2(Stack[-1])
0x654: Pop(1)
0x655: PushEmpty(int)
0x656: Call2 0xd02

0x657: Pop(0)
0x658: @@ SetPlayerName(Stack[-1])
0x659: Pop(1)
0x65a: Stack[-2] = (int) -1
0x65b: @ IsOverrideActive(Stack[-3])
0x65c: Pop(0)
0x65d: Push(Stack[-3])
0x65e: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65f: Stack[-10] = (int) -2
0x660: Return(); Pop(8)

0x661: @ DoDialog(Stack[-4])
0x662: Pop(0)
0x663: PushEmpty(bool, object)
0x664: PushEmpty(object)
0x665: Call2 0xab4

0x666: Stack[-2] = Stack[-1]
0x667: Pop(1)
0x668: Call2 0x9f5

0x669: Pop(2)
0x66a: PushEmpty(object, object)
0x66b: Stack[-2] = Stack[-11]
0x66c: Stack[-1] = Stack[-6]
0x66d: Push(-2, 4); TaskCall(9)
0x66e: Call2 0x685

0x66f: Pop(-2, 4); TaskReturn
0x670: Pop(2)
0x671: @@ IsDialogEnd(Stack[-1])
0x672: Pop(0)
0x673: Pop(0); Push((bool) Stack[-1] == 0)
0x674: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x675: @ sync()
0x676: Pop(0)
0x677: @@ IsDialogEnd(Stack[-1])
0x678: Pop(0)
0x679: GOTO 0x673

0x67a: PushEmpty(object)
0x67b: Stack[-1] = Stack[-10]
0x67c: Call2 0x9e3

0x67d: Pop(1)
0x67e: @ StopDialog(Stack[-4])
0x67f: Pop(0)
0x680: @@ GetReturnValue(Stack[-2])
0x681: Pop(0)
0x682: Stack[-10] = Stack[-2]
0x683: Return(); Pop(8)

0x684: Stack[-4] = 0
0x685: PushEmpty()
0x686: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x687: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x688: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x689: Push((int) 1)
0x68a: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x68b: PushEmpty(string)
0x68c: Stack[-1] = "Neutral"
0x68d: Call2 0x6c4

0x68e: Pop(1)
0x68f: Push((int) 539300)
0x690: @@ SetMessage(Stack[-1])
0x691: Pop(1)
0x692: @@ ClearReplies()
0x693: Pop(0)
0x694: Push((int) 542585)
0x695: Push((int) 44986)
0x696: Push((int) 44985)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Push((int) 539301)
0x69a: Push((int) -1)
0x69b: Push((int) 41244)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Push((int) 542584)
0x69f: Push((int) -1)
0x6a0: Push((int) 44984)
0x6a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(3)
0x6a3: GOTO 0x6a6

0x6a4: Return(); Pop(0)

0x6a5: GOTO 0x689

0x6a6: PushEmpty(bool)
0x6a7: Call2 0xb41

0x6a8: Pop(0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6aa: @ lshWaitForAnimEnd()
0x6ab: Pop(0)
0x6ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: GOTO 0x6b4

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b1: Call2 0xa7f

0x6b2: Pop(1)
0x6b3: GOTO 0x6aa

0x6b4: GOTO 0x6c3

0x6b5: Push("all")
0x6b6: Push("idle")
0x6b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b8: Pop(2)
0x6b9: @ WaitForAnimEnd()
0x6ba: Pop(0)
0x6bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: GOTO 0x6c3

0x6be: Push("all")
0x6bf: Push("idle")
0x6c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x6c1: Pop(2)
0x6c2: GOTO 0x6b9

0x6c3: Return(); Pop(0)

0x6c4: PushEmpty()
0x6c5: PushEmpty(bool)
0x6c6: Call2 0xb41

0x6c7: Pop(0)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: Return(); Pop(0)

0x6cb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: Return(); Pop(0)

0x6ce: PushEmpty(string, bool)
0x6cf: Stack[-2] = Stack[-3]
0x6d0: Push("")
0x6d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: Stack[-1] = (bool) 0
0x6d4: GOTO 0x6d6

0x6d5: Stack[-1] = (bool) 1
0x6d6: Call2 0xa8f

0x6d7: Pop(2)
0x6d8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6d9: Return(); Pop(0)

0x6da: PushEmpty()
0x6db: Push((int) 1)
0x6dc: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x6dd: PushEmpty()
0x6de: Call2 0xaad

0x6df: Pop(0)
0x6e0: Push((int) 41243)
0x6e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Neutral"
0x6e5: Call2 0x6c4

0x6e6: Pop(1)
0x6e7: Push((int) 539300)
0x6e8: @@ SetMessage(Stack[-1])
0x6e9: Pop(1)
0x6ea: @@ ClearReplies()
0x6eb: Pop(0)
0x6ec: Push((int) 542585)
0x6ed: Push((int) 44986)
0x6ee: Push((int) 44985)
0x6ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f0: Pop(3)
0x6f1: Push((int) 539301)
0x6f2: Push((int) -1)
0x6f3: Push((int) 41244)
0x6f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f5: Pop(3)
0x6f6: Push((int) 542584)
0x6f7: Push((int) -1)
0x6f8: Push((int) 44984)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: Return(); Pop(0)

0x6fc: Push((int) 44986)
0x6fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x6ff: PushEmpty(string)
0x700: Stack[-1] = "Hope"
0x701: Call2 0x6c4

0x702: Pop(1)
0x703: Push((int) 542586)
0x704: @@ SetMessage(Stack[-1])
0x705: Pop(1)
0x706: @@ ClearReplies()
0x707: Pop(0)
0x708: Push((int) 542587)
0x709: Push((int) 44989)
0x70a: Push((int) 44987)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Push((int) 542588)
0x70e: Push((int) -1)
0x70f: Push((int) 44988)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Return(); Pop(0)

0x713: Push((int) 44989)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x716: PushEmpty(string)
0x717: Stack[-1] = "Hope"
0x718: Call2 0x6c4

0x719: Pop(1)
0x71a: Push((int) 542589)
0x71b: @@ SetMessage(Stack[-1])
0x71c: Pop(1)
0x71d: @@ ClearReplies()
0x71e: Pop(0)
0x71f: Push((int) 542590)
0x720: Push((int) 44991)
0x721: Push((int) 44990)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: Push((int) 542594)
0x725: Push((int) 44993)
0x726: Push((int) 44994)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Return(); Pop(0)

0x72a: Push((int) 44991)
0x72b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x72d: PushEmpty(string)
0x72e: Stack[-1] = "Hope"
0x72f: Call2 0x6c4

0x730: Pop(1)
0x731: Push((int) 542591)
0x732: @@ SetMessage(Stack[-1])
0x733: Pop(1)
0x734: @@ ClearReplies()
0x735: Pop(0)
0x736: Push((int) 542592)
0x737: Push((int) 44993)
0x738: Push((int) 44992)
0x739: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: Return(); Pop(0)

0x73c: Push((int) 44993)
0x73d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x73f: PushEmpty(string)
0x740: Stack[-1] = "Neutral"
0x741: Call2 0x6c4

0x742: Pop(1)
0x743: Push((int) 542593)
0x744: @@ SetMessage(Stack[-1])
0x745: Pop(1)
0x746: @@ ClearReplies()
0x747: Pop(0)
0x748: Push((int) 542595)
0x749: Push((int) 44997)
0x74a: Push((int) 44996)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 44997)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral"
0x753: Call2 0x6c4

0x754: Pop(1)
0x755: Push((int) 542596)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 542597)
0x75b: Push((int) 45000)
0x75c: Push((int) 44998)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 542598)
0x760: Push((int) -1)
0x761: Push((int) 44999)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 45000)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call2 0x6c4

0x76b: Pop(1)
0x76c: Push((int) 542599)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: Push((int) 542600)
0x772: Push((int) -1)
0x773: Push((int) 45001)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Push((int) 542601)
0x777: Push((int) -1)
0x778: Push((int) 45002)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Push((int) 542602)
0x77c: Push((int) -1)
0x77d: Push((int) 45003)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x782: PushEmpty(bool)
0x783: Call2 0xb41

0x784: Pop(0)
0x785: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x786: @ lshStopAnimation()
0x787: Pop(0)
0x788: GOTO 0x78b

0x789: @ StopAnimation()
0x78a: Pop(0)
0x78b: Return(); Pop(0)

0x78c: GOTO 0x6db

0x78d: Return(); Pop(0)

0x78e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x78f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x790: PushEmpty(bool, object, float)
0x791: Stack[-2] = Stack[-12]
0x792: Stack[-1] = (float) 70.0
0x793: Call2 0x99e

0x794: Pop(2)
0x795: Pop(1); Push((bool) Stack[-1] == 0)
0x796: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x797: Stack[-10] = (int) -2
0x798: Return(); Pop(8)

0x799: @ CreateDialog(Stack[-4])
0x79a: Pop(0)
0x79b: PushEmpty(int)
0x79c: Call2 0xb3b

0x79d: Pop(0)
0x79e: @@ SetNPCName(Stack[-1])
0x79f: Pop(1)
0x7a0: PushEmpty(int)
0x7a1: Call2 0xb39

0x7a2: Pop(0)
0x7a3: @@ SetNPCDescription(Stack[-1])
0x7a4: Pop(1)
0x7a5: PushEmpty(string)
0x7a6: Call2 0xb3d

0x7a7: Pop(0)
0x7a8: @@ SetPhoto(Stack[-1])
0x7a9: Pop(1)
0x7aa: PushEmpty(string)
0x7ab: Call2 0xb3f

0x7ac: Pop(0)
0x7ad: @@ SetPhoto2(Stack[-1])
0x7ae: Pop(1)
0x7af: PushEmpty(int)
0x7b0: Call2 0xd02

0x7b1: Pop(0)
0x7b2: @@ SetPlayerName(Stack[-1])
0x7b3: Pop(1)
0x7b4: Stack[-2] = (int) -1
0x7b5: @ IsOverrideActive(Stack[-3])
0x7b6: Pop(0)
0x7b7: Push(Stack[-3])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: Stack[-10] = (int) -2
0x7ba: Return(); Pop(8)

0x7bb: @ DoDialog(Stack[-4])
0x7bc: Pop(0)
0x7bd: PushEmpty(bool, object)
0x7be: PushEmpty(object)
0x7bf: Call2 0xab4

0x7c0: Stack[-2] = Stack[-1]
0x7c1: Pop(1)
0x7c2: Call2 0x9f5

0x7c3: Pop(2)
0x7c4: PushEmpty(object, object)
0x7c5: Stack[-2] = Stack[-11]
0x7c6: Stack[-1] = Stack[-6]
0x7c7: Push(-2, 4); TaskCall(11)
0x7c8: Call2 0x7df

0x7c9: Pop(-2, 4); TaskReturn
0x7ca: Pop(2)
0x7cb: @@ IsDialogEnd(Stack[-1])
0x7cc: Pop(0)
0x7cd: Pop(0); Push((bool) Stack[-1] == 0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cf: @ sync()
0x7d0: Pop(0)
0x7d1: @@ IsDialogEnd(Stack[-1])
0x7d2: Pop(0)
0x7d3: GOTO 0x7cd

0x7d4: PushEmpty(object)
0x7d5: Stack[-1] = Stack[-10]
0x7d6: Call2 0x9e3

0x7d7: Pop(1)
0x7d8: @ StopDialog(Stack[-4])
0x7d9: Pop(0)
0x7da: @@ GetReturnValue(Stack[-2])
0x7db: Pop(0)
0x7dc: Stack[-10] = Stack[-2]
0x7dd: Return(); Pop(8)

0x7de: Stack[-4] = 0
0x7df: PushEmpty()
0x7e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7e2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7e3: Push((int) 1)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7e5: PushEmpty(string)
0x7e6: Stack[-1] = "Neutral"
0x7e7: Call2 0x819

0x7e8: Pop(1)
0x7e9: Push((int) 540539)
0x7ea: @@ SetMessage(Stack[-1])
0x7eb: Pop(1)
0x7ec: @@ ClearReplies()
0x7ed: Pop(0)
0x7ee: Push((int) 540540)
0x7ef: Push((int) -1)
0x7f0: Push((int) 42549)
0x7f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f2: Pop(3)
0x7f3: Push((int) 540799)
0x7f4: Push((int) -1)
0x7f5: Push((int) 42848)
0x7f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f7: Pop(3)
0x7f8: GOTO 0x7fb

0x7f9: Return(); Pop(0)

0x7fa: GOTO 0x7e3

0x7fb: PushEmpty(bool)
0x7fc: Call2 0xb41

0x7fd: Pop(0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x7ff: @ lshWaitForAnimEnd()
0x800: Pop(0)
0x801: Push( Stack[3 + Tasks[-1].StackPointer] )
0x802: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x803: GOTO 0x809

0x804: PushEmpty(string)
0x805: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x806: Call2 0xa7f

0x807: Pop(1)
0x808: GOTO 0x7ff

0x809: GOTO 0x818

0x80a: Push("all")
0x80b: Push("idle")
0x80c: @ PlayAnimation(Stack[-2], Stack[-1])
0x80d: Pop(2)
0x80e: @ WaitForAnimEnd()
0x80f: Pop(0)
0x810: Push( Stack[3 + Tasks[-1].StackPointer] )
0x811: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x812: GOTO 0x818

0x813: Push("all")
0x814: Push("idle")
0x815: @ PlayAnimation(Stack[-2], Stack[-1])
0x816: Pop(2)
0x817: GOTO 0x80e

0x818: Return(); Pop(0)

0x819: PushEmpty()
0x81a: PushEmpty(bool)
0x81b: Call2 0xb41

0x81c: Pop(0)
0x81d: Pop(1); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Return(); Pop(0)

0x820: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x821: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x822: Return(); Pop(0)

0x823: PushEmpty(string, bool)
0x824: Stack[-2] = Stack[-3]
0x825: Push("")
0x826: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x828: Stack[-1] = (bool) 0
0x829: GOTO 0x82b

0x82a: Stack[-1] = (bool) 1
0x82b: Call2 0xa8f

0x82c: Pop(2)
0x82d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x82e: Return(); Pop(0)

0x82f: PushEmpty()
0x830: Push((int) 1)
0x831: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x832: PushEmpty()
0x833: Call2 0xaad

0x834: Pop(0)
0x835: Push((int) 42548)
0x836: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x838: PushEmpty(string)
0x839: Stack[-1] = "Neutral"
0x83a: Call2 0x819

0x83b: Pop(1)
0x83c: Push((int) 540539)
0x83d: @@ SetMessage(Stack[-1])
0x83e: Pop(1)
0x83f: @@ ClearReplies()
0x840: Pop(0)
0x841: Push((int) 540540)
0x842: Push((int) -1)
0x843: Push((int) 42549)
0x844: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x845: Pop(3)
0x846: Push((int) 540799)
0x847: Push((int) -1)
0x848: Push((int) 42848)
0x849: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(3)
0x84b: Return(); Pop(0)

0x84c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x84d: PushEmpty(bool)
0x84e: Call2 0xb41

0x84f: Pop(0)
0x850: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x851: @ lshStopAnimation()
0x852: Pop(0)
0x853: GOTO 0x856

0x854: @ StopAnimation()
0x855: Pop(0)
0x856: Return(); Pop(0)

0x857: GOTO 0x830

0x858: Return(); Pop(0)

0x859: Push(GlobalVars[1])
0x85a: Stack[-1] = (bool) 0
0x85b: GlobalVars[1] = Stack[-1]; Pop(1)
0x85c: PushEmpty()
0x85d: Call2 0x860

0x85e: Pop(0)
0x85f: Return(); Pop(0)

0x860: PushEmpty(bool)
0x861: Call2 0x999

0x862: Pop(0)
0x863: Pop(1); Push((bool) Stack[-1] == 0)
0x864: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x865: @ Hold()
0x866: Pop(0)
0x867: @ GetDirection(Stack[-0])
0x868: Pop(0)
0x869: PushEmpty()
0x86a: Call2 0x910

0x86b: Pop(0)
0x86c: GOTO 0x869

0x86d: Return(); Pop(0)

0x86e: PushEmpty(object, object)
0x86f: Push("player")
0x870: @ FindActor(Stack[-2], Stack[-1])
0x871: Pop(1)
0x872: Pop(0); Push((bool) Stack[-1] == 0)
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-3] = (bool) 0
0x875: Return(); Pop(2)

0x876: PushEmpty(bool, object)
0x877: Stack[-1] = Stack[-3]
0x878: Call2 0x990

0x879: Stack[-5] = Stack[-2]
0x87a: Pop(2)
0x87b: Return(); Pop(2)

0x87c: Stack[-1] = 0
0x87d: Push(CvectorIndex(Stack[-0], 0))
0x87e: Push(CvectorIndex(Stack[-0], 2))
0x87f: @ RotateAsync(Stack[-2], Stack[-1])
0x880: Pop(2)
0x881: Return(); Pop(0)

0x882: PushEmpty(object, bool, object, bool)
0x883: Push("player")
0x884: @ FindActor(Stack[-3], Stack[-1])
0x885: Pop(1)
0x886: Pop(0); Push((bool) Stack[-2] == 0)
0x887: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x888: Stack[-5] = (bool) 0
0x889: Return(); Pop(4)

0x88a: PushEmpty(float, object)
0x88b: Stack[-1] = Stack[-4]
0x88c: Call2 0x95c

0x88d: Pop(1)
0x88e: Push((float)90000.0)
0x88f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x891: Stack[-5] = (bool) 0
0x892: Return(); Pop(4)

0x893: @ CanSee(Stack[-1], Stack[-2])
0x894: Pop(0)
0x895: Stack[-5] = Stack[-1]
0x896: Return(); Pop(4)

0x897: Stack[-2] = 0
0x898: PushEmpty(float, float)
0x899: Push((int) 8)
0x89a: Push((int) 16)
0x89b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(2)
0x89d: Push((int) 10)
0x89e: @ SetTimer(Stack[-1], Stack[-2])
0x89f: Pop(1)
0x8a0: Return(); Pop(2)

0x8a1: Push((int) 10)
0x8a2: @ KillTimer(Stack[-1])
0x8a3: Pop(1)
0x8a4: Return(); Pop(0)

0x8a5: PushEmpty()
0x8a6: Push((int) 10)
0x8a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8a9: PushEmpty()
0x8aa: Call2 0x8a1

0x8ab: Pop(0)
0x8ac: PushEmpty(bool)
0x8ad: Stack[-1] = (bool) 0
0x8ae: PushEmpty(bool)
0x8af: Call2 0x999

0x8b0: Pop(0)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b2: PushEmpty(bool)
0x8b3: Call2 0x882

0x8b4: Pop(0)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b6: Stack[-1] = (bool) 1
0x8b7: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8b8: PushEmpty(bool)
0x8b9: Call2 0x86e

0x8ba: Pop(0)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8bc: PushEmpty(bool, object)
0x8bd: PushEmpty(object)
0x8be: Call2 0xab4

0x8bf: Stack[-2] = Stack[-1]
0x8c0: Pop(1)
0x8c1: Call2 0xa2f

0x8c2: Pop(2)
0x8c3: GOTO 0x8ca

0x8c4: PushEmpty()
0x8c5: Call2 0x87d

0x8c6: Pop(0)
0x8c7: PushEmpty()
0x8c8: Call2 0x898

0x8c9: Pop(0)
0x8ca: Return(); Pop(0)

0x8cb: PushEmpty()
0x8cc: Call2 0x957

0x8cd: Pop(0)
0x8ce: PushEmpty()
0x8cf: Call2 0x8a1

0x8d0: Pop(0)
0x8d1: @ lshStopSpeech()
0x8d2: Pop(0)
0x8d3: @ lshStopAnimation()
0x8d4: Pop(0)
0x8d5: @ StopAsync()
0x8d6: Pop(0)
0x8d7: @ Hold()
0x8d8: Pop(0)
0x8d9: Return(); Pop(0)

0x8da: @ StopGroup0()
0x8db: Pop(0)
0x8dc: PushEmpty()
0x8dd: Call2 0x8a1

0x8de: Pop(0)
0x8df: PushEmpty(string)
0x8e0: Stack[-1] = "Neutral"
0x8e1: Call2 0xa7f

0x8e2: Pop(1)
0x8e3: PushEmpty()
0x8e4: Call2 0x898

0x8e5: Pop(0)
0x8e6: Return(); Pop(0)

0x8e7: PushEmpty()
0x8e8: Push(Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ea: PushEmpty()
0x8eb: Call2 0x898

0x8ec: Pop(0)
0x8ed: GOTO 0x8f2

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call2 0xa7f

0x8f1: Pop(1)
0x8f2: Return(); Pop(0)

0x8f3: PushEmpty(bool, bool)
0x8f4: @ IsOverrideActive(Stack[-1])
0x8f5: Pop(0)
0x8f6: Pop(0); Push((bool) Stack[-1] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x8f8: EventDisable(0)
0x8f9: PushEmpty()
0x8fa: Call2 0x957

0x8fb: Pop(0)
0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[-5]
0x8fe: Call2 0x990

0x8ff: Pop(2)
0x900: EventEnable(0)
0x901: PushEmpty(object)
0x902: Stack[-1] = Stack[-4]
0x903: Call2 0xd13

0x904: Pop(1)
0x905: PushEmpty(string)
0x906: Stack[-1] = "Neutral"
0x907: Call2 0xa7f

0x908: Pop(1)
0x909: PushEmpty()
0x90a: Call2 0x8a1

0x90b: Pop(0)
0x90c: PushEmpty()
0x90d: Call2 0x898

0x90e: Pop(0)
0x90f: Return(); Pop(2)

0x910: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x911: @ WaitForAnimEnd()
0x912: Pop(0)
0x913: PushEmpty(bool)
0x914: Call2 0x999

0x915: Pop(0)
0x916: Pop(1); Push((bool) Stack[-1] == 0)
0x917: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x918: Return(); Pop(12)

0x919: PushEmpty(int)
0x91a: Call2 0xb28

0x91b: Stack[-7] = Stack[-1]
0x91c: Pop(1)
0x91d: Stack[-5] = (int) 0
0x91e: PushEmpty(bool)
0x91f: Stack[-1] = (bool) 0
0x920: Push((int) 5)
0x921: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x923: PushEmpty(bool)
0x924: Call2 0x999

0x925: Pop(0)
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: Stack[-1] = (bool) 1
0x928: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x929: Pop(0); Push((bool) Stack[-6] == 0)
0x92a: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92b: Push((int) 3)
0x92c: @ Sleep(Stack[-1], Stack[-5])
0x92d: Pop(1)
0x92e: Pop(0); Push((bool) Stack[-4] == 0)
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: GOTO 0x952

0x931: GOTO 0x947

0x932: @ irand(Stack[-3], Stack[-6])
0x933: Pop(0)
0x934: Push((int) 5)
0x935: @ irand(Stack[-3], Stack[-1])
0x936: Pop(1)
0x937: Push((int) 0)
0x938: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x93a: Stack[-3] = (int) 0
0x93b: Push("all")
0x93c: PushEmpty(string, int)
0x93d: Stack[-1] = Stack[-6]
0x93e: Call2 0xb21

0x93f: Pop(1)
0x940: @ PlayAnimation(Stack[-2], Stack[-1])
0x941: Pop(2)
0x942: @ WaitForAnimEnd(Stack[-1])
0x943: Pop(0)
0x944: Pop(0); Push((bool) Stack[-1] == 0)
0x945: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x946: GOTO 0x952

0x947: PushEmpty(bool)
0x948: Call2 0x955

0x949: Pop(0)
0x94a: Pop(1); Push((bool) Stack[-1] == 0)
0x94b: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94c: GOTO 0x952

0x94d: @ ResetAAS()
0x94e: Pop(0)
0x94f: Push((int) 1)
0x950: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x951: GOTO 0x91e

0x952: @ ResetAAS()
0x953: Pop(0)
0x954: Return(); Pop(12)

0x955: Stack[-1] = (bool) 1
0x956: Return(); Pop(0)

0x957: @ StopAnimation()
0x958: Pop(0)
0x959: @ StopGroup0()
0x95a: Pop(0)
0x95b: Return(); Pop(0)

0x95c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x95d: @ GetPosition(Stack[-3])
0x95e: Pop(0)
0x95f: @@ GetPosition(Stack[-2])
0x960: Pop(0)
0x961: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x962: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x963: Return(); Pop(6)

0x964: PushEmpty(bool, bool)
0x965: Push("HasProperty")
0x966: Push((int) 2)
0x967: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x968: Pop(1); Push((bool) Stack[-1] == 0)
0x969: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96a: Stack[-5] = (bool) 0
0x96b: Return(); Pop(2)

0x96c: @@ HasProperty(Stack[-3], Stack[-1])
0x96d: Pop(0)
0x96e: Stack[-5] = Stack[-1]
0x96f: Return(); Pop(2)

0x970: PushEmpty(float, float)
0x971: PushEmpty(bool, object, string)
0x972: Stack[-2] = Stack[-10]
0x973: Stack[-1] = Stack[-9]
0x974: Call2 0x964

0x975: Pop(2)
0x976: Pop(1); Push((bool) Stack[-1] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: Stack[-8] = (bool) 0
0x979: Return(); Pop(2)

0x97a: @@ GetProperty(Stack[-6], Stack[-1])
0x97b: Pop(0)
0x97c: PushEmpty(float, float, float, float)
0x97d: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x97e: Stack[-2] = Stack[-8]
0x97f: Stack[-1] = Stack[-7]
0x980: Call2 0xac4

0x981: Pop(3)
0x982: @@ SetProperty(Stack[-7], Stack[-1])
0x983: Pop(1)
0x984: Stack[-8] = (bool) 1
0x985: Return(); Pop(2)

0x986: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x987: @ GetPosition(Stack[-3])
0x988: Pop(0)
0x989: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x98a: Push(CvectorIndex(Stack[-2], 0))
0x98b: Push(CvectorIndex(Stack[-3], 2))
0x98c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x98d: Pop(2)
0x98e: Stack[-8] = Stack[-1]
0x98f: Return(); Pop(6)

0x990: PushEmpty(cvector, cvector)
0x991: @@ GetPosition(Stack[-1])
0x992: Pop(0)
0x993: PushEmpty(bool, cvector)
0x994: Stack[-1] = Stack[-3]
0x995: Call2 0x986

0x996: Stack[-6] = Stack[-2]
0x997: Pop(2)
0x998: Return(); Pop(2)

0x999: PushEmpty(bool, bool)
0x99a: @ IsLoaded(Stack[-1])
0x99b: Pop(0)
0x99c: Stack[-3] = Stack[-1]
0x99d: Return(); Pop(2)

0x99e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x99f: @@ GetPosition(Stack[-8])
0x9a0: Pop(0)
0x9a1: @@ GetEyesHeight(Stack[-9])
0x9a2: Pop(0)
0x9a3: Push(CvectorIndex(Stack[-8], 1))
0x9a4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9a5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x9a6: @ GetPosition(Stack[-7])
0x9a7: Pop(0)
0x9a8: @ GetEyesHeight(Stack[-9])
0x9a9: Pop(0)
0x9aa: Push(CvectorIndex(Stack[-7], 1))
0x9ab: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9ac: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9ad: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x9ae: Push(CvectorIndex(Stack[-6], 1))
0x9af: Stack[-1] = (int) 0
0x9b0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9b1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x9b2: Pop(1); Push(Sqrt(Stack[-1]))
0x9b3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x9b4: Stack[-5] = -Stack[-6]; Pop(0);
0x9b5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x9b6: PushEmpty(cvector, cvector)
0x9b7: Push(CVector(0.0, 1.0, 0.0))
0x9b8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x9b9: Call2 0xaba

0x9ba: Pop(1)
0x9bb: Push((int) 25)
0x9bc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9be: Push(CVector(0.0, 10.0, 0.0))
0x9bf: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9c0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x9c1: @ IsOverrideActive(Stack[-2])
0x9c2: Pop(0)
0x9c3: Push(Stack[-2])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c5: Stack[-21] = (bool) 0
0x9c6: Return(); Pop(18)

0x9c7: @ StopWorld()
0x9c8: Pop(0)
0x9c9: Push((bool) 1)
0x9ca: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x9cb: Pop(1)
0x9cc: Push(CvectorIndex(Stack[-4], 0))
0x9cd: Push(CvectorIndex(Stack[-5], 2))
0x9ce: @ Rotate(Stack[-2], Stack[-1])
0x9cf: Pop(2)
0x9d0: PushEmpty(bool)
0x9d1: Call2 0xb41

0x9d2: Pop(0)
0x9d3: IF (Stack[-1] == 0) GOTO 0x9d5; Pop(1)

0x9d4: GOTO 0x9dd

0x9d5: Push("head")
0x9d6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9d7: Pop(1)
0x9d8: Push(Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9da: Push("head")
0x9db: @ LookAsyncCamera(Stack[-1])
0x9dc: Pop(1)
0x9dd: @ CameraWaitForPlayFinish()
0x9de: Pop(0)
0x9df: @ ResumeWorld()
0x9e0: Pop(0)
0x9e1: Stack[-21] = (bool) 1
0x9e2: Return(); Pop(18)

0x9e3: PushEmpty(bool, bool)
0x9e4: Push((bool) 1)
0x9e5: @ CameraSwitchToNormal(Stack[-1])
0x9e6: Pop(1)
0x9e7: PushEmpty(bool)
0x9e8: Call2 0xb41

0x9e9: Pop(0)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9eb: GOTO 0x9f4

0x9ec: Push("head")
0x9ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9ee: Pop(1)
0x9ef: Push(Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f1: Push("head")
0x9f2: @ UnlookAsync(Stack[-1])
0x9f3: Pop(1)
0x9f4: Return(); Pop(2)

0x9f5: PushEmpty(int, int, int, int)
0x9f6: Push("voice_common")
0x9f7: @ GetVariable(Stack[-1], Stack[-3])
0x9f8: Pop(1)
0x9f9: Push(Stack[-2])
0x9fa: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0x9fb: PushEmpty(bool, object)
0x9fc: Stack[-1] = Stack[-7]
0x9fd: Call2 0xa2f

0x9fe: Pop(1)
0x9ff: Pop(1); Push((bool) Stack[-1] == 0)
0xa00: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa01: PushEmpty(bool, object)
0xa02: Stack[-1] = Stack[-7]
0xa03: Call2 0xa54

0xa04: Pop(1)
0xa05: Pop(1); Push((bool) Stack[-1] == 0)
0xa06: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa07: Stack[-6] = (bool) 0
0xa08: Return(); Pop(4)

0xa09: Push((int) 2)
0xa0a: @ irand(Stack[-2], Stack[-1])
0xa0b: Pop(1)
0xa0c: Push(Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa0e: Push("voice_common")
0xa0f: Push((int) 1)
0xa10: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa11: Push((int) 3)
0xa12: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa13: @ SetVariable(Stack[-2], Stack[-1])
0xa14: Pop(2)
0xa15: GOTO 0xa1a

0xa16: Push("voice_common")
0xa17: Push((int) 0)
0xa18: @ SetVariable(Stack[-2], Stack[-1])
0xa19: Pop(2)
0xa1a: GOTO 0xa2d

0xa1b: PushEmpty(bool, object)
0xa1c: Stack[-1] = Stack[-7]
0xa1d: Call2 0xa54

0xa1e: Pop(1)
0xa1f: Pop(1); Push((bool) Stack[-1] == 0)
0xa20: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa21: PushEmpty(bool, object)
0xa22: Stack[-1] = Stack[-7]
0xa23: Call2 0xa2f

0xa24: Pop(1)
0xa25: Pop(1); Push((bool) Stack[-1] == 0)
0xa26: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa27: Stack[-6] = (bool) 0
0xa28: Return(); Pop(4)

0xa29: Push("voice_common")
0xa2a: Push((int) 1)
0xa2b: @ SetVariable(Stack[-2], Stack[-1])
0xa2c: Pop(2)
0xa2d: Stack[-6] = (bool) 1
0xa2e: Return(); Pop(4)

0xa2f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa30: Stack[-5] = "c"
0xa31: Stack[-4] = (int) 0
0xa32: Push((int) 1)
0xa33: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa34: Push((int) 1)
0xa35: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa36: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa37: @@ HasProperty(Stack[-1], Stack[-4])
0xa38: Pop(1)
0xa39: Pop(0); Push((bool) Stack[-3] == 0)
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3b: GOTO 0xa3f

0xa3c: Push((int) 1)
0xa3d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa3e: GOTO 0xa32

0xa3f: Pop(0); Push((bool) Stack[-4] == 0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa43; Pop(1)

0xa41: Stack[-12] = (bool) 0
0xa42: Return(); Pop(10)

0xa43: Stack[-2] = (int) 0
0xa44: Push((int) 1)
0xa45: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa47: @ irand(Stack[-2], Stack[-4])
0xa48: Pop(0)
0xa49: Push((int) 1)
0xa4a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa4b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa4c: @@ GetProperty(Stack[-1], Stack[-2])
0xa4d: Pop(1)
0xa4e: PushEmpty(bool, string)
0xa4f: Stack[-1] = Stack[-3]
0xa50: Call2 0xa9e

0xa51: Stack[-14] = Stack[-2]
0xa52: Pop(2)
0xa53: Return(); Pop(10)

0xa54: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa55: Push("d")
0xa56: PushEmpty(int)
0xa57: Call2 0xb12

0xa58: Pop(0)
0xa59: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa5a: Push("m")
0xa5b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa5c: Stack[-4] = (int) 0
0xa5d: Push((int) 1)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa5f: Push((int) 1)
0xa60: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa61: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa62: @@ HasProperty(Stack[-1], Stack[-4])
0xa63: Pop(1)
0xa64: Pop(0); Push((bool) Stack[-3] == 0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa66: GOTO 0xa6a

0xa67: Push((int) 1)
0xa68: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa69: GOTO 0xa5d

0xa6a: Pop(0); Push((bool) Stack[-4] == 0)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6c: Stack[-12] = (bool) 0
0xa6d: Return(); Pop(10)

0xa6e: Stack[-2] = (int) 0
0xa6f: Push((int) 1)
0xa70: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa71: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa72: @ irand(Stack[-2], Stack[-4])
0xa73: Pop(0)
0xa74: Push((int) 1)
0xa75: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa76: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa77: @@ GetProperty(Stack[-1], Stack[-2])
0xa78: Pop(1)
0xa79: PushEmpty(bool, string)
0xa7a: Stack[-1] = Stack[-3]
0xa7b: Call2 0xa9e

0xa7c: Stack[-14] = Stack[-2]
0xa7d: Pop(2)
0xa7e: Return(); Pop(10)

0xa7f: PushEmpty(bool, float, float, bool, float, float)
0xa80: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa81: Pop(0)
0xa82: Push(Stack[-3])
0xa83: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa84: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa85: Pop(0)
0xa86: Push((bool) 0)
0xa87: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa88: Pop(1)
0xa89: GOTO 0xa8e

0xa8a: Push("Can't find lsh animation : ")
0xa8b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa8c: @ Trace(Stack[-1])
0xa8d: Pop(1)
0xa8e: Return(); Pop(6)

0xa8f: PushEmpty(bool, float, float, bool, float, float)
0xa90: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa91: Pop(0)
0xa92: Push(Stack[-3])
0xa93: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa94: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa95: Pop(0)
0xa96: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa97: Pop(0)
0xa98: GOTO 0xa9d

0xa99: Push("Can't find lsh animation : ")
0xa9a: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa9b: @ Trace(Stack[-1])
0xa9c: Pop(1)
0xa9d: Return(); Pop(6)

0xa9e: PushEmpty(bool, bool)
0xa9f: PushEmpty(bool)
0xaa0: Call2 0xb41

0xaa1: Pop(0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa3: @ lshHasSpeech(Stack[-1], Stack[-3])
0xaa4: Pop(0)
0xaa5: Push(Stack[-1])
0xaa6: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa7: @ lshPlaySpeech(Stack[-3])
0xaa8: Pop(0)
0xaa9: Stack[-4] = (bool) 1
0xaaa: Return(); Pop(2)

0xaab: Stack[-4] = (bool) 0
0xaac: Return(); Pop(2)

0xaad: PushEmpty(bool)
0xaae: Call2 0xb41

0xaaf: Pop(0)
0xab0: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xab1: @ lshStopSpeech()
0xab2: Pop(0)
0xab3: Return(); Pop(0)

0xab4: PushEmpty(object, object)
0xab5: @ self(Stack[-1])
0xab6: Pop(0)
0xab7: Stack[-3] = Stack[-1]
0xab8: Return(); Pop(2)

0xab9: Stack[-1] = 0
0xaba: PushEmpty(float, float)
0xabb: Pop(0); Push(Stack[-3] | Stack[-3]);
0xabc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xabd: Push((float)0.0)
0xabe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xabf: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xac0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xac1: Return(); Pop(2)

0xac2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xac3: Return(); Pop(2)

0xac4: PushEmpty()
0xac5: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xac6: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac7: Stack[-4] = Stack[-2]
0xac8: Return(); Pop(0)

0xac9: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xaca: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xacb: Stack[-4] = Stack[-1]
0xacc: Return(); Pop(0)

0xacd: Stack[-4] = Stack[-3]
0xace: Return(); Pop(0)

0xacf: PushEmpty(int, int)
0xad0: @ GetVariable(Stack[-3], Stack[-1])
0xad1: Pop(0)
0xad2: Stack[-4] = Stack[-1]
0xad3: Return(); Pop(2)

0xad4: PushEmpty()
0xad5: Pop(0); Push((bool) Stack[-2] == 0)
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: Stack[-3] = (bool) 0
0xad8: Return(); Pop(0)

0xad9: Push((int) 0)
0xada: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadc: Push((int) 8)
0xadd: @ SendWorldWndMessage(Stack[-1])
0xade: Pop(1)
0xadf: GOTO 0xae9

0xae0: Push((int) 0)
0xae1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xae2: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae3: Push((int) 9)
0xae4: @ SendWorldWndMessage(Stack[-1])
0xae5: Pop(1)
0xae6: GOTO 0xae9

0xae7: Stack[-3] = (bool) 0
0xae8: Return(); Pop(0)

0xae9: PushEmpty(float)
0xaea: Stack[-1] = Stack[-2]
0xaeb: Call2 0xaf7

0xaec: Pop(1)
0xaed: PushEmpty(bool, object, string, float, float, float)
0xaee: Stack[-5] = Stack[-8]
0xaef: Stack[-4] = "reputation"
0xaf0: Stack[-3] = Stack[-7]
0xaf1: Stack[-2] = (int) 0
0xaf2: Stack[-1] = (int) 1
0xaf3: Call2 0x970

0xaf4: Pop(6)
0xaf5: Stack[-3] = (bool) 1
0xaf6: Return(); Pop(0)

0xaf7: PushEmpty(object, object)
0xaf8: @ CreateFloatVector(Stack[-1])
0xaf9: Pop(0)
0xafa: @@ add(Stack[-3])
0xafb: Pop(0)
0xafc: Push((int) 16)
0xafd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xafe: Pop(1)
0xaff: Return(); Pop(2)

0xb00: Stack[-1] = 0
0xb01: PushEmpty(object, object)
0xb02: @ FindActor(Stack[-1], Stack[-4])
0xb03: Pop(0)
0xb04: Pop(0); Push((bool) Stack[-1] == 0)
0xb05: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xb06: Stack[-5] = (bool) 0
0xb07: Return(); Pop(2)

0xb08: @ Trigger(Stack[-1], Stack[-3])
0xb09: Pop(0)
0xb0a: Stack[-5] = (bool) 1
0xb0b: Return(); Pop(2)

0xb0c: Stack[-1] = 0
0xb0d: PushEmpty(float, float)
0xb0e: @ GetGameTime(Stack[-1])
0xb0f: Pop(0)
0xb10: Stack[-3] = Stack[-1]
0xb11: Return(); Pop(2)

0xb12: PushEmpty(float, float)
0xb13: @ GetGameTime(Stack[-1])
0xb14: Pop(0)
0xb15: Push((int) 1)
0xb16: PushEmpty(int)
0xb17: Push((int) 24)
0xb18: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb19: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb1a: Return(); Pop(2)

0xb1b: PushEmpty()
0xb1c: PushEmpty(int)
0xb1d: Call2 0xb12

0xb1e: Pop(0)
0xb1f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb20: Return(); Pop(0)

0xb21: PushEmpty(string, string)
0xb22: Stack[-1] = "idle"
0xb23: Push(Stack[-3])
0xb24: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb25: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb26: Stack[-4] = Stack[-1]
0xb27: Return(); Pop(2)

0xb28: PushEmpty(int, bool, int, bool)
0xb29: Stack[-2] = (int) 0
0xb2a: Push("all")
0xb2b: PushEmpty(string, int)
0xb2c: Stack[-1] = Stack[-5]
0xb2d: Call2 0xb21

0xb2e: Pop(1)
0xb2f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(2)
0xb31: Pop(0); Push((bool) Stack[-1] == 0)
0xb32: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb33: GOTO 0xb37

0xb34: Push((int) 1)
0xb35: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb36: GOTO 0xb2a

0xb37: Stack[-5] = Stack[-2]
0xb38: Return(); Pop(4)

0xb39: Stack[-1] = (int) 515537
0xb3a: Return(); Pop(0)

0xb3b: Stack[-1] = (int) 502862
0xb3c: Return(); Pop(0)

0xb3d: Stack[-1] = "ui/NPC_Julia.png"
0xb3e: Return(); Pop(0)

0xb3f: Stack[-1] = "ui/NPC_Julia_b.png"
0xb40: Return(); Pop(0)

0xb41: Stack[-1] = (bool) 1
0xb42: Return(); Pop(0)

0xb43: PushEmpty(object, object)
0xb44: Push("k3q02")
0xb45: Push((int) 2)
0xb46: @ SetVariable(Stack[-2], Stack[-1])
0xb47: Pop(2)
0xb48: PushEmpty(object)
0xb49: Call2 0xcd0

0xb4a: Stack[-2] = Stack[-1]
0xb4b: Pop(1)
0xb4c: Push("k3q02JuliaGotoEva")
0xb4d: Push("pt_map_eva")
0xb4e: Push((int) 0)
0xb4f: Push((int) 525573)
0xb50: PushEmpty(float)
0xb51: Call2 0xb0d

0xb52: Pop(0)
0xb53: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb54: Pop(5)
0xb55: PushEmpty()
0xb56: Call2 0xc8d

0xb57: Pop(0)
0xb58: Return(); Pop(2)

0xb59: Stack[-1] = 0
0xb5a: PushEmpty(object, object)
0xb5b: Push("k6q01")
0xb5c: Push((int) 2)
0xb5d: @ SetVariable(Stack[-2], Stack[-1])
0xb5e: Pop(2)
0xb5f: PushEmpty(object)
0xb60: Call2 0xcd0

0xb61: Stack[-2] = Stack[-1]
0xb62: Pop(1)
0xb63: Push("k6q01IfAnna")
0xb64: Push("pt_map_anna")
0xb65: Push((int) 1)
0xb66: Push((int) 541591)
0xb67: PushEmpty(float)
0xb68: Call2 0xb0d

0xb69: Pop(0)
0xb6a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb6b: Pop(5)
0xb6c: Push("k6q01IfEva")
0xb6d: Push("pt_map_eva")
0xb6e: Push((int) 1)
0xb6f: Push((int) 541594)
0xb70: PushEmpty(float)
0xb71: Call2 0xb0d

0xb72: Pop(0)
0xb73: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb74: Pop(5)
0xb75: Push("k6q01IfLara")
0xb76: Push("pt_map_lara")
0xb77: Push((int) 1)
0xb78: Push((int) 541592)
0xb79: PushEmpty(float)
0xb7a: Call2 0xb0d

0xb7b: Pop(0)
0xb7c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb7d: Pop(5)
0xb7e: Push("k6q01IfOspina")
0xb7f: Push("pt_map_ospina")
0xb80: Push((int) 1)
0xb81: Push((int) 541593)
0xb82: PushEmpty(float)
0xb83: Call2 0xb0d

0xb84: Pop(0)
0xb85: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb86: Pop(5)
0xb87: PushEmpty()
0xb88: Call2 0xc9a

0xb89: Pop(0)
0xb8a: PushEmpty(bool, string, string)
0xb8b: Stack[-2] = "quest_k6_01"
0xb8c: Stack[-1] = "place_danko"
0xb8d: Call2 0xb01

0xb8e: Pop(3)
0xb8f: Return(); Pop(2)

0xb90: Stack[-1] = 0
0xb91: PushEmpty(int, int)
0xb92: Push("k11q01SoulCount")
0xb93: @ GetVariable(Stack[-1], Stack[-2])
0xb94: Pop(1)
0xb95: Push((int) 1)
0xb96: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb97: Push("k11q01SoulCount")
0xb98: @ SetVariable(Stack[-1], Stack[-2])
0xb99: Pop(1)
0xb9a: Push((int) 2)
0xb9b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9c: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9d: PushEmpty()
0xb9e: Call2 0xc73

0xb9f: Pop(0)
0xba0: GOTO 0xbc3

0xba1: Push((int) 3)
0xba2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba3: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba4: PushEmpty()
0xba5: Call2 0xc66

0xba6: Pop(0)
0xba7: GOTO 0xbc3

0xba8: Push((int) 4)
0xba9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbaa: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbab: PushEmpty()
0xbac: Call2 0xc59

0xbad: Pop(0)
0xbae: GOTO 0xbc3

0xbaf: Push((int) 5)
0xbb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xbb2: PushEmpty()
0xbb3: Call2 0xc4c

0xbb4: Pop(0)
0xbb5: GOTO 0xbc3

0xbb6: Push((int) 6)
0xbb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb8: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbb9: PushEmpty()
0xbba: Call2 0xc3f

0xbbb: Pop(0)
0xbbc: GOTO 0xbc3

0xbbd: Push((int) 7)
0xbbe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbc0: PushEmpty()
0xbc1: Call2 0xc32

0xbc2: Pop(0)
0xbc3: Return(); Pop(2)

0xbc4: PushEmpty()
0xbc5: Push("ook11Julia1")
0xbc6: Push((int) 1)
0xbc7: @ SetVariable(Stack[-2], Stack[-1])
0xbc8: Pop(2)
0xbc9: Return(); Pop(0)

0xbca: PushEmpty()
0xbcb: Push("ook3Julia1")
0xbcc: Push((int) 1)
0xbcd: @ SetVariable(Stack[-2], Stack[-1])
0xbce: Pop(2)
0xbcf: Return(); Pop(0)

0xbd0: PushEmpty()
0xbd1: PushEmpty(object, string, float)
0xbd2: PushEmpty(object)
0xbd3: Call2 0xcd0

0xbd4: Stack[-4] = Stack[-1]
0xbd5: Pop(1)
0xbd6: Stack[-2] = "pt_map_theater"
0xbd7: Stack[-1] = (int) 1
0xbd8: Call2 0xce1

0xbd9: Pop(3)
0xbda: PushEmpty(object)
0xbdb: Call2 0xcd0

0xbdc: Pop(0)
0xbdd: @@ ShowMap(Stack[-1])
0xbde: Pop(1)
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: Push("k3q02")
0xbe2: Push((int) -1)
0xbe3: @ SetVariable(Stack[-2], Stack[-1])
0xbe4: Pop(2)
0xbe5: PushEmpty()
0xbe6: Call2 0xc80

0xbe7: Pop(0)
0xbe8: Return(); Pop(0)

0xbe9: PushEmpty()
0xbea: Push("k6StopKaterinaTalks")
0xbeb: Push((int) 1)
0xbec: @ SetVariable(Stack[-2], Stack[-1])
0xbed: Pop(2)
0xbee: Return(); Pop(0)

0xbef: PushEmpty()
0xbf0: PushEmpty(bool, object, float)
0xbf1: Stack[-2] = Stack[-5]
0xbf2: Stack[-1] = (float) 0.3
0xbf3: Call2 0xad4

0xbf4: Pop(3)
0xbf5: Return(); Pop(0)

0xbf6: PushEmpty()
0xbf7: PushEmpty(int, string)
0xbf8: Stack[-1] = "k3q02"
0xbf9: Call2 0xacf

0xbfa: Pop(1)
0xbfb: Push((int) 1)
0xbfc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbfe: Stack[-2] = (bool) 1
0xbff: Return(); Pop(0)

0xc00: Stack[-2] = (bool) 0
0xc01: Return(); Pop(0)

0xc02: PushEmpty()
0xc03: PushEmpty(int, string)
0xc04: Stack[-1] = "k6q01"
0xc05: Call2 0xacf

0xc06: Pop(1)
0xc07: Push((int) 1)
0xc08: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc09: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc0a: Stack[-2] = (bool) 1
0xc0b: Return(); Pop(0)

0xc0c: Stack[-2] = (bool) 0
0xc0d: Return(); Pop(0)

0xc0e: PushEmpty()
0xc0f: PushEmpty(int, string)
0xc10: Stack[-1] = "k11q01"
0xc11: Call2 0xacf

0xc12: Pop(1)
0xc13: Push((int) 9)
0xc14: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc15: IF (Stack[-1] == 0) GOTO 0xc18; Pop(1)

0xc16: Stack[-2] = (bool) 1
0xc17: Return(); Pop(0)

0xc18: Stack[-2] = (bool) 0
0xc19: Return(); Pop(0)

0xc1a: PushEmpty()
0xc1b: PushEmpty(int, string)
0xc1c: Stack[-1] = "ook11Julia1"
0xc1d: Call2 0xacf

0xc1e: Pop(1)
0xc1f: Push((int) 0)
0xc20: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc21: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc22: Stack[-2] = (bool) 1
0xc23: Return(); Pop(0)

0xc24: Stack[-2] = (bool) 0
0xc25: Return(); Pop(0)

0xc26: PushEmpty()
0xc27: PushEmpty(int, string)
0xc28: Stack[-1] = "ook3Julia1"
0xc29: Call2 0xacf

0xc2a: Pop(1)
0xc2b: Push((int) 0)
0xc2c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc30; Pop(1)

0xc2e: Stack[-2] = (bool) 1
0xc2f: Return(); Pop(0)

0xc30: Stack[-2] = (bool) 0
0xc31: Return(); Pop(0)

0xc32: PushEmpty(object, object)
0xc33: Push((int) 498)
0xc34: Push((int) 1)
0xc35: Push((int) 528065)
0xc36: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc37: Pop(3)
0xc38: PushEmpty(bool, object, int)
0xc39: Stack[-2] = Stack[-4]
0xc3a: Stack[-1] = (int) 480
0xc3b: Call2 0xcb4

0xc3c: Pop(3)
0xc3d: Return(); Pop(2)

0xc3e: Stack[-1] = 0
0xc3f: PushEmpty(object, object)
0xc40: Push((int) 497)
0xc41: Push((int) 1)
0xc42: Push((int) 528064)
0xc43: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc44: Pop(3)
0xc45: PushEmpty(bool, object, int)
0xc46: Stack[-2] = Stack[-4]
0xc47: Stack[-1] = (int) 480
0xc48: Call2 0xcb4

0xc49: Pop(3)
0xc4a: Return(); Pop(2)

0xc4b: Stack[-1] = 0
0xc4c: PushEmpty(object, object)
0xc4d: Push((int) 496)
0xc4e: Push((int) 1)
0xc4f: Push((int) 528063)
0xc50: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: PushEmpty(bool, object, int)
0xc53: Stack[-2] = Stack[-4]
0xc54: Stack[-1] = (int) 480
0xc55: Call2 0xcb4

0xc56: Pop(3)
0xc57: Return(); Pop(2)

0xc58: Stack[-1] = 0
0xc59: PushEmpty(object, object)
0xc5a: Push((int) 495)
0xc5b: Push((int) 1)
0xc5c: Push((int) 528062)
0xc5d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc5e: Pop(3)
0xc5f: PushEmpty(bool, object, int)
0xc60: Stack[-2] = Stack[-4]
0xc61: Stack[-1] = (int) 480
0xc62: Call2 0xcb4

0xc63: Pop(3)
0xc64: Return(); Pop(2)

0xc65: Stack[-1] = 0
0xc66: PushEmpty(object, object)
0xc67: Push((int) 494)
0xc68: Push((int) 1)
0xc69: Push((int) 528061)
0xc6a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc6b: Pop(3)
0xc6c: PushEmpty(bool, object, int)
0xc6d: Stack[-2] = Stack[-4]
0xc6e: Stack[-1] = (int) 480
0xc6f: Call2 0xcb4

0xc70: Pop(3)
0xc71: Return(); Pop(2)

0xc72: Stack[-1] = 0
0xc73: PushEmpty(object, object)
0xc74: Push((int) 493)
0xc75: Push((int) 1)
0xc76: Push((int) 528060)
0xc77: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc78: Pop(3)
0xc79: PushEmpty(bool, object, int)
0xc7a: Stack[-2] = Stack[-4]
0xc7b: Stack[-1] = (int) 480
0xc7c: Call2 0xcb4

0xc7d: Pop(3)
0xc7e: Return(); Pop(2)

0xc7f: Stack[-1] = 0
0xc80: PushEmpty(object, object)
0xc81: Push((int) 782)
0xc82: Push((int) 2)
0xc83: Push((int) 542095)
0xc84: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc85: Pop(3)
0xc86: PushEmpty(bool, object, int)
0xc87: Stack[-2] = Stack[-4]
0xc88: Stack[-1] = (int) 344
0xc89: Call2 0xcb4

0xc8a: Pop(3)
0xc8b: Return(); Pop(2)

0xc8c: Stack[-1] = 0
0xc8d: PushEmpty(object, object)
0xc8e: Push((int) 346)
0xc8f: Push((int) 2)
0xc90: Push((int) 525568)
0xc91: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: PushEmpty(bool, object, int)
0xc94: Stack[-2] = Stack[-4]
0xc95: Stack[-1] = (int) 344
0xc96: Call2 0xcb4

0xc97: Pop(3)
0xc98: Return(); Pop(2)

0xc99: Stack[-1] = 0
0xc9a: PushEmpty(object, object)
0xc9b: Push((int) 411)
0xc9c: Push((int) 1)
0xc9d: Push((int) 526112)
0xc9e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc9f: Pop(3)
0xca0: PushEmpty(bool, object, int)
0xca1: Stack[-2] = Stack[-4]
0xca2: Stack[-1] = (int) 408
0xca3: Call2 0xcb4

0xca4: Pop(3)
0xca5: Return(); Pop(2)

0xca6: Stack[-1] = 0
0xca7: PushEmpty(object, object)
0xca8: @ GetDiaryRoot(Stack[-1])
0xca9: Pop(0)
0xcaa: Pop(0); Push((bool) Stack[-1] == 0)
0xcab: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xcac: Push("Can't retrieve diary root")
0xcad: @ Trace(Stack[-1])
0xcae: Pop(1)
0xcaf: Stack[-3] = (bool) 0
0xcb0: Return(); Pop(2)

0xcb1: Stack[-3] = Stack[-1]
0xcb2: Return(); Pop(2)

0xcb3: Stack[-1] = 0
0xcb4: PushEmpty(object, object, int, object, object, int)
0xcb5: PushEmpty(object)
0xcb6: Call2 0xca7

0xcb7: Stack[-4] = Stack[-1]
0xcb8: Pop(1)
0xcb9: @@ Find(Stack[-7], Stack[-2])
0xcba: Pop(0)
0xcbb: Pop(0); Push((bool) Stack[-2] == 0)
0xcbc: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcbd: Push("Can't find diary parent with id: ")
0xcbe: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcbf: @ Trace(Stack[-1])
0xcc0: Pop(1)
0xcc1: Stack[-9] = (bool) 0
0xcc2: Return(); Pop(6)

0xcc3: @@ AddChild(Stack[-8])
0xcc4: Pop(0)
0xcc5: Push((int) 7)
0xcc6: @ SendWorldWndMessage(Stack[-1])
0xcc7: Pop(1)
0xcc8: @@ GetCategory(Stack[-1])
0xcc9: Pop(0)
0xcca: @ SetDiarySection(Stack[-1])
0xccb: Pop(0)
0xccc: Stack[-9] = (bool) 0
0xccd: Return(); Pop(6)

0xcce: Stack[-2] = 0
0xccf: Stack[-3] = 0
0xcd0: PushEmpty(object, object, object, object)
0xcd1: @ GetMainOutdoorScene(Stack[-2])
0xcd2: Pop(0)
0xcd3: Pop(0); Push((bool) Stack[-2] == 0)
0xcd4: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd5: Push("Can't find main outdoor scene")
0xcd6: @ Trace(Stack[-1])
0xcd7: Pop(1)
0xcd8: Stack[-1] = 0
0xcd9: Stack[-5] = Stack[-1]
0xcda: Return(); Pop(4)

0xcdb: @@ GetMap(Stack[-1])
0xcdc: Pop(0)
0xcdd: Stack[-5] = Stack[-1]
0xcde: Return(); Pop(4)

0xcdf: Stack[-1] = 0
0xce0: Stack[-2] = 0
0xce1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xce2: @ GetMainOutdoorScene(Stack[-2])
0xce3: Pop(0)
0xce4: Pop(0); Push((bool) Stack[-2] == 0)
0xce5: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce6: Push("Can't find main outdoor scene")
0xce7: @ Trace(Stack[-1])
0xce8: Pop(1)
0xce9: Return(); Pop(8)

0xcea: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xceb: Pop(0)
0xcec: Pop(0); Push((bool) Stack[-1] == 0)
0xced: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcee: Push("Warning: outdoor scene locator ")
0xcef: Pop(1); Push(Stack[-1] + Stack[-11]);
0xcf0: Push(" doesnt exist")
0xcf1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcf2: @ Trace(Stack[-1])
0xcf3: Pop(1)
0xcf4: @@ GetMap(Stack[-11])
0xcf5: Pop(0)
0xcf6: Pop(0); Push((bool) Stack[-11] == 0)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcf8: Push("Can't find map")
0xcf9: @ Trace(Stack[-1])
0xcfa: Pop(1)
0xcfb: Return(); Pop(8)

0xcfc: Push(CvectorIndex(Stack[-4], 0))
0xcfd: Push(CvectorIndex(Stack[-5], 2))
0xcfe: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xcff: Pop(2)
0xd00: Return(); Pop(8)

0xd01: Stack[-2] = 0
0xd02: PushEmpty(int, int)
0xd03: Push("branch")
0xd04: @ GetVariable(Stack[-1], Stack[-2])
0xd05: Pop(1)
0xd06: Push((int) 0)
0xd07: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd08: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd09: Stack[-3] = (int) 1
0xd0a: Return(); Pop(2)

0xd0b: GOTO 0xd11

0xd0c: Push((int) 1)
0xd0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0e: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd0f: Stack[-3] = (int) 2
0xd10: Return(); Pop(2)

0xd11: Stack[-3] = (int) 3
0xd12: Return(); Pop(2)

0xd13: PushEmpty()
0xd14: Push(GlobalVars[1])
0xd15: Pop(1); Push((bool) Stack[-1] == 0)
0xd16: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd17: PushEmpty(int, object)
0xd18: Stack[-1] = Stack[-3]
0xd19: Push(-2, 1); TaskCall(0)
0xd1a: Call2 0x0

0xd1b: Pop(-2, 1); TaskReturn
0xd1c: Pop(2)
0xd1d: Push(GlobalVars[1])
0xd1e: Stack[-1] = (bool) 1
0xd1f: GlobalVars[1] = Stack[-1]; Pop(1)
0xd20: PushEmpty(bool, int)
0xd21: Stack[-1] = (int) 3
0xd22: Call2 0xb1b

0xd23: Pop(1)
0xd24: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd25: PushEmpty(int, object)
0xd26: Stack[-1] = Stack[-3]
0xd27: Push(-2, 1); TaskCall(2)
0xd28: Call2 0xf9

0xd29: Pop(-2, 1); TaskReturn
0xd2a: Pop(2)
0xd2b: Return(); Pop(0)

0xd2c: PushEmpty(bool, int)
0xd2d: Stack[-1] = (int) 6
0xd2e: Call2 0xb1b

0xd2f: Pop(1)
0xd30: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd31: PushEmpty(int, object)
0xd32: Stack[-1] = Stack[-3]
0xd33: Push(-2, 1); TaskCall(4)
0xd34: Call2 0x2da

0xd35: Pop(-2, 1); TaskReturn
0xd36: Pop(2)
0xd37: Return(); Pop(0)

0xd38: PushEmpty(bool, int)
0xd39: Stack[-1] = (int) 11
0xd3a: Call2 0xb1b

0xd3b: Pop(1)
0xd3c: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd3d: PushEmpty(int, object)
0xd3e: Stack[-1] = Stack[-3]
0xd3f: Push(-2, 1); TaskCall(6)
0xd40: Call2 0x4ad

0xd41: Pop(-2, 1); TaskReturn
0xd42: Pop(2)
0xd43: Return(); Pop(0)

0xd44: PushEmpty(bool, int)
0xd45: Stack[-1] = (int) 12
0xd46: Call2 0xb1b

0xd47: Pop(1)
0xd48: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd49: PushEmpty(int, object)
0xd4a: Stack[-1] = Stack[-3]
0xd4b: Push(-2, 1); TaskCall(8)
0xd4c: Call2 0x634

0xd4d: Pop(-2, 1); TaskReturn
0xd4e: Pop(2)
0xd4f: Return(); Pop(0)

0xd50: PushEmpty(int, object)
0xd51: Stack[-1] = Stack[-3]
0xd52: Push(-2, 1); TaskCall(10)
0xd53: Call2 0x78e

0xd54: Pop(-2, 1); TaskReturn
0xd55: Pop(2)
0xd56: Return(); Pop(0)

