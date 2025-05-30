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
	ook2Ospina1
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xa97
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xce Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x37b Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x49d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e1 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x788 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x934 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6d Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xae3 Vars = (int)
		EVENT_6 Op = 0xb09 Vars = ()
		EVENT_5 Op = 0xb18 Vars = ()
		EVENT_45 Op = 0xb25 Vars = (bool)
		EVENT_0 Op = 0xb31 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xbba

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd0e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd0c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd10

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd12

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xea8

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
0x31: Call2 0xcd0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc11

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
0x48: Call2 0xbff

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
0x56: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xb8

0x5a: Pop(1)
0x5b: Push((int) 525251)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xd84

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 525252)
0x66: Push((int) 44489)
0x67: Push((int) 26620)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0xd90

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 525263)
0x70: Push((int) 26632)
0x71: Push((int) 26631)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0xde4

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: Push((int) 542179)
0x7a: Push((int) 44499)
0x7b: Push((int) 44498)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 525255)
0x7f: Push((int) -1)
0x80: Push((int) 26623)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x9a

0x84: PushEmpty(string)
0x85: Stack[-1] = "Neutral"
0x86: Call2 0xb8

0x87: Pop(1)
0x88: Push((int) 525280)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: Push((int) 525281)
0x8e: Push((int) -1)
0x8f: Push((int) 26649)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 528809)
0x93: Push((int) -1)
0x94: Push((int) 30223)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0x9a

0x98: Return(); Pop(0)

0x99: GOTO 0x55

0x9a: PushEmpty(bool)
0x9b: Call2 0xd14

0x9c: Pop(0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x9e: @ lshWaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: PushEmpty(string)
0xa4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa5: Call2 0xc9b

0xa6: Pop(1)
0xa7: GOTO 0x9e

0xa8: GOTO 0xb7

0xa9: Push("all")
0xaa: Push("idle")
0xab: @ PlayAnimation(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: @ WaitForAnimEnd()
0xae: Pop(0)
0xaf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: GOTO 0xb7

0xb2: Push("all")
0xb3: Push("idle")
0xb4: @ PlayAnimation(Stack[-2], Stack[-1])
0xb5: Pop(2)
0xb6: GOTO 0xad

0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: PushEmpty(bool)
0xba: Call2 0xd14

0xbb: Pop(0)
0xbc: Pop(1); Push((bool) Stack[-1] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Return(); Pop(0)

0xbf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(0)

0xc2: PushEmpty(string, bool)
0xc3: Stack[-2] = Stack[-3]
0xc4: Push("")
0xc5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc7: Stack[-1] = (bool) 0
0xc8: GOTO 0xca

0xc9: Stack[-1] = (bool) 1
0xca: Call2 0xcab

0xcb: Pop(2)
0xcc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: Push((int) 1)
0xd0: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0xd1: PushEmpty()
0xd2: Call2 0xcc9

0xd3: Pop(0)
0xd4: Push((int) 26622)
0xd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0xd16

0xdb: Pop(2)
0xdc: Push((int) 44528)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0xd7b

0xe3: Pop(2)
0xe4: Push((int) 44526)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0xd7b

0xeb: Pop(2)
0xec: Push((int) 26641)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0xd1f

0xf3: Pop(2)
0xf4: Push((int) 44534)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0xd1f

0xfb: Pop(2)
0xfc: Push((int) 44498)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0xd75

0x103: Pop(2)
0x104: Push((int) 26619)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call2 0xb8

0x10a: Pop(1)
0x10b: Push((int) 525251)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0xd84

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: Push((int) 525252)
0x116: Push((int) 44489)
0x117: Push((int) 26620)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Call2 0xd90

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11f: Push((int) 525263)
0x120: Push((int) 26632)
0x121: Push((int) 26631)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: PushEmpty(bool, object)
0x125: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x126: Call2 0xde4

0x127: Pop(1)
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: Push((int) 542179)
0x12a: Push((int) 44499)
0x12b: Push((int) 44498)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 525255)
0x12f: Push((int) -1)
0x130: Push((int) 26623)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call2 0xb8

0x137: Pop(1)
0x138: Push((int) 525280)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 525281)
0x13e: Push((int) -1)
0x13f: Push((int) 26649)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 528809)
0x143: Push((int) -1)
0x144: Push((int) 30223)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 44499)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Grimacing"
0x14d: Call2 0xb8

0x14e: Pop(1)
0x14f: Push((int) 542180)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 542181)
0x155: Push((int) 44502)
0x156: Push((int) 44500)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 542182)
0x15a: Push((int) 44502)
0x15b: Push((int) 44501)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 44502)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Grimacing"
0x164: Call2 0xb8

0x165: Pop(1)
0x166: Push((int) 542183)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 542184)
0x16c: Push((int) -1)
0x16d: Push((int) 44504)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 542185)
0x171: Push((int) -1)
0x172: Push((int) 44505)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 26632)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call2 0xb8

0x17c: Pop(1)
0x17d: Push((int) 525264)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 542194)
0x183: Push((int) 44520)
0x184: Push((int) 44518)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 542195)
0x188: Push((int) 44520)
0x189: Push((int) 44519)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 44520)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0xb8

0x193: Pop(1)
0x194: Push((int) 542196)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 525265)
0x19a: Push((int) 44524)
0x19b: Push((int) 26633)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 542197)
0x19f: Push((int) 26634)
0x1a0: Push((int) 44522)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 542198)
0x1a4: Push((int) 44524)
0x1a5: Push((int) 44523)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 26634)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xb8

0x1af: Pop(1)
0x1b0: Push((int) 525266)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 529215)
0x1b6: Push((int) 30668)
0x1b7: Push((int) 30667)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 542204)
0x1bb: Push((int) 30670)
0x1bc: Push((int) 44530)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 30668)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call2 0xb8

0x1c6: Pop(1)
0x1c7: Push((int) 529216)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 529217)
0x1cd: Push((int) 30670)
0x1ce: Push((int) 30669)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 30670)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Fear"
0x1d7: Call2 0xb8

0x1d8: Pop(1)
0x1d9: Push((int) 529218)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 525267)
0x1df: Push((int) 26636)
0x1e0: Push((int) 26635)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 542205)
0x1e4: Push((int) 26638)
0x1e5: Push((int) 44532)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 26636)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Fear"
0x1ee: Call2 0xb8

0x1ef: Pop(1)
0x1f0: Push((int) 525268)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 525269)
0x1f6: Push((int) 26638)
0x1f7: Push((int) 26637)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 26638)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Strange"
0x200: Call2 0xb8

0x201: Pop(1)
0x202: Push((int) 525270)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 525271)
0x208: Push((int) 26640)
0x209: Push((int) 26639)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 542206)
0x20d: Push((int) -1)
0x20e: Push((int) 44534)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 26640)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call2 0xb8

0x218: Pop(1)
0x219: Push((int) 525272)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 525273)
0x21f: Push((int) -1)
0x220: Push((int) 26641)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 44524)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Grin"
0x229: Call2 0xb8

0x22a: Pop(1)
0x22b: Push((int) 542199)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: Push((int) 542200)
0x231: Push((int) 44527)
0x232: Push((int) 44525)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Push((int) 542201)
0x236: Push((int) -1)
0x237: Push((int) 44526)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 44527)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call2 0xb8

0x241: Pop(1)
0x242: Push((int) 542202)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 542203)
0x248: Push((int) -1)
0x249: Push((int) 44528)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 44489)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Strange"
0x252: Call2 0xb8

0x253: Pop(1)
0x254: Push((int) 542172)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 542173)
0x25a: Push((int) 44491)
0x25b: Push((int) 44490)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Push((int) 542186)
0x25f: Push((int) 44507)
0x260: Push((int) 44506)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 44507)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Grimacing"
0x269: Call2 0xb8

0x26a: Pop(1)
0x26b: Push((int) 542187)
0x26c: @@ SetMessage(Stack[-1])
0x26d: Pop(1)
0x26e: @@ ClearReplies()
0x26f: Pop(0)
0x270: Push((int) 542188)
0x271: Push((int) 26621)
0x272: Push((int) 44508)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Push((int) 542190)
0x276: Push((int) 26621)
0x277: Push((int) 44510)
0x278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x279: Pop(3)
0x27a: Return(); Pop(0)

0x27b: Push((int) 44491)
0x27c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Strange"
0x280: Call2 0xb8

0x281: Pop(1)
0x282: Push((int) 542174)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: Push((int) 542175)
0x288: Push((int) 26621)
0x289: Push((int) 44492)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Push((int) 542189)
0x28d: Push((int) 26621)
0x28e: Push((int) 44509)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: Push((int) 26621)
0x293: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Neutral"
0x297: Call2 0xb8

0x298: Pop(1)
0x299: Push((int) 525253)
0x29a: @@ SetMessage(Stack[-1])
0x29b: Pop(1)
0x29c: @@ ClearReplies()
0x29d: Pop(0)
0x29e: Push((int) 529213)
0x29f: Push((int) 30666)
0x2a0: Push((int) 30665)
0x2a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(3)
0x2a3: Push((int) 542191)
0x2a4: Push((int) 44515)
0x2a5: Push((int) 44514)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 44515)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call2 0xb8

0x2af: Pop(1)
0x2b0: Push((int) 542192)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 542193)
0x2b6: Push((int) 30666)
0x2b7: Push((int) 44516)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 30666)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Neutral"
0x2c0: Call2 0xb8

0x2c1: Pop(1)
0x2c2: Push((int) 529214)
0x2c3: @@ SetMessage(Stack[-1])
0x2c4: Pop(1)
0x2c5: @@ ClearReplies()
0x2c6: Pop(0)
0x2c7: Push((int) 525254)
0x2c8: Push((int) -1)
0x2c9: Push((int) 26622)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: Return(); Pop(0)

0x2cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ce: PushEmpty(bool)
0x2cf: Call2 0xd14

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: @ lshStopAnimation()
0x2d3: Pop(0)
0x2d4: GOTO 0x2d7

0x2d5: @ StopAnimation()
0x2d6: Pop(0)
0x2d7: Return(); Pop(0)

0x2d8: GOTO 0xcf

0x2d9: Return(); Pop(0)

0x2da: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2db: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2dc: PushEmpty(bool, object, float)
0x2dd: Stack[-2] = Stack[-12]
0x2de: Stack[-1] = (float) 70.0
0x2df: Call2 0xbba

0x2e0: Pop(2)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-10] = (int) -2
0x2e4: Return(); Pop(8)

0x2e5: @ CreateDialog(Stack[-4])
0x2e6: Pop(0)
0x2e7: PushEmpty(int)
0x2e8: Call2 0xd0e

0x2e9: Pop(0)
0x2ea: @@ SetNPCName(Stack[-1])
0x2eb: Pop(1)
0x2ec: PushEmpty(int)
0x2ed: Call2 0xd0c

0x2ee: Pop(0)
0x2ef: @@ SetNPCDescription(Stack[-1])
0x2f0: Pop(1)
0x2f1: PushEmpty(string)
0x2f2: Call2 0xd10

0x2f3: Pop(0)
0x2f4: @@ SetPhoto(Stack[-1])
0x2f5: Pop(1)
0x2f6: PushEmpty(string)
0x2f7: Call2 0xd12

0x2f8: Pop(0)
0x2f9: @@ SetPhoto2(Stack[-1])
0x2fa: Pop(1)
0x2fb: PushEmpty(int)
0x2fc: Call2 0xea8

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
0x30b: Call2 0xcd0

0x30c: Stack[-2] = Stack[-1]
0x30d: Pop(1)
0x30e: Call2 0xc11

0x30f: Pop(2)
0x310: PushEmpty(object, object)
0x311: Stack[-2] = Stack[-11]
0x312: Stack[-1] = Stack[-6]
0x313: Push(-2, 4); TaskCall(3)
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
0x322: Call2 0xbff

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
0x330: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral"
0x333: Call2 0x365

0x334: Pop(1)
0x335: Push((int) 525519)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: Push((int) 525520)
0x33b: Push((int) 30224)
0x33c: Push((int) 26876)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Push((int) 528815)
0x340: Push((int) 30230)
0x341: Push((int) 30229)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: GOTO 0x347

0x345: Return(); Pop(0)

0x346: GOTO 0x32f

0x347: PushEmpty(bool)
0x348: Call2 0xd14

0x349: Pop(0)
0x34a: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x34b: @ lshWaitForAnimEnd()
0x34c: Pop(0)
0x34d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x355

0x350: PushEmpty(string)
0x351: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x352: Call2 0xc9b

0x353: Pop(1)
0x354: GOTO 0x34b

0x355: GOTO 0x364

