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
	Grimacing
	Fear
	Strange
	Grin
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Ospina.png
	ui/NPC_Ospina_b.png
	k2q01
	ook6Ospina1
	k8q01
	k11q01SoulCount
	ook11Ospina1
	k6q01
	k6q01DankoPos
	k11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xa67
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x34b Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x46d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5b1 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x758 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x904 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa3d Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xab3 Vars = (int)
		EVENT_6 Op = 0xad9 Vars = ()
		EVENT_5 Op = 0xae8 Vars = ()
		EVENT_45 Op = 0xaf5 Vars = (bool)
		EVENT_0 Op = 0xb01 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xb8a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xcdc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xcda

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xcde

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xce0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xe64

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
0x31: Call2 0xc9e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xbdf

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
0x48: Call2 0xbce

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
0x56: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xae

0x5a: Pop(1)
0x5b: Push((int) 525251)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xd4c

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 525252)
0x66: Push((int) 44489)
0x67: Push((int) 26620)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0xd58

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 525263)
0x70: Push((int) 26632)
0x71: Push((int) 26631)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 525255)
0x75: Push((int) -1)
0x76: Push((int) 26623)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0x90

0x7a: PushEmpty(string)
0x7b: Stack[-1] = "Neutral"
0x7c: Call2 0xae

0x7d: Pop(1)
0x7e: Push((int) 525280)
0x7f: @@ SetMessage(Stack[-1])
0x80: Pop(1)
0x81: @@ ClearReplies()
0x82: Pop(0)
0x83: Push((int) 525281)
0x84: Push((int) -1)
0x85: Push((int) 26649)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 528809)
0x89: Push((int) -1)
0x8a: Push((int) 30223)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x55

0x90: PushEmpty(bool)
0x91: Call2 0xce2

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0xc69

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all")
0xa9: Push("idle")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0xce2

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = Stack[-3]
0xba: Push("")
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0xc79

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xc97

0xc9: Pop(0)
0xca: Push((int) 26622)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0xce4

0xd1: Pop(2)
0xd2: Push((int) 44528)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0xd43

0xd9: Pop(2)
0xda: Push((int) 44526)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0xd43

0xe1: Pop(2)
0xe2: Push((int) 26641)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0xced

0xe9: Pop(2)
0xea: Push((int) 44534)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0xced

0xf1: Pop(2)
0xf2: Push((int) 26619)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call2 0xae

0xf8: Pop(1)
0xf9: Push((int) 525251)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: PushEmpty(bool, object)
0xff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x100: Call2 0xd4c

0x101: Pop(1)
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: Push((int) 525252)
0x104: Push((int) 44489)
0x105: Push((int) 26620)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Call2 0xd58

0x10b: Pop(1)
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: Push((int) 525263)
0x10e: Push((int) 26632)
0x10f: Push((int) 26631)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 525255)
0x113: Push((int) -1)
0x114: Push((int) 26623)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0xae

0x11b: Pop(1)
0x11c: Push((int) 525280)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 525281)
0x122: Push((int) -1)
0x123: Push((int) 26649)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 528809)
0x127: Push((int) -1)
0x128: Push((int) 30223)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 44499)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12f: Push((int) 44502)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Grimacing"
0x134: Call2 0xae

0x135: Pop(1)
0x136: Push((int) 542183)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 542184)
0x13c: Push((int) -1)
0x13d: Push((int) 44504)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 542185)
0x141: Push((int) -1)
0x142: Push((int) 44505)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 26632)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0xae

0x14c: Pop(1)
0x14d: Push((int) 525264)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 542194)
0x153: Push((int) 44520)
0x154: Push((int) 44518)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 542195)
0x158: Push((int) 44520)
0x159: Push((int) 44519)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 44520)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0xae

0x163: Pop(1)
0x164: Push((int) 542196)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 525265)
0x16a: Push((int) 44524)
0x16b: Push((int) 26633)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 542197)
0x16f: Push((int) 26634)
0x170: Push((int) 44522)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Push((int) 542198)
0x174: Push((int) 44524)
0x175: Push((int) 44523)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Return(); Pop(0)

0x179: Push((int) 26634)
0x17a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17c: PushEmpty(string)
0x17d: Stack[-1] = "Neutral"
0x17e: Call2 0xae

0x17f: Pop(1)
0x180: Push((int) 525266)
0x181: @@ SetMessage(Stack[-1])
0x182: Pop(1)
0x183: @@ ClearReplies()
0x184: Pop(0)
0x185: Push((int) 529215)
0x186: Push((int) 30668)
0x187: Push((int) 30667)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Push((int) 542204)
0x18b: Push((int) 30670)
0x18c: Push((int) 44530)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Push((int) 30668)
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral"
0x195: Call2 0xae

0x196: Pop(1)
0x197: Push((int) 529216)
0x198: @@ SetMessage(Stack[-1])
0x199: Pop(1)
0x19a: @@ ClearReplies()
0x19b: Pop(0)
0x19c: Push((int) 529217)
0x19d: Push((int) 30670)
0x19e: Push((int) 30669)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Return(); Pop(0)

0x1a2: Push((int) 30670)
0x1a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = "Fear"
0x1a7: Call2 0xae

0x1a8: Pop(1)
0x1a9: Push((int) 529218)
0x1aa: @@ SetMessage(Stack[-1])
0x1ab: Pop(1)
0x1ac: @@ ClearReplies()
0x1ad: Pop(0)
0x1ae: Push((int) 525267)
0x1af: Push((int) 26636)
0x1b0: Push((int) 26635)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Push((int) 542205)
0x1b4: Push((int) 26638)
0x1b5: Push((int) 44532)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 26636)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Fear"
0x1be: Call2 0xae

0x1bf: Pop(1)
0x1c0: Push((int) 525268)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 525269)
0x1c6: Push((int) 26638)
0x1c7: Push((int) 26637)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 26638)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Strange"
0x1d0: Call2 0xae

0x1d1: Pop(1)
0x1d2: Push((int) 525270)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 525271)
0x1d8: Push((int) 26640)
0x1d9: Push((int) 26639)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 542206)
0x1dd: Push((int) -1)
0x1de: Push((int) 44534)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 26640)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call2 0xae

0x1e8: Pop(1)
0x1e9: Push((int) 525272)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 525273)
0x1ef: Push((int) -1)
0x1f0: Push((int) 26641)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 44524)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Grin"
0x1f9: Call2 0xae

0x1fa: Pop(1)
0x1fb: Push((int) 542199)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 542200)
0x201: Push((int) 44527)
0x202: Push((int) 44525)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Push((int) 542201)
0x206: Push((int) -1)
0x207: Push((int) 44526)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Push((int) 44527)
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral"
0x210: Call2 0xae

0x211: Pop(1)
0x212: Push((int) 542202)
0x213: @@ SetMessage(Stack[-1])
0x214: Pop(1)
0x215: @@ ClearReplies()
0x216: Pop(0)
0x217: Push((int) 542203)
0x218: Push((int) -1)
0x219: Push((int) 44528)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 44489)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Strange"
0x222: Call2 0xae

0x223: Pop(1)
0x224: Push((int) 542172)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 542173)
0x22a: Push((int) 44491)
0x22b: Push((int) 44490)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 542186)
0x22f: Push((int) 44507)
0x230: Push((int) 44506)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Push((int) 44507)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Grimacing"
0x239: Call2 0xae

0x23a: Pop(1)
0x23b: Push((int) 542187)
0x23c: @@ SetMessage(Stack[-1])
0x23d: Pop(1)
0x23e: @@ ClearReplies()
0x23f: Pop(0)
0x240: Push((int) 542188)
0x241: Push((int) 26621)
0x242: Push((int) 44508)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Push((int) 542190)
0x246: Push((int) 26621)
0x247: Push((int) 44510)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Return(); Pop(0)

0x24b: Push((int) 44491)
0x24c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Strange"
0x250: Call2 0xae

0x251: Pop(1)
0x252: Push((int) 542174)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 542175)
0x258: Push((int) 26621)
0x259: Push((int) 44492)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 542189)
0x25d: Push((int) 26621)
0x25e: Push((int) 44509)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 26621)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral"
0x267: Call2 0xae

0x268: Pop(1)
0x269: Push((int) 525253)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: Push((int) 529213)
0x26f: Push((int) 30666)
0x270: Push((int) 30665)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Push((int) 542191)
0x274: Push((int) 44515)
0x275: Push((int) 44514)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 44515)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral"
0x27e: Call2 0xae

0x27f: Pop(1)
0x280: Push((int) 542192)
0x281: @@ SetMessage(Stack[-1])
0x282: Pop(1)
0x283: @@ ClearReplies()
0x284: Pop(0)
0x285: Push((int) 542193)
0x286: Push((int) 30666)
0x287: Push((int) 44516)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Push((int) 30666)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Neutral"
0x290: Call2 0xae

0x291: Pop(1)
0x292: Push((int) 529214)
0x293: @@ SetMessage(Stack[-1])
0x294: Pop(1)
0x295: @@ ClearReplies()
0x296: Pop(0)
0x297: Push((int) 525254)
0x298: Push((int) -1)
0x299: Push((int) 26622)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29e: PushEmpty(bool)
0x29f: Call2 0xce2

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a2: @ lshStopAnimation()
0x2a3: Pop(0)
0x2a4: GOTO 0x2a7

0x2a5: @ StopAnimation()
0x2a6: Pop(0)
0x2a7: Return(); Pop(0)

0x2a8: GOTO 0xc5

0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2ac: PushEmpty(bool, object, float)
0x2ad: Stack[-2] = Stack[-12]
0x2ae: Stack[-1] = (float) 70.0
0x2af: Call2 0xb8a

0x2b0: Pop(2)
0x2b1: Pop(1); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-10] = (int) -2
0x2b4: Return(); Pop(8)

0x2b5: @ CreateDialog(Stack[-4])
0x2b6: Pop(0)
0x2b7: PushEmpty(int)
0x2b8: Call2 0xcdc

0x2b9: Pop(0)
0x2ba: @@ SetNPCName(Stack[-1])
0x2bb: Pop(1)
0x2bc: PushEmpty(int)
0x2bd: Call2 0xcda

0x2be: Pop(0)
0x2bf: @@ SetNPCDescription(Stack[-1])
0x2c0: Pop(1)
0x2c1: PushEmpty(string)
0x2c2: Call2 0xcde

0x2c3: Pop(0)
0x2c4: @@ SetPhoto(Stack[-1])
0x2c5: Pop(1)
0x2c6: PushEmpty(string)
0x2c7: Call2 0xce0

0x2c8: Pop(0)
0x2c9: @@ SetPhoto2(Stack[-1])
0x2ca: Pop(1)
0x2cb: PushEmpty(int)
0x2cc: Call2 0xe64

0x2cd: Pop(0)
0x2ce: @@ SetPlayerName(Stack[-1])
0x2cf: Pop(1)
0x2d0: Stack[-2] = (int) -1
0x2d1: @ IsOverrideActive(Stack[-3])
0x2d2: Pop(0)
0x2d3: Push(Stack[-3])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: Stack[-10] = (int) -2
0x2d6: Return(); Pop(8)

0x2d7: @ DoDialog(Stack[-4])
0x2d8: Pop(0)
0x2d9: PushEmpty(bool, object)
0x2da: PushEmpty(object)
0x2db: Call2 0xc9e

0x2dc: Stack[-2] = Stack[-1]
0x2dd: Pop(1)
0x2de: Call2 0xbdf

0x2df: Pop(2)
0x2e0: PushEmpty(object, object)
0x2e1: Stack[-2] = Stack[-11]
0x2e2: Stack[-1] = Stack[-6]
0x2e3: Push(-2, 4); TaskCall(3)
0x2e4: Call2 0x2fb

0x2e5: Pop(-2, 4); TaskReturn
0x2e6: Pop(2)
0x2e7: @@ IsDialogEnd(Stack[-1])
0x2e8: Pop(0)
0x2e9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: @ sync()
0x2ec: Pop(0)
0x2ed: @@ IsDialogEnd(Stack[-1])
0x2ee: Pop(0)
0x2ef: GOTO 0x2e9

0x2f0: PushEmpty(object)
0x2f1: Stack[-1] = Stack[-10]
0x2f2: Call2 0xbce

0x2f3: Pop(1)
0x2f4: @ StopDialog(Stack[-4])
0x2f5: Pop(0)
0x2f6: @@ GetReturnValue(Stack[-2])
0x2f7: Pop(0)
0x2f8: Stack[-10] = Stack[-2]
0x2f9: Return(); Pop(8)

0x2fa: Stack[-4] = 0
0x2fb: PushEmpty()
0x2fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2fd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2fe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ff: Push((int) 1)
0x300: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call2 0x335

0x304: Pop(1)
0x305: Push((int) 525519)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: Push((int) 525520)
0x30b: Push((int) 30224)
0x30c: Push((int) 26876)
0x30d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: Push((int) 528815)
0x310: Push((int) 30230)
0x311: Push((int) 30229)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: GOTO 0x317

0x315: Return(); Pop(0)

0x316: GOTO 0x2ff

0x317: PushEmpty(bool)
0x318: Call2 0xce2

0x319: Pop(0)
0x31a: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31b: @ lshWaitForAnimEnd()
0x31c: Pop(0)
0x31d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: GOTO 0x325

0x320: PushEmpty(string)
0x321: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x322: Call2 0xc69

0x323: Pop(1)
0x324: GOTO 0x31b

0x325: GOTO 0x334

0x326: Push("all")
0x327: Push("idle")
0x328: @ PlayAnimation(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: @ WaitForAnimEnd()
0x32b: Pop(0)
0x32c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: GOTO 0x334

0x32f: Push("all")
0x330: Push("idle")
0x331: @ PlayAnimation(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: GOTO 0x32a

0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: PushEmpty(bool)
0x337: Call2 0xce2

0x338: Pop(0)
0x339: Pop(1); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: Return(); Pop(0)

0x33c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: Return(); Pop(0)

0x33f: PushEmpty(string, bool)
0x340: Stack[-2] = Stack[-3]
0x341: Push("")
0x342: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-1] = (bool) 0
0x345: GOTO 0x347

0x346: Stack[-1] = (bool) 1
0x347: Call2 0xc79

0x348: Pop(2)
0x349: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x34a: Return(); Pop(0)

0x34b: PushEmpty()
0x34c: Push((int) 1)
0x34d: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x34e: PushEmpty()
0x34f: Call2 0xc97

0x350: Pop(0)
0x351: Push((int) 26875)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x335

0x357: Pop(1)
0x358: Push((int) 525519)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 525520)
0x35e: Push((int) 30224)
0x35f: Push((int) 26876)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 528815)
0x363: Push((int) 30230)
0x364: Push((int) 30229)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 30230)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral"
0x36d: Call2 0x335

0x36e: Pop(1)
0x36f: Push((int) 528816)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 528817)
0x375: Push((int) 30224)
0x376: Push((int) 30231)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 30224)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral"
0x37f: Call2 0x335

0x380: Pop(1)
0x381: Push((int) 528810)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 528811)
0x387: Push((int) 30226)
0x388: Push((int) 30225)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 528818)
0x38c: Push((int) 30226)
0x38d: Push((int) 30233)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 30226)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral"
0x396: Call2 0x335

0x397: Pop(1)
0x398: Push((int) 528812)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 528813)
0x39e: Push((int) -1)
0x39f: Push((int) 30227)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Push((int) 528814)
0x3a3: Push((int) -1)
0x3a4: Push((int) 30228)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3a9: PushEmpty(bool)
0x3aa: Call2 0xce2

0x3ab: Pop(0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ad: @ lshStopAnimation()
0x3ae: Pop(0)
0x3af: GOTO 0x3b2

0x3b0: @ StopAnimation()
0x3b1: Pop(0)
0x3b2: Return(); Pop(0)

0x3b3: GOTO 0x34c

0x3b4: Return(); Pop(0)

0x3b5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3b7: PushEmpty(bool, object, float)
0x3b8: Stack[-2] = Stack[-12]
0x3b9: Stack[-1] = (float) 70.0
0x3ba: Call2 0xb8a

0x3bb: Pop(2)
0x3bc: Pop(1); Push((bool) Stack[-1] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-10] = (int) -2
0x3bf: Return(); Pop(8)

0x3c0: @ CreateDialog(Stack[-4])
0x3c1: Pop(0)
0x3c2: PushEmpty(int)
0x3c3: Call2 0xcdc

0x3c4: Pop(0)
0x3c5: @@ SetNPCName(Stack[-1])
0x3c6: Pop(1)
0x3c7: PushEmpty(int)
0x3c8: Call2 0xcda

0x3c9: Pop(0)
0x3ca: @@ SetNPCDescription(Stack[-1])
0x3cb: Pop(1)
0x3cc: PushEmpty(string)
0x3cd: Call2 0xcde

0x3ce: Pop(0)
0x3cf: @@ SetPhoto(Stack[-1])
0x3d0: Pop(1)
0x3d1: PushEmpty(string)
0x3d2: Call2 0xce0

0x3d3: Pop(0)
0x3d4: @@ SetPhoto2(Stack[-1])
0x3d5: Pop(1)
0x3d6: PushEmpty(int)
0x3d7: Call2 0xe64

0x3d8: Pop(0)
0x3d9: @@ SetPlayerName(Stack[-1])
0x3da: Pop(1)
0x3db: Stack[-2] = (int) -1
0x3dc: @ IsOverrideActive(Stack[-3])
0x3dd: Pop(0)
0x3de: Push(Stack[-3])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-10] = (int) -2
0x3e1: Return(); Pop(8)

0x3e2: @ DoDialog(Stack[-4])
0x3e3: Pop(0)
0x3e4: PushEmpty(bool, object)
0x3e5: PushEmpty(object)
0x3e6: Call2 0xc9e

0x3e7: Stack[-2] = Stack[-1]
0x3e8: Pop(1)
0x3e9: Call2 0xbdf

0x3ea: Pop(2)
0x3eb: PushEmpty(object, object)
0x3ec: Stack[-2] = Stack[-11]
0x3ed: Stack[-1] = Stack[-6]
0x3ee: Push(-2, 4); TaskCall(5)
0x3ef: Call2 0x406