0x356: Push("all")
0x357: Push("idle")
0x358: @ PlayAnimation(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: @ WaitForAnimEnd()
0x35b: Pop(0)
0x35c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x364

0x35f: Push("all")
0x360: Push("idle")
0x361: @ PlayAnimation(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: GOTO 0x35a

0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(bool)
0x367: Call2 0xd14

0x368: Pop(0)
0x369: Pop(1); Push((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Return(); Pop(0)

0x36c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Return(); Pop(0)

0x36f: PushEmpty(string, bool)
0x370: Stack[-2] = Stack[-3]
0x371: Push("")
0x372: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Stack[-1] = (bool) 0
0x375: GOTO 0x377

0x376: Stack[-1] = (bool) 1
0x377: Call2 0xcab

0x378: Pop(2)
0x379: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x37a: Return(); Pop(0)

0x37b: PushEmpty()
0x37c: Push((int) 1)
0x37d: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x37e: PushEmpty()
0x37f: Call2 0xcc9

0x380: Pop(0)
0x381: Push((int) 26875)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Neutral"
0x386: Call2 0x365

0x387: Pop(1)
0x388: Push((int) 525519)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 525520)
0x38e: Push((int) 30224)
0x38f: Push((int) 26876)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Push((int) 528815)
0x393: Push((int) 30230)
0x394: Push((int) 30229)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Push((int) 30230)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x39b: PushEmpty(string)
0x39c: Stack[-1] = "Neutral"
0x39d: Call2 0x365

0x39e: Pop(1)
0x39f: Push((int) 528816)
0x3a0: @@ SetMessage(Stack[-1])
0x3a1: Pop(1)
0x3a2: @@ ClearReplies()
0x3a3: Pop(0)
0x3a4: Push((int) 528817)
0x3a5: Push((int) 30224)
0x3a6: Push((int) 30231)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: Push((int) 30224)
0x3ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3ad: PushEmpty(string)
0x3ae: Stack[-1] = "Neutral"
0x3af: Call2 0x365

0x3b0: Pop(1)
0x3b1: Push((int) 528810)
0x3b2: @@ SetMessage(Stack[-1])
0x3b3: Pop(1)
0x3b4: @@ ClearReplies()
0x3b5: Pop(0)
0x3b6: Push((int) 528811)
0x3b7: Push((int) 30226)
0x3b8: Push((int) 30225)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Push((int) 528818)
0x3bc: Push((int) 30226)
0x3bd: Push((int) 30233)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Return(); Pop(0)

0x3c1: Push((int) 30226)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Neutral"
0x3c6: Call2 0x365

0x3c7: Pop(1)
0x3c8: Push((int) 528812)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 528813)
0x3ce: Push((int) -1)
0x3cf: Push((int) 30227)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Push((int) 528814)
0x3d3: Push((int) -1)
0x3d4: Push((int) 30228)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Return(); Pop(0)

0x3d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d9: PushEmpty(bool)
0x3da: Call2 0xd14

0x3db: Pop(0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3dd: @ lshStopAnimation()
0x3de: Pop(0)
0x3df: GOTO 0x3e2

0x3e0: @ StopAnimation()
0x3e1: Pop(0)
0x3e2: Return(); Pop(0)

0x3e3: GOTO 0x37c

0x3e4: Return(); Pop(0)

0x3e5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3e7: PushEmpty(bool, object, float)
0x3e8: Stack[-2] = Stack[-12]
0x3e9: Stack[-1] = (float) 70.0
0x3ea: Call2 0xbba

0x3eb: Pop(2)
0x3ec: Pop(1); Push((bool) Stack[-1] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-10] = (int) -2
0x3ef: Return(); Pop(8)

0x3f0: @ CreateDialog(Stack[-4])
0x3f1: Pop(0)
0x3f2: PushEmpty(int)
0x3f3: Call2 0xd0e

0x3f4: Pop(0)
0x3f5: @@ SetNPCName(Stack[-1])
0x3f6: Pop(1)
0x3f7: PushEmpty(int)
0x3f8: Call2 0xd0c

0x3f9: Pop(0)
0x3fa: @@ SetNPCDescription(Stack[-1])
0x3fb: Pop(1)
0x3fc: PushEmpty(string)
0x3fd: Call2 0xd10

0x3fe: Pop(0)
0x3ff: @@ SetPhoto(Stack[-1])
0x400: Pop(1)
0x401: PushEmpty(string)
0x402: Call2 0xd12

0x403: Pop(0)
0x404: @@ SetPhoto2(Stack[-1])
0x405: Pop(1)
0x406: PushEmpty(int)
0x407: Call2 0xea8

0x408: Pop(0)
0x409: @@ SetPlayerName(Stack[-1])
0x40a: Pop(1)
0x40b: Stack[-2] = (int) -1
0x40c: @ IsOverrideActive(Stack[-3])
0x40d: Pop(0)
0x40e: Push(Stack[-3])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-10] = (int) -2
0x411: Return(); Pop(8)

0x412: @ DoDialog(Stack[-4])
0x413: Pop(0)
0x414: PushEmpty(bool, object)
0x415: PushEmpty(object)
0x416: Call2 0xcd0

0x417: Stack[-2] = Stack[-1]
0x418: Pop(1)
0x419: Call2 0xc11

0x41a: Pop(2)
0x41b: PushEmpty(object, object)
0x41c: Stack[-2] = Stack[-11]
0x41d: Stack[-1] = Stack[-6]
0x41e: Push(-2, 4); TaskCall(5)
0x41f: Call2 0x436

0x420: Pop(-2, 4); TaskReturn
0x421: Pop(2)
0x422: @@ IsDialogEnd(Stack[-1])
0x423: Pop(0)
0x424: Pop(0); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x426: @ sync()
0x427: Pop(0)
0x428: @@ IsDialogEnd(Stack[-1])
0x429: Pop(0)
0x42a: GOTO 0x424

0x42b: PushEmpty(object)
0x42c: Stack[-1] = Stack[-10]
0x42d: Call2 0xbff

0x42e: Pop(1)
0x42f: @ StopDialog(Stack[-4])
0x430: Pop(0)
0x431: @@ GetReturnValue(Stack[-2])
0x432: Pop(0)
0x433: Stack[-10] = Stack[-2]
0x434: Return(); Pop(8)

0x435: Stack[-4] = 0
0x436: PushEmpty()
0x437: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x438: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x439: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43a: Push((int) 1)
0x43b: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x43c: PushEmpty(string)
0x43d: Stack[-1] = "Fear"
0x43e: Call2 0x487

0x43f: Pop(1)
0x440: Push((int) 526091)
0x441: @@ SetMessage(Stack[-1])
0x442: Pop(1)
0x443: @@ ClearReplies()
0x444: Pop(0)
0x445: PushEmpty(bool)
0x446: Stack[-1] = (bool) 0
0x447: PushEmpty(bool)
0x448: Stack[-1] = (bool) 0
0x449: PushEmpty(bool, object)
0x44a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44b: Call2 0xd9c

0x44c: Pop(1)
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: PushEmpty(bool, object)
0x44f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x450: Call2 0xda8

0x451: Pop(1)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Stack[-1] = (bool) 1
0x454: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x455: PushEmpty(bool, object)
0x456: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x457: Call2 0xdb4

0x458: Pop(1)
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Stack[-1] = (bool) 1
0x45b: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45c: Push((int) 526092)
0x45d: Push((int) 27379)
0x45e: Push((int) 27378)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Push((int) 526095)
0x462: Push((int) -1)
0x463: Push((int) 27381)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: GOTO 0x469

0x467: Return(); Pop(0)

0x468: GOTO 0x43a

0x469: PushEmpty(bool)
0x46a: Call2 0xd14

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x46d: @ lshWaitForAnimEnd()
0x46e: Pop(0)
0x46f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x477

0x472: PushEmpty(string)
0x473: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x474: Call2 0xc9b

0x475: Pop(1)
0x476: GOTO 0x46d

0x477: GOTO 0x486

0x478: Push("all")
0x479: Push("idle")
0x47a: @ PlayAnimation(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: @ WaitForAnimEnd()
0x47d: Pop(0)
0x47e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: GOTO 0x486

0x481: Push("all")
0x482: Push("idle")
0x483: @ PlayAnimation(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: GOTO 0x47c

0x486: Return(); Pop(0)

0x487: PushEmpty()
0x488: PushEmpty(bool)
0x489: Call2 0xd14

0x48a: Pop(0)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Return(); Pop(0)

0x48e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(0)

0x491: PushEmpty(string, bool)
0x492: Stack[-2] = Stack[-3]
0x493: Push("")
0x494: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-1] = (bool) 0
0x497: GOTO 0x499

0x498: Stack[-1] = (bool) 1
0x499: Call2 0xcab

0x49a: Pop(2)
0x49b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: Push((int) 1)
0x49f: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x4a0: PushEmpty()
0x4a1: Call2 0xcc9

0x4a2: Pop(0)
0x4a3: Push((int) 27378)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0xd28

0x4aa: Pop(2)
0x4ab: Push((int) 27380)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(object, object)
0x4af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b1: Call2 0xd2e

0x4b2: Pop(2)
0x4b3: Push((int) 43716)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0xd2e

0x4ba: Pop(2)
0x4bb: Push((int) 27377)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Fear"
0x4c0: Call2 0x487

0x4c1: Pop(1)
0x4c2: Push((int) 526091)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: PushEmpty(bool)
0x4c8: Stack[-1] = (bool) 0
0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cd: Call2 0xd9c

0x4ce: Pop(1)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d0: PushEmpty(bool, object)
0x4d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d2: Call2 0xda8

0x4d3: Pop(1)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: Stack[-1] = (bool) 1
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call2 0xdb4

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 1
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: Push((int) 526092)
0x4df: Push((int) 27379)
0x4e0: Push((int) 27378)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Push((int) 526095)
0x4e4: Push((int) -1)
0x4e5: Push((int) 27381)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 27379)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Grin"
0x4ee: Call2 0x487

0x4ef: Pop(1)
0x4f0: Push((int) 526093)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 528804)
0x4f6: Push((int) 30219)
0x4f7: Push((int) 30218)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 30219)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4fe: PushEmpty(string)
0x4ff: Stack[-1] = "Grin"
0x500: Call2 0x487

0x501: Pop(1)
0x502: Push((int) 528805)
0x503: @@ SetMessage(Stack[-1])
0x504: Pop(1)
0x505: @@ ClearReplies()
0x506: Pop(0)
0x507: Push((int) 528806)
0x508: Push((int) 30222)
0x509: Push((int) 30220)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Push((int) 528807)
0x50d: Push((int) 30222)
0x50e: Push((int) 30221)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Return(); Pop(0)

0x512: Push((int) 30222)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x515: PushEmpty(string)
0x516: Stack[-1] = "Strange"
0x517: Call2 0x487

0x518: Pop(1)
0x519: Push((int) 528808)
0x51a: @@ SetMessage(Stack[-1])
0x51b: Pop(1)
0x51c: @@ ClearReplies()
0x51d: Pop(0)
0x51e: Push((int) 526094)
0x51f: Push((int) -1)
0x520: Push((int) 27380)
0x521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(3)
0x523: Push((int) 541550)
0x524: Push((int) -1)
0x525: Push((int) 43716)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x52a: PushEmpty(bool)
0x52b: Call2 0xd14

0x52c: Pop(0)
0x52d: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52e: @ lshStopAnimation()
0x52f: Pop(0)
0x530: GOTO 0x533

0x531: @ StopAnimation()
0x532: Pop(0)
0x533: Return(); Pop(0)

0x534: GOTO 0x49e

0x535: Return(); Pop(0)

0x536: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x537: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x538: PushEmpty(bool, object, float)
0x539: Stack[-2] = Stack[-12]
0x53a: Stack[-1] = (float) 70.0
0x53b: Call2 0xbba

0x53c: Pop(2)
0x53d: Pop(1); Push((bool) Stack[-1] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53f: Stack[-10] = (int) -2
0x540: Return(); Pop(8)

0x541: @ CreateDialog(Stack[-4])
0x542: Pop(0)
0x543: PushEmpty(int)
0x544: Call2 0xd0e

0x545: Pop(0)
0x546: @@ SetNPCName(Stack[-1])
0x547: Pop(1)
0x548: PushEmpty(int)
0x549: Call2 0xd0c

0x54a: Pop(0)
0x54b: @@ SetNPCDescription(Stack[-1])
0x54c: Pop(1)
0x54d: PushEmpty(string)
0x54e: Call2 0xd10

0x54f: Pop(0)
0x550: @@ SetPhoto(Stack[-1])
0x551: Pop(1)
0x552: PushEmpty(string)
0x553: Call2 0xd12

0x554: Pop(0)
0x555: @@ SetPhoto2(Stack[-1])
0x556: Pop(1)
0x557: PushEmpty(int)
0x558: Call2 0xea8

0x559: Pop(0)
0x55a: @@ SetPlayerName(Stack[-1])
0x55b: Pop(1)
0x55c: Stack[-2] = (int) -1
0x55d: @ IsOverrideActive(Stack[-3])
0x55e: Pop(0)
0x55f: Push(Stack[-3])
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-10] = (int) -2
0x562: Return(); Pop(8)

0x563: @ DoDialog(Stack[-4])
0x564: Pop(0)
0x565: PushEmpty(bool, object)
0x566: PushEmpty(object)
0x567: Call2 0xcd0

0x568: Stack[-2] = Stack[-1]
0x569: Pop(1)
0x56a: Call2 0xc11

0x56b: Pop(2)
0x56c: PushEmpty(object, object)
0x56d: Stack[-2] = Stack[-11]
0x56e: Stack[-1] = Stack[-6]
0x56f: Push(-2, 4); TaskCall(7)
0x570: Call2 0x587