0x3f0: Pop(-2, 4); TaskReturn
0x3f1: Pop(2)
0x3f2: @@ IsDialogEnd(Stack[-1])
0x3f3: Pop(0)
0x3f4: Pop(0); Push((bool) Stack[-1] == 0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f6: @ sync()
0x3f7: Pop(0)
0x3f8: @@ IsDialogEnd(Stack[-1])
0x3f9: Pop(0)
0x3fa: GOTO 0x3f4

0x3fb: PushEmpty(object)
0x3fc: Stack[-1] = Stack[-10]
0x3fd: Call2 0xbce

0x3fe: Pop(1)
0x3ff: @ StopDialog(Stack[-4])
0x400: Pop(0)
0x401: @@ GetReturnValue(Stack[-2])
0x402: Pop(0)
0x403: Stack[-10] = Stack[-2]
0x404: Return(); Pop(8)

0x405: Stack[-4] = 0
0x406: PushEmpty()
0x407: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x408: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x409: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x40a: Push((int) 1)
0x40b: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Fear"
0x40e: Call2 0x457

0x40f: Pop(1)
0x410: Push((int) 526091)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: PushEmpty(bool)
0x416: Stack[-1] = (bool) 0
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: PushEmpty(bool, object)
0x41a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41b: Call2 0xd64

0x41c: Pop(1)
0x41d: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41e: PushEmpty(bool, object)
0x41f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x420: Call2 0xd70

0x421: Pop(1)
0x422: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x423: Stack[-1] = (bool) 1
0x424: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x425: PushEmpty(bool, object)
0x426: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x427: Call2 0xd7c

0x428: Pop(1)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Stack[-1] = (bool) 1
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: Push((int) 526092)
0x42d: Push((int) 27379)
0x42e: Push((int) 27378)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Push((int) 526095)
0x432: Push((int) -1)
0x433: Push((int) 27381)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: GOTO 0x439

0x437: Return(); Pop(0)

0x438: GOTO 0x40a

0x439: PushEmpty(bool)
0x43a: Call2 0xce2

0x43b: Pop(0)
0x43c: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43d: @ lshWaitForAnimEnd()
0x43e: Pop(0)
0x43f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x447

0x442: PushEmpty(string)
0x443: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x444: Call2 0xc69

0x445: Pop(1)
0x446: GOTO 0x43d

0x447: GOTO 0x456

0x448: Push("all")
0x449: Push("idle")
0x44a: @ PlayAnimation(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: @ WaitForAnimEnd()
0x44d: Pop(0)
0x44e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: GOTO 0x456

0x451: Push("all")
0x452: Push("idle")
0x453: @ PlayAnimation(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: GOTO 0x44c

0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(bool)
0x459: Call2 0xce2

0x45a: Pop(0)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Return(); Pop(0)

0x45e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Return(); Pop(0)

0x461: PushEmpty(string, bool)
0x462: Stack[-2] = Stack[-3]
0x463: Push("")
0x464: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-1] = (bool) 0
0x467: GOTO 0x469

0x468: Stack[-1] = (bool) 1
0x469: Call2 0xc79

0x46a: Pop(2)
0x46b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: Push((int) 1)
0x46f: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x470: PushEmpty()
0x471: Call2 0xc97

0x472: Pop(0)
0x473: Push((int) 27378)
0x474: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: PushEmpty(object, object)
0x477: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0xcf6

0x47a: Pop(2)
0x47b: Push((int) 27380)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: PushEmpty(object, object)
0x47f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x480: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x481: Call2 0xcfc

0x482: Pop(2)
0x483: Push((int) 43716)
0x484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x486: PushEmpty(object, object)
0x487: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call2 0xcfc

0x48a: Pop(2)
0x48b: Push((int) 27377)
0x48c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x48e: PushEmpty(string)
0x48f: Stack[-1] = "Fear"
0x490: Call2 0x457

0x491: Pop(1)
0x492: Push((int) 526091)
0x493: @@ SetMessage(Stack[-1])
0x494: Pop(1)
0x495: @@ ClearReplies()
0x496: Pop(0)
0x497: PushEmpty(bool)
0x498: Stack[-1] = (bool) 0
0x499: PushEmpty(bool)
0x49a: Stack[-1] = (bool) 0
0x49b: PushEmpty(bool, object)
0x49c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49d: Call2 0xd64

0x49e: Pop(1)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a0: PushEmpty(bool, object)
0x4a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a2: Call2 0xd70

0x4a3: Pop(1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: Stack[-1] = (bool) 1
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a7: PushEmpty(bool, object)
0x4a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a9: Call2 0xd7c

0x4aa: Pop(1)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: Stack[-1] = (bool) 1
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: Push((int) 526092)
0x4af: Push((int) 27379)
0x4b0: Push((int) 27378)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Push((int) 526095)
0x4b4: Push((int) -1)
0x4b5: Push((int) 27381)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Return(); Pop(0)

0x4b9: Push((int) 27379)
0x4ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "Grin"
0x4be: Call2 0x457

0x4bf: Pop(1)
0x4c0: Push((int) 526093)
0x4c1: @@ SetMessage(Stack[-1])
0x4c2: Pop(1)
0x4c3: @@ ClearReplies()
0x4c4: Pop(0)
0x4c5: Push((int) 528804)
0x4c6: Push((int) 30219)
0x4c7: Push((int) 30218)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: Push((int) 30219)
0x4cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Grin"
0x4d0: Call2 0x457

0x4d1: Pop(1)
0x4d2: Push((int) 528805)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: Push((int) 528806)
0x4d8: Push((int) 30222)
0x4d9: Push((int) 30220)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Push((int) 528807)
0x4dd: Push((int) 30222)
0x4de: Push((int) 30221)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 30222)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Strange"
0x4e7: Call2 0x457

0x4e8: Pop(1)
0x4e9: Push((int) 528808)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 526094)
0x4ef: Push((int) -1)
0x4f0: Push((int) 27380)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Push((int) 541550)
0x4f4: Push((int) -1)
0x4f5: Push((int) 43716)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4fa: PushEmpty(bool)
0x4fb: Call2 0xce2

0x4fc: Pop(0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fe: @ lshStopAnimation()
0x4ff: Pop(0)
0x500: GOTO 0x503

0x501: @ StopAnimation()
0x502: Pop(0)
0x503: Return(); Pop(0)

0x504: GOTO 0x46e

0x505: Return(); Pop(0)

0x506: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x507: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x508: PushEmpty(bool, object, float)
0x509: Stack[-2] = Stack[-12]
0x50a: Stack[-1] = (float) 70.0
0x50b: Call2 0xb8a

0x50c: Pop(2)
0x50d: Pop(1); Push((bool) Stack[-1] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: Stack[-10] = (int) -2
0x510: Return(); Pop(8)

0x511: @ CreateDialog(Stack[-4])
0x512: Pop(0)
0x513: PushEmpty(int)
0x514: Call2 0xcdc

0x515: Pop(0)
0x516: @@ SetNPCName(Stack[-1])
0x517: Pop(1)
0x518: PushEmpty(int)
0x519: Call2 0xcda

0x51a: Pop(0)
0x51b: @@ SetNPCDescription(Stack[-1])
0x51c: Pop(1)
0x51d: PushEmpty(string)
0x51e: Call2 0xcde

0x51f: Pop(0)
0x520: @@ SetPhoto(Stack[-1])
0x521: Pop(1)
0x522: PushEmpty(string)
0x523: Call2 0xce0

0x524: Pop(0)
0x525: @@ SetPhoto2(Stack[-1])
0x526: Pop(1)
0x527: PushEmpty(int)
0x528: Call2 0xe64

0x529: Pop(0)
0x52a: @@ SetPlayerName(Stack[-1])
0x52b: Pop(1)
0x52c: Stack[-2] = (int) -1
0x52d: @ IsOverrideActive(Stack[-3])
0x52e: Pop(0)
0x52f: Push(Stack[-3])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-10] = (int) -2
0x532: Return(); Pop(8)

0x533: @ DoDialog(Stack[-4])
0x534: Pop(0)
0x535: PushEmpty(bool, object)
0x536: PushEmpty(object)
0x537: Call2 0xc9e

0x538: Stack[-2] = Stack[-1]
0x539: Pop(1)
0x53a: Call2 0xbdf

0x53b: Pop(2)
0x53c: PushEmpty(object, object)
0x53d: Stack[-2] = Stack[-11]
0x53e: Stack[-1] = Stack[-6]
0x53f: Push(-2, 4); TaskCall(7)
0x540: Call2 0x557

0x541: Pop(-2, 4); TaskReturn
0x542: Pop(2)
0x543: @@ IsDialogEnd(Stack[-1])
0x544: Pop(0)
0x545: Pop(0); Push((bool) Stack[-1] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x547: @ sync()
0x548: Pop(0)
0x549: @@ IsDialogEnd(Stack[-1])
0x54a: Pop(0)
0x54b: GOTO 0x545

0x54c: PushEmpty(object)
0x54d: Stack[-1] = Stack[-10]
0x54e: Call2 0xbce

0x54f: Pop(1)
0x550: @ StopDialog(Stack[-4])
0x551: Pop(0)
0x552: @@ GetReturnValue(Stack[-2])
0x553: Pop(0)
0x554: Stack[-10] = Stack[-2]
0x555: Return(); Pop(8)

0x556: Stack[-4] = 0
0x557: PushEmpty()
0x558: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x559: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x55a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55b: Push((int) 1)
0x55c: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x55d: PushEmpty(string)
0x55e: Stack[-1] = "Neutral"
0x55f: Call2 0x59b

0x560: Pop(1)
0x561: Push((int) 526441)
0x562: @@ SetMessage(Stack[-1])
0x563: Pop(1)
0x564: @@ ClearReplies()
0x565: Pop(0)
0x566: PushEmpty(bool, object)
0x567: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x568: Call2 0xd88

0x569: Pop(1)
0x56a: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56b: Push((int) 526442)
0x56c: Push((int) 27718)
0x56d: Push((int) 27717)
0x56e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56f: Pop(3)
0x570: Push((int) 526449)
0x571: Push((int) -1)
0x572: Push((int) 27724)
0x573: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x574: Pop(3)
0x575: Push((int) 528982)
0x576: Push((int) -1)
0x577: Push((int) 30419)
0x578: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x579: Pop(3)
0x57a: GOTO 0x57d

0x57b: Return(); Pop(0)

0x57c: GOTO 0x55b

0x57d: PushEmpty(bool)
0x57e: Call2 0xce2

0x57f: Pop(0)
0x580: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x581: @ lshWaitForAnimEnd()
0x582: Pop(0)
0x583: Push( Stack[3 + Tasks[-1].StackPointer] )
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: GOTO 0x58b

0x586: PushEmpty(string)
0x587: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x588: Call2 0xc69

0x589: Pop(1)
0x58a: GOTO 0x581

0x58b: GOTO 0x59a

0x58c: Push("all")
0x58d: Push("idle")
0x58e: @ PlayAnimation(Stack[-2], Stack[-1])
0x58f: Pop(2)
0x590: @ WaitForAnimEnd()
0x591: Pop(0)
0x592: Push( Stack[3 + Tasks[-1].StackPointer] )
0x593: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x594: GOTO 0x59a

0x595: Push("all")
0x596: Push("idle")
0x597: @ PlayAnimation(Stack[-2], Stack[-1])
0x598: Pop(2)
0x599: GOTO 0x590

0x59a: Return(); Pop(0)

0x59b: PushEmpty()
0x59c: PushEmpty(bool)
0x59d: Call2 0xce2

0x59e: Pop(0)
0x59f: Pop(1); Push((bool) Stack[-1] == 0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Return(); Pop(0)

0x5a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a4: Return(); Pop(0)

0x5a5: PushEmpty(string, bool)
0x5a6: Stack[-2] = Stack[-3]
0x5a7: Push("")
0x5a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-1] = (bool) 0
0x5ab: GOTO 0x5ad

0x5ac: Stack[-1] = (bool) 1
0x5ad: Call2 0xc79

0x5ae: Pop(2)
0x5af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty()
0x5b2: Push((int) 1)
0x5b3: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x5b4: PushEmpty()
0x5b5: Call2 0xc97

0x5b6: Pop(0)
0x5b7: Push((int) 30428)
0x5b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ba: PushEmpty(object, object)
0x5bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bd: Call2 0xd01

0x5be: Pop(2)
0x5bf: Push((int) 30433)
0x5c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c2: PushEmpty(object, object)
0x5c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c5: Call2 0xd01

0x5c6: Pop(2)
0x5c7: Push((int) 27723)
0x5c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ca: PushEmpty(object, object)
0x5cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5cd: Call2 0xd01

0x5ce: Pop(2)
0x5cf: Push((int) 27716)
0x5d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral"
0x5d4: Call2 0x59b

0x5d5: Pop(1)
0x5d6: Push((int) 526441)
0x5d7: @@ SetMessage(Stack[-1])
0x5d8: Pop(1)
0x5d9: @@ ClearReplies()
0x5da: Pop(0)
0x5db: PushEmpty(bool, object)
0x5dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5dd: Call2 0xd88

0x5de: Pop(1)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: Push((int) 526442)
0x5e1: Push((int) 27718)
0x5e2: Push((int) 27717)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Push((int) 526449)
0x5e6: Push((int) -1)
0x5e7: Push((int) 27724)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push((int) 528982)
0x5eb: Push((int) -1)
0x5ec: Push((int) 30419)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Return(); Pop(0)

0x5f0: Push((int) 27718)
0x5f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f2: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5f3: PushEmpty(string)
0x5f4: Stack[-1] = "Neutral"
0x5f5: Call2 0x59b

0x5f6: Pop(1)
0x5f7: Push((int) 526443)
0x5f8: @@ SetMessage(Stack[-1])
0x5f9: Pop(1)
0x5fa: @@ ClearReplies()
0x5fb: Pop(0)
0x5fc: Push((int) 528983)
0x5fd: Push((int) 30421)
0x5fe: Push((int) 30420)
0x5ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: Return(); Pop(0)

0x602: Push((int) 30421)
0x603: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x605: PushEmpty(string)
0x606: Stack[-1] = "Grimacing"
0x607: Call2 0x59b

0x608: Pop(1)
0x609: Push((int) 528984)
0x60a: @@ SetMessage(Stack[-1])
0x60b: Pop(1)
0x60c: @@ ClearReplies()
0x60d: Pop(0)
0x60e: Push((int) 528985)
0x60f: Push((int) 30423)
0x610: Push((int) 30422)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Return(); Pop(0)

0x614: Push((int) 30423)
0x615: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x617: PushEmpty(string)
0x618: Stack[-1] = "Neutral"
0x619: Call2 0x59b

0x61a: Pop(1)
0x61b: Push((int) 528986)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: Push((int) 526444)
0x621: Push((int) 27720)
0x622: Push((int) 27719)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Return(); Pop(0)

0x626: Push((int) 27720)
0x627: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x629: PushEmpty(string)
0x62a: Stack[-1] = "Strange"
0x62b: Call2 0x59b

0x62c: Pop(1)
0x62d: Push((int) 526445)
0x62e: @@ SetMessage(Stack[-1])
0x62f: Pop(1)
0x630: @@ ClearReplies()
0x631: Pop(0)
0x632: Push((int) 526446)
0x633: Push((int) 27722)
0x634: Push((int) 27721)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Return(); Pop(0)

0x638: Push((int) 27722)
0x639: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = "Strange"
0x63d: Call2 0x59b

0x63e: Pop(1)
0x63f: Push((int) 526447)
0x640: @@ SetMessage(Stack[-1])
0x641: Pop(1)
0x642: @@ ClearReplies()
0x643: Pop(0)
0x644: Push((int) 528987)
0x645: Push((int) 30425)
0x646: Push((int) 30424)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Push((int) 526448)
0x64a: Push((int) -1)
0x64b: Push((int) 27723)
0x64c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(3)
0x64e: Return(); Pop(0)

0x64f: Push((int) 30425)
0x650: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x652: PushEmpty(string)
0x653: Stack[-1] = "Neutral"
0x654: Call2 0x59b

0x655: Pop(1)
0x656: Push((int) 528988)
0x657: @@ SetMessage(Stack[-1])
0x658: Pop(1)
0x659: @@ ClearReplies()
0x65a: Pop(0)
0x65b: Push((int) 528989)
0x65c: Push((int) 30427)
0x65d: Push((int) 30426)
0x65e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: Return(); Pop(0)

0x661: Push((int) 30427)
0x662: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x664: PushEmpty(string)
0x665: Stack[-1] = "Neutral"
0x666: Call2 0x59b

0x667: Pop(1)
0x668: Push((int) 528990)
0x669: @@ SetMessage(Stack[-1])
0x66a: Pop(1)
0x66b: @@ ClearReplies()
0x66c: Pop(0)
0x66d: Push((int) 528991)
0x66e: Push((int) -1)
0x66f: Push((int) 30428)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Push((int) 528992)
0x673: Push((int) 30430)
0x674: Push((int) 30429)
0x675: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x676: Pop(3)
0x677: Return(); Pop(0)

0x678: Push((int) 30430)
0x679: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x67b: PushEmpty(string)
0x67c: Stack[-1] = "Neutral"
0x67d: Call2 0x59b

0x67e: Pop(1)
0x67f: Push((int) 528993)
0x680: @@ SetMessage(Stack[-1])
0x681: Pop(1)
0x682: @@ ClearReplies()
0x683: Pop(0)
0x684: Push((int) 528994)
0x685: Push((int) 30432)
0x686: Push((int) 30431)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Return(); Pop(0)

0x68a: Push((int) 30432)
0x68b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x68d: PushEmpty(string)
0x68e: Stack[-1] = "Neutral"
0x68f: Call2 0x59b

0x690: Pop(1)
0x691: Push((int) 528995)
0x692: @@ SetMessage(Stack[-1])
0x693: Pop(1)
0x694: @@ ClearReplies()
0x695: Pop(0)
0x696: Push((int) 528996)
0x697: Push((int) -1)
0x698: Push((int) 30433)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Return(); Pop(0)

0x69c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x69d: PushEmpty(bool)
0x69e: Call2 0xce2

0x69f: Pop(0)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a1: @ lshStopAnimation()
0x6a2: Pop(0)
0x6a3: GOTO 0x6a6

0x6a4: @ StopAnimation()
0x6a5: Pop(0)
0x6a6: Return(); Pop(0)

0x6a7: GOTO 0x5b2

0x6a8: Return(); Pop(0)

0x6a9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6aa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6ab: PushEmpty(bool, object, float)
0x6ac: Stack[-2] = Stack[-12]
0x6ad: Stack[-1] = (float) 70.0
0x6ae: Call2 0xb8a

0x6af: Pop(2)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b2: Stack[-10] = (int) -2
0x6b3: Return(); Pop(8)

0x6b4: @ CreateDialog(Stack[-4])
0x6b5: Pop(0)
0x6b6: PushEmpty(int)
0x6b7: Call2 0xcdc

0x6b8: Pop(0)
0x6b9: @@ SetNPCName(Stack[-1])
0x6ba: Pop(1)
0x6bb: PushEmpty(int)
0x6bc: Call2 0xcda

0x6bd: Pop(0)
0x6be: @@ SetNPCDescription(Stack[-1])
0x6bf: Pop(1)
0x6c0: PushEmpty(string)
0x6c1: Call2 0xcde

0x6c2: Pop(0)
0x6c3: @@ SetPhoto(Stack[-1])
0x6c4: Pop(1)
0x6c5: PushEmpty(string)
0x6c6: Call2 0xce0

0x6c7: Pop(0)
0x6c8: @@ SetPhoto2(Stack[-1])
0x6c9: Pop(1)
0x6ca: PushEmpty(int)
0x6cb: Call2 0xe64

0x6cc: Pop(0)
0x6cd: @@ SetPlayerName(Stack[-1])
0x6ce: Pop(1)
0x6cf: Stack[-2] = (int) -1
0x6d0: @ IsOverrideActive(Stack[-3])
0x6d1: Pop(0)
0x6d2: Push(Stack[-3])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: Stack[-10] = (int) -2
0x6d5: Return(); Pop(8)

0x6d6: @ DoDialog(Stack[-4])
0x6d7: Pop(0)
0x6d8: PushEmpty(bool, object)
0x6d9: PushEmpty(object)
0x6da: Call2 0xc9e

0x6db: Stack[-2] = Stack[-1]
0x6dc: Pop(1)
0x6dd: Call2 0xbdf

0x6de: Pop(2)
0x6df: PushEmpty(object, object)
0x6e0: Stack[-2] = Stack[-11]
0x6e1: Stack[-1] = Stack[-6]
0x6e2: Push(-2, 4); TaskCall(9)
0x6e3: Call2 0x6fa

0x6e4: Pop(-2, 4); TaskReturn
0x6e5: Pop(2)
0x6e6: @@ IsDialogEnd(Stack[-1])
0x6e7: Pop(0)
0x6e8: Pop(0); Push((bool) Stack[-1] == 0)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ea: @ sync()
0x6eb: Pop(0)
0x6ec: @@ IsDialogEnd(Stack[-1])
0x6ed: Pop(0)
0x6ee: GOTO 0x6e8

0x6ef: PushEmpty(object)
0x6f0: Stack[-1] = Stack[-10]
0x6f1: Call2 0xbce

0x6f2: Pop(1)
0x6f3: @ StopDialog(Stack[-4])
0x6f4: Pop(0)
0x6f5: @@ GetReturnValue(Stack[-2])
0x6f6: Pop(0)
0x6f7: Stack[-10] = Stack[-2]
0x6f8: Return(); Pop(8)

0x6f9: Stack[-4] = 0
0x6fa: PushEmpty()
0x6fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6fc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6fd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6fe: Push((int) 1)
0x6ff: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x700: PushEmpty(string)
0x701: Stack[-1] = "Neutral"
0x702: Call2 0x742

0x703: Pop(1)
0x704: Push((int) 527613)
0x705: @@ SetMessage(Stack[-1])
0x706: Pop(1)
0x707: @@ ClearReplies()
0x708: Pop(0)
0x709: PushEmpty(bool)
0x70a: Stack[-1] = (bool) 0
0x70b: PushEmpty(bool, object)
0x70c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70d: Call2 0xda0

0x70e: Pop(1)
0x70f: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x710: PushEmpty(bool, object)
0x711: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x712: Call2 0xd94

0x713: Pop(1)
0x714: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x715: Stack[-1] = (bool) 1
0x716: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x717: Push((int) 527615)
0x718: Push((int) 28961)
0x719: Push((int) 28960)
0x71a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71b: Pop(3)
0x71c: Push((int) 527614)
0x71d: Push((int) -1)
0x71e: Push((int) 28959)
0x71f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x720: Pop(3)
0x721: GOTO 0x724

0x722: Return(); Pop(0)

0x723: GOTO 0x6fe

0x724: PushEmpty(bool)
0x725: Call2 0xce2

0x726: Pop(0)
0x727: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x728: @ lshWaitForAnimEnd()
0x729: Pop(0)
0x72a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72b: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72c: GOTO 0x732

0x72d: PushEmpty(string)
0x72e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x72f: Call2 0xc69

0x730: Pop(1)
0x731: GOTO 0x728

0x732: GOTO 0x741

0x733: Push("all")
0x734: Push("idle")
0x735: @ PlayAnimation(Stack[-2], Stack[-1])
0x736: Pop(2)
0x737: @ WaitForAnimEnd()
0x738: Pop(0)
0x739: Push( Stack[3 + Tasks[-1].StackPointer] )
0x73a: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73b: GOTO 0x741

0x73c: Push("all")
0x73d: Push("idle")
0x73e: @ PlayAnimation(Stack[-2], Stack[-1])
0x73f: Pop(2)
0x740: GOTO 0x737

0x741: Return(); Pop(0)

0x742: PushEmpty()
0x743: PushEmpty(bool)
0x744: Call2 0xce2

0x745: Pop(0)
0x746: Pop(1); Push((bool) Stack[-1] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x748: Return(); Pop(0)

0x749: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Return(); Pop(0)

0x74c: PushEmpty(string, bool)
0x74d: Stack[-2] = Stack[-3]
0x74e: Push("")
0x74f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x751: Stack[-1] = (bool) 0
0x752: GOTO 0x754

0x753: Stack[-1] = (bool) 1
0x754: Call2 0xc79

0x755: Pop(2)
0x756: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x757: Return(); Pop(0)

0x758: PushEmpty()
0x759: Push((int) 1)
0x75a: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x75b: PushEmpty()
0x75c: Call2 0xc97

0x75d: Pop(0)
0x75e: Push((int) 28960)
0x75f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x761: PushEmpty(object, object)
0x762: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x763: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x764: Call2 0xd3d

0x765: Pop(2)
0x766: Push((int) 28972)
0x767: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x769: PushEmpty(object, object)
0x76a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76c: Call2 0xd0a

0x76d: Pop(2)
0x76e: Push((int) 28958)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x771: PushEmpty(string)
0x772: Stack[-1] = "Neutral"
0x773: Call2 0x742

0x774: Pop(1)
0x775: Push((int) 527613)
0x776: @@ SetMessage(Stack[-1])
0x777: Pop(1)
0x778: @@ ClearReplies()
0x779: Pop(0)
0x77a: PushEmpty(bool)
0x77b: Stack[-1] = (bool) 0
0x77c: PushEmpty(bool, object)
0x77d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Call2 0xda0

0x77f: Pop(1)
0x780: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x781: PushEmpty(bool, object)
0x782: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x783: Call2 0xd94

0x784: Pop(1)
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: Stack[-1] = (bool) 1
0x787: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x788: Push((int) 527615)
0x789: Push((int) 28961)
0x78a: Push((int) 28960)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Push((int) 527614)
0x78e: Push((int) -1)
0x78f: Push((int) 28959)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 28961)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Strange"
0x798: Call2 0x742

0x799: Pop(1)
0x79a: Push((int) 527616)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 527631)
0x7a0: Push((int) 28978)
0x7a1: Push((int) 28977)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 28978)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Strange"
0x7aa: Call2 0x742

0x7ab: Pop(1)
0x7ac: Push((int) 527632)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 527617)
0x7b2: Push((int) 28963)
0x7b3: Push((int) 28962)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Push((int) 527628)
0x7b7: Push((int) 28974)
0x7b8: Push((int) 28973)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Return(); Pop(0)

0x7bc: Push((int) 28974)
0x7bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7bf: PushEmpty(string)
0x7c0: Stack[-1] = "Grimacing"
0x7c1: Call2 0x742

0x7c2: Pop(1)
0x7c3: Push((int) 527629)
0x7c4: @@ SetMessage(Stack[-1])
0x7c5: Pop(1)
0x7c6: @@ ClearReplies()
0x7c7: Pop(0)
0x7c8: Push((int) 527633)
0x7c9: Push((int) 28980)
0x7ca: Push((int) 28979)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: Return(); Pop(0)

0x7ce: Push((int) 28980)
0x7cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d1: PushEmpty(string)
0x7d2: Stack[-1] = "Grimacing"
0x7d3: Call2 0x742

0x7d4: Pop(1)
0x7d5: Push((int) 527634)
0x7d6: @@ SetMessage(Stack[-1])
0x7d7: Pop(1)
0x7d8: @@ ClearReplies()
0x7d9: Pop(0)
0x7da: Push((int) 527630)
0x7db: Push((int) 28965)
0x7dc: Push((int) 28975)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Return(); Pop(0)

0x7e0: Push((int) 28963)
0x7e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7e3: PushEmpty(string)
0x7e4: Stack[-1] = "Neutral"
0x7e5: Call2 0x742

0x7e6: Pop(1)
0x7e7: Push((int) 527618)
0x7e8: @@ SetMessage(Stack[-1])
0x7e9: Pop(1)
0x7ea: @@ ClearReplies()
0x7eb: Pop(0)
0x7ec: Push((int) 527619)
0x7ed: Push((int) 28965)
0x7ee: Push((int) 28964)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: Return(); Pop(0)

0x7f2: Push((int) 28965)
0x7f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7f5: PushEmpty(string)
0x7f6: Stack[-1] = "Neutral"
0x7f7: Call2 0x742

0x7f8: Pop(1)
0x7f9: Push((int) 527620)
0x7fa: @@ SetMessage(Stack[-1])
0x7fb: Pop(1)
0x7fc: @@ ClearReplies()
0x7fd: Pop(0)
0x7fe: Push((int) 527621)
0x7ff: Push((int) 28967)
0x800: Push((int) 28966)
0x801: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: Return(); Pop(0)

0x804: Push((int) 28967)
0x805: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x807: PushEmpty(string)
0x808: Stack[-1] = "Neutral"
0x809: Call2 0x742

0x80a: Pop(1)
0x80b: Push((int) 527622)
0x80c: @@ SetMessage(Stack[-1])
0x80d: Pop(1)
0x80e: @@ ClearReplies()
0x80f: Pop(0)
0x810: Push((int) 527623)
0x811: Push((int) 28969)
0x812: Push((int) 28968)
0x813: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x814: Pop(3)
0x815: Return(); Pop(0)

0x816: Push((int) 28969)
0x817: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x819: PushEmpty(string)
0x81a: Stack[-1] = "Neutral"
0x81b: Call2 0x742

0x81c: Pop(1)
0x81d: Push((int) 527624)
0x81e: @@ SetMessage(Stack[-1])
0x81f: Pop(1)
0x820: @@ ClearReplies()
0x821: Pop(0)
0x822: Push((int) 527625)
0x823: Push((int) 28971)
0x824: Push((int) 28970)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Push((int) 527635)
0x828: Push((int) 28982)
0x829: Push((int) 28981)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: Push((int) 28982)
0x82e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Grimacing"
0x832: Call2 0x742

0x833: Pop(1)
0x834: Push((int) 527636)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: Push((int) 527637)
0x83a: Push((int) 28971)
0x83b: Push((int) 28983)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Return(); Pop(0)

0x83f: Push((int) 28971)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call2 0x742

0x845: Pop(1)
0x846: Push((int) 527626)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 527627)
0x84c: Push((int) -1)
0x84d: Push((int) 28972)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Return(); Pop(0)

0x851: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x852: PushEmpty(bool)
0x853: Call2 0xce2

0x854: Pop(0)
0x855: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x856: @ lshStopAnimation()
0x857: Pop(0)
0x858: GOTO 0x85b

0x859: @ StopAnimation()
0x85a: Pop(0)
0x85b: Return(); Pop(0)

0x85c: GOTO 0x759

0x85d: Return(); Pop(0)

0x85e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x85f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x860: PushEmpty(bool, object, float)
0x861: Stack[-2] = Stack[-12]
0x862: Stack[-1] = (float) 70.0
0x863: Call2 0xb8a

0x864: Pop(2)
0x865: Pop(1); Push((bool) Stack[-1] == 0)
0x866: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x867: Stack[-10] = (int) -2
0x868: Return(); Pop(8)

0x869: @ CreateDialog(Stack[-4])
0x86a: Pop(0)
0x86b: PushEmpty(int)
0x86c: Call2 0xcdc

0x86d: Pop(0)
0x86e: @@ SetNPCName(Stack[-1])
0x86f: Pop(1)
0x870: PushEmpty(int)
0x871: Call2 0xcda

0x872: Pop(0)
0x873: @@ SetNPCDescription(Stack[-1])
0x874: Pop(1)
0x875: PushEmpty(string)
0x876: Call2 0xcde

0x877: Pop(0)
0x878: @@ SetPhoto(Stack[-1])
0x879: Pop(1)
0x87a: PushEmpty(string)
0x87b: Call2 0xce0

0x87c: Pop(0)
0x87d: @@ SetPhoto2(Stack[-1])
0x87e: Pop(1)
0x87f: PushEmpty(int)
0x880: Call2 0xe64

0x881: Pop(0)
0x882: @@ SetPlayerName(Stack[-1])
0x883: Pop(1)
0x884: Stack[-2] = (int) -1
0x885: @ IsOverrideActive(Stack[-3])
0x886: Pop(0)
0x887: Push(Stack[-3])
0x888: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x889: Stack[-10] = (int) -2
0x88a: Return(); Pop(8)

0x88b: @ DoDialog(Stack[-4])
0x88c: Pop(0)
0x88d: PushEmpty(bool, object)
0x88e: PushEmpty(object)
0x88f: Call2 0xc9e

0x890: Stack[-2] = Stack[-1]
0x891: Pop(1)
0x892: Call2 0xbdf

0x893: Pop(2)
0x894: PushEmpty(object, object)
0x895: Stack[-2] = Stack[-11]
0x896: Stack[-1] = Stack[-6]
0x897: Push(-2, 4); TaskCall(11)
0x898: Call2 0x8af

0x899: Pop(-2, 4); TaskReturn
0x89a: Pop(2)
0x89b: @@ IsDialogEnd(Stack[-1])
0x89c: Pop(0)
0x89d: Pop(0); Push((bool) Stack[-1] == 0)
0x89e: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89f: @ sync()
0x8a0: Pop(0)
0x8a1: @@ IsDialogEnd(Stack[-1])
0x8a2: Pop(0)
0x8a3: GOTO 0x89d

0x8a4: PushEmpty(object)
0x8a5: Stack[-1] = Stack[-10]
0x8a6: Call2 0xbce

0x8a7: Pop(1)
0x8a8: @ StopDialog(Stack[-4])
0x8a9: Pop(0)
0x8aa: @@ GetReturnValue(Stack[-2])
0x8ab: Pop(0)
0x8ac: Stack[-10] = Stack[-2]
0x8ad: Return(); Pop(8)

0x8ae: Stack[-4] = 0
0x8af: PushEmpty()
0x8b0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8b1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8b2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8b3: Push((int) 1)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8b5: PushEmpty(string)
0x8b6: Stack[-1] = "Neutral"
0x8b7: Call2 0x8ee

0x8b8: Pop(1)
0x8b9: Push((int) 539297)
0x8ba: @@ SetMessage(Stack[-1])
0x8bb: Pop(1)
0x8bc: @@ ClearReplies()
0x8bd: Pop(0)
0x8be: Push((int) 542655)
0x8bf: Push((int) 45059)
0x8c0: Push((int) 45057)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Push((int) 539298)
0x8c4: Push((int) -1)
0x8c5: Push((int) 41241)
0x8c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c7: Pop(3)
0x8c8: Push((int) 542656)
0x8c9: Push((int) -1)
0x8ca: Push((int) 45058)
0x8cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cc: Pop(3)
0x8cd: GOTO 0x8d0

0x8ce: Return(); Pop(0)

0x8cf: GOTO 0x8b3

0x8d0: PushEmpty(bool)
0x8d1: Call2 0xce2

0x8d2: Pop(0)
0x8d3: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d4: @ lshWaitForAnimEnd()
0x8d5: Pop(0)
0x8d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d7: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d8: GOTO 0x8de

0x8d9: PushEmpty(string)
0x8da: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8db: Call2 0xc69

0x8dc: Pop(1)
0x8dd: GOTO 0x8d4

0x8de: GOTO 0x8ed

0x8df: Push("all")
0x8e0: Push("idle")
0x8e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e2: Pop(2)
0x8e3: @ WaitForAnimEnd()
0x8e4: Pop(0)
0x8e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e7: GOTO 0x8ed

0x8e8: Push("all")
0x8e9: Push("idle")
0x8ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x8eb: Pop(2)
0x8ec: GOTO 0x8e3