0x571: Pop(-2, 4); TaskReturn
0x572: Pop(2)
0x573: @@ IsDialogEnd(Stack[-1])
0x574: Pop(0)
0x575: Pop(0); Push((bool) Stack[-1] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x577: @ sync()
0x578: Pop(0)
0x579: @@ IsDialogEnd(Stack[-1])
0x57a: Pop(0)
0x57b: GOTO 0x575

0x57c: PushEmpty(object)
0x57d: Stack[-1] = Stack[-10]
0x57e: Call2 0xbff

0x57f: Pop(1)
0x580: @ StopDialog(Stack[-4])
0x581: Pop(0)
0x582: @@ GetReturnValue(Stack[-2])
0x583: Pop(0)
0x584: Stack[-10] = Stack[-2]
0x585: Return(); Pop(8)

0x586: Stack[-4] = 0
0x587: PushEmpty()
0x588: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x589: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x58a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x58b: Push((int) 1)
0x58c: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral"
0x58f: Call2 0x5cb

0x590: Pop(1)
0x591: Push((int) 526441)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: PushEmpty(bool, object)
0x597: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x598: Call2 0xdc0

0x599: Pop(1)
0x59a: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59b: Push((int) 526442)
0x59c: Push((int) 27718)
0x59d: Push((int) 27717)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push((int) 526449)
0x5a1: Push((int) -1)
0x5a2: Push((int) 27724)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 528982)
0x5a6: Push((int) -1)
0x5a7: Push((int) 30419)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: GOTO 0x5ad

0x5ab: Return(); Pop(0)

0x5ac: GOTO 0x58b

0x5ad: PushEmpty(bool)
0x5ae: Call2 0xd14

0x5af: Pop(0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b1: @ lshWaitForAnimEnd()
0x5b2: Pop(0)
0x5b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: GOTO 0x5bb

0x5b6: PushEmpty(string)
0x5b7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5b8: Call2 0xc9b

0x5b9: Pop(1)
0x5ba: GOTO 0x5b1

0x5bb: GOTO 0x5ca

0x5bc: Push("all")
0x5bd: Push("idle")
0x5be: @ PlayAnimation(Stack[-2], Stack[-1])
0x5bf: Pop(2)
0x5c0: @ WaitForAnimEnd()
0x5c1: Pop(0)
0x5c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c4: GOTO 0x5ca

0x5c5: Push("all")
0x5c6: Push("idle")
0x5c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c8: Pop(2)
0x5c9: GOTO 0x5c0

0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: PushEmpty(bool)
0x5cd: Call2 0xd14

0x5ce: Pop(0)
0x5cf: Pop(1); Push((bool) Stack[-1] == 0)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d1: Return(); Pop(0)

0x5d2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(string, bool)
0x5d6: Stack[-2] = Stack[-3]
0x5d7: Push("")
0x5d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: Stack[-1] = (bool) 0
0x5db: GOTO 0x5dd

0x5dc: Stack[-1] = (bool) 1
0x5dd: Call2 0xcab

0x5de: Pop(2)
0x5df: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty()
0x5e2: Push((int) 1)
0x5e3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x5e4: PushEmpty()
0x5e5: Call2 0xcc9

0x5e6: Pop(0)
0x5e7: Push((int) 30428)
0x5e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ea: PushEmpty(object, object)
0x5eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ed: Call2 0xd33

0x5ee: Pop(2)
0x5ef: Push((int) 30433)
0x5f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f2: PushEmpty(object, object)
0x5f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f5: Call2 0xd33

0x5f6: Pop(2)
0x5f7: Push((int) 27723)
0x5f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fa: PushEmpty(object, object)
0x5fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fd: Call2 0xd33

0x5fe: Pop(2)
0x5ff: Push((int) 27716)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x602: PushEmpty(string)
0x603: Stack[-1] = "Neutral"
0x604: Call2 0x5cb

0x605: Pop(1)
0x606: Push((int) 526441)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: PushEmpty(bool, object)
0x60c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60d: Call2 0xdc0

0x60e: Pop(1)
0x60f: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x610: Push((int) 526442)
0x611: Push((int) 27718)
0x612: Push((int) 27717)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 526449)
0x616: Push((int) -1)
0x617: Push((int) 27724)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Push((int) 528982)
0x61b: Push((int) -1)
0x61c: Push((int) 30419)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Return(); Pop(0)

0x620: Push((int) 27718)
0x621: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x623: PushEmpty(string)
0x624: Stack[-1] = "Neutral"
0x625: Call2 0x5cb

0x626: Pop(1)
0x627: Push((int) 526443)
0x628: @@ SetMessage(Stack[-1])
0x629: Pop(1)
0x62a: @@ ClearReplies()
0x62b: Pop(0)
0x62c: Push((int) 528983)
0x62d: Push((int) 30421)
0x62e: Push((int) 30420)
0x62f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x630: Pop(3)
0x631: Return(); Pop(0)

0x632: Push((int) 30421)
0x633: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x635: PushEmpty(string)
0x636: Stack[-1] = "Grimacing"
0x637: Call2 0x5cb

0x638: Pop(1)
0x639: Push((int) 528984)
0x63a: @@ SetMessage(Stack[-1])
0x63b: Pop(1)
0x63c: @@ ClearReplies()
0x63d: Pop(0)
0x63e: Push((int) 528985)
0x63f: Push((int) 30423)
0x640: Push((int) 30422)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: Push((int) 30423)
0x645: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Neutral"
0x649: Call2 0x5cb

0x64a: Pop(1)
0x64b: Push((int) 528986)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 526444)
0x651: Push((int) 27720)
0x652: Push((int) 27719)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 27720)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Strange"
0x65b: Call2 0x5cb

0x65c: Pop(1)
0x65d: Push((int) 526445)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 526446)
0x663: Push((int) 27722)
0x664: Push((int) 27721)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 27722)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Strange"
0x66d: Call2 0x5cb

0x66e: Pop(1)
0x66f: Push((int) 526447)
0x670: @@ SetMessage(Stack[-1])
0x671: Pop(1)
0x672: @@ ClearReplies()
0x673: Pop(0)
0x674: Push((int) 528987)
0x675: Push((int) 30425)
0x676: Push((int) 30424)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Push((int) 526448)
0x67a: Push((int) -1)
0x67b: Push((int) 27723)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 30425)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral"
0x684: Call2 0x5cb

0x685: Pop(1)
0x686: Push((int) 528988)
0x687: @@ SetMessage(Stack[-1])
0x688: Pop(1)
0x689: @@ ClearReplies()
0x68a: Pop(0)
0x68b: Push((int) 528989)
0x68c: Push((int) 30427)
0x68d: Push((int) 30426)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Return(); Pop(0)

0x691: Push((int) 30427)
0x692: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x694: PushEmpty(string)
0x695: Stack[-1] = "Neutral"
0x696: Call2 0x5cb

0x697: Pop(1)
0x698: Push((int) 528990)
0x699: @@ SetMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ ClearReplies()
0x69c: Pop(0)
0x69d: Push((int) 528991)
0x69e: Push((int) -1)
0x69f: Push((int) 30428)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Push((int) 528992)
0x6a3: Push((int) 30430)
0x6a4: Push((int) 30429)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 30430)
0x6a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral"
0x6ad: Call2 0x5cb

0x6ae: Pop(1)
0x6af: Push((int) 528993)
0x6b0: @@ SetMessage(Stack[-1])
0x6b1: Pop(1)
0x6b2: @@ ClearReplies()
0x6b3: Pop(0)
0x6b4: Push((int) 528994)
0x6b5: Push((int) 30432)
0x6b6: Push((int) 30431)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Return(); Pop(0)

0x6ba: Push((int) 30432)
0x6bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6bd: PushEmpty(string)
0x6be: Stack[-1] = "Neutral"
0x6bf: Call2 0x5cb

0x6c0: Pop(1)
0x6c1: Push((int) 528995)
0x6c2: @@ SetMessage(Stack[-1])
0x6c3: Pop(1)
0x6c4: @@ ClearReplies()
0x6c5: Pop(0)
0x6c6: Push((int) 528996)
0x6c7: Push((int) -1)
0x6c8: Push((int) 30433)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6cd: PushEmpty(bool)
0x6ce: Call2 0xd14