0x8ed: Return(); Pop(0)

0x8ee: PushEmpty()
0x8ef: PushEmpty(bool)
0x8f0: Call2 0xce2

0x8f1: Pop(0)
0x8f2: Pop(1); Push((bool) Stack[-1] == 0)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f4: Return(); Pop(0)

0x8f5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f7: Return(); Pop(0)

0x8f8: PushEmpty(string, bool)
0x8f9: Stack[-2] = Stack[-3]
0x8fa: Push("")
0x8fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fd: Stack[-1] = (bool) 0
0x8fe: GOTO 0x900

0x8ff: Stack[-1] = (bool) 1
0x900: Call2 0xc79

0x901: Pop(2)
0x902: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x903: Return(); Pop(0)

0x904: PushEmpty()
0x905: Push((int) 1)
0x906: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x907: PushEmpty()
0x908: Call2 0xc97

0x909: Pop(0)
0x90a: Push((int) 41240)
0x90b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90c: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x90d: PushEmpty(string)
0x90e: Stack[-1] = "Neutral"
0x90f: Call2 0x8ee

0x910: Pop(1)
0x911: Push((int) 539297)
0x912: @@ SetMessage(Stack[-1])
0x913: Pop(1)
0x914: @@ ClearReplies()
0x915: Pop(0)
0x916: Push((int) 542655)
0x917: Push((int) 45059)
0x918: Push((int) 45057)
0x919: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91a: Pop(3)
0x91b: Push((int) 539298)
0x91c: Push((int) -1)
0x91d: Push((int) 41241)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Push((int) 542656)
0x921: Push((int) -1)
0x922: Push((int) 45058)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Return(); Pop(0)

0x926: Push((int) 45059)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x929: PushEmpty(string)
0x92a: Stack[-1] = "Neutral"
0x92b: Call2 0x8ee

0x92c: Pop(1)
0x92d: Push((int) 542657)
0x92e: @@ SetMessage(Stack[-1])
0x92f: Pop(1)
0x930: @@ ClearReplies()
0x931: Pop(0)
0x932: Push((int) 542658)
0x933: Push((int) 45061)
0x934: Push((int) 45060)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Push((int) 542662)
0x938: Push((int) 45063)
0x939: Push((int) 45064)
0x93a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(3)
0x93c: Return(); Pop(0)

0x93d: Push((int) 45061)
0x93e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x940: PushEmpty(string)
0x941: Stack[-1] = "Strange"
0x942: Call2 0x8ee

0x943: Pop(1)
0x944: Push((int) 542659)
0x945: @@ SetMessage(Stack[-1])
0x946: Pop(1)
0x947: @@ ClearReplies()
0x948: Pop(0)
0x949: Push((int) 542660)
0x94a: Push((int) 45063)
0x94b: Push((int) 45062)
0x94c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: Return(); Pop(0)

0x94f: Push((int) 45063)
0x950: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x952: PushEmpty(string)
0x953: Stack[-1] = "Strange"
0x954: Call2 0x8ee

0x955: Pop(1)
0x956: Push((int) 542661)
0x957: @@ SetMessage(Stack[-1])
0x958: Pop(1)
0x959: @@ ClearReplies()
0x95a: Pop(0)
0x95b: Push((int) 542663)
0x95c: Push((int) 45067)
0x95d: Push((int) 45065)
0x95e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95f: Pop(3)
0x960: Push((int) 542667)
0x961: Push((int) 45071)
0x962: Push((int) 45070)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: Return(); Pop(0)

0x966: Push((int) 45071)
0x967: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x968: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x969: PushEmpty(string)
0x96a: Stack[-1] = "Neutral"
0x96b: Call2 0x8ee

0x96c: Pop(1)
0x96d: Push((int) 542668)
0x96e: @@ SetMessage(Stack[-1])
0x96f: Pop(1)
0x970: @@ ClearReplies()
0x971: Pop(0)
0x972: Push((int) 542669)
0x973: Push((int) 45067)
0x974: Push((int) 45072)
0x975: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x976: Pop(3)
0x977: Return(); Pop(0)

0x978: Push((int) 45067)
0x979: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97a: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x97b: PushEmpty(string)
0x97c: Stack[-1] = "Neutral"
0x97d: Call2 0x8ee

0x97e: Pop(1)
0x97f: Push((int) 542664)
0x980: @@ SetMessage(Stack[-1])
0x981: Pop(1)
0x982: @@ ClearReplies()
0x983: Pop(0)
0x984: Push((int) 542665)
0x985: Push((int) -1)
0x986: Push((int) 45068)
0x987: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x988: Pop(3)
0x989: Push((int) 542666)
0x98a: Push((int) -1)
0x98b: Push((int) 45069)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: Return(); Pop(0)

0x98f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x990: PushEmpty(bool)
0x991: Call2 0xce2

0x992: Pop(0)
0x993: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x994: @ lshStopAnimation()
0x995: Pop(0)
0x996: GOTO 0x999

0x997: @ StopAnimation()
0x998: Pop(0)
0x999: Return(); Pop(0)

0x99a: GOTO 0x905

0x99b: Return(); Pop(0)

0x99c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x99d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x99e: PushEmpty(bool, object, float)
0x99f: Stack[-2] = Stack[-12]
0x9a0: Stack[-1] = (float) 70.0
0x9a1: Call2 0xb8a