0x6cf: Pop(0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d1: @ lshStopAnimation()
0x6d2: Pop(0)
0x6d3: GOTO 0x6d6

0x6d4: @ StopAnimation()
0x6d5: Pop(0)
0x6d6: Return(); Pop(0)

0x6d7: GOTO 0x5e2

0x6d8: Return(); Pop(0)

0x6d9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6da: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6db: PushEmpty(bool, object, float)
0x6dc: Stack[-2] = Stack[-12]
0x6dd: Stack[-1] = (float) 70.0
0x6de: Call2 0xbba

0x6df: Pop(2)
0x6e0: Pop(1); Push((bool) Stack[-1] == 0)
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e2: Stack[-10] = (int) -2
0x6e3: Return(); Pop(8)

0x6e4: @ CreateDialog(Stack[-4])
0x6e5: Pop(0)
0x6e6: PushEmpty(int)
0x6e7: Call2 0xd0e

0x6e8: Pop(0)
0x6e9: @@ SetNPCName(Stack[-1])
0x6ea: Pop(1)
0x6eb: PushEmpty(int)
0x6ec: Call2 0xd0c

0x6ed: Pop(0)
0x6ee: @@ SetNPCDescription(Stack[-1])
0x6ef: Pop(1)
0x6f0: PushEmpty(string)
0x6f1: Call2 0xd10

0x6f2: Pop(0)
0x6f3: @@ SetPhoto(Stack[-1])
0x6f4: Pop(1)
0x6f5: PushEmpty(string)
0x6f6: Call2 0xd12

0x6f7: Pop(0)
0x6f8: @@ SetPhoto2(Stack[-1])
0x6f9: Pop(1)
0x6fa: PushEmpty(int)
0x6fb: Call2 0xea8

0x6fc: Pop(0)
0x6fd: @@ SetPlayerName(Stack[-1])
0x6fe: Pop(1)
0x6ff: Stack[-2] = (int) -1
0x700: @ IsOverrideActive(Stack[-3])
0x701: Pop(0)
0x702: Push(Stack[-3])
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: Stack[-10] = (int) -2
0x705: Return(); Pop(8)

0x706: @ DoDialog(Stack[-4])
0x707: Pop(0)
0x708: PushEmpty(bool, object)
0x709: PushEmpty(object)
0x70a: Call2 0xcd0

0x70b: Stack[-2] = Stack[-1]
0x70c: Pop(1)
0x70d: Call2 0xc11

0x70e: Pop(2)
0x70f: PushEmpty(object, object)
0x710: Stack[-2] = Stack[-11]
0x711: Stack[-1] = Stack[-6]
0x712: Push(-2, 4); TaskCall(9)
0x713: Call2 0x72a

0x714: Pop(-2, 4); TaskReturn
0x715: Pop(2)
0x716: @@ IsDialogEnd(Stack[-1])
0x717: Pop(0)
0x718: Pop(0); Push((bool) Stack[-1] == 0)
0x719: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71a: @ sync()
0x71b: Pop(0)
0x71c: @@ IsDialogEnd(Stack[-1])
0x71d: Pop(0)
0x71e: GOTO 0x718

0x71f: PushEmpty(object)
0x720: Stack[-1] = Stack[-10]
0x721: Call2 0xbff

0x722: Pop(1)
0x723: @ StopDialog(Stack[-4])
0x724: Pop(0)
0x725: @@ GetReturnValue(Stack[-2])
0x726: Pop(0)
0x727: Stack[-10] = Stack[-2]
0x728: Return(); Pop(8)

0x729: Stack[-4] = 0
0x72a: PushEmpty()
0x72b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x72d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x72e: Push((int) 1)
0x72f: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x730: PushEmpty(string)
0x731: Stack[-1] = "Neutral"
0x732: Call2 0x772

0x733: Pop(1)
0x734: Push((int) 527613)
0x735: @@ SetMessage(Stack[-1])
0x736: Pop(1)
0x737: @@ ClearReplies()
0x738: Pop(0)
0x739: PushEmpty(bool)
0x73a: Stack[-1] = (bool) 0
0x73b: PushEmpty(bool, object)
0x73c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73d: Call2 0xdd8

0x73e: Pop(1)
0x73f: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x740: PushEmpty(bool, object)
0x741: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x742: Call2 0xdcc

0x743: Pop(1)
0x744: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x745: Stack[-1] = (bool) 1
0x746: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x747: Push((int) 527615)
0x748: Push((int) 28961)
0x749: Push((int) 28960)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Push((int) 527614)
0x74d: Push((int) -1)
0x74e: Push((int) 28959)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: GOTO 0x754

0x752: Return(); Pop(0)

0x753: GOTO 0x72e

0x754: PushEmpty(bool)
0x755: Call2 0xd14

0x756: Pop(0)
0x757: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x758: @ lshWaitForAnimEnd()
0x759: Pop(0)
0x75a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x75b: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75c: GOTO 0x762

0x75d: PushEmpty(string)
0x75e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x75f: Call2 0xc9b

0x760: Pop(1)
0x761: GOTO 0x758

0x762: GOTO 0x771

0x763: Push("all")
0x764: Push("idle")
0x765: @ PlayAnimation(Stack[-2], Stack[-1])
0x766: Pop(2)
0x767: @ WaitForAnimEnd()
0x768: Pop(0)
0x769: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: GOTO 0x771

0x76c: Push("all")
0x76d: Push("idle")
0x76e: @ PlayAnimation(Stack[-2], Stack[-1])
0x76f: Pop(2)
0x770: GOTO 0x767

0x771: Return(); Pop(0)

0x772: PushEmpty()
0x773: PushEmpty(bool)
0x774: Call2 0xd14

0x775: Pop(0)
0x776: Pop(1); Push((bool) Stack[-1] == 0)
0x777: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x778: Return(); Pop(0)

0x779: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: Return(); Pop(0)

0x77c: PushEmpty(string, bool)
0x77d: Stack[-2] = Stack[-3]
0x77e: Push("")
0x77f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x781: Stack[-1] = (bool) 0
0x782: GOTO 0x784

0x783: Stack[-1] = (bool) 1
0x784: Call2 0xcab

0x785: Pop(2)
0x786: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x787: Return(); Pop(0)

0x788: PushEmpty()
0x789: Push((int) 1)
0x78a: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x78b: PushEmpty()
0x78c: Call2 0xcc9

0x78d: Pop(0)
0x78e: Push((int) 28960)
0x78f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x791: PushEmpty(object, object)
0x792: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x793: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x794: Call2 0xd6f

0x795: Pop(2)
0x796: Push((int) 28972)
0x797: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x799: PushEmpty(object, object)
0x79a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79c: Call2 0xd3c

0x79d: Pop(2)
0x79e: Push((int) 28958)
0x79f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7a1: PushEmpty(string)
0x7a2: Stack[-1] = "Neutral"
0x7a3: Call2 0x772

0x7a4: Pop(1)
0x7a5: Push((int) 527613)
0x7a6: @@ SetMessage(Stack[-1])
0x7a7: Pop(1)
0x7a8: @@ ClearReplies()
0x7a9: Pop(0)
0x7aa: PushEmpty(bool)
0x7ab: Stack[-1] = (bool) 0
0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ae: Call2 0xdd8

0x7af: Pop(1)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Call2 0xdcc

0x7b4: Pop(1)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Stack[-1] = (bool) 1
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b8: Push((int) 527615)
0x7b9: Push((int) 28961)
0x7ba: Push((int) 28960)
0x7bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bc: Pop(3)
0x7bd: Push((int) 527614)
0x7be: Push((int) -1)
0x7bf: Push((int) 28959)
0x7c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c1: Pop(3)
0x7c2: Return(); Pop(0)

0x7c3: Push((int) 28961)
0x7c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7c6: PushEmpty(string)
0x7c7: Stack[-1] = "Strange"
0x7c8: Call2 0x772

0x7c9: Pop(1)
0x7ca: Push((int) 527616)
0x7cb: @@ SetMessage(Stack[-1])
0x7cc: Pop(1)
0x7cd: @@ ClearReplies()
0x7ce: Pop(0)
0x7cf: Push((int) 527631)
0x7d0: Push((int) 28978)
0x7d1: Push((int) 28977)
0x7d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d3: Pop(3)
0x7d4: Return(); Pop(0)

0x7d5: Push((int) 28978)
0x7d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7d8: PushEmpty(string)
0x7d9: Stack[-1] = "Strange"
0x7da: Call2 0x772

0x7db: Pop(1)
0x7dc: Push((int) 527632)
0x7dd: @@ SetMessage(Stack[-1])
0x7de: Pop(1)
0x7df: @@ ClearReplies()
0x7e0: Pop(0)
0x7e1: Push((int) 527617)
0x7e2: Push((int) 28963)
0x7e3: Push((int) 28962)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: Push((int) 527628)
0x7e7: Push((int) 28974)
0x7e8: Push((int) 28973)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Return(); Pop(0)

0x7ec: Push((int) 28974)
0x7ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7ef: PushEmpty(string)
0x7f0: Stack[-1] = "Grimacing"
0x7f1: Call2 0x772

0x7f2: Pop(1)
0x7f3: Push((int) 527629)
0x7f4: @@ SetMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: @@ ClearReplies()
0x7f7: Pop(0)
0x7f8: Push((int) 527633)
0x7f9: Push((int) 28980)
0x7fa: Push((int) 28979)
0x7fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Return(); Pop(0)

0x7fe: Push((int) 28980)
0x7ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x800: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x801: PushEmpty(string)
0x802: Stack[-1] = "Grimacing"
0x803: Call2 0x772

0x804: Pop(1)
0x805: Push((int) 527634)
0x806: @@ SetMessage(Stack[-1])
0x807: Pop(1)
0x808: @@ ClearReplies()
0x809: Pop(0)
0x80a: Push((int) 527630)
0x80b: Push((int) 28965)
0x80c: Push((int) 28975)
0x80d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: Return(); Pop(0)

0x810: Push((int) 28963)
0x811: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x813: PushEmpty(string)
0x814: Stack[-1] = "Neutral"
0x815: Call2 0x772

0x816: Pop(1)
0x817: Push((int) 527618)
0x818: @@ SetMessage(Stack[-1])
0x819: Pop(1)
0x81a: @@ ClearReplies()
0x81b: Pop(0)
0x81c: Push((int) 527619)
0x81d: Push((int) 28965)
0x81e: Push((int) 28964)
0x81f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x820: Pop(3)
0x821: Return(); Pop(0)

0x822: Push((int) 28965)
0x823: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x824: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x825: PushEmpty(string)
0x826: Stack[-1] = "Neutral"
0x827: Call2 0x772

0x828: Pop(1)
0x829: Push((int) 527620)
0x82a: @@ SetMessage(Stack[-1])
0x82b: Pop(1)
0x82c: @@ ClearReplies()
0x82d: Pop(0)
0x82e: Push((int) 527621)
0x82f: Push((int) 28967)
0x830: Push((int) 28966)
0x831: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x832: Pop(3)
0x833: Return(); Pop(0)

0x834: Push((int) 28967)
0x835: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x836: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x837: PushEmpty(string)
0x838: Stack[-1] = "Neutral"
0x839: Call2 0x772

0x83a: Pop(1)
0x83b: Push((int) 527622)
0x83c: @@ SetMessage(Stack[-1])
0x83d: Pop(1)
0x83e: @@ ClearReplies()
0x83f: Pop(0)
0x840: Push((int) 527623)
0x841: Push((int) 28969)
0x842: Push((int) 28968)
0x843: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x844: Pop(3)
0x845: Return(); Pop(0)

0x846: Push((int) 28969)
0x847: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x849: PushEmpty(string)
0x84a: Stack[-1] = "Neutral"
0x84b: Call2 0x772

0x84c: Pop(1)
0x84d: Push((int) 527624)
0x84e: @@ SetMessage(Stack[-1])
0x84f: Pop(1)
0x850: @@ ClearReplies()
0x851: Pop(0)
0x852: Push((int) 527625)
0x853: Push((int) 28971)
0x854: Push((int) 28970)
0x855: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x856: Pop(3)
0x857: Push((int) 527635)
0x858: Push((int) 28982)
0x859: Push((int) 28981)
0x85a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85b: Pop(3)
0x85c: Return(); Pop(0)

0x85d: Push((int) 28982)
0x85e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85f: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x860: PushEmpty(string)
0x861: Stack[-1] = "Grimacing"
0x862: Call2 0x772

0x863: Pop(1)
0x864: Push((int) 527636)
0x865: @@ SetMessage(Stack[-1])
0x866: Pop(1)
0x867: @@ ClearReplies()
0x868: Pop(0)
0x869: Push((int) 527637)
0x86a: Push((int) 28971)
0x86b: Push((int) 28983)
0x86c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86d: Pop(3)
0x86e: Return(); Pop(0)

0x86f: Push((int) 28971)
0x870: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x872: PushEmpty(string)
0x873: Stack[-1] = "Neutral"
0x874: Call2 0x772

0x875: Pop(1)
0x876: Push((int) 527626)
0x877: @@ SetMessage(Stack[-1])
0x878: Pop(1)
0x879: @@ ClearReplies()
0x87a: Pop(0)
0x87b: Push((int) 527627)
0x87c: Push((int) -1)
0x87d: Push((int) 28972)
0x87e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87f: Pop(3)
0x880: Return(); Pop(0)

0x881: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x882: PushEmpty(bool)
0x883: Call2 0xd14

0x884: Pop(0)
0x885: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x886: @ lshStopAnimation()
0x887: Pop(0)
0x888: GOTO 0x88b

0x889: @ StopAnimation()
0x88a: Pop(0)
0x88b: Return(); Pop(0)

0x88c: GOTO 0x789

0x88d: Return(); Pop(0)

0x88e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x88f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x890: PushEmpty(bool, object, float)
0x891: Stack[-2] = Stack[-12]
0x892: Stack[-1] = (float) 70.0
0x893: Call2 0xbba

0x894: Pop(2)
0x895: Pop(1); Push((bool) Stack[-1] == 0)
0x896: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x897: Stack[-10] = (int) -2
0x898: Return(); Pop(8)

0x899: @ CreateDialog(Stack[-4])
0x89a: Pop(0)
0x89b: PushEmpty(int)
0x89c: Call2 0xd0e

0x89d: Pop(0)
0x89e: @@ SetNPCName(Stack[-1])
0x89f: Pop(1)
0x8a0: PushEmpty(int)
0x8a1: Call2 0xd0c

0x8a2: Pop(0)
0x8a3: @@ SetNPCDescription(Stack[-1])
0x8a4: Pop(1)
0x8a5: PushEmpty(string)
0x8a6: Call2 0xd10

0x8a7: Pop(0)
0x8a8: @@ SetPhoto(Stack[-1])
0x8a9: Pop(1)
0x8aa: PushEmpty(string)
0x8ab: Call2 0xd12

0x8ac: Pop(0)
0x8ad: @@ SetPhoto2(Stack[-1])
0x8ae: Pop(1)
0x8af: PushEmpty(int)
0x8b0: Call2 0xea8

0x8b1: Pop(0)
0x8b2: @@ SetPlayerName(Stack[-1])
0x8b3: Pop(1)
0x8b4: Stack[-2] = (int) -1
0x8b5: @ IsOverrideActive(Stack[-3])
0x8b6: Pop(0)
0x8b7: Push(Stack[-3])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8b9: Stack[-10] = (int) -2
0x8ba: Return(); Pop(8)

0x8bb: @ DoDialog(Stack[-4])
0x8bc: Pop(0)
0x8bd: PushEmpty(bool, object)
0x8be: PushEmpty(object)
0x8bf: Call2 0xcd0

0x8c0: Stack[-2] = Stack[-1]
0x8c1: Pop(1)
0x8c2: Call2 0xc11

0x8c3: Pop(2)
0x8c4: PushEmpty(object, object)
0x8c5: Stack[-2] = Stack[-11]
0x8c6: Stack[-1] = Stack[-6]
0x8c7: Push(-2, 4); TaskCall(11)
0x8c8: Call2 0x8df

0x8c9: Pop(-2, 4); TaskReturn
0x8ca: Pop(2)
0x8cb: @@ IsDialogEnd(Stack[-1])
0x8cc: Pop(0)
0x8cd: Pop(0); Push((bool) Stack[-1] == 0)
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8cf: @ sync()
0x8d0: Pop(0)
0x8d1: @@ IsDialogEnd(Stack[-1])
0x8d2: Pop(0)
0x8d3: GOTO 0x8cd

0x8d4: PushEmpty(object)
0x8d5: Stack[-1] = Stack[-10]
0x8d6: Call2 0xbff

0x8d7: Pop(1)
0x8d8: @ StopDialog(Stack[-4])
0x8d9: Pop(0)
0x8da: @@ GetReturnValue(Stack[-2])
0x8db: Pop(0)
0x8dc: Stack[-10] = Stack[-2]
0x8dd: Return(); Pop(8)

0x8de: Stack[-4] = 0
0x8df: PushEmpty()
0x8e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8e2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8e3: Push((int) 1)
0x8e4: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8e5: PushEmpty(string)
0x8e6: Stack[-1] = "Neutral"
0x8e7: Call2 0x91e

0x8e8: Pop(1)
0x8e9: Push((int) 539297)
0x8ea: @@ SetMessage(Stack[-1])
0x8eb: Pop(1)
0x8ec: @@ ClearReplies()
0x8ed: Pop(0)
0x8ee: Push((int) 542655)
0x8ef: Push((int) 45059)
0x8f0: Push((int) 45057)
0x8f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(3)
0x8f3: Push((int) 539298)
0x8f4: Push((int) -1)
0x8f5: Push((int) 41241)
0x8f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f7: Pop(3)
0x8f8: Push((int) 542656)
0x8f9: Push((int) -1)
0x8fa: Push((int) 45058)
0x8fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fc: Pop(3)
0x8fd: GOTO 0x900

0x8fe: Return(); Pop(0)

0x8ff: GOTO 0x8e3

0x900: PushEmpty(bool)
0x901: Call2 0xd14

0x902: Pop(0)
0x903: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x904: @ lshWaitForAnimEnd()
0x905: Pop(0)
0x906: Push( Stack[3 + Tasks[-1].StackPointer] )
0x907: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x908: GOTO 0x90e

0x909: PushEmpty(string)
0x90a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x90b: Call2 0xc9b

0x90c: Pop(1)
0x90d: GOTO 0x904

0x90e: GOTO 0x91d

0x90f: Push("all")
0x910: Push("idle")
0x911: @ PlayAnimation(Stack[-2], Stack[-1])
0x912: Pop(2)
0x913: @ WaitForAnimEnd()
0x914: Pop(0)
0x915: Push( Stack[3 + Tasks[-1].StackPointer] )
0x916: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x917: GOTO 0x91d

0x918: Push("all")
0x919: Push("idle")
0x91a: @ PlayAnimation(Stack[-2], Stack[-1])
0x91b: Pop(2)
0x91c: GOTO 0x913

0x91d: Return(); Pop(0)

0x91e: PushEmpty()
0x91f: PushEmpty(bool)
0x920: Call2 0xd14

0x921: Pop(0)
0x922: Pop(1); Push((bool) Stack[-1] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: Return(); Pop(0)

0x925: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: Return(); Pop(0)

0x928: PushEmpty(string, bool)
0x929: Stack[-2] = Stack[-3]
0x92a: Push("")
0x92b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92c: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92d: Stack[-1] = (bool) 0
0x92e: GOTO 0x930

0x92f: Stack[-1] = (bool) 1
0x930: Call2 0xcab

0x931: Pop(2)
0x932: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x933: Return(); Pop(0)

0x934: PushEmpty()
0x935: Push((int) 1)
0x936: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x937: PushEmpty()
0x938: Call2 0xcc9

0x939: Pop(0)
0x93a: Push((int) 41240)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x93d: PushEmpty(string)
0x93e: Stack[-1] = "Neutral"
0x93f: Call2 0x91e

0x940: Pop(1)
0x941: Push((int) 539297)
0x942: @@ SetMessage(Stack[-1])
0x943: Pop(1)
0x944: @@ ClearReplies()
0x945: Pop(0)
0x946: Push((int) 542655)
0x947: Push((int) 45059)
0x948: Push((int) 45057)
0x949: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(3)
0x94b: Push((int) 539298)
0x94c: Push((int) -1)
0x94d: Push((int) 41241)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: Push((int) 542656)
0x951: Push((int) -1)
0x952: Push((int) 45058)
0x953: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x954: Pop(3)
0x955: Return(); Pop(0)

0x956: Push((int) 45059)
0x957: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x959: PushEmpty(string)
0x95a: Stack[-1] = "Neutral"
0x95b: Call2 0x91e

0x95c: Pop(1)
0x95d: Push((int) 542657)
0x95e: @@ SetMessage(Stack[-1])
0x95f: Pop(1)
0x960: @@ ClearReplies()
0x961: Pop(0)
0x962: Push((int) 542658)
0x963: Push((int) 45061)
0x964: Push((int) 45060)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: Push((int) 542662)
0x968: Push((int) 45063)
0x969: Push((int) 45064)
0x96a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96b: Pop(3)
0x96c: Return(); Pop(0)

0x96d: Push((int) 45061)
0x96e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x970: PushEmpty(string)
0x971: Stack[-1] = "Strange"
0x972: Call2 0x91e

0x973: Pop(1)
0x974: Push((int) 542659)
0x975: @@ SetMessage(Stack[-1])
0x976: Pop(1)
0x977: @@ ClearReplies()
0x978: Pop(0)
0x979: Push((int) 542660)
0x97a: Push((int) 45063)
0x97b: Push((int) 45062)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: Return(); Pop(0)

0x97f: Push((int) 45063)
0x980: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Strange"
0x984: Call2 0x91e

0x985: Pop(1)
0x986: Push((int) 542661)
0x987: @@ SetMessage(Stack[-1])
0x988: Pop(1)
0x989: @@ ClearReplies()
0x98a: Pop(0)
0x98b: Push((int) 542663)
0x98c: Push((int) 45067)
0x98d: Push((int) 45065)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Push((int) 542667)
0x991: Push((int) 45071)
0x992: Push((int) 45070)
0x993: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x994: Pop(3)
0x995: Return(); Pop(0)

0x996: Push((int) 45071)
0x997: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x998: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x999: PushEmpty(string)
0x99a: Stack[-1] = "Neutral"
0x99b: Call2 0x91e

0x99c: Pop(1)
0x99d: Push((int) 542668)
0x99e: @@ SetMessage(Stack[-1])
0x99f: Pop(1)
0x9a0: @@ ClearReplies()
0x9a1: Pop(0)
0x9a2: Push((int) 542669)
0x9a3: Push((int) 45067)
0x9a4: Push((int) 45072)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Return(); Pop(0)

0x9a8: Push((int) 45067)
0x9a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Neutral"
0x9ad: Call2 0x91e

0x9ae: Pop(1)
0x9af: Push((int) 542664)
0x9b0: @@ SetMessage(Stack[-1])
0x9b1: Pop(1)
0x9b2: @@ ClearReplies()
0x9b3: Pop(0)
0x9b4: Push((int) 542665)
0x9b5: Push((int) -1)
0x9b6: Push((int) 45068)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Push((int) 542666)
0x9ba: Push((int) -1)
0x9bb: Push((int) 45069)
0x9bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bd: Pop(3)
0x9be: Return(); Pop(0)

0x9bf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9c0: PushEmpty(bool)
0x9c1: Call2 0xd14

0x9c2: Pop(0)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c4: @ lshStopAnimation()
0x9c5: Pop(0)
0x9c6: GOTO 0x9c9

0x9c7: @ StopAnimation()
0x9c8: Pop(0)
0x9c9: Return(); Pop(0)

0x9ca: GOTO 0x935

0x9cb: Return(); Pop(0)

0x9cc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9ce: PushEmpty(bool, object, float)
0x9cf: Stack[-2] = Stack[-12]
0x9d0: Stack[-1] = (float) 70.0
0x9d1: Call2 0xbba

0x9d2: Pop(2)
0x9d3: Pop(1); Push((bool) Stack[-1] == 0)
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d5: Stack[-10] = (int) -2
0x9d6: Return(); Pop(8)

0x9d7: @ CreateDialog(Stack[-4])
0x9d8: Pop(0)
0x9d9: PushEmpty(int)
0x9da: Call2 0xd0e

0x9db: Pop(0)
0x9dc: @@ SetNPCName(Stack[-1])
0x9dd: Pop(1)
0x9de: PushEmpty(int)
0x9df: Call2 0xd0c

0x9e0: Pop(0)
0x9e1: @@ SetNPCDescription(Stack[-1])
0x9e2: Pop(1)
0x9e3: PushEmpty(string)
0x9e4: Call2 0xd10

0x9e5: Pop(0)
0x9e6: @@ SetPhoto(Stack[-1])
0x9e7: Pop(1)
0x9e8: PushEmpty(string)
0x9e9: Call2 0xd12

0x9ea: Pop(0)
0x9eb: @@ SetPhoto2(Stack[-1])
0x9ec: Pop(1)
0x9ed: PushEmpty(int)
0x9ee: Call2 0xea8

0x9ef: Pop(0)
0x9f0: @@ SetPlayerName(Stack[-1])
0x9f1: Pop(1)
0x9f2: Stack[-2] = (int) -1
0x9f3: @ IsOverrideActive(Stack[-3])
0x9f4: Pop(0)
0x9f5: Push(Stack[-3])
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f7: Stack[-10] = (int) -2
0x9f8: Return(); Pop(8)

0x9f9: @ DoDialog(Stack[-4])
0x9fa: Pop(0)
0x9fb: PushEmpty(bool, object)
0x9fc: PushEmpty(object)
0x9fd: Call2 0xcd0

0x9fe: Stack[-2] = Stack[-1]
0x9ff: Pop(1)
0xa00: Call2 0xc11

0xa01: Pop(2)
0xa02: PushEmpty(object, object)
0xa03: Stack[-2] = Stack[-11]
0xa04: Stack[-1] = Stack[-6]
0xa05: Push(-2, 4); TaskCall(13)
0xa06: Call2 0xa1d

0xa07: Pop(-2, 4); TaskReturn
0xa08: Pop(2)
0xa09: @@ IsDialogEnd(Stack[-1])
0xa0a: Pop(0)
0xa0b: Pop(0); Push((bool) Stack[-1] == 0)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0d: @ sync()
0xa0e: Pop(0)
0xa0f: @@ IsDialogEnd(Stack[-1])
0xa10: Pop(0)
0xa11: GOTO 0xa0b

0xa12: PushEmpty(object)
0xa13: Stack[-1] = Stack[-10]
0xa14: Call2 0xbff

0xa15: Pop(1)
0xa16: @ StopDialog(Stack[-4])
0xa17: Pop(0)
0xa18: @@ GetReturnValue(Stack[-2])
0xa19: Pop(0)
0xa1a: Stack[-10] = Stack[-2]
0xa1b: Return(); Pop(8)

0xa1c: Stack[-4] = 0
0xa1d: PushEmpty()
0xa1e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa1f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa20: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa21: Push((int) 1)
0xa22: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa23: PushEmpty(string)
0xa24: Stack[-1] = "Neutral"
0xa25: Call2 0xa57

0xa26: Pop(1)
0xa27: Push((int) 540539)
0xa28: @@ SetMessage(Stack[-1])
0xa29: Pop(1)
0xa2a: @@ ClearReplies()
0xa2b: Pop(0)
0xa2c: Push((int) 540540)
0xa2d: Push((int) -1)
0xa2e: Push((int) 42549)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Push((int) 540799)
0xa32: Push((int) -1)
0xa33: Push((int) 42848)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: GOTO 0xa39

0xa37: Return(); Pop(0)

0xa38: GOTO 0xa21

0xa39: PushEmpty(bool)
0xa3a: Call2 0xd14

0xa3b: Pop(0)
0xa3c: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa3d: @ lshWaitForAnimEnd()
0xa3e: Pop(0)
0xa3f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa40: IF (Stack[-1] == 0) GOTO 0xa42; Pop(1)

0xa41: GOTO 0xa47

0xa42: PushEmpty(string)
0xa43: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa44: Call2 0xc9b

0xa45: Pop(1)
0xa46: GOTO 0xa3d

0xa47: GOTO 0xa56

0xa48: Push("all")
0xa49: Push("idle")
0xa4a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4b: Pop(2)
0xa4c: @ WaitForAnimEnd()
0xa4d: Pop(0)
0xa4e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4f: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa50: GOTO 0xa56

0xa51: Push("all")
0xa52: Push("idle")
0xa53: @ PlayAnimation(Stack[-2], Stack[-1])
0xa54: Pop(2)
0xa55: GOTO 0xa4c

0xa56: Return(); Pop(0)

0xa57: PushEmpty()
0xa58: PushEmpty(bool)
0xa59: Call2 0xd14

0xa5a: Pop(0)
0xa5b: Pop(1); Push((bool) Stack[-1] == 0)
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5d: Return(); Pop(0)

0xa5e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5f: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa60: Return(); Pop(0)

0xa61: PushEmpty(string, bool)
0xa62: Stack[-2] = Stack[-3]
0xa63: Push("")
0xa64: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa65: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa66: Stack[-1] = (bool) 0
0xa67: GOTO 0xa69

0xa68: Stack[-1] = (bool) 1
0xa69: Call2 0xcab

0xa6a: Pop(2)
0xa6b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa6c: Return(); Pop(0)

0xa6d: PushEmpty()
0xa6e: Push((int) 1)
0xa6f: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa70: PushEmpty()
0xa71: Call2 0xcc9

0xa72: Pop(0)
0xa73: Push((int) 42548)
0xa74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa76: PushEmpty(string)
0xa77: Stack[-1] = "Neutral"
0xa78: Call2 0xa57

0xa79: Pop(1)
0xa7a: Push((int) 540539)
0xa7b: @@ SetMessage(Stack[-1])
0xa7c: Pop(1)
0xa7d: @@ ClearReplies()
0xa7e: Pop(0)
0xa7f: Push((int) 540540)
0xa80: Push((int) -1)
0xa81: Push((int) 42549)
0xa82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: Push((int) 540799)
0xa85: Push((int) -1)
0xa86: Push((int) 42848)
0xa87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa88: Pop(3)
0xa89: Return(); Pop(0)

0xa8a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa8b: PushEmpty(bool)
0xa8c: Call2 0xd14

0xa8d: Pop(0)
0xa8e: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa8f: @ lshStopAnimation()
0xa90: Pop(0)
0xa91: GOTO 0xa94

0xa92: @ StopAnimation()
0xa93: Pop(0)
0xa94: Return(); Pop(0)

0xa95: GOTO 0xa6e

0xa96: Return(); Pop(0)

0xa97: Push(GlobalVars[1])
0xa98: Stack[-1] = (bool) 0
0xa99: GlobalVars[1] = Stack[-1]; Pop(1)
0xa9a: PushEmpty()
0xa9b: Call2 0xa9e

0xa9c: Pop(0)
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty(bool)
0xa9f: Call2 0xbb5

0xaa0: Pop(0)
0xaa1: Pop(1); Push((bool) Stack[-1] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa3: @ Hold()
0xaa4: Pop(0)
0xaa5: @ GetDirection(Stack[-0])
0xaa6: Pop(0)
0xaa7: PushEmpty()
0xaa8: Call2 0xb4e

0xaa9: Pop(0)
0xaaa: GOTO 0xaa7

0xaab: Return(); Pop(0)

0xaac: PushEmpty(object, object)
0xaad: Push("player")
0xaae: @ FindActor(Stack[-2], Stack[-1])
0xaaf: Pop(1)
0xab0: Pop(0); Push((bool) Stack[-1] == 0)
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-3] = (bool) 0
0xab3: Return(); Pop(2)

0xab4: PushEmpty(bool, object)
0xab5: Stack[-1] = Stack[-3]
0xab6: Call2 0xbac

0xab7: Stack[-5] = Stack[-2]
0xab8: Pop(2)
0xab9: Return(); Pop(2)

0xaba: Stack[-1] = 0
0xabb: Push(CvectorIndex(Stack[-0], 0))
0xabc: Push(CvectorIndex(Stack[-0], 2))
0xabd: @ RotateAsync(Stack[-2], Stack[-1])
0xabe: Pop(2)
0xabf: Return(); Pop(0)

0xac0: PushEmpty(object, bool, object, bool)
0xac1: Push("player")
0xac2: @ FindActor(Stack[-3], Stack[-1])
0xac3: Pop(1)
0xac4: Pop(0); Push((bool) Stack[-2] == 0)
0xac5: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac6: Stack[-5] = (bool) 0
0xac7: Return(); Pop(4)

0xac8: PushEmpty(float, object)
0xac9: Stack[-1] = Stack[-4]
0xaca: Call2 0xb9a

0xacb: Pop(1)
0xacc: Push((float)90000.0)
0xacd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: Stack[-5] = (bool) 0
0xad0: Return(); Pop(4)

0xad1: @ CanSee(Stack[-1], Stack[-2])
0xad2: Pop(0)
0xad3: Stack[-5] = Stack[-1]
0xad4: Return(); Pop(4)

0xad5: Stack[-2] = 0
0xad6: PushEmpty(float, float)
0xad7: Push((int) 8)
0xad8: Push((int) 16)
0xad9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xada: Pop(2)
0xadb: Push((int) 10)
0xadc: @ SetTimer(Stack[-1], Stack[-2])
0xadd: Pop(1)
0xade: Return(); Pop(2)

0xadf: Push((int) 10)
0xae0: @ KillTimer(Stack[-1])
0xae1: Pop(1)
0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: Push((int) 10)
0xae5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae6: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xae7: PushEmpty()
0xae8: Call2 0xadf

0xae9: Pop(0)
0xaea: PushEmpty(bool)
0xaeb: Stack[-1] = (bool) 0
0xaec: PushEmpty(bool)
0xaed: Call2 0xbb5

0xaee: Pop(0)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaf0: PushEmpty(bool)
0xaf1: Call2 0xac0

0xaf2: Pop(0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaf4: Stack[-1] = (bool) 1
0xaf5: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xaf6: PushEmpty(bool)
0xaf7: Call2 0xaac

0xaf8: Pop(0)
0xaf9: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xafa: PushEmpty(bool, object)
0xafb: PushEmpty(object)
0xafc: Call2 0xcd0

0xafd: Stack[-2] = Stack[-1]
0xafe: Pop(1)
0xaff: Call2 0xc4b

0xb00: Pop(2)
0xb01: GOTO 0xb08

0xb02: PushEmpty()
0xb03: Call2 0xabb

0xb04: Pop(0)
0xb05: PushEmpty()
0xb06: Call2 0xad6

0xb07: Pop(0)
0xb08: Return(); Pop(0)

0xb09: PushEmpty()
0xb0a: Call2 0xb95

0xb0b: Pop(0)
0xb0c: PushEmpty()
0xb0d: Call2 0xadf

0xb0e: Pop(0)
0xb0f: @ lshStopSpeech()
0xb10: Pop(0)
0xb11: @ lshStopAnimation()
0xb12: Pop(0)
0xb13: @ StopAsync()
0xb14: Pop(0)
0xb15: @ Hold()
0xb16: Pop(0)
0xb17: Return(); Pop(0)

0xb18: @ StopGroup0()
0xb19: Pop(0)
0xb1a: PushEmpty()
0xb1b: Call2 0xadf

0xb1c: Pop(0)
0xb1d: PushEmpty(string)
0xb1e: Stack[-1] = "Neutral"
0xb1f: Call2 0xc9b

0xb20: Pop(1)
0xb21: PushEmpty()
0xb22: Call2 0xad6

0xb23: Pop(0)
0xb24: Return(); Pop(0)

0xb25: PushEmpty()
0xb26: Push(Stack[-1])
0xb27: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb28: PushEmpty()
0xb29: Call2 0xad6

0xb2a: Pop(0)
0xb2b: GOTO 0xb30

0xb2c: PushEmpty(string)
0xb2d: Stack[-1] = "Neutral"
0xb2e: Call2 0xc9b

0xb2f: Pop(1)
0xb30: Return(); Pop(0)

0xb31: PushEmpty(bool, bool)
0xb32: @ IsOverrideActive(Stack[-1])
0xb33: Pop(0)
0xb34: Pop(0); Push((bool) Stack[-1] == 0)
0xb35: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb36: EventDisable(0)
0xb37: PushEmpty()
0xb38: Call2 0xb95

0xb39: Pop(0)
0xb3a: PushEmpty(bool, object)
0xb3b: Stack[-1] = Stack[-5]
0xb3c: Call2 0xbac

0xb3d: Pop(2)
0xb3e: EventEnable(0)
0xb3f: PushEmpty(object)
0xb40: Stack[-1] = Stack[-4]
0xb41: Call2 0xeb9

0xb42: Pop(1)
0xb43: PushEmpty(string)
0xb44: Stack[-1] = "Neutral"
0xb45: Call2 0xc9b

0xb46: Pop(1)
0xb47: PushEmpty()
0xb48: Call2 0xadf

0xb49: Pop(0)
0xb4a: PushEmpty()
0xb4b: Call2 0xad6

0xb4c: Pop(0)
0xb4d: Return(); Pop(2)

0xb4e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb4f: @ WaitForAnimEnd()
0xb50: Pop(0)
0xb51: PushEmpty(bool)
0xb52: Call2 0xbb5

0xb53: Pop(0)
0xb54: Pop(1); Push((bool) Stack[-1] == 0)
0xb55: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb56: Return(); Pop(12)

0xb57: PushEmpty(int)
0xb58: Call2 0xcfb

0xb59: Stack[-7] = Stack[-1]
0xb5a: Pop(1)
0xb5b: Stack[-5] = (int) 0
0xb5c: PushEmpty(bool)
0xb5d: Stack[-1] = (bool) 0
0xb5e: Push((int) 5)
0xb5f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb61: PushEmpty(bool)
0xb62: Call2 0xbb5

0xb63: Pop(0)
0xb64: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb65: Stack[-1] = (bool) 1
0xb66: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb67: Pop(0); Push((bool) Stack[-6] == 0)
0xb68: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb69: Push((int) 3)
0xb6a: @ Sleep(Stack[-1], Stack[-5])
0xb6b: Pop(1)
0xb6c: Pop(0); Push((bool) Stack[-4] == 0)
0xb6d: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6e: GOTO 0xb90

0xb6f: GOTO 0xb85

0xb70: @ irand(Stack[-3], Stack[-6])
0xb71: Pop(0)
0xb72: Push((int) 5)
0xb73: @ irand(Stack[-3], Stack[-1])
0xb74: Pop(1)
0xb75: Push((int) 0)
0xb76: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb78: Stack[-3] = (int) 0
0xb79: Push("all")
0xb7a: PushEmpty(string, int)
0xb7b: Stack[-1] = Stack[-6]
0xb7c: Call2 0xcf4

0xb7d: Pop(1)
0xb7e: @ PlayAnimation(Stack[-2], Stack[-1])
0xb7f: Pop(2)
0xb80: @ WaitForAnimEnd(Stack[-1])
0xb81: Pop(0)
0xb82: Pop(0); Push((bool) Stack[-1] == 0)
0xb83: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb84: GOTO 0xb90

0xb85: PushEmpty(bool)
0xb86: Call2 0xb93

0xb87: Pop(0)
0xb88: Pop(1); Push((bool) Stack[-1] == 0)
0xb89: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb8a: GOTO 0xb90

0xb8b: @ ResetAAS()
0xb8c: Pop(0)
0xb8d: Push((int) 1)
0xb8e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb8f: GOTO 0xb5c

0xb90: @ ResetAAS()
0xb91: Pop(0)
0xb92: Return(); Pop(12)

0xb93: Stack[-1] = (bool) 1
0xb94: Return(); Pop(0)

0xb95: @ StopAnimation()
0xb96: Pop(0)
0xb97: @ StopGroup0()
0xb98: Pop(0)
0xb99: Return(); Pop(0)

0xb9a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb9b: @ GetPosition(Stack[-3])
0xb9c: Pop(0)
0xb9d: @@ GetPosition(Stack[-2])
0xb9e: Pop(0)
0xb9f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xba0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xba1: Return(); Pop(6)

0xba2: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xba3: @ GetPosition(Stack[-3])
0xba4: Pop(0)
0xba5: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xba6: Push(CvectorIndex(Stack[-2], 0))
0xba7: Push(CvectorIndex(Stack[-3], 2))
0xba8: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xba9: Pop(2)
0xbaa: Stack[-8] = Stack[-1]
0xbab: Return(); Pop(6)

0xbac: PushEmpty(cvector, cvector)
0xbad: @@ GetPosition(Stack[-1])
0xbae: Pop(0)
0xbaf: PushEmpty(bool, cvector)
0xbb0: Stack[-1] = Stack[-3]
0xbb1: Call2 0xba2

0xbb2: Stack[-6] = Stack[-2]
0xbb3: Pop(2)
0xbb4: Return(); Pop(2)

0xbb5: PushEmpty(bool, bool)
0xbb6: @ IsLoaded(Stack[-1])
0xbb7: Pop(0)
0xbb8: Stack[-3] = Stack[-1]
0xbb9: Return(); Pop(2)

0xbba: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xbbb: @@ GetPosition(Stack[-8])
0xbbc: Pop(0)
0xbbd: @@ GetEyesHeight(Stack[-9])
0xbbe: Pop(0)
0xbbf: Push(CvectorIndex(Stack[-8], 1))
0xbc0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbc1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xbc2: @ GetPosition(Stack[-7])
0xbc3: Pop(0)
0xbc4: @ GetEyesHeight(Stack[-9])
0xbc5: Pop(0)
0xbc6: Push(CvectorIndex(Stack[-7], 1))
0xbc7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbc8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xbc9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xbca: Push(CvectorIndex(Stack[-6], 1))
0xbcb: Stack[-1] = (int) 0
0xbcc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xbcd: Pop(0); Push(Stack[-6] | Stack[-6]);
0xbce: Pop(1); Push(Sqrt(Stack[-1]))
0xbcf: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xbd0: Stack[-5] = -Stack[-6]; Pop(0);
0xbd1: Pop(0); Push(Stack[-6] * Stack[-19]);
0xbd2: PushEmpty(cvector, cvector)
0xbd3: Push(CVector(0.0, 1.0, 0.0))
0xbd4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xbd5: Call2 0xcd6

0xbd6: Pop(1)
0xbd7: Push((int) 25)
0xbd8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbd9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbda: Push(CVector(0.0, 10.0, 0.0))
0xbdb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xbdc: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xbdd: @ IsOverrideActive(Stack[-2])
0xbde: Pop(0)
0xbdf: Push(Stack[-2])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[-21] = (bool) 0
0xbe2: Return(); Pop(18)

0xbe3: @ StopWorld()
0xbe4: Pop(0)
0xbe5: Push((bool) 1)
0xbe6: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xbe7: Pop(1)
0xbe8: Push(CvectorIndex(Stack[-4], 0))
0xbe9: Push(CvectorIndex(Stack[-5], 2))
0xbea: @ Rotate(Stack[-2], Stack[-1])
0xbeb: Pop(2)
0xbec: PushEmpty(bool)
0xbed: Call2 0xd14

0xbee: Pop(0)
0xbef: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbf0: GOTO 0xbf9

0xbf1: Push("head")
0xbf2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbf3: Pop(1)
0xbf4: Push(Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf6: Push("head")
0xbf7: @ LookAsyncCamera(Stack[-1])
0xbf8: Pop(1)
0xbf9: @ CameraWaitForPlayFinish()
0xbfa: Pop(0)
0xbfb: @ ResumeWorld()
0xbfc: Pop(0)
0xbfd: Stack[-21] = (bool) 1
0xbfe: Return(); Pop(18)

0xbff: PushEmpty(bool, bool)
0xc00: Push((bool) 1)
0xc01: @ CameraSwitchToNormal(Stack[-1])
0xc02: Pop(1)
0xc03: PushEmpty(bool)
0xc04: Call2 0xd14

0xc05: Pop(0)
0xc06: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xc07: GOTO 0xc10

0xc08: Push("head")
0xc09: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc0a: Pop(1)
0xc0b: Push(Stack[-1])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0d: Push("head")
0xc0e: @ UnlookAsync(Stack[-1])
0xc0f: Pop(1)
0xc10: Return(); Pop(2)

0xc11: PushEmpty(int, int, int, int)
0xc12: Push("voice_common")
0xc13: @ GetVariable(Stack[-1], Stack[-3])
0xc14: Pop(1)
0xc15: Push(Stack[-2])
0xc16: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc17: PushEmpty(bool, object)
0xc18: Stack[-1] = Stack[-7]
0xc19: Call2 0xc4b

0xc1a: Pop(1)
0xc1b: Pop(1); Push((bool) Stack[-1] == 0)
0xc1c: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc1d: PushEmpty(bool, object)
0xc1e: Stack[-1] = Stack[-7]
0xc1f: Call2 0xc70

0xc20: Pop(1)
0xc21: Pop(1); Push((bool) Stack[-1] == 0)
0xc22: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc23: Stack[-6] = (bool) 0
0xc24: Return(); Pop(4)

0xc25: Push((int) 2)
0xc26: @ irand(Stack[-2], Stack[-1])
0xc27: Pop(1)
0xc28: Push(Stack[-1])
0xc29: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc2a: Push("voice_common")
0xc2b: Push((int) 1)
0xc2c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc2d: Push((int) 3)
0xc2e: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc2f: @ SetVariable(Stack[-2], Stack[-1])
0xc30: Pop(2)
0xc31: GOTO 0xc36

0xc32: Push("voice_common")
0xc33: Push((int) 0)
0xc34: @ SetVariable(Stack[-2], Stack[-1])
0xc35: Pop(2)
0xc36: GOTO 0xc49

0xc37: PushEmpty(bool, object)
0xc38: Stack[-1] = Stack[-7]
0xc39: Call2 0xc70

0xc3a: Pop(1)
0xc3b: Pop(1); Push((bool) Stack[-1] == 0)
0xc3c: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc3d: PushEmpty(bool, object)
0xc3e: Stack[-1] = Stack[-7]
0xc3f: Call2 0xc4b

0xc40: Pop(1)
0xc41: Pop(1); Push((bool) Stack[-1] == 0)
0xc42: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc43: Stack[-6] = (bool) 0
0xc44: Return(); Pop(4)

0xc45: Push("voice_common")
0xc46: Push((int) 1)
0xc47: @ SetVariable(Stack[-2], Stack[-1])
0xc48: Pop(2)
0xc49: Stack[-6] = (bool) 1
0xc4a: Return(); Pop(4)

0xc4b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc4c: Stack[-5] = "c"
0xc4d: Stack[-4] = (int) 0
0xc4e: Push((int) 1)
0xc4f: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc50: Push((int) 1)
0xc51: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc52: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc53: @@ HasProperty(Stack[-1], Stack[-4])
0xc54: Pop(1)
0xc55: Pop(0); Push((bool) Stack[-3] == 0)
0xc56: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc57: GOTO 0xc5b

0xc58: Push((int) 1)
0xc59: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc5a: GOTO 0xc4e

0xc5b: Pop(0); Push((bool) Stack[-4] == 0)
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5d: Stack[-12] = (bool) 0
0xc5e: Return(); Pop(10)

0xc5f: Stack[-2] = (int) 0
0xc60: Push((int) 1)
0xc61: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc62: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc63: @ irand(Stack[-2], Stack[-4])
0xc64: Pop(0)
0xc65: Push((int) 1)
0xc66: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc67: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc68: @@ GetProperty(Stack[-1], Stack[-2])
0xc69: Pop(1)
0xc6a: PushEmpty(bool, string)
0xc6b: Stack[-1] = Stack[-3]
0xc6c: Call2 0xcba

0xc6d: Stack[-14] = Stack[-2]
0xc6e: Pop(2)
0xc6f: Return(); Pop(10)

0xc70: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc71: Push("d")
0xc72: PushEmpty(int)
0xc73: Call2 0xce5

0xc74: Pop(0)
0xc75: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc76: Push("m")
0xc77: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc78: Stack[-4] = (int) 0
0xc79: Push((int) 1)
0xc7a: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc7b: Push((int) 1)
0xc7c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc7d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc7e: @@ HasProperty(Stack[-1], Stack[-4])
0xc7f: Pop(1)
0xc80: Pop(0); Push((bool) Stack[-3] == 0)
0xc81: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc82: GOTO 0xc86

0xc83: Push((int) 1)
0xc84: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc85: GOTO 0xc79

0xc86: Pop(0); Push((bool) Stack[-4] == 0)
0xc87: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc88: Stack[-12] = (bool) 0
0xc89: Return(); Pop(10)

0xc8a: Stack[-2] = (int) 0
0xc8b: Push((int) 1)
0xc8c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xc90; Pop(1)

0xc8e: @ irand(Stack[-2], Stack[-4])
0xc8f: Pop(0)
0xc90: Push((int) 1)
0xc91: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc92: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc93: @@ GetProperty(Stack[-1], Stack[-2])
0xc94: Pop(1)
0xc95: PushEmpty(bool, string)
0xc96: Stack[-1] = Stack[-3]
0xc97: Call2 0xcba

0xc98: Stack[-14] = Stack[-2]
0xc99: Pop(2)
0xc9a: Return(); Pop(10)

0xc9b: PushEmpty(bool, float, float, bool, float, float)
0xc9c: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc9d: Pop(0)
0xc9e: Push(Stack[-3])
0xc9f: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xca0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xca1: Pop(0)
0xca2: Push((bool) 0)
0xca3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xca4: Pop(1)
0xca5: GOTO 0xcaa

0xca6: Push("Can't find lsh animation : ")
0xca7: Pop(1); Push(Stack[-1] + Stack[-8]);
0xca8: @ Trace(Stack[-1])
0xca9: Pop(1)
0xcaa: Return(); Pop(6)

0xcab: PushEmpty(bool, float, float, bool, float, float)
0xcac: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcad: Pop(0)
0xcae: Push(Stack[-3])
0xcaf: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcb1: Pop(0)
0xcb2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xcb3: Pop(0)
0xcb4: GOTO 0xcb9

0xcb5: Push("Can't find lsh animation : ")
0xcb6: Pop(1); Push(Stack[-1] + Stack[-9]);
0xcb7: @ Trace(Stack[-1])
0xcb8: Pop(1)
0xcb9: Return(); Pop(6)

0xcba: PushEmpty(bool, bool)
0xcbb: PushEmpty(bool)
0xcbc: Call2 0xd14

0xcbd: Pop(0)
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcbf: @ lshHasSpeech(Stack[-1], Stack[-3])
0xcc0: Pop(0)
0xcc1: Push(Stack[-1])
0xcc2: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc3: @ lshPlaySpeech(Stack[-3])
0xcc4: Pop(0)
0xcc5: Stack[-4] = (bool) 1
0xcc6: Return(); Pop(2)

0xcc7: Stack[-4] = (bool) 0
0xcc8: Return(); Pop(2)

0xcc9: PushEmpty(bool)
0xcca: Call2 0xd14

0xccb: Pop(0)
0xccc: IF (Stack[-1] == 0) GOTO 0xccf; Pop(1)

0xccd: @ lshStopSpeech()
0xcce: Pop(0)
0xccf: Return(); Pop(0)

0xcd0: PushEmpty(object, object)
0xcd1: @ self(Stack[-1])
0xcd2: Pop(0)
0xcd3: Stack[-3] = Stack[-1]
0xcd4: Return(); Pop(2)

0xcd5: Stack[-1] = 0
0xcd6: PushEmpty(float, float)
0xcd7: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcd8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xcd9: Push((float)0.0)
0xcda: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcdc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xcdd: Return(); Pop(2)

0xcde: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xcdf: Return(); Pop(2)

0xce0: PushEmpty(int, int)
0xce1: @ GetVariable(Stack[-3], Stack[-1])
0xce2: Pop(0)
0xce3: Stack[-4] = Stack[-1]
0xce4: Return(); Pop(2)

0xce5: PushEmpty(float, float)
0xce6: @ GetGameTime(Stack[-1])
0xce7: Pop(0)
0xce8: Push((int) 1)
0xce9: PushEmpty(int)
0xcea: Push((int) 24)
0xceb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xced: Return(); Pop(2)

0xcee: PushEmpty()
0xcef: PushEmpty(int)
0xcf0: Call2 0xce5

0xcf1: Pop(0)
0xcf2: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xcf3: Return(); Pop(0)

0xcf4: PushEmpty(string, string)
0xcf5: Stack[-1] = "idle"
0xcf6: Push(Stack[-3])
0xcf7: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xcf9: Stack[-4] = Stack[-1]
0xcfa: Return(); Pop(2)

0xcfb: PushEmpty(int, bool, int, bool)
0xcfc: Stack[-2] = (int) 0
0xcfd: Push("all")
0xcfe: PushEmpty(string, int)
0xcff: Stack[-1] = Stack[-5]
0xd00: Call2 0xcf4

0xd01: Pop(1)
0xd02: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd03: Pop(2)
0xd04: Pop(0); Push((bool) Stack[-1] == 0)
0xd05: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd06: GOTO 0xd0a

0xd07: Push((int) 1)
0xd08: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd09: GOTO 0xcfd

0xd0a: Stack[-5] = Stack[-2]
0xd0b: Return(); Pop(4)

0xd0c: Stack[-1] = (int) 515549
0xd0d: Return(); Pop(0)

0xd0e: Stack[-1] = (int) 502874
0xd0f: Return(); Pop(0)

0xd10: Stack[-1] = "ui/NPC_Ospina.png"
0xd11: Return(); Pop(0)

0xd12: Stack[-1] = "ui/NPC_Ospina_b.png"
0xd13: Return(); Pop(0)

0xd14: Stack[-1] = (bool) 1
0xd15: Return(); Pop(0)

0xd16: PushEmpty()
0xd17: Push("k2q01")
0xd18: Push((int) 4)
0xd19: @ SetVariable(Stack[-2], Stack[-1])
0xd1a: Pop(2)
0xd1b: PushEmpty()
0xd1c: Call2 0xe58

0xd1d: Pop(0)
0xd1e: Return(); Pop(0)

0xd1f: PushEmpty()
0xd20: Push("k2q01")
0xd21: Push((int) 6)
0xd22: @ SetVariable(Stack[-2], Stack[-1])
0xd23: Pop(2)
0xd24: PushEmpty()
0xd25: Call2 0xe4b

0xd26: Pop(0)
0xd27: Return(); Pop(0)

0xd28: PushEmpty()
0xd29: Push("ook6Ospina1")
0xd2a: Push((int) 1)
0xd2b: @ SetVariable(Stack[-2], Stack[-1])
0xd2c: Pop(2)
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty()
0xd2f: PushEmpty()
0xd30: Call2 0xe65

0xd31: Pop(0)
0xd32: Return(); Pop(0)

0xd33: PushEmpty()
0xd34: Push("k8q01")
0xd35: Push((int) 6)
0xd36: @ SetVariable(Stack[-2], Stack[-1])
0xd37: Pop(2)
0xd38: PushEmpty()
0xd39: Call2 0xe72

0xd3a: Pop(0)
0xd3b: Return(); Pop(0)

0xd3c: PushEmpty(int, int)
0xd3d: Push("k11q01SoulCount")
0xd3e: @ GetVariable(Stack[-1], Stack[-2])
0xd3f: Pop(1)
0xd40: Push((int) 1)
0xd41: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xd42: Push("k11q01SoulCount")
0xd43: @ SetVariable(Stack[-1], Stack[-2])
0xd44: Pop(1)
0xd45: Push((int) 2)
0xd46: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd47: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd48: PushEmpty()
0xd49: Call2 0xe31

0xd4a: Pop(0)
0xd4b: GOTO 0xd6e

0xd4c: Push((int) 3)
0xd4d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4e: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd4f: PushEmpty()
0xd50: Call2 0xe24

0xd51: Pop(0)
0xd52: GOTO 0xd6e

0xd53: Push((int) 4)
0xd54: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd55: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd56: PushEmpty()
0xd57: Call2 0xe17

0xd58: Pop(0)
0xd59: GOTO 0xd6e

0xd5a: Push((int) 5)
0xd5b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5d: PushEmpty()
0xd5e: Call2 0xe0a

0xd5f: Pop(0)
0xd60: GOTO 0xd6e

0xd61: Push((int) 6)
0xd62: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd63: IF (Stack[-1] == 0) GOTO 0xd68; Pop(1)

0xd64: PushEmpty()
0xd65: Call2 0xdfd

0xd66: Pop(0)
0xd67: GOTO 0xd6e

0xd68: Push((int) 7)
0xd69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6a: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd6b: PushEmpty()
0xd6c: Call2 0xdf0

0xd6d: Pop(0)
0xd6e: Return(); Pop(2)

0xd6f: PushEmpty()
0xd70: Push("ook11Ospina1")
0xd71: Push((int) 1)
0xd72: @ SetVariable(Stack[-2], Stack[-1])
0xd73: Pop(2)
0xd74: Return(); Pop(0)

0xd75: PushEmpty()
0xd76: Push("ook2Ospina1")
0xd77: Push((int) 1)
0xd78: @ SetVariable(Stack[-2], Stack[-1])
0xd79: Pop(2)
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: Push("k2q01")
0xd7d: Push((int) -1)
0xd7e: @ SetVariable(Stack[-2], Stack[-1])
0xd7f: Pop(2)
0xd80: PushEmpty()
0xd81: Call2 0xe3e

0xd82: Pop(0)
0xd83: Return(); Pop(0)

0xd84: PushEmpty()
0xd85: PushEmpty(int, string)
0xd86: Stack[-1] = "k2q01"
0xd87: Call2 0xce0

0xd88: Pop(1)
0xd89: Push((int) 2)
0xd8a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd8b: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd8c: Stack[-2] = (bool) 1
0xd8d: Return(); Pop(0)

0xd8e: Stack[-2] = (bool) 0
0xd8f: Return(); Pop(0)

0xd90: PushEmpty()
0xd91: PushEmpty(int, string)
0xd92: Stack[-1] = "k2q01"
0xd93: Call2 0xce0

0xd94: Pop(1)
0xd95: Push((int) 5)
0xd96: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd97: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd98: Stack[-2] = (bool) 1
0xd99: Return(); Pop(0)

0xd9a: Stack[-2] = (bool) 0
0xd9b: Return(); Pop(0)

0xd9c: PushEmpty()
0xd9d: PushEmpty(int, string)
0xd9e: Stack[-1] = "k6q01"
0xd9f: Call2 0xce0

0xda0: Pop(1)
0xda1: Push((int) 2)
0xda2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xda6; Pop(1)

0xda4: Stack[-2] = (bool) 1
0xda5: Return(); Pop(0)

0xda6: Stack[-2] = (bool) 0
0xda7: Return(); Pop(0)

0xda8: PushEmpty()
0xda9: PushEmpty(int, string)
0xdaa: Stack[-1] = "k6q01DankoPos"
0xdab: Call2 0xce0

0xdac: Pop(1)
0xdad: Push((int) 3)
0xdae: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xdaf: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdb0: Stack[-2] = (bool) 1
0xdb1: Return(); Pop(0)

0xdb2: Stack[-2] = (bool) 0
0xdb3: Return(); Pop(0)

0xdb4: PushEmpty()
0xdb5: PushEmpty(int, string)
0xdb6: Stack[-1] = "ook6Ospina1"
0xdb7: Call2 0xce0

0xdb8: Pop(1)
0xdb9: Push((int) 0)
0xdba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdbb: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdbc: Stack[-2] = (bool) 1
0xdbd: Return(); Pop(0)

0xdbe: Stack[-2] = (bool) 0
0xdbf: Return(); Pop(0)

0xdc0: PushEmpty()
0xdc1: PushEmpty(int, string)
0xdc2: Stack[-1] = "k8q01"
0xdc3: Call2 0xce0

0xdc4: Pop(1)
0xdc5: Push((int) 5)
0xdc6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc7: IF (Stack[-1] == 0) GOTO 0xdca; Pop(1)

0xdc8: Stack[-2] = (bool) 1
0xdc9: Return(); Pop(0)

0xdca: Stack[-2] = (bool) 0
0xdcb: Return(); Pop(0)

0xdcc: PushEmpty()
0xdcd: PushEmpty(int, string)
0xdce: Stack[-1] = "k11q01"
0xdcf: Call2 0xce0

0xdd0: Pop(1)
0xdd1: Push((int) 9)
0xdd2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdd3: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd4: Stack[-2] = (bool) 1
0xdd5: Return(); Pop(0)

0xdd6: Stack[-2] = (bool) 0
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty()
0xdd9: PushEmpty(int, string)
0xdda: Stack[-1] = "ook11Ospina1"
0xddb: Call2 0xce0

0xddc: Pop(1)
0xddd: Push((int) 0)
0xdde: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xde0: Stack[-2] = (bool) 1
0xde1: Return(); Pop(0)

0xde2: Stack[-2] = (bool) 0
0xde3: Return(); Pop(0)

0xde4: PushEmpty()
0xde5: PushEmpty(int, string)
0xde6: Stack[-1] = "ook2Ospina1"
0xde7: Call2 0xce0

0xde8: Pop(1)
0xde9: Push((int) 0)
0xdea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdeb: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdec: Stack[-2] = (bool) 1
0xded: Return(); Pop(0)

0xdee: Stack[-2] = (bool) 0
0xdef: Return(); Pop(0)

0xdf0: PushEmpty(object, object)
0xdf1: Push((int) 498)
0xdf2: Push((int) 1)
0xdf3: Push((int) 528065)
0xdf4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdf5: Pop(3)
0xdf6: PushEmpty(bool, object, int)
0xdf7: Stack[-2] = Stack[-4]
0xdf8: Stack[-1] = (int) 480
0xdf9: Call2 0xe8c

0xdfa: Pop(3)
0xdfb: Return(); Pop(2)

0xdfc: Stack[-1] = 0
0xdfd: PushEmpty(object, object)
0xdfe: Push((int) 497)
0xdff: Push((int) 1)
0xe00: Push((int) 528064)
0xe01: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe02: Pop(3)
0xe03: PushEmpty(bool, object, int)
0xe04: Stack[-2] = Stack[-4]
0xe05: Stack[-1] = (int) 480
0xe06: Call2 0xe8c

0xe07: Pop(3)
0xe08: Return(); Pop(2)

0xe09: Stack[-1] = 0
0xe0a: PushEmpty(object, object)
0xe0b: Push((int) 496)
0xe0c: Push((int) 1)
0xe0d: Push((int) 528063)
0xe0e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe0f: Pop(3)
0xe10: PushEmpty(bool, object, int)
0xe11: Stack[-2] = Stack[-4]
0xe12: Stack[-1] = (int) 480
0xe13: Call2 0xe8c

0xe14: Pop(3)
0xe15: Return(); Pop(2)

0xe16: Stack[-1] = 0
0xe17: PushEmpty(object, object)
0xe18: Push((int) 495)
0xe19: Push((int) 1)
0xe1a: Push((int) 528062)
0xe1b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe1c: Pop(3)
0xe1d: PushEmpty(bool, object, int)
0xe1e: Stack[-2] = Stack[-4]
0xe1f: Stack[-1] = (int) 480
0xe20: Call2 0xe8c

0xe21: Pop(3)
0xe22: Return(); Pop(2)

0xe23: Stack[-1] = 0
0xe24: PushEmpty(object, object)
0xe25: Push((int) 494)
0xe26: Push((int) 1)
0xe27: Push((int) 528061)
0xe28: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: PushEmpty(bool, object, int)
0xe2b: Stack[-2] = Stack[-4]
0xe2c: Stack[-1] = (int) 480
0xe2d: Call2 0xe8c

0xe2e: Pop(3)
0xe2f: Return(); Pop(2)

0xe30: Stack[-1] = 0
0xe31: PushEmpty(object, object)
0xe32: Push((int) 493)
0xe33: Push((int) 1)
0xe34: Push((int) 528060)
0xe35: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe36: Pop(3)
0xe37: PushEmpty(bool, object, int)
0xe38: Stack[-2] = Stack[-4]
0xe39: Stack[-1] = (int) 480
0xe3a: Call2 0xe8c

0xe3b: Pop(3)
0xe3c: Return(); Pop(2)

0xe3d: Stack[-1] = 0
0xe3e: PushEmpty(object, object)
0xe3f: Push((int) 790)
0xe40: Push((int) 1)
0xe41: Push((int) 542526)
0xe42: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe43: Pop(3)
0xe44: PushEmpty(bool, object, int)
0xe45: Stack[-2] = Stack[-4]
0xe46: Stack[-1] = (int) 461
0xe47: Call2 0xe8c

0xe48: Pop(3)
0xe49: Return(); Pop(2)

0xe4a: Stack[-1] = 0
0xe4b: PushEmpty(object, object)
0xe4c: Push((int) 467)
0xe4d: Push((int) 1)
0xe4e: Push((int) 527783)
0xe4f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe50: Pop(3)
0xe51: PushEmpty(bool, object, int)
0xe52: Stack[-2] = Stack[-4]
0xe53: Stack[-1] = (int) 461
0xe54: Call2 0xe8c

0xe55: Pop(3)
0xe56: Return(); Pop(2)

0xe57: Stack[-1] = 0
0xe58: PushEmpty(object, object)
0xe59: Push((int) 465)
0xe5a: Push((int) 1)
0xe5b: Push((int) 527781)
0xe5c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe5d: Pop(3)
0xe5e: PushEmpty(bool, object, int)
0xe5f: Stack[-2] = Stack[-4]
0xe60: Stack[-1] = (int) 461
0xe61: Call2 0xe8c

0xe62: Pop(3)
0xe63: Return(); Pop(2)

0xe64: Stack[-1] = 0
0xe65: PushEmpty(object, object)
0xe66: Push((int) 414)
0xe67: Push((int) 1)
0xe68: Push((int) 526115)
0xe69: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe6a: Pop(3)
0xe6b: PushEmpty(bool, object, int)
0xe6c: Stack[-2] = Stack[-4]
0xe6d: Stack[-1] = (int) 408
0xe6e: Call2 0xe8c

0xe6f: Pop(3)
0xe70: Return(); Pop(2)

0xe71: Stack[-1] = 0
0xe72: PushEmpty(object, object)
0xe73: Push((int) 444)
0xe74: Push((int) 1)
0xe75: Push((int) 526469)
0xe76: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe77: Pop(3)
0xe78: PushEmpty(bool, object, int)
0xe79: Stack[-2] = Stack[-4]
0xe7a: Stack[-1] = (int) 438
0xe7b: Call2 0xe8c

0xe7c: Pop(3)
0xe7d: Return(); Pop(2)

0xe7e: Stack[-1] = 0
0xe7f: PushEmpty(object, object)
0xe80: @ GetDiaryRoot(Stack[-1])
0xe81: Pop(0)
0xe82: Pop(0); Push((bool) Stack[-1] == 0)
0xe83: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe84: Push("Can't retrieve diary root")
0xe85: @ Trace(Stack[-1])
0xe86: Pop(1)
0xe87: Stack[-3] = (bool) 0
0xe88: Return(); Pop(2)

0xe89: Stack[-3] = Stack[-1]
0xe8a: Return(); Pop(2)

0xe8b: Stack[-1] = 0
0xe8c: PushEmpty(object, object, int, object, object, int)
0xe8d: PushEmpty(object)
0xe8e: Call2 0xe7f

0xe8f: Stack[-4] = Stack[-1]
0xe90: Pop(1)
0xe91: @@ Find(Stack[-7], Stack[-2])
0xe92: Pop(0)
0xe93: Pop(0); Push((bool) Stack[-2] == 0)
0xe94: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe95: Push("Can't find diary parent with id: ")
0xe96: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe97: @ Trace(Stack[-1])
0xe98: Pop(1)
0xe99: Stack[-9] = (bool) 0
0xe9a: Return(); Pop(6)

0xe9b: @@ AddChild(Stack[-8])
0xe9c: Pop(0)
0xe9d: Push((int) 7)
0xe9e: @ SendWorldWndMessage(Stack[-1])
0xe9f: Pop(1)
0xea0: @@ GetCategory(Stack[-1])
0xea1: Pop(0)
0xea2: @ SetDiarySection(Stack[-1])
0xea3: Pop(0)
0xea4: Stack[-9] = (bool) 0
0xea5: Return(); Pop(6)

0xea6: Stack[-2] = 0
0xea7: Stack[-3] = 0
0xea8: PushEmpty(int, int)
0xea9: Push("branch")
0xeaa: @ GetVariable(Stack[-1], Stack[-2])
0xeab: Pop(1)
0xeac: Push((int) 0)
0xead: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeae: IF (Stack[-1] == 0) GOTO 0xeb2; Pop(1)

0xeaf: Stack[-3] = (int) 1
0xeb0: Return(); Pop(2)

0xeb1: GOTO 0xeb7

0xeb2: Push((int) 1)
0xeb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb7; Pop(1)

0xeb5: Stack[-3] = (int) 2
0xeb6: Return(); Pop(2)

0xeb7: Stack[-3] = (int) 3
0xeb8: Return(); Pop(2)

0xeb9: PushEmpty()
0xeba: Push(GlobalVars[1])
0xebb: Pop(1); Push((bool) Stack[-1] == 0)
0xebc: IF (Stack[-1] == 0) GOTO 0xec6; Pop(1)

0xebd: PushEmpty(int, object)
0xebe: Stack[-1] = Stack[-3]
0xebf: Push(-2, 1); TaskCall(2)
0xec0: Call2 0x2da

0xec1: Pop(-2, 1); TaskReturn
0xec2: Pop(2)
0xec3: Push(GlobalVars[1])
0xec4: Stack[-1] = (bool) 1
0xec5: GlobalVars[1] = Stack[-1]; Pop(1)
0xec6: PushEmpty(bool, int)
0xec7: Stack[-1] = (int) 2
0xec8: Call2 0xcee

0xec9: Pop(1)
0xeca: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xecb: PushEmpty(int, object)
0xecc: Stack[-1] = Stack[-3]
0xecd: Push(-2, 1); TaskCall(0)
0xece: Call2 0x0

0xecf: Pop(-2, 1); TaskReturn
0xed0: Pop(2)
0xed1: Return(); Pop(0)

0xed2: PushEmpty(bool, int)
0xed3: Stack[-1] = (int) 6
0xed4: Call2 0xcee

0xed5: Pop(1)
0xed6: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xed7: PushEmpty(int, object)
0xed8: Stack[-1] = Stack[-3]
0xed9: Push(-2, 1); TaskCall(4)
0xeda: Call2 0x3e5

0xedb: Pop(-2, 1); TaskReturn
0xedc: Pop(2)
0xedd: Return(); Pop(0)

0xede: PushEmpty(bool, int)
0xedf: Stack[-1] = (int) 8
0xee0: Call2 0xcee

0xee1: Pop(1)
0xee2: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xee3: PushEmpty(int, object)
0xee4: Stack[-1] = Stack[-3]
0xee5: Push(-2, 1); TaskCall(6)
0xee6: Call2 0x536

0xee7: Pop(-2, 1); TaskReturn
0xee8: Pop(2)
0xee9: Return(); Pop(0)

0xeea: PushEmpty(bool, int)
0xeeb: Stack[-1] = (int) 11
0xeec: Call2 0xcee

0xeed: Pop(1)
0xeee: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xeef: PushEmpty(int, object)
0xef0: Stack[-1] = Stack[-3]
0xef1: Push(-2, 1); TaskCall(8)
0xef2: Call2 0x6d9

0xef3: Pop(-2, 1); TaskReturn
0xef4: Pop(2)
0xef5: Return(); Pop(0)

0xef6: PushEmpty(bool, int)
0xef7: Stack[-1] = (int) 12
0xef8: Call2 0xcee

0xef9: Pop(1)
0xefa: IF (Stack[-1] == 0) GOTO 0xf02; Pop(1)

0xefb: PushEmpty(int, object)
0xefc: Stack[-1] = Stack[-3]
0xefd: Push(-2, 1); TaskCall(10)
0xefe: Call2 0x88e

0xeff: Pop(-2, 1); TaskReturn
0xf00: Pop(2)
0xf01: Return(); Pop(0)

0xf02: PushEmpty(int, object)
0xf03: Stack[-1] = Stack[-3]
0xf04: Push(-2, 1); TaskCall(12)
0xf05: Call2 0x9cc

0xf06: Pop(-2, 1); TaskReturn
0xf07: Pop(2)
0xf08: Return(); Pop(0)