0x9a2: Pop(2)
0x9a3: Pop(1); Push((bool) Stack[-1] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a5: Stack[-10] = (int) -2
0x9a6: Return(); Pop(8)

0x9a7: @ CreateDialog(Stack[-4])
0x9a8: Pop(0)
0x9a9: PushEmpty(int)
0x9aa: Call2 0xcdc

0x9ab: Pop(0)
0x9ac: @@ SetNPCName(Stack[-1])
0x9ad: Pop(1)
0x9ae: PushEmpty(int)
0x9af: Call2 0xcda

0x9b0: Pop(0)
0x9b1: @@ SetNPCDescription(Stack[-1])
0x9b2: Pop(1)
0x9b3: PushEmpty(string)
0x9b4: Call2 0xcde

0x9b5: Pop(0)
0x9b6: @@ SetPhoto(Stack[-1])
0x9b7: Pop(1)
0x9b8: PushEmpty(string)
0x9b9: Call2 0xce0

0x9ba: Pop(0)
0x9bb: @@ SetPhoto2(Stack[-1])
0x9bc: Pop(1)
0x9bd: PushEmpty(int)
0x9be: Call2 0xe64

0x9bf: Pop(0)
0x9c0: @@ SetPlayerName(Stack[-1])
0x9c1: Pop(1)
0x9c2: Stack[-2] = (int) -1
0x9c3: @ IsOverrideActive(Stack[-3])
0x9c4: Pop(0)
0x9c5: Push(Stack[-3])
0x9c6: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c7: Stack[-10] = (int) -2
0x9c8: Return(); Pop(8)

0x9c9: @ DoDialog(Stack[-4])
0x9ca: Pop(0)
0x9cb: PushEmpty(bool, object)
0x9cc: PushEmpty(object)
0x9cd: Call2 0xc9e

0x9ce: Stack[-2] = Stack[-1]
0x9cf: Pop(1)
0x9d0: Call2 0xbdf

0x9d1: Pop(2)
0x9d2: PushEmpty(object, object)
0x9d3: Stack[-2] = Stack[-11]
0x9d4: Stack[-1] = Stack[-6]
0x9d5: Push(-2, 4); TaskCall(13)
0x9d6: Call2 0x9ed

0x9d7: Pop(-2, 4); TaskReturn
0x9d8: Pop(2)
0x9d9: @@ IsDialogEnd(Stack[-1])
0x9da: Pop(0)
0x9db: Pop(0); Push((bool) Stack[-1] == 0)
0x9dc: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9dd: @ sync()
0x9de: Pop(0)
0x9df: @@ IsDialogEnd(Stack[-1])
0x9e0: Pop(0)
0x9e1: GOTO 0x9db

0x9e2: PushEmpty(object)
0x9e3: Stack[-1] = Stack[-10]
0x9e4: Call2 0xbce

0x9e5: Pop(1)
0x9e6: @ StopDialog(Stack[-4])
0x9e7: Pop(0)
0x9e8: @@ GetReturnValue(Stack[-2])
0x9e9: Pop(0)
0x9ea: Stack[-10] = Stack[-2]
0x9eb: Return(); Pop(8)

0x9ec: Stack[-4] = 0
0x9ed: PushEmpty()
0x9ee: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9ef: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9f0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9f1: Push((int) 1)
0x9f2: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0x9f3: PushEmpty(string)
0x9f4: Stack[-1] = "Neutral"
0x9f5: Call2 0xa27

0x9f6: Pop(1)
0x9f7: Push((int) 540539)
0x9f8: @@ SetMessage(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ ClearReplies()
0x9fb: Pop(0)
0x9fc: Push((int) 540540)
0x9fd: Push((int) -1)
0x9fe: Push((int) 42549)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: Push((int) 540799)
0xa02: Push((int) -1)
0xa03: Push((int) 42848)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: GOTO 0xa09

0xa07: Return(); Pop(0)

0xa08: GOTO 0x9f1

0xa09: PushEmpty(bool)
0xa0a: Call2 0xce2

0xa0b: Pop(0)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa0d: @ lshWaitForAnimEnd()
0xa0e: Pop(0)
0xa0f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa10: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa11: GOTO 0xa17

0xa12: PushEmpty(string)
0xa13: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa14: Call2 0xc69

0xa15: Pop(1)
0xa16: GOTO 0xa0d

0xa17: GOTO 0xa26

0xa18: Push("all")
0xa19: Push("idle")
0xa1a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1b: Pop(2)
0xa1c: @ WaitForAnimEnd()
0xa1d: Pop(0)
0xa1e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1f: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa20: GOTO 0xa26

0xa21: Push("all")
0xa22: Push("idle")
0xa23: @ PlayAnimation(Stack[-2], Stack[-1])
0xa24: Pop(2)
0xa25: GOTO 0xa1c

0xa26: Return(); Pop(0)

0xa27: PushEmpty()
0xa28: PushEmpty(bool)
0xa29: Call2 0xce2

0xa2a: Pop(0)
0xa2b: Pop(1); Push((bool) Stack[-1] == 0)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2d: Return(); Pop(0)

0xa2e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2f: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa30: Return(); Pop(0)

0xa31: PushEmpty(string, bool)
0xa32: Stack[-2] = Stack[-3]
0xa33: Push("")
0xa34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa36: Stack[-1] = (bool) 0
0xa37: GOTO 0xa39

0xa38: Stack[-1] = (bool) 1
0xa39: Call2 0xc79

0xa3a: Pop(2)
0xa3b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3c: Return(); Pop(0)

0xa3d: PushEmpty()
0xa3e: Push((int) 1)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa40: PushEmpty()
0xa41: Call2 0xc97

0xa42: Pop(0)
0xa43: Push((int) 42548)
0xa44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa46: PushEmpty(string)
0xa47: Stack[-1] = "Neutral"
0xa48: Call2 0xa27

0xa49: Pop(1)
0xa4a: Push((int) 540539)
0xa4b: @@ SetMessage(Stack[-1])
0xa4c: Pop(1)
0xa4d: @@ ClearReplies()
0xa4e: Pop(0)
0xa4f: Push((int) 540540)
0xa50: Push((int) -1)
0xa51: Push((int) 42549)
0xa52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa53: Pop(3)
0xa54: Push((int) 540799)
0xa55: Push((int) -1)
0xa56: Push((int) 42848)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Return(); Pop(0)

0xa5a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa5b: PushEmpty(bool)
0xa5c: Call2 0xce2

0xa5d: Pop(0)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5f: @ lshStopAnimation()
0xa60: Pop(0)
0xa61: GOTO 0xa64

0xa62: @ StopAnimation()
0xa63: Pop(0)
0xa64: Return(); Pop(0)

0xa65: GOTO 0xa3e

0xa66: Return(); Pop(0)

0xa67: Push(GlobalVars[1])
0xa68: Stack[-1] = (bool) 0
0xa69: GlobalVars[1] = Stack[-1]; Pop(1)
0xa6a: PushEmpty()
0xa6b: Call2 0xa6e

0xa6c: Pop(0)
0xa6d: Return(); Pop(0)

0xa6e: PushEmpty(bool)
0xa6f: Call2 0xb85

0xa70: Pop(0)
0xa71: Pop(1); Push((bool) Stack[-1] == 0)
0xa72: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa73: @ Hold()
0xa74: Pop(0)
0xa75: @ GetDirection(Stack[-0])
0xa76: Pop(0)
0xa77: PushEmpty()
0xa78: Call2 0xb1e

0xa79: Pop(0)
0xa7a: GOTO 0xa77

0xa7b: Return(); Pop(0)

0xa7c: PushEmpty(object, object)
0xa7d: Push("player")
0xa7e: @ FindActor(Stack[-2], Stack[-1])
0xa7f: Pop(1)
0xa80: Pop(0); Push((bool) Stack[-1] == 0)
0xa81: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa82: Stack[-3] = (bool) 0
0xa83: Return(); Pop(2)

0xa84: PushEmpty(bool, object)
0xa85: Stack[-1] = Stack[-3]
0xa86: Call2 0xb7c

0xa87: Stack[-5] = Stack[-2]
0xa88: Pop(2)
0xa89: Return(); Pop(2)

0xa8a: Stack[-1] = 0
0xa8b: Push(CvectorIndex(Stack[-0], 0))
0xa8c: Push(CvectorIndex(Stack[-0], 2))
0xa8d: @ RotateAsync(Stack[-2], Stack[-1])
0xa8e: Pop(2)
0xa8f: Return(); Pop(0)

0xa90: PushEmpty(object, bool, object, bool)
0xa91: Push("player")
0xa92: @ FindActor(Stack[-3], Stack[-1])
0xa93: Pop(1)
0xa94: Pop(0); Push((bool) Stack[-2] == 0)
0xa95: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa96: Stack[-5] = (bool) 0
0xa97: Return(); Pop(4)

0xa98: PushEmpty(float, object)
0xa99: Stack[-1] = Stack[-4]
0xa9a: Call2 0xb6a

0xa9b: Pop(1)
0xa9c: Push((float)90000.0)
0xa9d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xa9e: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9f: Stack[-5] = (bool) 0
0xaa0: Return(); Pop(4)

0xaa1: @ CanSee(Stack[-1], Stack[-2])
0xaa2: Pop(0)
0xaa3: Stack[-5] = Stack[-1]
0xaa4: Return(); Pop(4)

0xaa5: Stack[-2] = 0
0xaa6: PushEmpty(float, float)
0xaa7: Push((int) 8)
0xaa8: Push((int) 16)
0xaa9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xaaa: Pop(2)
0xaab: Push((int) 10)
0xaac: @ SetTimer(Stack[-1], Stack[-2])
0xaad: Pop(1)
0xaae: Return(); Pop(2)

0xaaf: Push((int) 10)
0xab0: @ KillTimer(Stack[-1])
0xab1: Pop(1)
0xab2: Return(); Pop(0)

0xab3: PushEmpty()
0xab4: Push((int) 10)
0xab5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab6: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xab7: PushEmpty()
0xab8: Call2 0xaaf

0xab9: Pop(0)
0xaba: PushEmpty(bool)
0xabb: Stack[-1] = (bool) 0
0xabc: PushEmpty(bool)
0xabd: Call2 0xb85

0xabe: Pop(0)
0xabf: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac0: PushEmpty(bool)
0xac1: Call2 0xa90

0xac2: Pop(0)
0xac3: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac4: Stack[-1] = (bool) 1
0xac5: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xac6: PushEmpty(bool)
0xac7: Call2 0xa7c

0xac8: Pop(0)
0xac9: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xaca: PushEmpty(bool, object)
0xacb: PushEmpty(object)
0xacc: Call2 0xc9e

0xacd: Stack[-2] = Stack[-1]
0xace: Pop(1)
0xacf: Call2 0xc19

0xad0: Pop(2)
0xad1: GOTO 0xad8

0xad2: PushEmpty()
0xad3: Call2 0xa8b

0xad4: Pop(0)
0xad5: PushEmpty()
0xad6: Call2 0xaa6

0xad7: Pop(0)
0xad8: Return(); Pop(0)

0xad9: PushEmpty()
0xada: Call2 0xb65

0xadb: Pop(0)
0xadc: PushEmpty()
0xadd: Call2 0xaaf

0xade: Pop(0)
0xadf: @ lshStopSpeech()
0xae0: Pop(0)
0xae1: @ lshStopAnimation()
0xae2: Pop(0)
0xae3: @ StopAsync()
0xae4: Pop(0)
0xae5: @ Hold()
0xae6: Pop(0)
0xae7: Return(); Pop(0)

0xae8: @ StopGroup0()
0xae9: Pop(0)
0xaea: PushEmpty()
0xaeb: Call2 0xaaf

0xaec: Pop(0)
0xaed: PushEmpty(string)
0xaee: Stack[-1] = "Neutral"
0xaef: Call2 0xc69

0xaf0: Pop(1)
0xaf1: PushEmpty()
0xaf2: Call2 0xaa6

0xaf3: Pop(0)
0xaf4: Return(); Pop(0)

0xaf5: PushEmpty()
0xaf6: Push(Stack[-1])
0xaf7: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf8: PushEmpty()
0xaf9: Call2 0xaa6

0xafa: Pop(0)
0xafb: GOTO 0xb00

0xafc: PushEmpty(string)
0xafd: Stack[-1] = "Neutral"
0xafe: Call2 0xc69

0xaff: Pop(1)
0xb00: Return(); Pop(0)

0xb01: PushEmpty(bool, bool)
0xb02: @ IsOverrideActive(Stack[-1])
0xb03: Pop(0)
0xb04: Pop(0); Push((bool) Stack[-1] == 0)
0xb05: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb06: EventDisable(0)
0xb07: PushEmpty()
0xb08: Call2 0xb65

0xb09: Pop(0)
0xb0a: PushEmpty(bool, object)
0xb0b: Stack[-1] = Stack[-5]
0xb0c: Call2 0xb7c

0xb0d: Pop(2)
0xb0e: EventEnable(0)
0xb0f: PushEmpty(object)
0xb10: Stack[-1] = Stack[-4]
0xb11: Call2 0xe75

0xb12: Pop(1)
0xb13: PushEmpty(string)
0xb14: Stack[-1] = "Neutral"
0xb15: Call2 0xc69

0xb16: Pop(1)
0xb17: PushEmpty()
0xb18: Call2 0xaaf

0xb19: Pop(0)
0xb1a: PushEmpty()
0xb1b: Call2 0xaa6

0xb1c: Pop(0)
0xb1d: Return(); Pop(2)

0xb1e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb1f: @ WaitForAnimEnd()
0xb20: Pop(0)
0xb21: PushEmpty(bool)
0xb22: Call2 0xb85

0xb23: Pop(0)
0xb24: Pop(1); Push((bool) Stack[-1] == 0)
0xb25: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb26: Return(); Pop(12)

0xb27: PushEmpty(int)
0xb28: Call2 0xcc9

0xb29: Stack[-7] = Stack[-1]
0xb2a: Pop(1)
0xb2b: Stack[-5] = (int) 0
0xb2c: PushEmpty(bool)
0xb2d: Stack[-1] = (bool) 0
0xb2e: Push((int) 5)
0xb2f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb31: PushEmpty(bool)
0xb32: Call2 0xb85

0xb33: Pop(0)
0xb34: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb35: Stack[-1] = (bool) 1
0xb36: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb37: Pop(0); Push((bool) Stack[-6] == 0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb39: Push((int) 3)
0xb3a: @ Sleep(Stack[-1], Stack[-5])
0xb3b: Pop(1)
0xb3c: Pop(0); Push((bool) Stack[-4] == 0)
0xb3d: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3e: GOTO 0xb60

0xb3f: GOTO 0xb55

0xb40: @ irand(Stack[-3], Stack[-6])
0xb41: Pop(0)
0xb42: Push((int) 5)
0xb43: @ irand(Stack[-3], Stack[-1])
0xb44: Pop(1)
0xb45: Push((int) 0)
0xb46: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb48: Stack[-3] = (int) 0
0xb49: Push("all")
0xb4a: PushEmpty(string, int)
0xb4b: Stack[-1] = Stack[-6]
0xb4c: Call2 0xcc2

0xb4d: Pop(1)
0xb4e: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4f: Pop(2)
0xb50: @ WaitForAnimEnd(Stack[-1])
0xb51: Pop(0)
0xb52: Pop(0); Push((bool) Stack[-1] == 0)
0xb53: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb54: GOTO 0xb60

0xb55: PushEmpty(bool)
0xb56: Call2 0xb63

0xb57: Pop(0)
0xb58: Pop(1); Push((bool) Stack[-1] == 0)
0xb59: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xb5a: GOTO 0xb60

0xb5b: @ ResetAAS()
0xb5c: Pop(0)
0xb5d: Push((int) 1)
0xb5e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb5f: GOTO 0xb2c

0xb60: @ ResetAAS()
0xb61: Pop(0)
0xb62: Return(); Pop(12)

0xb63: Stack[-1] = (bool) 1
0xb64: Return(); Pop(0)

0xb65: @ StopAnimation()
0xb66: Pop(0)
0xb67: @ StopGroup0()
0xb68: Pop(0)
0xb69: Return(); Pop(0)

0xb6a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb6b: @ GetPosition(Stack[-3])
0xb6c: Pop(0)
0xb6d: @@ GetPosition(Stack[-2])
0xb6e: Pop(0)
0xb6f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb70: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb71: Return(); Pop(6)

0xb72: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb73: @ GetPosition(Stack[-3])
0xb74: Pop(0)
0xb75: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xb76: Push(CvectorIndex(Stack[-2], 0))
0xb77: Push(CvectorIndex(Stack[-3], 2))
0xb78: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb79: Pop(2)
0xb7a: Stack[-8] = Stack[-1]
0xb7b: Return(); Pop(6)

0xb7c: PushEmpty(cvector, cvector)
0xb7d: @@ GetPosition(Stack[-1])
0xb7e: Pop(0)
0xb7f: PushEmpty(bool, cvector)
0xb80: Stack[-1] = Stack[-3]
0xb81: Call2 0xb72

0xb82: Stack[-6] = Stack[-2]
0xb83: Pop(2)
0xb84: Return(); Pop(2)

0xb85: PushEmpty(bool, bool)
0xb86: @ IsLoaded(Stack[-1])
0xb87: Pop(0)
0xb88: Stack[-3] = Stack[-1]
0xb89: Return(); Pop(2)

0xb8a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb8b: @@ GetPosition(Stack[-8])
0xb8c: Pop(0)
0xb8d: @@ GetEyesHeight(Stack[-9])
0xb8e: Pop(0)
0xb8f: Push(CvectorIndex(Stack[-8], 1))
0xb90: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb91: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb92: @ GetPosition(Stack[-7])
0xb93: Pop(0)
0xb94: @ GetEyesHeight(Stack[-9])
0xb95: Pop(0)
0xb96: Push(CvectorIndex(Stack[-7], 1))
0xb97: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb98: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb99: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb9a: Push(CvectorIndex(Stack[-6], 1))
0xb9b: Stack[-1] = (int) 0
0xb9c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb9d: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb9e: Pop(1); Push(Sqrt(Stack[-1]))
0xb9f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xba0: Stack[-5] = -Stack[-6]; Pop(0);
0xba1: Pop(0); Push(Stack[-6] * Stack[-19]);
0xba2: PushEmpty(cvector, cvector)
0xba3: Push(CVector(0.0, 1.0, 0.0))
0xba4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xba5: Call2 0xca4

0xba6: Pop(1)
0xba7: Push((int) 25)
0xba8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbaa: Push(CVector(0.0, 10.0, 0.0))
0xbab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xbac: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xbad: @ IsOverrideActive(Stack[-2])
0xbae: Pop(0)
0xbaf: Push(Stack[-2])
0xbb0: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbb1: Stack[-21] = (bool) 0
0xbb2: Return(); Pop(18)

0xbb3: @ StopWorld()
0xbb4: Pop(0)
0xbb5: @ CameraTransit(Stack[-3], Stack[-5])
0xbb6: Pop(0)
0xbb7: Push(CvectorIndex(Stack[-4], 0))
0xbb8: Push(CvectorIndex(Stack[-5], 2))
0xbb9: @ Rotate(Stack[-2], Stack[-1])
0xbba: Pop(2)
0xbbb: PushEmpty(bool)
0xbbc: Call2 0xce2

0xbbd: Pop(0)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc0; Pop(1)

0xbbf: GOTO 0xbc8

0xbc0: Push("head")
0xbc1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbc2: Pop(1)
0xbc3: Push(Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc5: Push("head")
0xbc6: @ LookAsyncCamera(Stack[-1])
0xbc7: Pop(1)
0xbc8: @ CameraWaitForPlayFinish()
0xbc9: Pop(0)
0xbca: @ ResumeWorld()
0xbcb: Pop(0)
0xbcc: Stack[-21] = (bool) 1
0xbcd: Return(); Pop(18)

0xbce: PushEmpty(bool, bool)
0xbcf: @ CameraSwitchToNormal()
0xbd0: Pop(0)
0xbd1: PushEmpty(bool)
0xbd2: Call2 0xce2

0xbd3: Pop(0)
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbd5: GOTO 0xbde

0xbd6: Push("head")
0xbd7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbd8: Pop(1)
0xbd9: Push(Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdb: Push("head")
0xbdc: @ UnlookAsync(Stack[-1])
0xbdd: Pop(1)
0xbde: Return(); Pop(2)

0xbdf: PushEmpty(int, int, int, int)
0xbe0: Push("voice_common")
0xbe1: @ GetVariable(Stack[-1], Stack[-3])
0xbe2: Pop(1)
0xbe3: Push(Stack[-2])
0xbe4: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xbe5: PushEmpty(bool, object)
0xbe6: Stack[-1] = Stack[-7]
0xbe7: Call2 0xc19

0xbe8: Pop(1)
0xbe9: Pop(1); Push((bool) Stack[-1] == 0)
0xbea: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbeb: PushEmpty(bool, object)
0xbec: Stack[-1] = Stack[-7]
0xbed: Call2 0xc3e

0xbee: Pop(1)
0xbef: Pop(1); Push((bool) Stack[-1] == 0)
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbf1: Stack[-6] = (bool) 0
0xbf2: Return(); Pop(4)

0xbf3: Push((int) 2)
0xbf4: @ irand(Stack[-2], Stack[-1])
0xbf5: Pop(1)
0xbf6: Push(Stack[-1])
0xbf7: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbf8: Push("voice_common")
0xbf9: Push((int) 1)
0xbfa: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbfb: Push((int) 3)
0xbfc: Pop(2); Push(Stack[-2] % Stack[-1]);
0xbfd: @ SetVariable(Stack[-2], Stack[-1])
0xbfe: Pop(2)
0xbff: GOTO 0xc04

0xc00: Push("voice_common")
0xc01: Push((int) 0)
0xc02: @ SetVariable(Stack[-2], Stack[-1])
0xc03: Pop(2)
0xc04: GOTO 0xc17

0xc05: PushEmpty(bool, object)
0xc06: Stack[-1] = Stack[-7]
0xc07: Call2 0xc3e

0xc08: Pop(1)
0xc09: Pop(1); Push((bool) Stack[-1] == 0)
0xc0a: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc0b: PushEmpty(bool, object)
0xc0c: Stack[-1] = Stack[-7]
0xc0d: Call2 0xc19

0xc0e: Pop(1)
0xc0f: Pop(1); Push((bool) Stack[-1] == 0)
0xc10: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc11: Stack[-6] = (bool) 0
0xc12: Return(); Pop(4)

0xc13: Push("voice_common")
0xc14: Push((int) 1)
0xc15: @ SetVariable(Stack[-2], Stack[-1])
0xc16: Pop(2)
0xc17: Stack[-6] = (bool) 1
0xc18: Return(); Pop(4)

0xc19: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc1a: Stack[-5] = "c"
0xc1b: Stack[-4] = (int) 0
0xc1c: Push((int) 1)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc1e: Push((int) 1)
0xc1f: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc20: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc21: @@ HasProperty(Stack[-1], Stack[-4])
0xc22: Pop(1)
0xc23: Pop(0); Push((bool) Stack[-3] == 0)
0xc24: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc25: GOTO 0xc29

0xc26: Push((int) 1)
0xc27: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc28: GOTO 0xc1c

0xc29: Pop(0); Push((bool) Stack[-4] == 0)
0xc2a: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc2b: Stack[-12] = (bool) 0
0xc2c: Return(); Pop(10)

0xc2d: Stack[-2] = (int) 0
0xc2e: Push((int) 1)
0xc2f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc31: @ irand(Stack[-2], Stack[-4])
0xc32: Pop(0)
0xc33: Push((int) 1)
0xc34: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc35: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc36: @@ GetProperty(Stack[-1], Stack[-2])
0xc37: Pop(1)
0xc38: PushEmpty(bool, string)
0xc39: Stack[-1] = Stack[-3]
0xc3a: Call2 0xc88

0xc3b: Stack[-14] = Stack[-2]
0xc3c: Pop(2)
0xc3d: Return(); Pop(10)

0xc3e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc3f: Push("d")
0xc40: PushEmpty(int)
0xc41: Call2 0xcb3

0xc42: Pop(0)
0xc43: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc44: Push("m")
0xc45: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc46: Stack[-4] = (int) 0
0xc47: Push((int) 1)
0xc48: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc49: Push((int) 1)
0xc4a: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc4b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc4c: @@ HasProperty(Stack[-1], Stack[-4])
0xc4d: Pop(1)
0xc4e: Pop(0); Push((bool) Stack[-3] == 0)
0xc4f: IF (Stack[-1] == 0) GOTO 0xc51; Pop(1)

0xc50: GOTO 0xc54

0xc51: Push((int) 1)
0xc52: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc53: GOTO 0xc47

0xc54: Pop(0); Push((bool) Stack[-4] == 0)
0xc55: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc56: Stack[-12] = (bool) 0
0xc57: Return(); Pop(10)

0xc58: Stack[-2] = (int) 0
0xc59: Push((int) 1)
0xc5a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc5b: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5c: @ irand(Stack[-2], Stack[-4])
0xc5d: Pop(0)
0xc5e: Push((int) 1)
0xc5f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc60: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc61: @@ GetProperty(Stack[-1], Stack[-2])
0xc62: Pop(1)
0xc63: PushEmpty(bool, string)
0xc64: Stack[-1] = Stack[-3]
0xc65: Call2 0xc88

0xc66: Stack[-14] = Stack[-2]
0xc67: Pop(2)
0xc68: Return(); Pop(10)

0xc69: PushEmpty(bool, float, float, bool, float, float)
0xc6a: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc6b: Pop(0)
0xc6c: Push(Stack[-3])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc6e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc6f: Pop(0)
0xc70: Push((bool) 0)
0xc71: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc72: Pop(1)
0xc73: GOTO 0xc78

0xc74: Push("Can't find lsh animation : ")
0xc75: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc76: @ Trace(Stack[-1])
0xc77: Pop(1)
0xc78: Return(); Pop(6)

0xc79: PushEmpty(bool, float, float, bool, float, float)
0xc7a: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc7b: Pop(0)
0xc7c: Push(Stack[-3])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc7e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc7f: Pop(0)
0xc80: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc81: Pop(0)
0xc82: GOTO 0xc87

0xc83: Push("Can't find lsh animation : ")
0xc84: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc85: @ Trace(Stack[-1])
0xc86: Pop(1)
0xc87: Return(); Pop(6)

0xc88: PushEmpty(bool, bool)
0xc89: PushEmpty(bool)
0xc8a: Call2 0xce2

0xc8b: Pop(0)
0xc8c: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc8d: @ lshHasSpeech(Stack[-1], Stack[-3])
0xc8e: Pop(0)
0xc8f: Push(Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc91: @ lshPlaySpeech(Stack[-3])
0xc92: Pop(0)
0xc93: Stack[-4] = (bool) 1
0xc94: Return(); Pop(2)

0xc95: Stack[-4] = (bool) 0
0xc96: Return(); Pop(2)

0xc97: PushEmpty(bool)
0xc98: Call2 0xce2

0xc99: Pop(0)
0xc9a: IF (Stack[-1] == 0) GOTO 0xc9d; Pop(1)

0xc9b: @ lshStopSpeech()
0xc9c: Pop(0)
0xc9d: Return(); Pop(0)

0xc9e: PushEmpty(object, object)
0xc9f: @ self(Stack[-1])
0xca0: Pop(0)
0xca1: Stack[-3] = Stack[-1]
0xca2: Return(); Pop(2)

0xca3: Stack[-1] = 0
0xca4: PushEmpty(float, float)
0xca5: Pop(0); Push(Stack[-3] | Stack[-3]);
0xca6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xca7: Push((float)0.0)
0xca8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcaa: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xcab: Return(); Pop(2)

0xcac: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xcad: Return(); Pop(2)

0xcae: PushEmpty(int, int)
0xcaf: @ GetVariable(Stack[-3], Stack[-1])
0xcb0: Pop(0)
0xcb1: Stack[-4] = Stack[-1]
0xcb2: Return(); Pop(2)

0xcb3: PushEmpty(float, float)
0xcb4: @ GetGameTime(Stack[-1])
0xcb5: Pop(0)
0xcb6: Push((int) 1)
0xcb7: PushEmpty(int)
0xcb8: Push((int) 24)
0xcb9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcba: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcbb: Return(); Pop(2)

0xcbc: PushEmpty()
0xcbd: PushEmpty(int)
0xcbe: Call2 0xcb3

0xcbf: Pop(0)
0xcc0: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xcc1: Return(); Pop(0)

0xcc2: PushEmpty(string, string)
0xcc3: Stack[-1] = "idle"
0xcc4: Push(Stack[-3])
0xcc5: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xcc7: Stack[-4] = Stack[-1]
0xcc8: Return(); Pop(2)

0xcc9: PushEmpty(int, bool, int, bool)
0xcca: Stack[-2] = (int) 0
0xccb: Push("all")
0xccc: PushEmpty(string, int)
0xccd: Stack[-1] = Stack[-5]
0xcce: Call2 0xcc2

0xccf: Pop(1)
0xcd0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcd1: Pop(2)
0xcd2: Pop(0); Push((bool) Stack[-1] == 0)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd4: GOTO 0xcd8

0xcd5: Push((int) 1)
0xcd6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcd7: GOTO 0xccb

0xcd8: Stack[-5] = Stack[-2]
0xcd9: Return(); Pop(4)

0xcda: Stack[-1] = (int) 515549
0xcdb: Return(); Pop(0)

0xcdc: Stack[-1] = (int) 502874
0xcdd: Return(); Pop(0)

0xcde: Stack[-1] = "ui/NPC_Ospina.png"
0xcdf: Return(); Pop(0)

0xce0: Stack[-1] = "ui/NPC_Ospina_b.png"
0xce1: Return(); Pop(0)

0xce2: Stack[-1] = (bool) 1
0xce3: Return(); Pop(0)

0xce4: PushEmpty()
0xce5: Push("k2q01")
0xce6: Push((int) 4)
0xce7: @ SetVariable(Stack[-2], Stack[-1])
0xce8: Pop(2)
0xce9: PushEmpty()
0xcea: Call2 0xe14

0xceb: Pop(0)
0xcec: Return(); Pop(0)

0xced: PushEmpty()
0xcee: Push("k2q01")
0xcef: Push((int) 6)
0xcf0: @ SetVariable(Stack[-2], Stack[-1])
0xcf1: Pop(2)
0xcf2: PushEmpty()
0xcf3: Call2 0xe07

0xcf4: Pop(0)
0xcf5: Return(); Pop(0)

0xcf6: PushEmpty()
0xcf7: Push("ook6Ospina1")
0xcf8: Push((int) 1)
0xcf9: @ SetVariable(Stack[-2], Stack[-1])
0xcfa: Pop(2)
0xcfb: Return(); Pop(0)

0xcfc: PushEmpty()
0xcfd: PushEmpty()
0xcfe: Call2 0xe21

0xcff: Pop(0)
0xd00: Return(); Pop(0)

0xd01: PushEmpty()
0xd02: Push("k8q01")
0xd03: Push((int) 6)
0xd04: @ SetVariable(Stack[-2], Stack[-1])
0xd05: Pop(2)
0xd06: PushEmpty()
0xd07: Call2 0xe2e

0xd08: Pop(0)
0xd09: Return(); Pop(0)

0xd0a: PushEmpty(int, int)
0xd0b: Push("k11q01SoulCount")
0xd0c: @ GetVariable(Stack[-1], Stack[-2])
0xd0d: Pop(1)
0xd0e: Push((int) 1)
0xd0f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xd10: Push("k11q01SoulCount")
0xd11: @ SetVariable(Stack[-1], Stack[-2])
0xd12: Pop(1)
0xd13: Push((int) 2)
0xd14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd16: PushEmpty()
0xd17: Call2 0xded

0xd18: Pop(0)
0xd19: GOTO 0xd3c

0xd1a: Push((int) 3)
0xd1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd21; Pop(1)

0xd1d: PushEmpty()
0xd1e: Call2 0xde0

0xd1f: Pop(0)
0xd20: GOTO 0xd3c

0xd21: Push((int) 4)
0xd22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd23: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd24: PushEmpty()
0xd25: Call2 0xdd3

0xd26: Pop(0)
0xd27: GOTO 0xd3c

0xd28: Push((int) 5)
0xd29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2b: PushEmpty()
0xd2c: Call2 0xdc6

0xd2d: Pop(0)
0xd2e: GOTO 0xd3c

0xd2f: Push((int) 6)
0xd30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd31: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd32: PushEmpty()
0xd33: Call2 0xdb9

0xd34: Pop(0)
0xd35: GOTO 0xd3c

0xd36: Push((int) 7)
0xd37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd38: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd39: PushEmpty()
0xd3a: Call2 0xdac

0xd3b: Pop(0)
0xd3c: Return(); Pop(2)

0xd3d: PushEmpty()
0xd3e: Push("ook11Ospina1")
0xd3f: Push((int) 1)
0xd40: @ SetVariable(Stack[-2], Stack[-1])
0xd41: Pop(2)
0xd42: Return(); Pop(0)

0xd43: PushEmpty()
0xd44: Push("k2q01")
0xd45: Push((int) -1)
0xd46: @ SetVariable(Stack[-2], Stack[-1])
0xd47: Pop(2)
0xd48: PushEmpty()
0xd49: Call2 0xdfa

0xd4a: Pop(0)
0xd4b: Return(); Pop(0)

0xd4c: PushEmpty()
0xd4d: PushEmpty(int, string)
0xd4e: Stack[-1] = "k2q01"
0xd4f: Call2 0xcae

0xd50: Pop(1)
0xd51: Push((int) 2)
0xd52: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd53: IF (Stack[-1] == 0) GOTO 0xd56; Pop(1)

0xd54: Stack[-2] = (bool) 1
0xd55: Return(); Pop(0)

0xd56: Stack[-2] = (bool) 0
0xd57: Return(); Pop(0)

0xd58: PushEmpty()
0xd59: PushEmpty(int, string)
0xd5a: Stack[-1] = "k2q01"
0xd5b: Call2 0xcae

0xd5c: Pop(1)
0xd5d: Push((int) 5)
0xd5e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd60: Stack[-2] = (bool) 1
0xd61: Return(); Pop(0)

0xd62: Stack[-2] = (bool) 0
0xd63: Return(); Pop(0)

0xd64: PushEmpty()
0xd65: PushEmpty(int, string)
0xd66: Stack[-1] = "k6q01"
0xd67: Call2 0xcae

0xd68: Pop(1)
0xd69: Push((int) 2)
0xd6a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd6c: Stack[-2] = (bool) 1
0xd6d: Return(); Pop(0)

0xd6e: Stack[-2] = (bool) 0
0xd6f: Return(); Pop(0)

0xd70: PushEmpty()
0xd71: PushEmpty(int, string)
0xd72: Stack[-1] = "k6q01DankoPos"
0xd73: Call2 0xcae

0xd74: Pop(1)
0xd75: Push((int) 3)
0xd76: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd77: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd78: Stack[-2] = (bool) 1
0xd79: Return(); Pop(0)

0xd7a: Stack[-2] = (bool) 0
0xd7b: Return(); Pop(0)

0xd7c: PushEmpty()
0xd7d: PushEmpty(int, string)
0xd7e: Stack[-1] = "ook6Ospina1"
0xd7f: Call2 0xcae

0xd80: Pop(1)
0xd81: Push((int) 0)
0xd82: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd83: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd84: Stack[-2] = (bool) 1
0xd85: Return(); Pop(0)

0xd86: Stack[-2] = (bool) 0
0xd87: Return(); Pop(0)

0xd88: PushEmpty()
0xd89: PushEmpty(int, string)
0xd8a: Stack[-1] = "k8q01"
0xd8b: Call2 0xcae

0xd8c: Pop(1)
0xd8d: Push((int) 5)
0xd8e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd8f: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd90: Stack[-2] = (bool) 1
0xd91: Return(); Pop(0)

0xd92: Stack[-2] = (bool) 0
0xd93: Return(); Pop(0)

0xd94: PushEmpty()
0xd95: PushEmpty(int, string)
0xd96: Stack[-1] = "k11q01"
0xd97: Call2 0xcae

0xd98: Pop(1)
0xd99: Push((int) 9)
0xd9a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd9b: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd9c: Stack[-2] = (bool) 1
0xd9d: Return(); Pop(0)

0xd9e: Stack[-2] = (bool) 0
0xd9f: Return(); Pop(0)

0xda0: PushEmpty()
0xda1: PushEmpty(int, string)
0xda2: Stack[-1] = "ook11Ospina1"
0xda3: Call2 0xcae

0xda4: Pop(1)
0xda5: Push((int) 0)
0xda6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda7: IF (Stack[-1] == 0) GOTO 0xdaa; Pop(1)

0xda8: Stack[-2] = (bool) 1
0xda9: Return(); Pop(0)

0xdaa: Stack[-2] = (bool) 0
0xdab: Return(); Pop(0)

0xdac: PushEmpty(object, object)
0xdad: Push((int) 498)
0xdae: Push((int) 1)
0xdaf: Push((int) 528065)
0xdb0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdb1: Pop(3)
0xdb2: PushEmpty(bool, object, int)
0xdb3: Stack[-2] = Stack[-4]
0xdb4: Stack[-1] = (int) 480
0xdb5: Call2 0xe48

0xdb6: Pop(3)
0xdb7: Return(); Pop(2)

0xdb8: Stack[-1] = 0
0xdb9: PushEmpty(object, object)
0xdba: Push((int) 497)
0xdbb: Push((int) 1)
0xdbc: Push((int) 528064)
0xdbd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdbe: Pop(3)
0xdbf: PushEmpty(bool, object, int)
0xdc0: Stack[-2] = Stack[-4]
0xdc1: Stack[-1] = (int) 480
0xdc2: Call2 0xe48

0xdc3: Pop(3)
0xdc4: Return(); Pop(2)

0xdc5: Stack[-1] = 0
0xdc6: PushEmpty(object, object)
0xdc7: Push((int) 496)
0xdc8: Push((int) 1)
0xdc9: Push((int) 528063)
0xdca: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdcb: Pop(3)
0xdcc: PushEmpty(bool, object, int)
0xdcd: Stack[-2] = Stack[-4]
0xdce: Stack[-1] = (int) 480
0xdcf: Call2 0xe48

0xdd0: Pop(3)
0xdd1: Return(); Pop(2)

0xdd2: Stack[-1] = 0
0xdd3: PushEmpty(object, object)
0xdd4: Push((int) 495)
0xdd5: Push((int) 1)
0xdd6: Push((int) 528062)
0xdd7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdd8: Pop(3)
0xdd9: PushEmpty(bool, object, int)
0xdda: Stack[-2] = Stack[-4]
0xddb: Stack[-1] = (int) 480
0xddc: Call2 0xe48

0xddd: Pop(3)
0xdde: Return(); Pop(2)

0xddf: Stack[-1] = 0
0xde0: PushEmpty(object, object)
0xde1: Push((int) 494)
0xde2: Push((int) 1)
0xde3: Push((int) 528061)
0xde4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xde5: Pop(3)
0xde6: PushEmpty(bool, object, int)
0xde7: Stack[-2] = Stack[-4]
0xde8: Stack[-1] = (int) 480
0xde9: Call2 0xe48

0xdea: Pop(3)
0xdeb: Return(); Pop(2)

0xdec: Stack[-1] = 0
0xded: PushEmpty(object, object)
0xdee: Push((int) 493)
0xdef: Push((int) 1)
0xdf0: Push((int) 528060)
0xdf1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: PushEmpty(bool, object, int)
0xdf4: Stack[-2] = Stack[-4]
0xdf5: Stack[-1] = (int) 480
0xdf6: Call2 0xe48

0xdf7: Pop(3)
0xdf8: Return(); Pop(2)

0xdf9: Stack[-1] = 0
0xdfa: PushEmpty(object, object)
0xdfb: Push((int) 790)
0xdfc: Push((int) 1)
0xdfd: Push((int) 542526)
0xdfe: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdff: Pop(3)
0xe00: PushEmpty(bool, object, int)
0xe01: Stack[-2] = Stack[-4]
0xe02: Stack[-1] = (int) 461
0xe03: Call2 0xe48

0xe04: Pop(3)
0xe05: Return(); Pop(2)

0xe06: Stack[-1] = 0
0xe07: PushEmpty(object, object)
0xe08: Push((int) 467)
0xe09: Push((int) 1)
0xe0a: Push((int) 527783)
0xe0b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe0c: Pop(3)
0xe0d: PushEmpty(bool, object, int)
0xe0e: Stack[-2] = Stack[-4]
0xe0f: Stack[-1] = (int) 461
0xe10: Call2 0xe48

0xe11: Pop(3)
0xe12: Return(); Pop(2)

0xe13: Stack[-1] = 0
0xe14: PushEmpty(object, object)
0xe15: Push((int) 465)
0xe16: Push((int) 1)
0xe17: Push((int) 527781)
0xe18: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe19: Pop(3)
0xe1a: PushEmpty(bool, object, int)
0xe1b: Stack[-2] = Stack[-4]
0xe1c: Stack[-1] = (int) 461
0xe1d: Call2 0xe48

0xe1e: Pop(3)
0xe1f: Return(); Pop(2)

0xe20: Stack[-1] = 0
0xe21: PushEmpty(object, object)
0xe22: Push((int) 414)
0xe23: Push((int) 1)
0xe24: Push((int) 526115)
0xe25: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(3)
0xe27: PushEmpty(bool, object, int)
0xe28: Stack[-2] = Stack[-4]
0xe29: Stack[-1] = (int) 408
0xe2a: Call2 0xe48

0xe2b: Pop(3)
0xe2c: Return(); Pop(2)

0xe2d: Stack[-1] = 0
0xe2e: PushEmpty(object, object)
0xe2f: Push((int) 444)
0xe30: Push((int) 1)
0xe31: Push((int) 526469)
0xe32: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe33: Pop(3)
0xe34: PushEmpty(bool, object, int)
0xe35: Stack[-2] = Stack[-4]
0xe36: Stack[-1] = (int) 438
0xe37: Call2 0xe48

0xe38: Pop(3)
0xe39: Return(); Pop(2)

0xe3a: Stack[-1] = 0
0xe3b: PushEmpty(object, object)
0xe3c: @ GetDiaryRoot(Stack[-1])
0xe3d: Pop(0)
0xe3e: Pop(0); Push((bool) Stack[-1] == 0)
0xe3f: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe40: Push("Can't retrieve diary root")
0xe41: @ Trace(Stack[-1])
0xe42: Pop(1)
0xe43: Stack[-3] = (bool) 0
0xe44: Return(); Pop(2)

0xe45: Stack[-3] = Stack[-1]
0xe46: Return(); Pop(2)

0xe47: Stack[-1] = 0
0xe48: PushEmpty(object, object, int, object, object, int)
0xe49: PushEmpty(object)
0xe4a: Call2 0xe3b

0xe4b: Stack[-4] = Stack[-1]
0xe4c: Pop(1)
0xe4d: @@ Find(Stack[-7], Stack[-2])
0xe4e: Pop(0)
0xe4f: Pop(0); Push((bool) Stack[-2] == 0)
0xe50: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe51: Push("Can't find diary parent with id: ")
0xe52: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe53: @ Trace(Stack[-1])
0xe54: Pop(1)
0xe55: Stack[-9] = (bool) 0
0xe56: Return(); Pop(6)

0xe57: @@ AddChild(Stack[-8])
0xe58: Pop(0)
0xe59: Push((int) 7)
0xe5a: @ SendWorldWndMessage(Stack[-1])
0xe5b: Pop(1)
0xe5c: @@ GetCategory(Stack[-1])
0xe5d: Pop(0)
0xe5e: @ SetDiarySection(Stack[-1])
0xe5f: Pop(0)
0xe60: Stack[-9] = (bool) 0
0xe61: Return(); Pop(6)

0xe62: Stack[-2] = 0
0xe63: Stack[-3] = 0
0xe64: PushEmpty(int, int)
0xe65: Push("branch")
0xe66: @ GetVariable(Stack[-1], Stack[-2])
0xe67: Pop(1)
0xe68: Push((int) 0)
0xe69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6a: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6b: Stack[-3] = (int) 1
0xe6c: Return(); Pop(2)

0xe6d: GOTO 0xe73

0xe6e: Push((int) 1)
0xe6f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe71: Stack[-3] = (int) 2
0xe72: Return(); Pop(2)

0xe73: Stack[-3] = (int) 3
0xe74: Return(); Pop(2)

0xe75: PushEmpty()
0xe76: Push(GlobalVars[1])
0xe77: Pop(1); Push((bool) Stack[-1] == 0)
0xe78: IF (Stack[-1] == 0) GOTO 0xe82; Pop(1)

0xe79: PushEmpty(int, object)
0xe7a: Stack[-1] = Stack[-3]
0xe7b: Push(-2, 1); TaskCall(2)
0xe7c: Call2 0x2aa

0xe7d: Pop(-2, 1); TaskReturn
0xe7e: Pop(2)
0xe7f: Push(GlobalVars[1])
0xe80: Stack[-1] = (bool) 1
0xe81: GlobalVars[1] = Stack[-1]; Pop(1)
0xe82: PushEmpty(bool, int)
0xe83: Stack[-1] = (int) 2
0xe84: Call2 0xcbc

0xe85: Pop(1)
0xe86: IF (Stack[-1] == 0) GOTO 0xe8e; Pop(1)

0xe87: PushEmpty(int, object)
0xe88: Stack[-1] = Stack[-3]
0xe89: Push(-2, 1); TaskCall(0)
0xe8a: Call2 0x0

0xe8b: Pop(-2, 1); TaskReturn
0xe8c: Pop(2)
0xe8d: Return(); Pop(0)

0xe8e: PushEmpty(bool, int)
0xe8f: Stack[-1] = (int) 6
0xe90: Call2 0xcbc

0xe91: Pop(1)
0xe92: IF (Stack[-1] == 0) GOTO 0xe9a; Pop(1)

0xe93: PushEmpty(int, object)
0xe94: Stack[-1] = Stack[-3]
0xe95: Push(-2, 1); TaskCall(4)
0xe96: Call2 0x3b5

0xe97: Pop(-2, 1); TaskReturn
0xe98: Pop(2)
0xe99: Return(); Pop(0)

0xe9a: PushEmpty(bool, int)
0xe9b: Stack[-1] = (int) 8
0xe9c: Call2 0xcbc

0xe9d: Pop(1)
0xe9e: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xe9f: PushEmpty(int, object)
0xea0: Stack[-1] = Stack[-3]
0xea1: Push(-2, 1); TaskCall(6)
0xea2: Call2 0x506

0xea3: Pop(-2, 1); TaskReturn
0xea4: Pop(2)
0xea5: Return(); Pop(0)

0xea6: PushEmpty(bool, int)
0xea7: Stack[-1] = (int) 11
0xea8: Call2 0xcbc

0xea9: Pop(1)
0xeaa: IF (Stack[-1] == 0) GOTO 0xeb2; Pop(1)

0xeab: PushEmpty(int, object)
0xeac: Stack[-1] = Stack[-3]
0xead: Push(-2, 1); TaskCall(8)
0xeae: Call2 0x6a9

0xeaf: Pop(-2, 1); TaskReturn
0xeb0: Pop(2)
0xeb1: Return(); Pop(0)

0xeb2: PushEmpty(bool, int)
0xeb3: Stack[-1] = (int) 12
0xeb4: Call2 0xcbc

0xeb5: Pop(1)
0xeb6: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xeb7: PushEmpty(int, object)
0xeb8: Stack[-1] = Stack[-3]
0xeb9: Push(-2, 1); TaskCall(10)
0xeba: Call2 0x85e

0xebb: Pop(-2, 1); TaskReturn
0xebc: Pop(2)
0xebd: Return(); Pop(0)

0xebe: PushEmpty(int, object)
0xebf: Stack[-1] = Stack[-3]
0xec0: Push(-2, 1); TaskCall(12)
0xec1: Call2 0x99c

0xec2: Pop(-2, 1); TaskReturn
0xec3: Pop(2)
0xec4: Return(); Pop(0)

