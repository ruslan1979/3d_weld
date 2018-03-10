

/*--------------------------------------------------------------------*\
Pro/Toolkit includes
http://www.datajett.com/Cadd/ProE/PTK/TestDrawTbl.c
\*--------------------------------------------------------------------*/
#include <ProToolkit.h>
#include <Pro2dEntdef.h>
#include <ProANSI.h>
#include <ProAnalysis.h>
#include <ProAnimate.h>
#include <ProArray.h>
#include <ProAsmcomp.h>
#include <ProAsmcompR20.h>
#include <ProAsmcomppath.h>
#include <ProAssembly.h>
#include <ProAutodrill.h>
#include <ProAxis.h>
#include <ProCabling.h>
#include <ProCavitylayout.h>
#include <ProCavlayrule.h>
#include <ProChamfer.h>
#include <ProClCmd.h>
#include <ProClcmdElem.h>
#include <ProCollect.h>
#include <ProColor.h>
#include <ProComm.h>
#include <ProConst.h>
#include <ProContour.h>
#include <ProContourdata.h>
#include <ProCopyGeom.h>
#include <ProCore.h>
#include <ProCsys.h>
#include <ProCsysdata.h>
#include <ProCurve.h>
#include <ProCurvedata.h>
#include <ProDatumdata.h>
#include <ProDimension.h>
#include <ProDisplist.h>
#include <ProDrawing.h>
#include <ProDtlattach.h>
#include <ProDtlentity.h>
#include <ProDtlgroup.h>
#include <ProDtlitem.h>
#include <ProDtlnote.h>
#include <ProDtlsymdef.h>
#include <ProDtlsyminst.h>
#include <ProDtmAxis.h>
#include <ProDtmCrv.h>
#include <ProDtmCrvSketch.h>
#include <ProDtmCsys.h>
#include <ProDtmPln.h>
#include <ProDtmPnt.h>
#include <ProDwgtable.h>
#include <ProEdge.h>
#include <ProEdgedata.h>
#include <ProElemId.h>
#include <ProElement.h>
#include <ProElempath.h>
#include <ProExpldstate.h>
#include <ProExtdata.h>
#include <ProExtobj.h>
#include <ProExtobjCB.h>
#include <ProExtobjDisp.h>
#include <ProExtobjRef.h>
#include <ProExtobjSel.h>
#include <ProExtrude.h>
#include <ProFaminstance.h>
#include <ProFamtable.h>
#include <ProFeatForm.h>
#include <ProFeatIntr.h>
#include <ProFeatType.h>
#include <ProFeature.h>
#include <ProFemMesh.h>
#include <ProFemObjects.h>
#include <ProFlatSrf.h>
#include <ProForeignCurve.h>
#include <ProGeomitem.h>
#include <ProGeomitemdata.h>
#include <ProGraphic.h>
#include <ProGroup.h>
#include <ProGtol.h>
#include <ProHardware.h>
#include <ProHole.h>
#include <ProImm.h>
#include <ProImportfeat.h>
#include <ProIntf3Dexport.h>
#include <ProIntfData.h>
#include <ProIntfimport.h>
#include <ProItemerr.h>
#include <ProJlink.h>
#include <ProLayer.h>
#include <ProLayerR19.h>
#include <ProMaterial.h>
#include <ProMdl.h>
#include <ProMdlChk.h>
#include <ProMenu.h>
#include <ProMenuBar.h>
#include <ProMessage.h>
#include <ProMfg.h>
#include <ProMfgdb.h>
#include <ProMfgoper.h>
#include <ProModFeat.h>
#include <ProMode.h>
#include <ProModelitem.h>
#include <ProMoldbase.h>
#include <ProNcseq.h>
#include <ProNcseqElem.h>
#include <ProNote.h>
#include <ProNotify.h>
#include <ProObjects.h>
#include <ProParameter.h>
#include <ProParamval.h>
#include <ProPart.h>
#include <ProPattern.h>
#include <ProPecktable.h>
#include <ProPiping.h>
#include <ProPoint.h>
#include <ProPrint.h>
#include <ProProcstep.h>
#include <ProQuilt.h>
#include <ProQuiltdata.h>
#include <ProRefInfo.h>
#include <ProRelSet.h>
#include <ProReplace.h>
#include <ProRevolve.h>
#include <ProRib.h>
#include <ProRmdt.h>
#include <ProRule.h>
#include <ProScope.h>
#include <ProSecConstr.h>
#include <ProSecdim.h>
#include <ProSecdimType.h>
#include <ProSecerror.h>
#include <ProSection.h>
#include <ProSelection.h>
#include <ProSheetmetal.h>
#include <ProShrinkwrap.h>
#include <ProSimprep.h>
#include <ProSimprepdata.h>
#include <ProSizeConst.h>
#include <ProSkeleton.h>
#include <ProSolid.h>
#include <ProStdSection.h>
#include <ProSurface.h>
#include <ProSurfacedata.h>
#include <ProSweep.h>
#include <ProTool.h>
#include <ProToolElem.h>
#include <ProToolinput.h>
#include <ProToolkitDll.h>
#include <ProUI.h>
#include <ProUICascadebutton.h>
#include <ProUICheckbutton.h>
#include <ProUICmd.h>
#include <ProUIDialog.h>
#include <ProUIInputpanel.h>
#include <ProUILabel.h>
#include <ProUILayout.h>
#include <ProUIList.h>
#include <ProUIMenubar.h>
#include <ProUIMenupane.h>
#include <ProUIMessage.h>
#include <ProUIOptionmenu.h>
#include <ProUIProgressbar.h>
#include <ProUIPushbutton.h>
#include <ProUIRadiogroup.h>
#include <ProUISlider.h>
#include <ProUISpinbox.h>
#include <ProUITab.h>
#include <ProUITable.h>
#include <ProUITextarea.h>
#include <ProUIThumbwheel.h>
#include <ProUdf.h>
#include <ProUtil.h>
#include <ProUvStat.h>
#include <ProValue.h>
#include <ProVerstamp.h>
#include <ProView.h>
#include <ProWcell.h>
#include <ProWchar.h>
#include <ProWeld.h>
#include <ProWindows.h>
#include <ProWorkspace.h>
#include <ProWstring.h>
#include <ProXsec.h>
#include <ProTKRunTime.h>

/*--------------------------------------------------------------------*\
Application includes
\*--------------------------------------------------------------------*/
#include "TestError.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------------------------------*\
Application global/external data
\*--------------------------------------------------------------------*/

#define TEMPLATE_NAME "a_drawinga"
#define LOG_FILE_NAME "drw_test.log"
#define wLOG_FILE_NAME L"drw_test.log"
#define MSGFIL L##"msg_ugasmcomp.txt"

ProLine msgLine;
static double identity_matrix[4][4] = { {1.0, 0.0, 0.0, 0.0},
					{0.0, 1.0, 0.0, 0.0},
					{0.0, 0.0, 1.0, 0.0},
					{0.0, 0.0, 0.0, 1.0} };
					
int tk_3dweld (ProAppData arg_1, int arg_2);
void d3weld() ;
void NewDwgM();
void NewDwgI()   ;
void NewDwgS()   ;
void NewDwgT()   ;
void NewDwgTSF()   ;
void DrawingText();
void DrawingRepReg();
void DrawingRepTabImp();
void DrawingRepMapKey();
void NewDwgSRSF()   ;
void dimshow()	 ;
void ShowErr(ProError status);

ProError UsrFeatFindbyname ( ProSolid solid, char  *name,ProFeattype   type,ProFeature *feat);

int ProUtilMatrixInvert(
    double m[4][4],
    double output[4][4]);
void ProUtilMatrixCopy(
    double input[4][4],
    double output[4][4]);
int UsrPointTable ();
int UsrDimPoints() ;	
static uiCmdAccessState TestAccessDefault(uiCmdAccessMode access_mode)
{
  return (ACCESS_AVAILABLE);
}

/*====================================================================*\
FUNCTION : user_initialize()
PURPOSE  : Pro/DEVELOP standard initialize - define menu button
\*====================================================================*/
int user_initialize()
{
	ProError err;
	uiCmdCmdId   cmd_id;

	err=ProCmdActionAdd("3DWELD", (uiCmdCmdActFn) tk_3dweld, uiProe2ndImmediate,
		TestAccessDefault,
		PRO_B_TRUE, PRO_B_TRUE, &cmd_id);
   
	err=ProCmdDesignate(cmd_id, "3DWELD Button", "3DWELD Button", "3DWELD Button", L"3dweld.txt");
	
	err=ProCmdIconSet(cmd_id,"3dweld.png");	   
	   
	return (0);
}

/*====================================================================*\
FUNCTION : user_terminate()
PURPOSE  : To handle any termination actions
\*====================================================================*/
void user_terminate()
{
	
}

int ISO_STD = 0;

int tk_3dweld (ProAppData arg_1, int arg_2)
{
	//ProTestDrwSimpRepAdd();
	//UsrCreateSheet();  -- working from drw
	
	//NewDwgT (); 			//1 mandatory
	//ProTestSRepInfo();	//1 mandatory
	
	//UsrPointTable (); 	draw table good
	
	//UsrDimPoints() ;		creates dimensions
	
	//dimshow();			works with ALEX dim
	
	//last working from previous version NewDwgTSF (); 			//4SF - template
	// DrawingText(); -- shows drawing text in a drawing
	// DrawingRepReg (); -- work with repeat regions
	//DrawingRepTabImp(); /*-- import from file and mapkeys -- might be the best*/ last from previous
	//DrawingRepMapKey();
	
	//NewDwgSRSF();
	
	d3weld();
	
	return(0);
}




typedef struct  
{
  ProVector vector;        /* The direction that the dimension should
			      be parallel to */
  ProBoolean found;        /* Flag signalling if any matching 
			      dimensions were found. */
  ProDimension dim_found;  /* May be used if visiting in an attempt 
			      to locate a certain dimension */
} DimByVector;

/*============================================================================*\
 Function:	ProDimOrientToStr
 Purpose:       
\*============================================================================*/
char* ProDimTypeToStr(
    ProDimensiontype type
)
{
    switch (type)
    {
    case PRODIMTYPE_UNKNOWN : return (char *)"UNKNOWN";
    case PRODIMTYPE_LINEAR  : return (char *)"LINEAR";
    case PRODIMTYPE_RADIUS  : return (char *)"RADIUS";
    case PRODIMTYPE_DIAMETER: return (char *)"DIAMETER";
    case PRODIMTYPE_ANGLE   : return (char *)"ANGLE";
    default : return (char *)"INVALID";
    }
}


ProView drwView; 
ProDrawing drawing;

/*==================================================================*\
FUNCTION : UserDimensionFilterByVector()
PURPOSE  : Find linear dimensions oriented parallel to vector (a filter 
           action)
\*==================================================================*/
ProError UserDimensionFilterByVector (ProDimension* dim,
				      ProAppData appdata)
{
  ProDimlocation dimloc;
  ProDimensiontype type;  
  ProPoint3d arrow_1, arrow_2;
  int i;
  ProError status;
  ProVector dimvector;
  double dotproduct;
  ProLine *p_text = NULL;
  ProName symbol;
  ProCharName dtest;
  DimByVector* data = (DimByVector*) appdata;
  ProBoolean is_shown;
  
  ProDimensionTypeGet (dim, &type);
  Log("filter %s %d ??? %d", ProDimTypeToStr (type), type, PRO_DIMENSION);
  //status = ProDimensionTextGet (dim, &p_text);
  status = ProDimensionTextWstringsGet(dim, &p_text);
  ProWstringToString(dtest,msgLine);
  Log(" text %s" ,dtest);
  ProDimensionSymbolGet (dim, symbol);
  ProWstringToString(dtest, symbol); 
  Log(" symbol [%s]" ,dtest);  
  ProAnnotationIsShown(dim, drawing, &is_shown);
  if (is_shown == PRO_B_TRUE) Log(" shown yes " );  else Log(" shown no " );  
  
  /*if (type != PRODIMTYPE_LINEAR)
    return (PRO_TK_CONTINUE);
  else*/
	  if (strstr(dtest,"ALEX"))
		  return PRO_TK_NO_ERROR;//(PRO_TK_CONTINUE);
	  else
      return (PRO_TK_CONTINUE);

  /*
/*------------------------------------------------------------------*\
    Continue only for linear dimensions
\*------------------------------------------------------------------* /
  ProDimensionTypeGet (dim, &type);
  if (type != PRODIMTYPE_LINEAR)
    return (PRO_TK_CONTINUE);
  
/*------------------------------------------------------------------*\
    Extract the location of the arrows of the dimension
\*------------------------------------------------------------------* /
  status = ProDimensionLocationGet (dim, NULL, NULL, &dimloc);
  if (status != PRO_TK_NO_ERROR)
    return (PRO_TK_CONTINUE);

  ProDimlocationArrowsGet (dimloc, arrow_1, arrow_2);
  ProDimlocationFree (dimloc);

/*------------------------------------------------------------------*\
    Construct, validate, and normalize the dimension direction vector
\*------------------------------------------------------------------* /
  for (i = 0; i < 3; i++)
    dimvector [i] = arrow_2 [i] - arrow_1 [i];

  if (ProUtilVectorLength (dimvector) < EPSM6 )
    return (PRO_TK_CONTINUE);

  ProUtilVectorNormalize (dimvector, dimvector);

/*------------------------------------------------------------------*\
    Check if the angle between the vectors is 0 or 180 degrees
\*------------------------------------------------------------------* /
  dotproduct = ProUtilVectorDot (data->vector, dimvector);

  if (fabs (fabs (dotproduct) - 1.0) < EPSM6 )
    {
      data->found = PRO_B_TRUE;
      return (PRO_TK_NO_ERROR);
    }
  else
    return (PRO_TK_CONTINUE);*/
}

/*==================================================================*\
FUNCTION : UserDimensionShow()
PURPOSE  : Show the given dimension (a visit action)
\*==================================================================*/
ProError UserDimensionShow (ProDimension* dim, 
			    ProError error_status,
			    ProAppData appdata)
{
	ProError e;
	ProBoolean is_shown;
	
	Log("ProAnnotationShow B %d", error_status);
	ProAnnotationIsShown(dim, drawing, &is_shown);

	if (is_shown == PRO_B_TRUE) {
	e = ProAnnotationErase ( (ProAnnotation*)&dim, drawing);
	e = ProAnnotationUndisplay ( (ProAnnotation*)&dim, NULL, drawing);
	}
	else {
	e = ProAnnotationShow ( (ProAnnotation*)&dim, NULL, drwView);
	e = ProAnnotationDisplay ( (ProAnnotation*)&dim, NULL, drawing, drwView);
	}

	if ( e == PRO_TK_NO_ERROR)
		Log("ProAnnotationShow A %d, %s", e, "PRO_TK_NO_ERROR");
	else if ( e == PRO_TK_BAD_INPUTS)
		Log("ProAnnotationShow A %d, %s", e, "PRO_TK_BAD_INPUTS");
	else if ( e == PRO_TK_NO_CHANGE)
		Log("ProAnnotationShow A %d, %s", e, "PRO_TK_NO_CHANGE");
	else if ( e == PRO_TK_INVALID_MATRIX)
		Log("ProAnnotationShow A %d, %s", e, "PRO_TK_INVALID_MATRIX");
	else if ( e == PRO_TK_NO_LICENSE)
		Log("ProAnnotationShow A %d, %s", e, "PRO_TK_NO_LICENSE");

	if ( e == PRO_TK_NO_ERROR) return e;
	
	if (is_shown == PRO_B_TRUE)
	e = ProDimensionErase (dim, drawing);
		else
	e = ProDimensionShow (dim, drwView, drawing, NULL);
	
	if ( e == PRO_TK_NO_ERROR)
		Log("ProDimensionShow A %d, %s", e, "PRO_TK_NO_ERROR");
	else if ( e == PRO_TK_GENERAL_ERROR)
		Log("ProDimensionShow A %d, %s", e, "PRO_TK_GENERAL_ERROR");
	else 
		Log("ProDimensionShow A %d, %s", e, "unknown");
	
  return (PRO_TK_NO_ERROR);//e;//(PRO_TK_NO_ERROR);
}


void dimshow()
{
	ProSelection *sels = NULL;
	int nSels = 0;
//	ProView drwView;  
	ProError status;
//	ProDrawing drawing;
	ProSolid solid;
	DimByVector data;
	ProMdldata mdata;
	ProCharName name, type;
	
	status = ProSelect(
		 "dwg_view",
		 1,
		 NULL,
		 NULL,
		 NULL,
		 NULL,
		 &sels,
		 &nSels);
	if (nSels >= 1)
	{
			status = ProSelectionViewGet(sels[0], &drwView);
			//ShowErr(status);
			status = ProMdlCurrentGet((ProMdl*)&drawing);
			
			/*
			ProAnnotationByViewShow(drawing, drwView, PRO_DIMENSION);
			status = ProDrawingViewRegenerate(drawing, drwView);	
			*/
			
			ProDrawingViewSolidGet(drawing, drwView, &solid);
			ProMdlDataGet((ProMdl)solid, &mdata);
			ProWstringToString(name, mdata.name);
			ProWstringToString(type, mdata.type);
			Log("    Solid        : %s.%s.%d\n", name, type,
	      mdata.version);
		    status = ProSolidDimensionVisit (solid,
						   PRO_B_FALSE,
						   UserDimensionShow,
						   UserDimensionFilterByVector,
						 &data);  
			//ShowErr(status);

			
	}
}

static int SFMiscGetFmtDate( char strFmt[], char strDate[] )
{
  time_t     calTime;
  struct tm  *tm;
  char       line[100];

  if ( (calTime = time(NULL)) == -1)
  {
    printf ("time error");
    return(-1);
  }

  if ( (tm = localtime(&calTime)) == NULL)
  {
    printf("localtime error");
    return(-1);
  }

  if (strftime(line,100, strFmt, tm) == 0)
  {
   	printf ("strftime error");
    return(-1);
  }

  strcpy(strDate, line);

  return(0);
}



int Log(const char *strFormat, ... )
{
  va_list  arg_ptr;
  static FILE *pLogFile = NULL;
  char strExtendedFormat[1000];
  char strTime[500];
  char *pcName = NULL;

  pLogFile = fopen( LOG_FILE_NAME, "a" );

  SFMiscGetFmtDate("%d-%m-%y %H:%M:%S", strTime);
  sprintf( strExtendedFormat, "[%s] %s\n", strTime, strFormat );

  va_start( arg_ptr, strFormat );
  vprintf( strExtendedFormat, arg_ptr );

  if(pLogFile != NULL)
    vfprintf( pLogFile, strExtendedFormat, arg_ptr );
  va_end( arg_ptr );

  if(pLogFile != NULL)
    fclose( pLogFile );

  return 0;
}


/*====================================================================*\
FUNCTION: UserDisplayPopupTranslatedWarning
PURPOSE:  Display a translated warning message in a popup dialog.
\*====================================================================*/
ProError   UserDisplayPopupTranslatedWarning ()
{
	ProLine message;
	ProUIMessageButton* buttons;
	ProUIMessageButton user_choice;

  /*--------------------------------------------------------------------*\
		Obtain the message text from the message file into the message variable.
  \*--------------------------------------------------------------------*/
	ProMessageToBuffer (message,
						L"msg_ugui.txt",
						"USER Warning: value exceeded specified range of 0 - 100");

	ProArrayAlloc (1, sizeof (ProUIMessageButton), 
					1, (ProArray*)&buttons);

	buttons [0] = PRO_UI_MESSAGE_OK;

  /*--------------------------------------------------------------------*\
		Display the popup dialog.
  \*--------------------------------------------------------------------*/
	ProUIMessageDialogDisplay (PROUIMESSAGE_WARNING,
								L"Warning",
								//message,
								msgLine,
								buttons,
								PRO_UI_MESSAGE_OK,
								&user_choice);

	ProArrayFree ((ProArray*)&buttons);


	return PRO_TK_NO_ERROR;
}

void ShowErr(ProError status){
	if ( status == 0	) ProStringToWstring(msgLine,"Just a notification"); else
if ( status == PRO_TK_NO_ERROR	) ProStringToWstring(msgLine,"PRO_TK_NO_ERROR"); else
if ( status == PRO_TK_BAD_INPUTS	) ProStringToWstring(msgLine,"PRO_TK_BAD_INPUTS"); else
if ( status == PRO_TK_INVALID_FILE	) ProStringToWstring(msgLine,"PRO_TK_INVALID_FILE"); else
if ( status == PRO_TK_NO_LICENSE	) ProStringToWstring(msgLine,"PRO_TK_NO_LICENSE"); else
if ( status == PRO_TK_OBSOLETE_FUNC	) ProStringToWstring(msgLine,"PRO_TK_OBSOLETE_FUNC"); else
if ( status == PRO_TK_GENERAL_ERROR	) ProStringToWstring(msgLine,"PRO_TK_GENERAL_ERROR"); else
if ( status == PRO_TK_E_FOUND	) ProStringToWstring(msgLine,"PRO_TK_E_FOUND"); else
ProStringToWstring(msgLine,"unknown error");


/*
	PRO_TK_NO_ERROR      - The function successfully added the simplified
	                       representation to the drawing.
	PRO_TK_GENERAL_ERROR - The simplified representation was not
                               added to the drawing.
	PRO_TK_BAD_INPUTS    - The function failed because one or more of
                               the input arguments are invalid.
	PRO_TK_E_FOUND       - The function did nothing because the
                               specified simplified representation already
                               exists.

*/

UserDisplayPopupTranslatedWarning();
}	




/*===========================================================================*\
  FUNCTION: ProTestDrwSimpRepAdd
  PURPOSE: add simpliefied representation to drawing.
\*===========================================================================*/
int ProTestDrwSimpRepAdd ()
{
    int             i, mdl_num;
    ProCharLine     c_name, line;
    ProDrawing      drawing;
    ProMdl         *mdl_arr = NULL;
    ProSimprep      simprep;
    ProName         w_name;
    ProError        error;

    error = ProMdlCurrentGet((ProMdl*)&drawing);
    TEST_CALL_REPORT ("ProMdlCurrentGet()",
        "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);

/*----------------------------------------------------------------------------*\
    Get model list in session.
\*----------------------------------------------------------------------------*/
    error = ProSessionMdlList ( PRO_MDL_ASSEMBLY, &mdl_arr, &mdl_num);
    TEST_CALL_REPORT ("ProSessionMdlList()",
        "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);

/*----------------------------------------------------------------------------*\
    Add simp representation.
\*----------------------------------------------------------------------------*/
    if ( mdl_num >0)
    {
        for (i=0;i<mdl_num; i++)
        {
            error = ProMdlNameGet (mdl_arr[i], w_name);
            TEST_CALL_REPORT ("ProMdlNameGet()",
                "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);

            ProTKSprintf (line,"Add simpliefied representation from model %s [y/N}:",
                    ProWstringToString(c_name, w_name));

            //ProUtilMsgPrint("gen", "TEST %0s", line);

            //if (!ProUtilYesnoGet((char*)"Y"))
            //    continue;

            error = ProSimprepSelect ((ProSolid)mdl_arr[i], &simprep);
			ShowErr(error);
            TEST_CALL_REPORT ("ProSimprepSelect()",
                "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);
            if (error == PRO_TK_NO_ERROR)
            {
                error = ProDrawingAsmsimprepAdd (drawing, &simprep);
				ShowErr(error);
                TEST_CALL_REPORT ("ProDrawingAsmsimprepAdd()",
                    "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);
            }
        }

        error = ProArrayFree ((ProArray*)&mdl_arr);
        TEST_CALL_REPORT ("ProArrayFree()",
            "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);

    }
    return (0);
}
void NewDwgI()   
{ // working start
	ProError status; 
	ProMdl new_model; 
	int new_sheet; 
	ProMdlType    mdl_type;  

  char cdrwName[32];
  wchar_t drwName[32];
  
  //UserDisplayPopupTranslatedWarning();
  
  
  status=ProMdlCurrentGet (&new_model);    
  if (status != PRO_TK_NO_ERROR){   
     return;   
  }   
  /*
  status = ProMdlTypeGet (new_model, &mdl_type);   
  if (status != PRO_TK_NO_ERROR ||    
      (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
     return ;   
   */
  
    ProTKSprintf(cdrwName, "%s", "ptctest");
    ProStringToWstring(drwName, cdrwName);	
	
	//Import first sheet from the first dxf file: 
	/* status = Pro2dImportCreate(PRO_DWG_FILE, L"test1.dwg", drwName, PRO_MDL_DRAWING, PRO_B_TRUE, PRO_B_TRUE, PRO_B_TRUE,
	&new_model);  */
	/*
	//Create a second sheet: 
	status = ProDrawingSheetCreate((ProDrawing) new_model, &new_sheet); 
	//set the focus on the newly created sheet: 
	status = ProDrawingCurrentSheetSet((ProDrawing) new_model, new_sheet); 
	*/
	//import/append the second dxf file as a second sheet (scale is fitted according to the first sheet) 
	/*1 is enough*/ status = Pro2dImportAppend(PRO_DWG_FILE, L"test2.dwg", new_model, PRO_B_TRUE, PRO_B_FALSE); 
	
	//UserDisplayPopupTranslatedWarning();
	
	return status; 
	
	
} // working end					  

ProMdl        global_mdl;   
ProSimprep *global_simp_rep;
int			isr = 0;
void NewDwgT()   
{   
	ProError status;   
	ProMdl        solid_mdl;   
	ProMdl        ndrw;   
	ProMdlType    mdl_type;   
	ProMdldata    data;   
	ProModel      model;   
	ProName       dwg_template;   
	ProName       name;   
	ProDrawing    drawing, drawingR;   

	ProType type;
	ProName w_sel_name;
  
	ProError error;
	ProDwgtable table, table1, table2;
	ProMouseButton but;
	ProPoint3d point, drw_point;
	ProName w_name;
	ProPath w_full_name, w_path;
	ProCharLine f_name, c_name;
	//ProMdlExtension w_type;
	int ver;

	ProPath dxf_path;
	ProName dxf_name;

	ProSimprep      simprep;

	ProBoolean tree_flag=PRO_B_TRUE;
  
	ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
	ProDwgcreateErrs  errors;   
	char strtmp[PRO_PATH_SIZE];    

	int win_id, new_sheet;   

	ProMatrix matrix1,matrix2;
	int cur_sheet;
	ProName    w_size;

	ProSelection *sels = NULL;
	int nSels = 0;
	ProView drwView;  

	isr = 0;
	status=ProMdlCurrentGet (&solid_mdl);    
	if (status != PRO_TK_NO_ERROR){   
		return;   
	}   

	status = ProMdlTypeGet (solid_mdl, &mdl_type);   
	if (status != PRO_TK_NO_ERROR ||    (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
		return ;   
	
	global_mdl = solid_mdl;

	ProMdlDataGet (solid_mdl, &data);   

	ProWstringToString(strtmp, data.name);   
	ProStringToWstring(model.name,strtmp);   
	ProStringToWstring (name, strtmp);   
	ProWstringToString(strtmp, data.type);   
	ProStringToWstring(model.type,strtmp);   
	type = PRO_MDL_DRAWING;
	 
	ProStringToWstring (dwg_template, "template_spool_master");   

	//ProStringToWstring (name, "draw_main");   

	ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 

	//ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
	//type = PRO_MDL_DRAWING;
	
	/* for main drawing it is not needed ??? */
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
	status = ProWindowCurrentSet(win_id);
	status = ProWindowRepaint (win_id);
	status = ProWindowRefresh (win_id);

	ProMdlDisplay(drawing);

	ProWindowActivate(win_id);
	/**/

}


void NewDwgSR()   
{   
	ProError status;   
	ProMdl        solid_mdl;   
	ProMdl        ndrw;   
	ProMdlType    mdl_type;   
	ProMdldata    data;   
	ProModel      model;   
	ProName       dwg_template;   
	ProName       name;   
	ProDrawing    drawing, drawingR;   

	ProType type;
	ProName w_sel_name;
  
	ProError error;
	ProDwgtable table, table1, table2;
	ProMouseButton but;
	ProPoint3d point, drw_point;
	ProName w_name;
	ProPath w_full_name, w_path;
	ProCharLine f_name, c_name;
	//ProMdlExtension w_type;
	int ver;

	ProPath dxf_path;
	ProName dxf_name;

	ProSimprep      simprep;

	ProBoolean tree_flag=PRO_B_TRUE;
  
	ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
	ProDwgcreateErrs  errors;   
	char strtmp[PRO_PATH_SIZE];    

	int win_id, new_sheet;   

	ProMatrix matrix1,matrix2;
	int cur_sheet;
	ProName    w_size;

	ProSelection *sels = NULL;
	int nSels = 0;
	ProView drwView;  

	

     ProVector pos;
     ProView view, pview;
     ProMatrix matrix;
	 ProName mdlViewName = L"ISO", orientName = L"Trimetric";
	 ProDrawingViewDisplay disp_status;
	
	
	isr++;
	solid_mdl = global_mdl;

	ProMdlDataGet (solid_mdl, &data);   

	ProWstringToString(strtmp, data.name);   
	ProStringToWstring(model.name,strtmp);   
	ProStringToWstring (name, strtmp);   
	ProWstringToString(strtmp, data.type);   
	ProStringToWstring(model.type,strtmp);   
	type = PRO_MDL_DRAWING;
	
	
  //draw sr1  
  //ProStringToWstring (dwg_template, "template_spool_sr1");   
  if (isr==1) {
	ProStringToWstring (name, "draw_spool_01");   
	//ProStringToWstring (dwg_template, "template_spool_01");   
	ProStringToWstring (dwg_template, "drw0001");   
	ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  }
  else if (isr==2) {
	ProStringToWstring (name, "draw_spool_02");   
	//ProStringToWstring (dwg_template, "template_spool_02");   
	ProStringToWstring (dwg_template, "drw0001");   
	ProStringToWstring (w_sel_name, "DRAW_NAME2"); 
  }
  else return;
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  
  //
  //status = Pro2dImportAppend(PRO_DWG_FILE, L"test.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawing);
  
  
  ProWindowActivate(win_id);  
  
  
  //////////////////////////////////////////////////////////

    error = ProDrawingAsmsimprepAdd (drawing, global_simp_rep);

/*--------------------------------------------------------------------*\ 
Create a general view from the Z axis direction 
\*--------------------------------------------------------------------*/ 

     ProUtilMatrixCopy(NULL, matrix);
     pos[0] = 800.0;
     pos[1] = 600.0;
     pos[2] = 0.0;

     ProDrawingGeneralviewCreate(drawing, solid_mdl, 1/*sheet*/, PRO_B_FALSE,
                 pos, 0.1, matrix, &view);

				 
error = ProDrawingViewOrientationFromNameSet(drawing, view, mdlViewName, orientName, 0.0, 0.0);		

error = ProDrawingViewDisplayGet (drawing, view, &disp_status);
disp_status.style = PRO_DISPSTYLE_NO_HIDDEN;
disp_status.tangent_edge_display = PRO_TANEDGE_DIMMED;
error = ProDrawingViewDisplaySet (drawing, view, &disp_status);
error = ProDrawingViewRegenerate(drawing, view);	  
  //////////////////////////////////////////////////////////
  status = ProWindowRepaint (win_id);
  

	point[0]=638;point[1]=177;point[2]=0;

	status=ProDwgtableRetrieve((ProDrawing)drawing,L"template_bom",L".",0,point,NULL,NULL,&table1); /*assembly_a1*/
	ProDwgtableDisplay(&table1);
	

	//ProBomballoonAllCreate(drawing, &table1, -1);
	ProBomballoonCreate(drawing, &table1, -1, view);
	  
  
  
  //ProMdlSave(drawing);
	if (isr==1) 
		status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_01.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
	else
		status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_02.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
	
	
	
}	
	
void NewDwgSRSF()   
{   
	ProError status;   
	ProMdl        solid_mdl;   
	ProMdl        ndrw;   
	ProMdlType    mdl_type;   
	ProMdldata    data;   
	ProModel      model;   
	ProName       dwg_template;   
	ProName       name, stype;   
	ProDrawing    drawing, drawingR;   

	ProType type;
	ProName w_sel_name;
  
	ProError error;
	ProDwgtable table, table1, table2;
	ProMouseButton but;
	ProPoint3d point, drw_point;
	ProName w_name;
	ProPath w_full_name, w_path;
	ProCharLine f_name, c_name;
	//ProMdlExtension w_type;
	int ver;

	ProPath dxf_path;
	ProName dxf_name;

	ProSimprep      simprep;

	ProBoolean tree_flag=PRO_B_TRUE;
  
	ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
	ProDwgcreateErrs  errors;   
	char strtmp[PRO_PATH_SIZE];    

	int win_id, new_sheet;   

	ProMatrix matrix1,matrix2;
	int cur_sheet;
	ProName    w_size;

	ProSelection *sels = NULL;
	int nSels = 0;
	ProView drwView;  

	

     ProVector pos;
     ProView view, pview;
     ProMatrix matrix;
	 ProName mdlViewName = L"ISO", orientName = L"Trimetric";
	 ProDrawingViewDisplay disp_status;
	
	
	//isr++;
	Log("start");
	status=ProMdlCurrentGet (&solid_mdl);    
	if (status != PRO_TK_NO_ERROR){   
		return;   
	}   

	status = ProMdlTypeGet (solid_mdl, &mdl_type);   
	if (status != PRO_TK_NO_ERROR ||    (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
		return ;   
	
	//solid_mdl = global_mdl;

	ProMdlDataGet (solid_mdl, &data);   

	ProWstringToString(strtmp, data.name);   
	ProStringToWstring(model.name,strtmp);   
	ProStringToWstring (name, strtmp);   
	ProWstringToString(strtmp, data.type);   
	ProStringToWstring(model.type,strtmp);   
	type = PRO_MDL_DRAWING;
	
		//Log("    Solid        : %s.%s.%d\n", name, type,
	    //data.version);
	
  //draw sr1  
  ProStringToWstring (dwg_template, /*"drw0001"*/"piping_template_isogen");  
/*  
  if (isr==1) {
	ProStringToWstring (name, "draw_spool_01");   
	//ProStringToWstring (dwg_template, "template_spool_01");   
	ProStringToWstring (dwg_template, "drw0001");   
	ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  }
  else if (isr==2) {
	ProStringToWstring (name, "draw_spool_02");   
	//ProStringToWstring (dwg_template, "template_spool_02");   
	ProStringToWstring (dwg_template, "drw0001");   
	ProStringToWstring (w_sel_name, "DRAW_NAME2"); 
  }
  else return;
  */
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  
  //
  //status = Pro2dImportAppend(PRO_DWG_FILE, L"test.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawing);
  
  
  ProWindowActivate(win_id);  
  
  
  //////////////////////////////////////////////////////////
	Log("before ProDrawingSolidAdd");
  //  error = ProDrawingAsmsimprepAdd (drawing, global_simp_rep);
  ProDrawingSolidAdd(drawing, (ProSolid)solid_mdl);
	Log("after ProDrawingSolidAdd");

/*--------------------------------------------------------------------*\ 
Create a general view from the Z axis direction 
\*--------------------------------------------------------------------*/ 

     ProUtilMatrixCopy(NULL, matrix);
     pos[0] = 800.0;
     pos[1] = 600.0;
     pos[2] = 0.0;

     ProDrawingGeneralviewCreate(drawing, solid_mdl, 1/*sheet*/, PRO_B_FALSE,
                 pos, 0.1, matrix, &view);

	Log("after ProDrawingGeneralviewCreate");
				 
error = ProDrawingViewOrientationFromNameSet(drawing, view, mdlViewName, orientName, 0.0, 0.0);		

error = ProDrawingViewDisplayGet (drawing, view, &disp_status);
disp_status.style = PRO_DISPSTYLE_NO_HIDDEN;
disp_status.tangent_edge_display = PRO_TANEDGE_DIMMED;
error = ProDrawingViewDisplaySet (drawing, view, &disp_status);
error = ProDrawingViewRegenerate(drawing, view);	  
  //////////////////////////////////////////////////////////
  status = ProWindowRepaint (win_id);
  

	point[0]=638;point[1]=177;point[2]=0;

	status=ProDwgtableRetrieve((ProDrawing)drawing,L"a1-bom-table-ea-infotech",L".",0,point,NULL,NULL,&table1); /*assembly_a1*/
	ProDwgtableDisplay(&table1);
	
Log("after ProDwgtableRetrieve");

	//ProBomballoonAllCreate(drawing, &table1, -1);
	ProBomballoonCreate(drawing, &table1, -1, view);
	  
Log("after ProDrawingGeneralviewCreate");  
  
  //ProMdlSave(drawing);
  
	status = Pro2dImportAppend(PRO_DWG_FILE, L"N31130-E281EI.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  /*
	if (isr==1) 
		status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_01.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
	else
		status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_02.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  */
	
Log("after Pro2dImportAppend");	
	
}	
	
void NewDwgS()   
{   
  ProError status;   
  ProMdl        solid_mdl;   
  ProMdl        ndrw;   
  ProMdlType    mdl_type;   
  ProMdldata    data;   
  ProModel      model;   
  ProName       dwg_template;   
  ProName       name;   
  ProDrawing    drawing, drawingR;   

  ProType type;
  ProName w_sel_name;
  //ProMdlName w_sel_name;
  
	  ProError error;
	  ProDwgtable table, table1, table2;
	  ProMouseButton but;
	  ProPoint3d point, drw_point;
	  ProName w_name;
	  ProPath w_full_name, w_path;
	  ProCharLine f_name, c_name;
	  //ProMdlExtension w_type;
	  int ver;
	  
	  	ProPath dxf_path;
		ProName dxf_name;

		ProSimprep      simprep;

  ProBoolean tree_flag=PRO_B_TRUE;
  
  ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
  ProDwgcreateErrs  errors;   
  char strtmp[PRO_PATH_SIZE];    

  int win_id, new_sheet;   
  
  ProMatrix matrix1,matrix2;
  int cur_sheet;
  ProName    w_size;
  
	ProSelection *sels = NULL;
	int nSels = 0;
	ProView drwView;  
  
  //error = ProMousePickGet(PRO_LEFT_BUTTON, &but, point);
  
  
  
	
status = ProFileOpen(NULL, L"*.tbl", NULL, NULL, NULL, NULL, dxf_path);


status = ProFilenameParse(dxf_path, NULL, dxf_name, NULL, NULL);   
  
  status=ProMdlCurrentGet (&solid_mdl);    
  if (status != PRO_TK_NO_ERROR){   
     return;   
  }   

  status = ProMdlTypeGet (solid_mdl, &mdl_type);   
  if (status != PRO_TK_NO_ERROR ||    
      (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
     return ;   
   
  ProMdlDataGet (solid_mdl, &data);   

  ProWstringToString(strtmp, data.name);   
  ProStringToWstring(model.name,strtmp);   
  ProWstringToString(strtmp, data.type);   
  ProStringToWstring(model.type,strtmp);   
     
  //ProStringToWstring (dwg_template, "template_spool_master");   
  //ProStringToWstring (dwg_template, "template_spool_01");  
  //draw main  
  //ProStringToWstring (dwg_template, "template_spool_sr1");   
	ProStringToWstring (dwg_template, "template_spool_master");   
  
  ProStringToWstring (name, "draw_main");   
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  
  //
  //status = Pro2dImportAppend(PRO_DWG_FILE, L"test.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawing);
  
  
  ProWindowActivate(win_id);
  
  //draw sr1  
  //ProStringToWstring (dwg_template, "template_spool_sr1");   
	ProStringToWstring (dwg_template, "template_spool_01");   
  
  ProStringToWstring (name, "draw_spool_01");   
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  
  //
  //status = Pro2dImportAppend(PRO_DWG_FILE, L"test.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawing);
  
  
  ProWindowActivate(win_id);  
  
  //ProMdlSave(drawing);

  status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_01.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
	point[0]=0;point[1]=170;point[2]=-900;

	status=ProDwgtableRetrieve((ProDrawing)drawing,L"assembly_a1",L".",0,point,NULL,NULL,&table1);
	ProDwgtableDisplay(&table1);
	

	//ProBomballoonAllCreate(drawing, &table1, -1);
	
	//draw sr2
  
  //ProStringToWstring (dwg_template, "template_spool_sr2");   
  ProStringToWstring (dwg_template, "template_spool_02");   
  
  ProStringToWstring (name, "draw_spool_02");   
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  
  //
  //status = Pro2dImportAppend(PRO_DWG_FILE, L"test.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE); 
  
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawingR);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawingR);
  
  
  ProWindowActivate(win_id);
  
  //ProMdlSave(drawing);

  status = Pro2dImportAppend(PRO_DWG_FILE, L"Spool_isogen_02.dwg", drawing, PRO_B_TRUE, PRO_B_FALSE);  

  status = ProMdlRetrieve(name,type,&drawingR);
  ProMdlDisplay(drawingR);
  
  ProWindowActivate(win_id);  
  
  //ShowErr(status);
  
	//drw_point[0]=200;drw_point[1]=200;drw_point[2]=200;
	point[0]=430;point[1]=350;point[2]=000;	
	/*
	status = ProDrawingSheetTrfGet(drawing,1,drw_size,matrix1);
ProUtilMatrixInvert(matrix1,matrix2);
ProPntTrfEval(drw_point,matrix2,scr_point);
status = ProDwgtableRetrieve(drawing, tableName, table_path, 0, scr_point, NULL, NULL, &table);
status = ProDwgtableDisplay(&table);
You can find the ProUtilMatrixInvert function in <Creo load point>\protoolkit\protk_appls\pt_examples\pt_utils\UtilMatrix.c
*/
	status = ProDrawingCurrentSheetGet(drawing, &cur_sheet);
	status = ProDrawingSheetTrfGet(drawing,1/*cur_sheet*/,w_size,matrix1);
	//ShowErr(status);
	//if (status == PRO_TK_NO_ERROR) {}
	ProUtilMatrixInvert(matrix1,matrix2);
	//ProPntTrfEval(drw_point,matrix2,point); //what is drw_point ???
	
	status=ProDwgtableRetrieve((ProDrawing)drawingR,L"assembly1_a1",L".",0,point,NULL,NULL,&table2);
	//status=ProDwgtableByOriginRetrieve((ProDrawing)drawingR,L"assembly1_a1",L".",0,point,NULL,NULL,&table2);
	ProDwgtableDisplay(&table2);
	/*
		
	
	ProSelection *sels = NULL;
	int nSels = 0;*/
	/**/
	status = ProSelect(
		 "dwg_view",
		 1,
		 NULL,
		 NULL,
		 NULL,
		 NULL,
		 &sels,
		 &nSels);
	if (nSels >= 1)
	{
			status = ProSelectionViewGet(sels[0], &drwView);
			ShowErr(status);
		 //status = ProBomballoonCreate(drawing, &table2, drwView);
		 //ShowErr(status);
	}

	/*ProView drwView;*/
	//status = ProSelectionViewGet(sels[0], &drwView);
	/**/
	
	status = ProBomballoonAllCreate(drawing, &table2, -1);
	//ShowErr(status);
	//ProBomballoonCreate
	
	//ProSimprepSelect ((ProSolid)solid_mdl, &simprep);
	//error = ProDrawingAsmsimprepAdd (drawing, &simprep);
  
  /*{
	  
	//error = ProMousePickGet(PRO_LEFT_BUTTON, &but, point);
	//error = ProUtilFileOpen((char*)"*.tbl", f_name);
	//sprintf(f_name,"%s", "assembly_a1.tbl.1");
	//error = ProFileMdlnameParse(ProStringToWstring(w_full_name, f_name), 
    //            w_path, w_name, w_type, &ver);
	//ProStringToWstring (w_name, "DRAW_TAB_NAME"); 
	//ProStringToWstring(w_path, "assembly_a1.tbl");
 	
	
	//ProParameterTableExport()
	status = ProDwgtableRetrieve(drawing, / *w_name* /dxf_name, / *w_path* /dxf_path, 0, point, solid_mdl / *NULL* /, NULL, &table);	
	status = ProDwgtableDisplay(&table);  
  }*/
  /*status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
   
  status = ProWindowCurrentGet(&win_id);*/
  
  return;
}
void NewDwgM()   
{   
  ProError status;   
  ProMdl        solid_mdl;   
  ProMdl        ndrw;   
  ProMdlType    mdl_type;   
  ProMdldata    data;   
  ProModel      model;   
  ProName       dwg_template;   
  ProName       name;   
  ProDrawing    drawing;   

  ProType type;
  ProName w_sel_name;
  //ProMdlName w_sel_name;

  ProBoolean tree_flag=PRO_B_TRUE;
  
  
  ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
  ProDwgcreateErrs  errors;   
  char strtmp[PRO_PATH_SIZE];    

  int win_id, new_sheet;   
  
  status=ProMdlCurrentGet (&solid_mdl);    
  if (status != PRO_TK_NO_ERROR){   
     return;   
  }   
  status = ProMdlTypeGet (solid_mdl, &mdl_type);   
  if (status != PRO_TK_NO_ERROR ||    
      (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
     return ;   
   
  ProMdlDataGet (solid_mdl, &data);   

  ProWstringToString(strtmp, data.name);   
  ProStringToWstring(model.name,strtmp);   
  ProWstringToString(strtmp, data.type);   
  ProStringToWstring(model.type,strtmp);   
     
  ProStringToWstring (dwg_template, "template_spool_master");   
  //ProStringToWstring (dwg_template, "template_spool_01");   
  //ProStringToWstring (dwg_template, "template_spool_sr1");   
  
  ProStringToWstring (name, "draw_nameM");   
  
  ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 
  //status = ProAccessorywindowWithTreeCreate(model.name,model.type,tree_flag,&win_id);
  ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
  type = PRO_MDL_DRAWING;
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  //status = ProObjectwindowMdlnameCreate (w_sel_name,type,&win_id) ; no?
  //ProAccessorywindowWithTreeMdlnameCreate()
	//	   ProAccessorywindowWithTreeCreate
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
  //status = ProAccessorywindowWithTreeCreate(name,type,tree_flag,&win_id);
  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
  status = ProWindowRefresh (win_id);
 
  ProMdlDisplay(drawing);

  status = ProWindowCurrentSet(win_id);
  status = ProWindowRepaint (win_id);
   
  status = ProWindowCurrentGet(&win_id);
  
  return;
}

void NewDwgTSF()   
{   
	ProError status;   
	ProMdl        solid_mdl;   
	ProMdl        ndrw;   
	ProMdlType    mdl_type;   
	ProMdldata    data;   
	ProModel      model;   
	ProName       dwg_template;   
	ProName       name;   
	ProDrawing    drawing, drawingR;   

	ProType type;
	ProName w_sel_name;
  
	ProError error;
	ProDwgtable table, table1, table2;
	ProMouseButton but;
	ProPoint3d point, drw_point;
	ProName w_name;
	ProPath w_full_name, w_path;
	ProCharLine f_name, c_name;
	//ProMdlExtension w_type;
	int ver;

	ProPath dxf_path;
	ProName dxf_name;

	ProSimprep      simprep;

	ProBoolean tree_flag=PRO_B_TRUE;
  
	ProDwgcreateOptions options = PRODWGCREATE_DISPLAY_DRAWING;   
	ProDwgcreateErrs  errors;   
	char strtmp[PRO_PATH_SIZE];    

	int win_id, new_sheet;   

	ProMatrix matrix1,matrix2;
	int cur_sheet;
	ProName    w_size;

	ProSelection *sels = NULL;
	int nSels = 0;
	ProView drwView;  
	
	status=ProMdlCurrentGet (&solid_mdl);    
	if (status != PRO_TK_NO_ERROR){   
		return;   
	}   

	status = ProMdlTypeGet (solid_mdl, &mdl_type);   
	if (status != PRO_TK_NO_ERROR ||    (mdl_type != PRO_MDL_PART && mdl_type != PRO_MDL_ASSEMBLY))   
		return ;   
	
	global_mdl = solid_mdl;

	ProMdlDataGet (solid_mdl, &data);   

	ProWstringToString(strtmp, data.name);   
	ProStringToWstring(model.name,strtmp);   
	ProStringToWstring (name, strtmp);   
	sprintf(f_name,"%s.dwg",strtmp);
	ProWstringToString(strtmp, data.type);   
	ProStringToWstring(model.type,strtmp);   
	type = PRO_MDL_DRAWING;
	 
	ProStringToWstring (dwg_template, "piping_template_isogen");   

	//ProStringToWstring (name, "draw_main");   

	ProDrawingFromTmpltCreate(name,dwg_template,&model,options, &drawing,&errors); 

	//ProStringToWstring (w_sel_name, "DRAW_NAME1"); 
	//type = PRO_MDL_DRAWING;
	
	/* for main drawing it is not needed ??? */
	status = ProMdlRetrieve(name,type,&drawing);
	status = ProObjectwindowCreate(name,type,&win_id);
	status = ProWindowCurrentSet(win_id);
	status = ProWindowRepaint (win_id);
	status = ProWindowRefresh (win_id);

	ProMdlDisplay(drawing);

	ProWindowActivate(win_id);
	/**/
	
	ProStringToWstring(w_full_name, f_name);
	status = Pro2dImportAppend(PRO_DWG_FILE, /*L"N31130-E281EI.dwg"*/w_full_name
											, drawing, PRO_B_TRUE, PRO_B_FALSE);

}

void DrawingText()
{


ProError err;
FILE *fp;
ProMdl mdl_drg;
ProDwgtabledata tabl_data;
double col_width,row_width;
int n_rows,n_cols;
ProHorzJust hor_jst;
ProPoint3d origin;
ProDwgtable table;
ProDtlnotedata notedata;
ProDtlnoteline *note_lines;
ProDtlnotetext *note_text;
double note_height,note_width;
ProName name=L"filled";
ProCharName name_font;
ProName font_name;
ProDtlnote note;
ProWstring *lines;
char *text="DRAWING TEXT";
ProLine string;
ProCharLine string_text;
ProBoolean note_displayed;





hor_jst = PROHORZJUST_CENTER;
n_cols =1;
n_rows =1;
col_width=92.00;
row_width=14.00;


origin[0]=849.868940; //682.590168;
origin[1]= 111.450970; //466.897233;
origin[2]=0.00;

fp=fopen("test.txt","w+");


ProArrayAlloc(1, sizeof(ProWstring), 1, (ProArray*)&lines);
lines[0] = (wchar_t*)calloc(strlen(text) + 1, sizeof(wchar_t));


ProStringToWstring(lines[0], text);



err = ProMdlCurrentGet(&mdl_drg);
fprintf(fp,"ProMdlCurrentGet:%d\n",err);


err = ProDwgtabledataAlloc(&tabl_data);
fprintf(fp,"ProDwgtabledataAlloc:%d\n",err);


err = ProDwgtabledataColumnsSet(tabl_data,n_cols,&col_width,&hor_jst);
fprintf(fp,"ProDwgtabledataColumnsSet:%d\n",err);


err = ProDwgtabledataRowsSet(tabl_data,n_rows,&row_width );
fprintf(fp,"ProDwgtabledataRowsSet:%d\n",err);


err = ProDwgtabledataOriginSet(tabl_data,origin);
fprintf(fp,"ProDwgtabledataOriginSet:%d\n",err);


err = ProDwgtabledataSizetypeSet(tabl_data,PRODWGTABLESIZE_SCREEN) ;
fprintf(fp,"ProDwgtabledataSizetypeSet:%d\n",err);



err = ProDrawingTableCreate(mdl_drg,tabl_data,PRO_B_FALSE,&table);
fprintf(fp,"ProDrawingTableCreate:%d\n",err);



err = ProDwgtableTextEnter(&table,n_cols,n_rows,lines);
fprintf(fp,"ProDwgtableTextEnter:%d\n",err);



err = ProDwgtableCellNoteGet(&table,n_cols,n_rows,&note) ;
fprintf(fp,"ProDwgtableCellNoteGet:%d\n",err);



err = ProDtlnoteDataGet(&note,NULL,PRODISPMODE_NUMERIC,&notedata);
fprintf(fp,"ProDtlnoteDataGet:%d\n",err); // PRODISPMODE_SYMBOLIC


err = ProDtlnotedataIsDisplayed(notedata,&note_displayed );
fprintf(fp,"ProDtlnotedataIsDisplayed:%d\n",err);


fprintf(fp,"Note-Displayed:%d\n",note_displayed);


err = ProDtlnotedataLinesCollect(notedata,&note_lines);
fprintf(fp,"ProDtlnotedataLinesCollect:%d\n",err);



err = ProDtlnotelineTextsCollect(note_lines[0],&note_text);
fprintf(fp,"ProDtlnotelineTextsCollect:%d\n",err);



err = ProDtlnotetextHeightGet(note_text[0],&note_height);
fprintf(fp,"ProDtlnotetextHeightGet:%d\n",err);


fprintf(fp,"Notetext Height:%f\n",note_height);


err = ProDtlnotetextWidthGet(note_text[0],&note_width);
fprintf(fp,"ProDtlnotetextWidthGet:%d\n",err);


fprintf(fp,"Notetext Width:%f\n",note_width);



err = ProDtlnotetextFontGet(note_text[0],font_name);
fprintf(fp,"ProDtlnotetextFontGet:%d\n",err);


ProWstringToString(name_font,font_name);


fprintf(fp,"Current Font:%s\n",name_font);


err = ProDtlnotetextStringGet(note_text[0],string);
fprintf(fp,"ProDtlnotetextStringGet:%d\n",err);


ProWstringToString(string_text,string);


fprintf(fp,"Current Text:%s\n",string_text);






err = ProDtlnotedataJustifSet(notedata,PRO_HORZJUST_CENTER,PRO_VERTJUST_BOTTOM);
fprintf(fp,"ProDtlnotedataJustifSet:%d\n",err);


err = ProDtlnotetextFontSet(note_text[0],name);
fprintf(fp,"ProDtlnotetextFontSet:%d\n",err);



err = ProDtlnotetextStringSet(note_text[0],L"Sample");
fprintf(fp,"ProDtlnotetextStringSet:%d\n",err);



err = ProDwgtableDisplay(&table);
fprintf(fp,"ProDwgtableDisplay:%d\n",err);


err = ProDrawingTablesUpdate(mdl_drg);
fprintf(fp,"ProDrawingTablesUpdate:%d\n",err);


ProArrayFree((ProArray*)&lines);


ProArrayFree((ProArray*)&note_lines);


ProArrayFree((ProArray*)&note_text);






return(0);
}

/*===========================================================================*\
  FUNCTION: ProTestDwgtableVisitAction
  PURPOSE:  
\*===========================================================================*/
ProError ProTestDwgtableVisitAction (
    ProDwgtable *table,
    ProError    filter_status,
    ProAppData  data)
{
    int                     n_col, n_row;
    ProError                status;
    ProBoolean              from_frm;
    //ProTestViewVisitData   *data_ptr = (ProTestViewVisitData*)data;

    //data_ptr->count++;
        
    status = ProDwgtableColumnsCount(table, &n_col);

    status = ProDwgtableRowsCount(table, &n_row);

    status = ProDwgtableIsFromFormat(table, &from_frm);

    return(PRO_TK_NO_ERROR);
}

void DrawingRepMapKey()
{
	ProError proErr;
	FILE *fp;
	fp=fopen("DrawingRepMapKey.txt","w+");	
	
	proErr = ProMacroLoad(L"~ Command `ProCmdDwgTblRepeatRegion`;#RELATIONS;~ Select `relation_dlg` `MenuBar1` 1 `Edit`;~ Close `relation_dlg` `MenuBar1`;~ Activate `relation_dlg` `PBSelectAll`;~ Select `relation_dlg` `MenuBar1` 1 `Edit`;~ Close `relation_dlg` `MenuBar1`;~ Activate `relation_dlg` `PBDelete`;~ Update `relation_dlg` `RelText` ``;~ Activate `relation_dlg` `PB_OK`;#DONE;");
	fprintf(fp,"ProMacroLoad_3 %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_3 %d\n",proErr);	
	
	fclose (fp);	
}

void DrawingRepTabImp()
{
	ProError proErr;
	ProMdl curMdl;
	ProDwgtable *tables = NULL;
	int tableQty = 0;
	int i, ii, ic, jc, tt;
	ProPoint3d point;
	ProDwgtable table, table1, table2;
	ProDwgtableInfo table_info;
	int  ncols=0, nrows=0;
    double sw, sl, swi, sli;
	
	ProWstring *		rels_xar;
	int n_lines;
	
	ProPath wbuff1, wbuff2;
	char cbuff1[PRO_PATH_SIZE], cbuff2[PRO_PATH_SIZE];

	FILE *fp;
	fp=fopen("DrawingRepTabImp1.txt","w+");
	
	proErr = ProMdlCurrentGet(&curMdl);  //The drawing model
	fprintf(fp,"ProMdlCurrentGet %d\n",proErr);
	proErr = ProDrawingTablesCollect(curMdl, &tables);
	fprintf(fp,"ProDrawingTablesCollect %d\n",proErr);
	proErr = ProArraySizeGet(tables, &tableQty);
	fprintf(fp,"ProArraySizeGet %d %d\n",tableQty,proErr);
	if (tableQty == 0) return;
	
	proErr = ProArrayAlloc (0, sizeof(ProWstring), 1, (ProArray*)&rels_xar);
	ProTKFprintf (fp, "ProArrayAlloc rels_xar\n", proErr);	
	
	tt=tableQty-1;
	for (tt=tableQty-1; tt>0; tt--)
	{
		proErr = ProDwgtableInfoGet(&tables[tt], 0, &table_info);
		fprintf(fp,"ProDwgtableInfoGet [%d] %d\n",tt, proErr);
		
		ProTKFprintf (fp, "Table [%d] %d.\n", tt, tables[tt].id);
				
		proErr = ProDwgtableRowsCount (&tables[tt], &nrows);
		ProTKFprintf (fp, "ProDwgtableRowsCount [%d] Number of row %d. %d ", tt, nrows, proErr);

		proErr = ProDwgtableColumnsCount (&tables[tt], &ncols);
		ProTKFprintf (fp, "ProDwgtableColumnsCount [%d] Number of column %d %d\n", tt, ncols, proErr);
		
		if ( ( ncols > 6 ) & ( nrows > 2 ) ) {
			proErr = ProDwgtableCelltextGet (&tables[tt], 6, 2, 1, &rels_xar);
			ProTKFprintf (fp, "ProDwgtableCelltextGet %d %d\n", 6, 2, proErr);

			proErr = ProArraySizeGet((ProArray)rels_xar, &n_lines);
			ProTKFprintf (fp, "ProArraySizeGet length %d. %d\n", n_lines, proErr);	
			
			if ( n_lines < 2) continue;			
			
			if ( ProUtilWstrcmp (rels_xar[0], L"Drw.No,") == 0 )
				ProTKFprintf (fp, "ProUtilWstrcmp Drw.No, then \n");
			else 
				ProTKFprintf (fp, "ProUtilWstrcmp Drw.No, else \n");
			
			if ( ProUtilWstrcmp (rels_xar[1], L"Part No") == 0 )
				ProTKFprintf (fp, "ProUtilWstrcmp Part No then \n");
			else 
				ProTKFprintf (fp, "ProUtilWstrcmp Part No else \n");
			
			if (( ProUtilWstrcmp (rels_xar[0], L"Drw.No,") == 0 )
			 & ( ProUtilWstrcmp (rels_xar[1], L"Part No") == 0 ))
				break;
		}
		if ( tt == 0 ) break;
	}

	fprintf(fp,"tt %d\n",tt);
	
	proErr = ProDwgtableInfoGet(&tables[tt], 0, &table_info);
	fprintf(fp,"ProDwgtableInfoGet %d\n",proErr);
	
	ProTKFprintf (fp, "Table %d.\n", tables[tt].id);
            
    proErr = ProDwgtableRowsCount (&tables[tt], &nrows);
    ProTKFprintf (fp, "ProDwgtableRowsCount Number of row %d. %d", nrows, proErr);

    proErr = ProDwgtableColumnsCount (&tables[tt], &ncols);
    ProTKFprintf (fp, "ProDwgtableColumnsCount Number of column %d %d\n", ncols, proErr);
	

	
	//ProUtilWstrcmp (label, L"Released") != 0 6 2
	//proErr = ProDwgtableCellIsComment(&table, ic, jc, &is_comment);	
	/*Use 1 to get the text as displayed.
			 Use 2 to get the text as shown in the full note
			 editor, in n:&symbol notation.*/
					 
/*					 
	proErr = ProDwgtableCelltextGet (&tables[tt], 6, 2, 1, &rels_xar);
	ProTKFprintf (fp, "ProDwgtableCelltextGet %d %d\n", 6, 2, proErr);
	
	if ( ProUtilWstrcmp (rels_xar[0], L"Drw.No,") == 0 )
		ProTKFprintf (fp, "ProUtilWstrcmp Drw.No, then \n");
	else 
		ProTKFprintf (fp, "ProUtilWstrcmp Drw.No, else \n");
	
	if ( ProUtilWstrcmp (rels_xar[1], L"Part No") == 0 )
		ProTKFprintf (fp, "ProUtilWstrcmp Part No then \n");
	else 
		ProTKFprintf (fp, "ProUtilWstrcmp Part No else \n");
*/
	
	for (jc=0; jc<=nrows; jc++)
    {
        for (ic=0; ic<=ncols; ic++)
        {

			proErr = ProDwgtableCelltextGet (&tables[tt], ic, jc, 1, &rels_xar);
			ProTKFprintf (fp, "ProDwgtableCelltextGet %d %d\n", ic, jc, proErr);
			
			proErr = ProArraySizeGet((ProArray)rels_xar, &n_lines);
			ProTKFprintf (fp, "ProArraySizeGet length %d. %d\n", n_lines, proErr);
			
			for (ii=0; ii<n_lines; ii++)
			{
				char    ip_row[100];
				ProWstringToString(ip_row, rels_xar[ii]);
				ProTKFprintf (fp, "table cell \t \t \t[%d,%d](%d) =  [%s]\n",ic, jc, ii, ip_row);
			}
			
		}
	}
	

	
	proErr = ProArrayFree((ProArray*)&rels_xar);
	ProTKFprintf (fp, "ProArrayFree\n", proErr);
	
	/*--------------------------------------------------------------------*\
    Calculate table size
	\*--------------------------------------------------------------------*/
    for(ii=0, sw=0; ii<nrows; ii++) 
    {
        proErr = ProDwgtableRowSizeGet(&tables[tt], 0, ii, &swi);
        sw+=swi;
    }

    for(ii=0, sl=0; ii<ncols; ii++) 
    {
        proErr = ProDwgtableColumnSizeGet(&tables[tt], 0, ii, &sli);
        sl+=sli;
    }
	

    ProTKFprintf(fp,"Table size: %3.3f X %3.3f\n",sw,sl);
	
	point[0]=table_info.seg_origin[0];point[1]=table_info.seg_origin[1]+sw;point[2]=table_info.seg_origin[2];	
	proErr = ProDwgtableDelete(&tables[tt], 1);
	fprintf(fp,"ProDwgtableDelete %d\n",proErr);
	
	//proErr = ProToolkitApplExecPathGet(wbuff1);
	proErr = ProToolkitApplTextPathGet(wbuff1);
	
	ProWstringToString(cbuff1, wbuff1);
	fprintf(fp,"\n     text_path:  %s\n", cbuff1);
	
	//proErr=ProDwgtableRetrieve((ProDrawing)curMdl,L"assembly_a1_noscr",L".",0,point,NULL,NULL,&table1);
	proErr=ProDwgtableRetrieve((ProDrawing)curMdl,L"assembly_a1_noscr",wbuff1,0,point,NULL,NULL,&table1); //-1
	//proErr=ProDwgtableRetrieve((ProDrawing)curMdl,L"assembly_a1_noscr",cbuff1,0,point,NULL,NULL,&table1);
	fprintf(fp,"ProDwgtableRetrieve1 %d\n",proErr);
	
	//proErr = ProMacroLoad(L"~ Activate `main_dlg_cur` `main_dlg_cur`;~ Command `ProCmdDwgTblBlnShow` ;");
	//proErr = ProMacroLoad(L"~ Command `ProCmdDwgTblBlnShow` ;~ Command `ProCmdDwgTblRegSS` "); /*toggle switch symbols */
	proErr = ProMacroLoad(L"~ Command `ProCmdDwgTblBlnShow` ;");
	fprintf(fp,"ProMacroLoad_3 %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_3 %d\n",proErr);
	
	
	proErr = ProArrayFree((ProArray *)(&tables));
    fprintf(fp,"ProArrayFree %d\n",proErr);
	fclose (fp);

}

static struct str_to_type
{
    char *str;
    ProType type;
}

str_type_table[] =
    {
        {(char *)"sec", PRO_2DSECTION},
        {(char *)"prt", PRO_PART},
        {(char *)"asm", PRO_ASSEMBLY},
        {(char *)"drw", PRO_DRAWING},
        {(char *)"mfg", PRO_MFG},
        {(char *)"lay", PRO_LAYOUT},
        {(char *)"frm", PRO_DWGFORM},
        {(char *)"rep", PRO_REPORT},
        {(char *)"mrk", PRO_MARKUP},
        {(char *)"dgm", PRO_DIAGRAM},
        {(char *)"???", PRO_TYPE_INVALID}
    };

/*====================================================================*\
  Function : 	
  Purpose  : looks up the type for a specified string
\*====================================================================*/
ProType ProUtilGetProType( char *type_str )
{
    int table_size;
    int i;

    table_size = sizeof(str_type_table)/sizeof(struct str_to_type);
    for( i = 0; i < table_size - 1; i++ )
    {
	if( !ProUtilStrcmp(type_str, str_type_table[i].str) )
	    return( str_type_table[i].type );
    }

    return( str_type_table[table_size-1].type );
}
/*====================================================================*\
  Function : ProUtilConfirmNameType
  Purpose  : Confirm a valid name and type
\*====================================================================*/
int ProUtilConfirmNameType(char *input_name, char *name, ProType *type)
{
    char *dot_occur,		/* occurrence of a dot in input_name */
	 *slash_occur,		/* occurence of a slash */
	  type_str[PRO_EXTENSION_SIZE];
    int name_length,		/* length of a part name */
	type_length;		/* lenght of a part type */

    /*** if there is a full path name, extract the filename first ***/
    if((slash_occur = strrchr(input_name, '/')) != NULL)
	ProUtilstrcpy(input_name, (const char *)&slash_occur[1]);

    /*** get the position of the dot in a file name ***/
    if((dot_occur = strchr(input_name, '.')) != NULL)
    {
	/*** extract name ***/
	if(( name_length = strlen(input_name) - strlen(dot_occur))>0)
	{
	    ProUtilstrncpy(name,(const char *)input_name,name_length);
	    name[name_length] = '\0';
	}
	else
	    return( PRO_TK_BAD_INPUTS );

	/*** extract type ***/
	if ((type_length = strlen( &dot_occur[1] ))==3)
	{
	    ProUtilstrncpy(type_str, (const char *)&dot_occur[1], type_length);
	    type_str[3]='\0';

	    /* get the mode */
	    return( (*type = ProUtilGetProType(type_str)) );
	}
	else
	    return( PRO_TK_BAD_INPUTS );
    }
    else
        return( PRO_TK_BAD_INPUTS );
}

/*=====================================================================*\
FUNCTION: UserOpenComponent
PURPOSE:  Prompt the user to select a component.
\*=====================================================================*/
ProError UserOpenComponent (ProSolid* solid)
{
	ProSolid comp;
    ProError err, er1;
    int version, win_id,sel_n, Oldwin_id;
    ProCharLine line, str;
    ProLine buff;
    ProPath *path_arr, sel_path, def_path, cur_path;
    ProName *path_lab_arr, w_name, w_type;
	ProType type;
    
    ProMessageDisplay(MSGFIL, "USER Choose new component to assemble:");

    /*-----------------------------------------------------------------*\
		Prompt the user to select the file.
    \*-----------------------------------------------------------------*/
	ProStringToWstring(buff, "*.prt,*.asm");
    ProStringToWstring(def_path, ".");

    err = ProArrayAlloc(0, sizeof(ProPath), 1, (ProArray*)&path_arr);
   
    err = ProArrayAlloc(0, sizeof(ProPath), 1, (ProArray*)&path_lab_arr);
   
    err = ProFileOpen(NULL, buff, path_arr, path_lab_arr, def_path, NULL,
        sel_path);
  
    if (err == PRO_TK_NO_ERROR)
    {
		/*-----------------------------------------------------------------*\
			Parse the filename to locate the component model.
		\*-----------------------------------------------------------------*/
        err = ProFilenameParse(sel_path, def_path, w_name, w_type, &version);
        
        ProUtilWstrcpy(sel_path, def_path);
        err = ProPathCreate(NULL, w_name, w_type, PRO_VALUE_UNUSED, def_path);
       
        ProWstringToString(str, def_path);
        if ( ProUtilConfirmNameType(str, line, &type) != PRO_TK_BAD_INPUTS)
        {
			/*-----------------------------------------------------------------*\
				Load the component model.
			\*-----------------------------------------------------------------*/
            err = ProDirectoryCurrentGet(cur_path); 
       
            err = ProDirectoryChange(sel_path); 
      
            err = ProMdlRetrieve(w_name, (ProMdlType)type, (ProMdl*)&comp);
          
           er1 = ProDirectoryChange(cur_path); 
           
            if (err != PRO_TK_NO_ERROR)
			{
                ProMessageDisplay (MSGFIL, "USER Failed to retrieve %0s", str);
			}
        }
    }
	/*------------------------------------------------------------------*\
		Free allocated memory
	\*--------------------------------------------------------------------*/
    er1 = ProArrayFree((ProArray*)&path_arr);
  
    er1 = ProArrayFree((ProArray*)&path_lab_arr);
   
    if (err != PRO_TK_NO_ERROR)
        return (PRO_TK_BAD_CONTEXT);

	*solid = comp;

	return PRO_TK_NO_ERROR;
}


static ProFileName message_file; 
	FILE *fpG;

/*===============================================================*\
FUNCTION : ProDemoGeneralCsysCreate
PURPOSE  : Demonstrates the creation of the extruded protrusion
           base feature.
\*===============================================================*/
ProError ProDemoGeneralCsysCreate()
{
  ProErrorlist            errors;
  ProMdl                  model;
  ProModelitem            model_item;
  ProSelection            model_sel;
  ProFeature              feature;
  ProFeatureCreateOptions opts[1];
  ProAsmcomppath          *p_comp_path = NULL;
  ProValue                value;
  char                    name[PRO_NAME_SIZE];
  ProError		  status;
  
  ProElement pro_e_feature_tree;
  ProElement pro_e_feature_type;
  ProElement pro_e_std_feature_name;
  ProElement pro_e_csys_origin_constrs;
  ProElement pro_e_csys_origin_constr;
  ProElement pro_e_csys_origin_constr_ref;
  ProElement pro_e_csys_offset_type;
  ProElement pro_e_csys_orientmoves;
  ProElement pro_e_csys_orientmove;
  ProElement pro_e_csys_orientmove_move_type;
  ProElement pro_e_csys_orientmove_move_val;
  ProElement pro_e_csys_orient_by_method;
  
  ProName 	wide_string;
  ProValueData 	value_data;
  ProSelection * p_select;
  int 		n_select;
  
  ProGeomitem asm_csys, comp_csys;
  ProFeature working_csys_feat;
  ProSelection csys_sel;
  ProReference cSysRef;
  ProAsmcomppath path;   
  ProName csys_name;
  
    ProSelection ref_item_csy;
    ProModelitem mdl_itm_top;

  
  ProBoolean 	is_interactive = PRO_B_TRUE;
  
  ProStringToWstring ( message_file, "utilities.txt" ); 
  
  /*---------------------------------------------------------------*\
    Populating root element PRO_E_FEATURE_TREE 
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_FEATURE_TREE *** " );
  status = ProElementAlloc ( PRO_E_FEATURE_TREE, &pro_e_feature_tree ); 
  //C_LOG( " ProElementAlloc " );
  
  /*---------------------------------------------------------------*\
    Populating element PRO_E_FEATURE_TYPE 
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_FEATURE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_FEATURE_TYPE, &pro_e_feature_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_FEAT_CSYS; /* 979 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_feature_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
		pro_e_feature_type );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating element PRO_E_STD_FEATURE_NAME
  \*---------------------------------------------------------------*/
  
  //C_PRINT( " *** Processing Element PRO_E_STD_FEATURE_NAME *** " );
  status = ProElementAlloc ( PRO_E_STD_FEATURE_NAME, 
		&pro_e_std_feature_name ); 
  //C_LOG( " ProElementAlloc " );
  ProStringToWstring ( wide_string, "WELD_CSYS_03" );
  value_data.type = PRO_VALUE_TYPE_WSTRING;
  value_data.v.w = wide_string;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_std_feature_name, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
		pro_e_std_feature_name );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIGIN_CONSTRS
  \*---------------------------------------------------------------*/

  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIGIN_CONSTRS *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIGIN_CONSTRS, 
		&pro_e_csys_origin_constrs );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
		pro_e_csys_origin_constrs  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIGIN_CONSTR
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIGIN_CONSTR *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIGIN_CONSTR, 
		&pro_e_csys_origin_constr );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_origin_constrs, NULL, 
		pro_e_csys_origin_constr  );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIGIN_CONSTR_REF
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIGIN_CONSTR_REF *** " );
  status = ProMessageDisplay ( message_file, "Select a reference CSYS");
  //C_LOG( " ProMessageDisplay" );
  ProTKPrintf ( "Please select csys_ID_25 type of Modelitem\n");
  /** /status = ProSelect ( "csys", 1, NULL, NULL, NULL, NULL, 
		&p_select, &n_select );
  //C_LOG( " ProSelect" );
  if ( n_select <= 0 ) return -1;/ **/ 
  status = ProElementAlloc ( PRO_E_CSYS_ORIGIN_CONSTR_REF, 
		&pro_e_csys_origin_constr_ref );
  //C_LOG( " ProElementAlloc " );
  
  status = ProMdlCurrentGet (&model);
  	fpG=fopen("FindFeat.txt","w+");
  //UsrFeatFindbyname(/*(ProSolid) mdl*/model,"ISOGEN",PRO_FEAT_CSYS,&working_csys_feat);
  //fprintf(fpG,"working_csys_feat.id %d\n", working_csys_feat.id);
  //status = ProSelectionAlloc(NULL,/*(ProModelitem *)*/ &working_csys_feat,&csys_sel);
  //status = ProSelectionVerify( csys_sel );
  
  
  //UsrFeatFindbyname(/*(ProSolid) mdl*/model,"ISOGEN",PRO_FEAT_CSYS,&asm_csys);
  //status = ProAsmcomppathInit(model, NULL, 0, &path);
  //  fprintf(fpG,"asm_csys.id %d\n", asm_csys.id);
//   status = ProSelectionAlloc (&path, &asm_csys, &csys_sel);

	ProStringToWstring (csys_name, "ISOGEN");
    status=ProModelitemByNameInit(model,PRO_CSYS,csys_name,&mdl_itm_top);
  fprintf(fpG,"status = ProModelitemByNameInit %d\n", status);
    status=ProSelectionAlloc(NULL,&mdl_itm_top,&ref_item_csy);

  fprintf(fpG,"status = ProSelectionAlloc %d\n", status);
  //ProSelectionSet(csys_sel, NULL, &working_csys_feat);
  ProSelectionHighlight(csys_sel,PRO_COLOR_SELECTED); //should be light green   PRO_COLOR_EDGE_HIGHLIGHT);//PRO_COLOR_SELECTED); //should be light green
  if (csys_sel!=NULL) 
	  fprintf(fpG,"csys_sel!=NULL");
  else
	  fprintf(fpG,"csys_sel==NULL");
  fclose(fpG);
  
  //return;//check_selection
  
  //csys_sel = p_select[0];
  
  status = ProSelectionToReference(csys_sel, &cSysRef);
  
  value_data.type = PRO_VALUE_TYPE_SELECTION;
  value_data.v.r = ref_item_csy;//csys_sel;//cSysRef; //cSysRef; // cSysRef; //&csys_sel; //working_csys_feat; //p_select[0];
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_origin_constr_ref, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_origin_constr, NULL, 
		pro_e_csys_origin_constr_ref );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_OFFSET_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_OFFSET_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_OFFSET_TYPE, 
		&pro_e_csys_offset_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_OFFSET_CARTESIAN; /* 0 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_offset_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
		pro_e_csys_offset_type );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVES *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVES, 
		&pro_e_csys_orientmoves );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
		pro_e_csys_orientmoves  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, 
		&pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_ROT_X; /* 3 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = 0.00000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, 
		&pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_ROT_Y; /* 4 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = -90.00000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, 
		&pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_ROT_Z; /* 5 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = 0.000000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, &pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_TRAN_X; /* 0 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 	
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = 100.000000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, &pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_TRAN_Y; /* 1 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = 200.000000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );
  
  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE, &pro_e_csys_orientmove );
  //C_LOG( " ProElementAlloc" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmoves, NULL, 
		pro_e_csys_orientmove  );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_TYPE, 
		&pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENTMOVE_MOVE_OPT_TRAN_Z; /* 2 */ 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_type, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_type );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENTMOVES
			-> PRO_E_CSYS_ORIENTMOVE
			   -> PRO_E_CSYS_ORIENTMOVE_MOVE_VAL
  \*---------------------------------------------------------------*/
  //C_PRINT( " *** Processing Element PRO_E_CSYS_ORIENTMOVE_MOVE_VAL *** " );
  status = ProElementAlloc ( PRO_E_CSYS_ORIENTMOVE_MOVE_VAL, 
		&pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_DOUBLE;
  value_data.v.d = 300.000000;
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orientmove_move_val, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_csys_orientmove, NULL, 
		pro_e_csys_orientmove_move_val );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Populating  element PRO_E_CSYS_ORIENT_BY_METHOD
  \*---------------------------------------------------------------*/
  status = ProElementAlloc ( PRO_E_CSYS_ORIENT_BY_METHOD, 
                &pro_e_csys_orient_by_method );
  //C_LOG( " ProElementAlloc " );
  value_data.type = PRO_VALUE_TYPE_INT;
  value_data.v.i = PRO_CSYS_ORIENT_BY_SEL_CSYS_AXES; 
  status = ProValueAlloc ( &value );
  //C_LOG( " ProValueAlloc" );
  status = ProValueDataSet ( value, &value_data );
  //C_LOG( " ProValueDataSet" );
  status = ProElementValueSet ( pro_e_csys_orient_by_method, value );
  //C_LOG( " ProElementValueSet" );
  status = ProElemtreeElementAdd ( pro_e_feature_tree, NULL, 
                pro_e_csys_orient_by_method );
  //C_LOG( " ProElemtreeElementAdd" );

  /*---------------------------------------------------------------*\
    Creating the feature in the current model.
  \*---------------------------------------------------------------*/
  status = ProMdlCurrentGet (&model);
  if ( status != PRO_TK_NO_ERROR ) return ( status );
  status = ProMdlToModelitem( model, &model_item ); 
  status = ProSelectionAlloc (p_comp_path, &model_item,
			   &model_sel);
  
  opts[0] = PRO_FEAT_CR_DEFINE_MISS_ELEMS;
  status = ProFeatureCreate (model_sel, pro_e_feature_tree, opts, 1,
			  &feature, &errors);
  //C_LOG (" ProFeatureCreate"); 
  
  status = ProElementFree (&pro_e_feature_tree ); 
  //C_LOG (" ProElementFree"); 
  
  ProSelectionHighlight(csys_sel,PRO_COLOR_SELECTED); //should be light green   PRO_COLOR_EDGE_HIGHLIGHT);//PRO_COLOR_SELECTED); //should be light green
  
  return ( status );
}

/*=====================================================================*\
FUNCTION: UserAssembleByDatums
PURPOSE:  Assemble a component by aligning named datums.	
\*=====================================================================*/
ProError UserAssembleByDatums (ProAssembly asm_model)
{
    char temp_name[100];
	char newfile_name[100];
	
	ProError status;
	ProName name;
	ProSolid comp_model;
	ProName asm_datums [3];
	ProName comp_datums [3];
	ProMatrix identity_matrix = {{ 1.0, 0.0, 0.0, 0.0 }, 
								{0.0, 1.0, 0.0, 0.0}, 
								{0.0, 0.0, 1.0, 0.0}, 
								{0.0, 0.0, 0.0, 1.0}};
	ProAsmcomp asmcomp;
	ProAsmcompconstraint* constraints;
	ProAsmcompconstraint constraint;
	int i;
	ProBoolean interact_flag = PRO_B_FALSE;
	ProModelitem asm_datum, comp_datum;
	ProSelection asm_sel, comp_sel;
	ProAsmcomppath comp_path;
	ProIdTable c_id_table;
		
	FILE *fp;
	fp=fopen("DrawingRepTabImp.txt","w+");
	c_id_table [0] = -1;

	if (1==1)
	{
		ProSelection asmCsysSel;
        ProSelection compCsysSel;
		
        ProModelitem asmCsys;
        ProModelitem compCsys;
		
		ProAsmcompconstraint* constraints;
        ProAsmcompconstraint constraint;				
		
		ProAsmcomp asmcomp_a[3];
		ProName asmCsysName[3];
	
		ProStringToWstring(asmCsysName[0], "WELD_CSYS_01");
		ProStringToWstring(asmCsysName[1], "WELD_CSYS_02");
		ProStringToWstring(asmCsysName[2], "WELD_CSYS_03");
		
		for (i = 0; i < 3; i++) {		
			// Creation new template files
	        sprintf(newfile_name, "3d_weld_template_00%d.prt.1", (i + 1));
	        copy_tmplt("C:\\temps\\3d_weld_template_000.prt.1", newfile_name);
			sprintf(temp_name, "%s%d", "3d_weld_template_00", (i + 1));		
		    ProStringToWstring(name, temp_name); 			
		    status = ProMdlRetrieve(name,PRO_MDL_PART,&comp_model);
		    
		    if (status != PRO_TK_NO_ERROR)
		    	return status;
		    
		    //CreateDefCsys();
		    ProDemoGeneralCsysCreate();
		    //return;//check_selection
		                    
            status = ProModelitemByNameInit(comp_model, PRO_CSYS, L"WELD-CSYS", &compCsys);
            if (status != PRO_TK_NO_ERROR) 
            {
		    	return PRO_TK_GENERAL_ERROR;
            }
			
            status = ProArrayAlloc(0, sizeof(ProAsmcompconstraint), 1, (ProArray*)&constraints);
		
			status = ProModelitemByNameInit(asm_model, PRO_CSYS, asmCsysName[i], &asmCsys);
            if (status != PRO_TK_NO_ERROR) {
               return PRO_TK_GENERAL_ERROR;
            }
        
           status = ProAsmcomppathInit(asm_model, c_id_table, 0, &comp_path);				
		
           status = ProSelectionAlloc(&comp_path, &asmCsys, &asmCsysSel);
           status = ProSelectionAlloc(NULL, &compCsys, &compCsysSel);
        
           status = ProAsmcompconstraintAlloc(&constraint);
           status = ProAsmcompconstraintTypeSet(constraint, PRO_ASM_CSYS);
           status = ProAsmcompconstraintAsmreferenceSet(constraint, asmCsysSel, PRO_DATUM_SIDE_YELLOW);
           status = ProAsmcompconstraintCompreferenceSet(constraint, compCsysSel, PRO_DATUM_SIDE_YELLOW);
           status = ProArrayObjectAdd((ProArray*)&constraints, -1, 1, &constraint);	
           
		   ProStringToWstring (name, temp_name);  	
		   status = ProMdlRetrieve(name,PRO_MDL_PART,&comp_model);		   
           status = ProAsmcompAssemble(asm_model, comp_model, identity_matrix, &asmcomp_a[i]);		   
           status = ProAsmcompConstraintsSet(NULL, &asmcomp_a[i], constraints);
           status = ProSolidRegenerate((ProSolid)asmcomp_a[i].owner, PRO_REGEN_NO_FLAGS);
			
		   ProArrayFree((ProArray*)&constraints);
		}
	}
	
	fclose (fp);

	return (PRO_TK_NO_ERROR);	
}

// Copies file is taken from https://www.codingunit.com/c-tutorial-copying-a-file-in-c
int copy_tmplt(char old_filename[100], char new_filename[100]) {
	FILE  *ptr_old, *ptr_new;
	errno_t err = 0, err1 = 0;
	int  a;
    
	err = fopen_s(&ptr_old, old_filename, "rb");
	err1 = fopen_s(&ptr_new, new_filename, "wb");
    
	if(err != 0)
		return  -1;
    
	if(err1 != 0)
	{
		fclose(ptr_old);
		return  -1;
	}
    
	while(1)
	{
		a  =  fgetc(ptr_old);
    
		if(!feof(ptr_old))
			fputc(a, ptr_new);
		else
			break;
	}
    
	fclose(ptr_new);
	fclose(ptr_old);
	return  0;
}

/*=====================================================================*\
FUNCTION: UserAssemble
PURPOSE:  Menu action to assemble a component
\*=====================================================================*/
ProError UserAssemble ()
{
	ProAssembly top_level_asm;
	ProSolid comp_model;
	ProError status;
	ProName  name;  
		    	
	ProMdlCurrentGet ((ProMdl*)&top_level_asm);    
	//status = UserOpenComponent (&comp_model);    	    
	ProStringToWstring (name, "3d_weld_template_000");  
	
	//status = ProMdlRetrieve(name,PRO_MDL_PART,&comp_model);
	//
	//if (status != PRO_TK_NO_ERROR)
	//	return status;
    
	//UserAssembleByDatums(top_level_asm, comp_model);	
	UserAssembleByDatums(top_level_asm);
	
	ProWindowRepaint (-1);
    
	ProTreetoolRefresh (top_level_asm);
    
	return PRO_TK_NO_ERROR;
}

void d3weld ()
{
	UserAssemble ();
}

/*====================================================================*\
FUNCTION : ProTestAsmcompAssembleBycsys () WELD_CSYS_01 WELD-CSYS
PURPOSE  : Assemble a component by coordinate system.
\*====================================================================*/
/*
ProError ProTestAsmcompAssembleBycsys (
    ProSolid       assembly,
    ProSelection   _asm_csys,
    ProSolid       component,
    ProSelection   _comp_csys)
{
    ProError       err;
    ProElement     elem_root;
    ProSelection   sel;
    ProModelitem   modelitem;
    ProErrorlist   errors;
    ProFeature     feature;
    ProFeatureCreateOptions  opts[] = {PRO_FEAT_CR_INCOMPLETE_FEAT};

    static ElemTreeData tree[] = {
 	{0, PRO_E_FEATURE_TREE, {(ProValueDataType)-1}},
	{1, PRO_E_FEATURE_TYPE, {PRO_VALUE_TYPE_INT, {PRO_FEAT_COMPONENT}}},
	{1, PRO_E_COMPONENT_MODEL, {PRO_VALUE_TYPE_POINTER}},
	{1, PRO_E_COMPONENT_CONSTRAINTS, {(ProValueDataType)-1}},
	{2, PRO_E_COMPONENT_CONSTRAINT, {(ProValueDataType)-1}},
	{3, PRO_E_COMPONENT_CONSTR_TYPE, {PRO_VALUE_TYPE_INT, {PRO_ASM_CSYS}}},
	{3, PRO_E_COMPONENT_COMP_CONSTR_REF, {PRO_VALUE_TYPE_SELECTION}},
	{3, PRO_E_COMPONENT_ASSEM_CONSTR_REF, {PRO_VALUE_TYPE_SELECTION}}};
	
/*--------------------------------------------------------------------* \
    Prepare value for the component model element.
\*--------------------------------------------------------------------* /
    tree[2].data.v.p = (void *)component;

/*--------------------------------------------------------------------* \
    Prepare value for the component and assembly reference element.
\*--------------------------------------------------------------------* /
    tree[6].data.v.r=_comp_csys;
    tree[7].data.v.r=_asm_csys;
/*--------------------------------------------------------------------* \
    Create element tree
\*--------------------------------------------------------------------* /
    err = ProUtilElemtreeCreate(tree, sizeof(tree)/sizeof(tree[0]),
	NULL, &elem_root);

/*--------------------------------------------------------------------* \
    Set up a selection structure for the feature context.
\*--------------------------------------------------------------------* /
    err = ProMdlToModelitem (assembly, &modelitem);
    TEST_CALL_REPORT("ProMdlToModelitem()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);
    err = ProSelectionAlloc (NULL, &modelitem, &sel);
    TEST_CALL_REPORT("ProSelectionAlloc ()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);

/*--------------------------------------------------------------------* \
    Assemble the component by feature creation.
\*--------------------------------------------------------------------* /
    err = ProFeatureCreate (sel, elem_root, opts,
	sizeof(opts)/sizeof(opts[0]), &feature, &errors);
    TEST_CALL_REPORT("ProFeatureCreate()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);

    if (err != PRO_TK_NO_ERROR)
    {
	ProUtilShowTreeInInfo(elem_root);
        ProUtilFeatErrsPrint (&errors);
    }
/*--------------------------------------------------------------------* \
    Free Allocated memory
\*--------------------------------------------------------------------* /
    err = ProElementFree(&elem_root);
    TEST_CALL_REPORT("ProElementFree()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);
    err = ProSelectionFree(&sel);
    TEST_CALL_REPORT("ProSelectionFree()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);
    if (tree[6].data.v.r!=NULL) {
	err = ProSelectionFree(&tree[6].data.v.r);
	TEST_CALL_REPORT("ProSelectionFree()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);
    }
    if (tree[7].data.v.r!=NULL) {
	err = ProSelectionFree(&tree[7].data.v.r);
	TEST_CALL_REPORT("ProSelectionFree()", 
		"ProTestAsmcompAssembleBycsys()", err, err != PRO_TK_NO_ERROR);
    }
    return (err);
}
*/
	
void DrawingRepTabImp_error()
{
	ProError proErr;
	ProMdl curMdl;
	ProDwgtable *tables = NULL;
	int tableQty = 0;
	int i, ii;
	ProPoint3d point;
	ProDwgtable table, table1, table2;
	ProDwgtableInfo table_info;
	int  ncols=0, nrows=0;
    double sw, sl, swi, sli;

	FILE *fp;
	fp=fopen("DrawingRepTabImp.txt","w+");
	/*
	proErr = ProMacroLoad(L"~ Command `ProCmdDwgTblRepeatRegion` ;#SWITCH SYMS;#DONE");
	fprintf(fp,"ProMacroLoad_2a %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_2a %d\n",proErr);
	*/
/*moved 10	
	proErr = ProMdlCurrentGet(&curMdl);  //The drawing model
	fprintf(fp,"ProMdlCurrentGet %d\n",proErr);
	proErr = ProDrawingTablesCollect(curMdl, &tables);
	fprintf(fp,"ProDrawingTablesCollect %d\n",proErr);
	proErr = ProArraySizeGet(tables, &tableQty);
	fprintf(fp,"ProArraySizeGet %d %d\n",tableQty,proErr);
	if (tableQty == 0) return;
*/	
/* moved 20
	proErr = ProDwgtableInfoGet(&tables[0], 0, &table_info);
	fprintf(fp,"ProDwgtableInfoGet %d\n",proErr);

	ProTKFprintf (fp, "Table %d.\n", tables[0].id);
            
    proErr = ProDwgtableRowsCount (&tables[0], &nrows);
    ProTKFprintf (fp, "ProDwgtableRowsCount Number of row %d. %d", nrows, proErr);

    proErr = ProDwgtableColumnsCount (&tables[0], &ncols);
    ProTKFprintf (fp, "ProDwgtableColumnsCount Number of column %d %d\n", ncols, proErr);
*/
	//ProDwgtableRowSizeGet
	
	
	
/*--------------------------------------------------------------------*\
    Calculate table size
\*--------------------------------------------------------------------*/
  /* moved 20
	for(ii=0, sw=0; ii<nrows; ii++) 
    {
        proErr = ProDwgtableRowSizeGet(&tables[0], 0, ii, &swi);
        sw+=swi;
    }

    for(ii=0, sl=0; ii<ncols; ii++) 
    {
        proErr = ProDwgtableColumnSizeGet(&tables[0], 0, ii, &sli);
        sl+=sli;
    }

    ProTKFprintf(fp,"Table size: %3.3f X %3.3f\n",sw,sl);
	*/
/* moved 30
	point[0]=table_info.seg_origin[0];point[1]=table_info.seg_origin[1]+sw;point[2]=table_info.seg_origin[2];	
	proErr = ProDwgtableDelete(&tables[0], 1);
	fprintf(fp,"ProDwgtableDelete %d\n",proErr);
	//point[0]=430;point[1]=350;point[2]=000;	
	//proErr=ProDwgtableByOriginRetrieve((ProDrawing)curMdl,L"assembly_a1",L".",0,point,NULL,NULL,&table1);
	proErr=ProDwgtableRetrieve((ProDrawing)curMdl,L"assembly_a1",L".",0,point,NULL,NULL,&table1);
	fprintf(fp,"ProDwgtableRetrieve1 %d\n",proErr);
*/
	/*proErr = ProDwgtableInfoGet(&table1, 0, &table_info);
	fprintf(fp,"ProDwgtableInfoGet1 %d\n",proErr);
	table_info.seg_origin[0]=point[0];table_info.seg_origin[1]=point[1];table_info.seg_origin[2]=point[2];	
	proErr = ProDrawingTablesUpdate(&table1);
	fprintf(fp,"ProDrawingTablesUpdate %d\n",proErr);*/
	//point[0]=687;point[1]=364;point[2]=000;	
	//proErr=ProDwgtableRetrieve((ProDrawing)curMdl,L"asm_mbr_cparam_scr",L".",0,point,NULL,NULL,&table2);
	//fprintf(fp,"ProDwgtableRetrieve2 %d\n",proErr);
	proErr = ProWindowRepaint(PRO_VALUE_UNUSED);
	fprintf(fp,"ProWindowRepaint %d\n",proErr);
    /* moved 10 proErr = ProArrayFree((ProArray *)(&tables));
    fprintf(fp,"ProArrayFree %d\n",proErr);
	*/
	//proErr = ProSolidRegenerate(curMdl,PRO_REGEN_FORCE_REGEN);
	//fprintf(fp,"ProSolidRegenerate %d\n",proErr);
	//1 proErr = ProBomballoonAllCreate((ProDrawing)curMdl, &table1, -1); 
	//1 fprintf(fp,"ProBomballoonAllCreate %d\n",proErr);
	//2 ProMacroLoad(L"~ Command `ProCmdWinActivate`;~ Command `ProCmdWinActivate`;");
	//2 ProMacroExecute();
	//a proErr = ProMacroLoad(L"~ Activate `main_dlg_cur` `page_Table_control_btn` 1;~ Command `ProCmdDwgTblRegSS` ;~ Command `ProCmdDwgTblRegSS`;");
	proErr = ProMacroLoad(L"~ Command `ProCmdDwgRegenModel`;~ Activate `GET SELECT` `quit_sel`;#QUIT;#QUIT REGEN");
	fprintf(fp,"ProMacroLoad_1 %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_1 %d\n",proErr);
	//proErr = ProMacroLoad(L"~ Activate `main_dlg_cur` `main_dlg_cur`;~ Command `ProCmdDwgTblRepeatRegion` ;#SWITCH SYMS;#DONE");
	proErr = ProMacroLoad(L"~ Command `ProCmdDwgTblRepeatRegion` ;#SWITCH SYMS;#DONE");
	fprintf(fp,"ProMacroLoad_2 %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_2 %d\n",proErr);
	/*proErr = ProMacroLoad(L"~ Activate `main_dlg_cur` `main_dlg_cur`;~ Command `ProCmdDwgTblBlnShow` ;");
	fprintf(fp,"ProMacroLoad_3 %d\n",proErr);
	proErr = ProMacroExecute();
	fprintf(fp,"ProMacroExecute_3 %d\n",proErr);*/
		
	fclose (fp);

}

void DrawingRepReg()
{
	//
	ProError proErr;
	ProMdl curMdl;
	
	int                     n_col, n_row;
    ProError                status;
    ProBoolean              from_frm;
	
	ProDwgtable *tables = NULL;
	int tableQty = 0;
	int i;
	
	ProMdldata    data;
	char strtmp[PRO_PATH_SIZE];
	
	ProRelset		relset;
	ProModelitem p_modelitem;
	
	ProPoint3d point, drw_point;
	ProDwgtable table, table1, table2;
	
	FILE *fp;
	fp=fopen("testDrawingRepReg.txt","w+");
	
    proErr = ProMdlCurrentGet(&curMdl);  //The drawing model
	fprintf(fp,"ProMdlCurrentGet %d\n",proErr);
	ProMdlDataGet (curMdl, &data); 
	ProWstringToString(strtmp, data.name);
	fprintf(fp,"ProMdlCurrentGet name %s\n",strtmp);
	ProWstringToString(strtmp, data.type);
	fprintf(fp,"ProMdlCurrentGet type %s\n",strtmp);
    proErr = ProDrawingTablesCollect(curMdl, &tables);//static_cast<ProDrawing>((ProDrawing*)&
    fprintf(fp,"ProDrawingTablesCollect %d\n",proErr);
    proErr = ProArraySizeGet(tables, &tableQty);
	fprintf(fp,"ProArraySizeGet %d tableQty %d\n",proErr, tableQty);
	for (i = 0; i < tableQty; ++i)
    {/*
        proErr = ProDwgtableIsFromFormat(&tables[i], &isFromFormat);
        if (PRO_B_TRUE == isFromFormat)
        {
            proErr = ProDwgtableDelete(&tables[i], 0);
        }
		*/
		status = ProDwgtableColumnsCount(&tables[i], &n_col);
	fprintf(fp,"ProDwgtableColumnsCount() %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);

		status = ProDwgtableRowsCount(&tables[i], &n_row);
	fprintf(fp,"ProDwgtableRowsCount() %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);

		status = ProDwgtableIsFromFormat(&tables[i], &from_frm);
	fprintf(fp,"ProDwgtableIsFromFormat() %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);
		
	/*
	ProDwgtableCellRefmodelGet
	*/
	/*	-27 */
		status = ProModelitemToRelset(&tables[i], &relset);
	fprintf(fp,"ProModelitemToRelset() %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);		
		status = ProModelitemToRelset((ProModelitem*)&tables[i], &relset);
	fprintf(fp,"ProModelitemToRelset() ProModelitem %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);		
	/* */
	/*
		p_modelitem.owner = tables[i];
		p_modelitem.type = PRO_DRAW_TABLE; //PRO_PART;
		status = ProModelitemToRelset(&p_modelitem, &relset);
	fprintf(fp,"ProModelitemToRelset() p_modelitem %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);
	*/
	
	if ( 	1 == 1 ) {
		int ii, jj;
		ProBoolean  from_format, is_comment;
		ProAsmcomppath component;
		ProDwgtableInfo table_info;
		    ProError error;
    ProMdldata mdl_data;
    ProMdl     mdl;
	ProCharLine cstr;

		error = ProDwgtableInfoGet(&tables[i], 0, &table_info);
		ProTKFprintf (fp,"ProDwgtableColumnsCount() %s %d %d\n", "ProTestTableInfo()",
			error, error!=PRO_TK_NO_ERROR);
			
		ProTKFprintf (fp, "Seg origin %f, %f, %f\n", table_info.seg_origin[0],
				table_info.seg_origin[1], table_info.seg_origin[2]);
		ProTKFprintf (fp, "Height of char in table %f, in segment %f. ",
				table_info.table_char_height, table_info.seg_char_height);
		ProTKFprintf (fp, "Width of char %f.\n", table_info.char_width);
		ProTKFprintf (fp, "Rotation of the table  %d.\n", table_info.rotation);
		    error = ProDwgtableIsFromFormat(&tables[i], &from_format);
		TEST_CALL_REPORT ("ProDwgtableIsFromFormat()",
				"ProTestTableInfo()",error, error!=PRO_TK_NO_ERROR);

		ProTKFprintf (fp, "%s",(from_format)?("Is"):("Not"));
		//ProTKFprintf (fp, " associated with the format on %d sheet.\n", cur_sheet);
		ProTKFprintf (fp, "\tcell is comment/path length(top model of region->");
		ProTKFprintf (fp, "the model of the record of the cell)\n");
    for (jj=1; jj<=table_info.nrows; jj++)
    {
        for (ii=1; ii<=table_info.ncols; ii++)
        { 
            error = ProDwgtableCellIsComment(&tables[i], ii, jj, &is_comment);
            fprintf(fp,"ProDwgtableCellIsComment() %s %d %d\n",
                "ProTestTableInfo()", error, error!=PRO_TK_NO_ERROR);

            ProTKFprintf (fp,"\t%s/",(is_comment)?"yes":"no");
/*--------------------------------------------------------------------*\
    Get specified member identifier table.
\*--------------------------------------------------------------------*/
	    error = ProDwgtableCellComponentGet(&tables[i], ii, jj, &component);
            fprintf(fp,"ProDwgtableCellComponentGet() %s %d %d\n",
                    "ProTestTableInfo()", error, error == PRO_TK_NO_ERROR);
	    fprintf (fp, "%d", component.table_num);	

		if (error != PRO_TK_NO_ERROR)
            { 
                ProTKFprintf (fp, "(none->none)");
            }
            else
            {
				error = ProMdlDataGet(component.owner, &mdl_data);
						fprintf (fp, "ProMdldata() %s %d %d\n",
							   "ProTestTableInfo()", error, error != PRO_TK_NO_ERROR);

						fprintf (fp,  "([%s]->", ProWstringToString(cstr, mdl_data.name));

				error = ProAsmcomppathMdlGet(&component, &mdl);
				fprintf (fp, "ProAsmcomppathMdlGet() %s %d %d\n",
					"ProTestTableInfo()", error, error != PRO_TK_NO_ERROR);

				error = ProMdlDataGet(mdl, &mdl_data);
						fprintf (fp, "ProMdldata() %s %d %d\n",
							   "ProTestTableInfo()", error, error != PRO_TK_NO_ERROR);

                fprintf (fp, "<-[%s])", ProWstringToString(cstr, mdl_data.name));
            }

		
		}
	}
	}
    
		proErr = ProDwgtableDelete(&tables[i], 0);
	}
	
	point[0]=430;point[1]=350;point[2]=000;	
	status=ProDwgtableRetrieve((ProDrawing)curMdl,L"assembly_a1",L".",0,point,NULL,NULL,&table1);
	
	point[0]=687;point[1]=364;point[2]=000;	
	status=ProDwgtableRetrieve((ProDrawing)curMdl,L"asm_mbr_cparam_scr",L".",0,point,NULL,NULL,&table2);
	
	proErr = ProWindowRepaint(PRO_VALUE_UNUSED);
 
    proErr = ProArrayFree((ProArray *)(&tables));
    
	
	if ( 1 == 2 ) {
		ProSelection *sel;
		int n;
		ProModelitem pmi;
		proErr = ProSelect("part,asm,datum,feature,edge", 1, NULL, NULL, NULL, NULL, &sel, &n); /*(char*)"dwg_table" */
		fprintf(fp," part,asm,datum,feature,edge ProSelect %d %d ;\t", proErr, n);
		
		proErr = ProSelectionModelitemGet(sel[0], &pmi/*(ProModelitem*)&table*/);
		fprintf(fp,"ProSelect %d ; \t", proErr);
		
		status = ProModelitemToRelset(&pmi, &relset);
	fprintf(fp,"ProModelitemToRelset() %s %d %d \n",
        "ProTestDwgtableVisitAction()", status, status!=PRO_TK_NO_ERROR);
		
	}
	
	
	fclose (fp);
	
    return proErr;

	
}

/*====================================================================*\
    FUNCTION :	ProUtilVectorCopy()
    PURPOSE  :	Copy a vector to another
\*====================================================================*/
double *ProUtilVectorCopy(
    double from[3],
    double to[3])
{
    if(from == NULL)
	to[0] = to[1] = to[2] = 0.0;
    else
    {
	to[0] = from[0];
	to[1] = from[1];
	to[2] = from[2];
    }
    return(to);
}


/*====================================================================*\
    FUNCTION :	ProUtilMatrixCopy()
    PURPOSE  :	Copy one matrix to another, or initialize a matrix to
		be the unitary matrix
\*====================================================================*/
void ProUtilMatrixCopy(
    double input[4][4],
    double output[4][4])
{
    int i,j;

    if(input == NULL)
    {
	for(i=0;i<4;i++)
	    for(j=0;j<4;j++)
		output[i][j] = identity_matrix[i][j];
    }
    else
    {
	for(i=0;i<4;i++)
	    for(j=0;j<4;j++)
		output[i][j] = input[i][j];
    }
}

/*====================================================================*\
    FUNCTION :	ProUtilPointTrans()
    PURPOSE  :	Transform a 3d point by a matrix
\*====================================================================*/
void ProUtilPointTrans(
    double m[4][4],
    double p[3],
    double output[3])
{
    double buff[4];
    ProError status;

    if(m == NULL)
    {
	ProUtilVectorCopy(p, output);
	return;
    }

    status = ProPntTrfEval(p, m, buff);
    TEST_CALL_REPORT("ProPntTrfEval()", "ProUtilPointTrans()", 
			status, status!=PRO_TK_NO_ERROR);
    ProUtilVectorCopy(buff, output);

}

/*====================================================================*\
    FUNCTION :	ProUtilVectorTrans()
    PURPOSE  :	Transform a 3d vector by a matrix
\*====================================================================*/
void ProUtilVectorTrans(
    double m[4][4],
    double v[3],
    double output[3])
{
    ProError status;
    
    if(m == NULL)
    {
	ProUtilVectorCopy(v, output);
	return;
    }

    status = ProVectorTrfEval(v, m, output);
    TEST_CALL_REPORT("ProVectorTrfEval()", "ProUtilPointTrans()", 
			status, status!=PRO_TK_NO_ERROR);

}

/*====================================================================*\
    FUNCTION :	ProUtilMatrixProduct()
    PURPOSE  :	Multiply two transformation matrices
\*====================================================================*/
void ProUtilMatrixProduct(
    double m1[4][4],
    double m2[4][4],
    double output[4][4])
{
    int i,j,k;

/*--------------------------------------------------------------------*\
    If the first matrix is zero, just copy the second
    (So, if the second is zero, copy the identity matrix.)
\*--------------------------------------------------------------------*/
    if(m1 == NULL)
    {
	ProUtilMatrixCopy(m2, output);
	return;
    }
/*--------------------------------------------------------------------*\
    If the second matrix is zero, just copy the first
\*--------------------------------------------------------------------*/
    if(m2 == NULL)
    {
	ProUtilMatrixCopy(m1, output);
	return;
    }

/*--------------------------------------------------------------------*\
    Do the multiplication
\*--------------------------------------------------------------------*/
    for(i=0;i<4;i++)
    {
	for(j=0;j<4;j++)
	{
	    output[i][j] = 0.0;
	    for(k=0;k<4;k++)
		output[i][j] += m1[i][k] * m2[k][j];
	}
    }
}

/*====================================================================*\
    FUNCTION :	ProUtilMatrixInvert()
    PURPOSE  :	Find the inverse of a transformation matrix
\*====================================================================*/
int ProUtilMatrixInvert(
    double m[4][4],
    double output[4][4])
{
    double vec[3], scale_sq, inv_sq_scale;
    int i,j;

/*--------------------------------------------------------------------*\
    If the matrix is null, return the identity matrix
\*--------------------------------------------------------------------*/
    if(m == NULL)
    {
	ProUtilMatrixCopy(NULL, output);
	return(1);
    }

/*--------------------------------------------------------------------*\
    Obtain the matrix scale
\*--------------------------------------------------------------------*/
    vec[0] = m[0][0];
    vec[1] = m[0][1];
    vec[2] = m[0][2];
    scale_sq = vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2];

/*--------------------------------------------------------------------*\
    Check whether there is an inverse, and if not, return 0
\*--------------------------------------------------------------------*/
    if(scale_sq < (.000000001 * .000000001))
	return(0);

/*--------------------------------------------------------------------*\
    Need the inverse scale squared 
\*--------------------------------------------------------------------*/
    inv_sq_scale = 1.0 / scale_sq;

/*--------------------------------------------------------------------*\
    The orientation vectors
\*--------------------------------------------------------------------*/
    for(j=0;j<3;j++)
    {
	for(i=0;i<3;i++)
	    output[j][i] = m[i][j] * inv_sq_scale;
	output[j][3] = 0.0;
    }

/*--------------------------------------------------------------------*\
    The shift vectors
\*--------------------------------------------------------------------*/
    for(i=0;i<3;i++)
    {
	output[3][i] = 0.0;
	for(j=0;j<3;j++)
	    output[3][i] -= m[i][j] * m[3][j] * inv_sq_scale;
    }
    output[3][3] = 1.0;

    return(1);
}

/*=============================================================*\
  FUNCTION: ProUtilInvertCsysMatrix()
  PURPOSE:  Develop the inverted selection csys transform
\*=============================================================*/
ProError ProUtilInvertCsysMatrix( 
	ProSelection sel, ProGeomitemdata *p_data, ProMatrix tmatrix )
{
    ProError            err;
    ProMatrix           matrix, csysmat;
    ProAsmcomppath path;

	/*  Get the "Asmcomppath transform"  */
	err = ProSelectionAsmcomppathGet(sel, &path);
	err = ProAsmcomppathTrfGet(&path, PRO_B_TRUE, matrix);

	/*  Create the csys transform  */
	ProUtilMatrixCopy( NULL, csysmat );
        ProUtilVectorCopy(p_data->data.p_csys_data->x_vector, csysmat[0]);
        ProUtilVectorCopy(p_data->data.p_csys_data->y_vector, csysmat[1]);
        ProUtilVectorCopy(p_data->data.p_csys_data->z_vector, csysmat[2]);
        ProUtilVectorCopy(p_data->data.p_csys_data->origin,   csysmat[3]);

	/*  Transform the csys 'vectors' by the "Asmcomppath" transform */
	ProUtilMatrixProduct( csysmat, matrix, tmatrix );
        ProUtilMatrixCopy  ( tmatrix, matrix );

	/*  Invert the "selection csys" transform  */
        ProUtilMatrixInvert( matrix, tmatrix );

    return (PRO_TK_NO_ERROR);
}


/*====================================================================*\ 
FUNCTION : UsrListViews()
PURPOSE  : Command to list view info in an information window 
\*====================================================================*/ 
int UsrListViews() 
{
  ProDrawing drawing;
  int n_views, view, sheet;
  ProSolid solid;
  ProMdldata mdata;
  ProVector outline[2];
  double scale;
  ProDrawingViewDisplay display;
  char *sstyle;
  ProView *views;
  FILE *fp;
  ProName wfname;
  ProCharName name, type;
  char *fname = "views.txt";

/*--------------------------------------------------------------------*\     
Open a text file to contain the information to be displayed 
\*--------------------------------------------------------------------*/ 
  fp = PTApplsUnicodeFopen(fname, "w");

/*--------------------------------------------------------------------*\     
Get the current drawing 
\*--------------------------------------------------------------------*/ 
  ProMdlCurrentGet((ProMdl*)&drawing);

/*--------------------------------------------------------------------*\     
Collect the views into an array 
\*--------------------------------------------------------------------*/ 
  ProDrawingViewsCollect(drawing, &views);
  ProArraySizeGet(views, &n_views);

  for(view=0;view<n_views;view++)
    { 
/*--------------------------------------------------------------------*\
Get the sheet number for this view 
\*--------------------------------------------------------------------*/ 
      ProDrawingViewSheetGet(drawing, views[view], &sheet);

/*--------------------------------------------------------------------*\ 
Get the name of the solid that the view contains 
\*--------------------------------------------------------------------*/ 
      ProDrawingViewSolidGet(drawing, views[view], &solid);
      ProMdlDataGet((ProMdl)solid, &mdata);
      ProWstringToString(name, mdata.name);
      ProWstringToString(type, mdata.type);

/*--------------------------------------------------------------------*\ 
Get the outline, scale, and display state 
\*--------------------------------------------------------------------*/
      ProDrawingViewOutlineGet(drawing, views[view], outline);         
      ProDrawingViewScaleGet(drawing, views[view], &scale);         
      ProDrawingViewDisplayGet(drawing, views[view], &display);

/*--------------------------------------------------------------------*\ 
Write the information to the text file 
\*--------------------------------------------------------------------*/ 
      ProTKFprintf(fp,"View %d\n", view+1);
      ProTKFprintf(fp,"    Solid        : %s.%s.%d\n", name, type,
	      mdata.version);

      ProTKFprintf(fp,"    Sheet        : %d\n", sheet);
      ProTKFprintf(fp,"    Lower left   : %0.3f, %0.3f\n",
	      outline[0][0],
	      outline[0][1]);

      ProTKFprintf(fp,"    Upper right  : %0.3f, %0.3f\n",
	      outline[1][0],
	      outline[1][1]);

      ProTKFprintf(fp,"    Scale        : %0.3f\n", scale);
      switch(display.style)
	{         
	case PRO_DISPSTYLE_DEFAULT     : sstyle = "default"; break;
	  
	case PRO_DISPSTYLE_WIREFRAME   : sstyle = "wireframe"; break;

	case PRO_DISPSTYLE_HIDDEN_LINE : sstyle = "hidden line"; break;

	case PRO_DISPSTYLE_NO_HIDDEN   : sstyle = "no hidden";break;

	case PRO_DISPSTYLE_SHADED      : sstyle = "shaded"; break;         
	}

      ProTKFprintf(fp,"    Disp style   : %s\n", sstyle);
    }
  
/*--------------------------------------------------------------------*\     
Close the file, and display it 
\*------------------------------------------------------------------*/   
  fclose(fp);     

  ProStringToWstring(wfname, fname);
  ProInfoWindowDisplay(wfname, NULL, NULL);

  return 0;
}


/*====================================================================*\ 
FUNCTION : UsrSolidSelect()
PURPOSE  : Utility to select a solid using the file browser and retrieve
           it if it is not already in session.
\*====================================================================*/ 

int UsrSolidSelect(
     ProSolid *solid)
{
     ProName title;
     ProLine filter;
     ProPath wfile, wdir, wcurrent_dir;
     char file[PRO_PATH_SIZE], dir[PRO_PATH_SIZE],
           current_dir[PRO_PATH_SIZE];
     ProBoolean different_dir;
     char *slash, *root, *ext;
     ProFamilyName wroot;
     ProMdlType mtype;
     ProError status;

/*--------------------------------------------------------------------*\     
Ask the user to select a prt or asm file 
\*--------------------------------------------------------------------*/ 
    ProStringToWstring(title,"Solid");
    ProStringToWstring(filter,"*.prt,*.asm");

    if(ProFileOpen(title, filter, NULL, NULL, NULL, NULL, wfile) !=
         PRO_TK_NO_ERROR)

      return(0);
     ProWstringToString(file, wfile);

/*--------------------------------------------------------------------*\     
Parse out the directory, and see if it is different from the current 
\*--------------------------------------------------------------------*/     
     different_dir = PRO_B_FALSE;

     if(slash = strrchr(file,'/'))
     {
        *slash = '\0';
        strcpy(dir, file);
        strcpy(file, ++slash);
        ProStringToWstring(wdir, dir);
        ProDirectoryCurrentGet(wcurrent_dir);
        ProWstringToString(current_dir, wcurrent_dir);
        if(strcmp(current_dir, dir))
             different_dir = PRO_B_TRUE;
     }

/*--------------------------------------------------------------------*\     
Parse out the file root name and model type 
\*--------------------------------------------------------------------*/ 

     root = strtok(file,".");
     ProStringToWstring(wroot, root);
     ext = strtok(NULL,".");
     if(!strcmp(ext,"prt"))
         mtype = PRO_MDL_PART;

     else if(!strcmp(ext,"asm"))
         mtype = PRO_MDL_ASSEMBLY;

     else
         return(0);

/*--------------------------------------------------------------------*\     
If the solid is already in session, return with it 
\*--------------------------------------------------------------------*/ 
    if(ProMdlInit(wroot, mtype, (ProMdl*)solid) == PRO_TK_NO_ERROR)
         return(1);

/*--------------------------------------------------------------------*\     
Move the to correct directory, and try to retieve the solid 
\*--------------------------------------------------------------------*/ 

    if(different_dir)
         ProDirectoryChange(wdir);

    status = ProMdlRetrieve(wroot, mtype, (ProMdl*)solid);

    if(different_dir)
         ProDirectoryChange(wcurrent_dir);

    if(status != PRO_TK_NO_ERROR)
         return(0);

    return(1);
 }

/*====================================================================*\ 
FUNCTION : UsrCreateSheet() 
PURPOSE  : Create a new drawing sheet with a general, and two
           projected,views of a selected solid 
\*====================================================================*/ 

int UsrCreateSheet()
 {
     ProDrawing drawing;
     int sheet;
     ProSolid solid;
     ProVector pos;
     ProView view, pview;
     ProVector outline[2];
     ProMatrix matrix;
	 ProSimprep      simprep;
	 ProError error;
	 ProName mdlViewName = L"ISO", orientName = L"Trimetric";

/*--------------------------------------------------------------------*\     
Create a new sheet and make it current 
\*--------------------------------------------------------------------*/ 

     ProMdlCurrentGet((ProMdl)&drawing);
     ProDrawingSheetCreate(drawing, &sheet);
     ProDrawingCurrentSheetSet(drawing, sheet);

/*--------------------------------------------------------------------*\     
Ask the user to select a solid and add it to the drawing 
\*--------------------------------------------------------------------*/     

     if(!UsrSolidSelect(&solid))
         return(0);

     //ProDrawingSolidAdd(drawing, solid);
	 
	error = ProSimprepSelect ((ProSolid)solid, &simprep);
            TEST_CALL_REPORT ("ProSimprepSelect()",
                "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);
            if (error == PRO_TK_NO_ERROR)
            {
                error = ProDrawingAsmsimprepAdd (drawing, &simprep);
                TEST_CALL_REPORT ("ProDrawingAsmsimprepAdd()",
                    "ProTestDrwSimpRepAdd()", error, error!=PRO_TK_NO_ERROR);
            }	 
	 

/*--------------------------------------------------------------------*\ 
Create a general view from the Z axis direction 
\*--------------------------------------------------------------------*/ 

     ProUtilMatrixCopy(NULL, matrix);
     pos[0] = 600.0;
     pos[1] = 600.0;
     pos[2] = 0.0;

     ProDrawingGeneralviewCreate(drawing, solid, sheet, PRO_B_FALSE,
                 pos, 0.1, matrix, &view);

				 
error = ProDrawingViewOrientationFromNameSet(drawing, view, mdlViewName, orientName, 0.0, 0.0);		

error = ProDrawingViewRegenerate(drawing, view);		 
				 
/*--------------------------------------------------------------------*\     
Get the position and size of the new view 
\*--------------------------------------------------------------------* / 

    ProDrawingViewOutlineGet(drawing, view, outline);

/*--------------------------------------------------------------------*\     
Create a projected view to the right of the general view 
\*--------------------------------------------------------------------* / 

     pos[0] = outline[1][0] + (outline[1][0] - outline[0][0]);
     pos[1] = (outline[0][1] + outline[1][1]) / 2.0;
     pos[2] = 0.0;

     ProDrawingProjectedviewCreate(drawing, view, PRO_B_FALSE, pos,
            &pview);

/*--------------------------------------------------------------------*\     
Create a projected view below the general view 
\*--------------------------------------------------------------------* / 

     pos[0] = (outline[0][0] + outline[1][0]) / 2.0;
     pos[1] = outline[0][1] - (outline[1][1] - outline[0][1]);

     ProDrawingProjectedviewCreate(drawing, view, PRO_B_FALSE, pos,
            &pview);
																		*/
    return(1);

 }

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
typedef struct owner_fp_data {
    ProSolid *solid;
    FILE     *fp;
} SolidFpData;
////////////////////////////////////////////////////////////////////////

    FILE *simp_rep_fp;
ProError ProTestSRepVisitInfo(    ProSimprep *simp_rep,    ProError err,     ProAppData tmp_fp);
ProError ProTestSRepItemInfo(    ProSimprep *simp_rep,    FILE *fp);
ProError ProTestSRepItemsVisit (    ProSimprepitem *item,    ProError          err,    SolidFpData    *fp_data );
/*=========================================================================*\
    Function:	ProUtilCollectSimprepsdataitems()
    Purpose:	Return a list of simplified representations in the solid
    Returns:	PRO_TK_NO_ERROR - success;
		PRO_TK_BAD_INPUTS - invalid parameters
\*=========================================================================*/
ProError ProUtilCollectSimprepsdataitems( 
    ProSimprepdata   *p_simprepdata,/* In:  The simprepdata handle */
    ProSimprepitem    **p_simprepitems    /* Out: ProArray with collected simp reps
					    items. The function allocates 
					    memory for this argument, but 
					    you must free it. To free 
					    the memory, call the function 
					    ProArrayFree() */
);



/*====================================================================*\
FUNCTION : ProTestSRepInfo
PURPOSE  : Print out def rule information about models simplified reps
\*====================================================================*/
int ProTestSRepInfo()
{
	ProMdl		  owner;
	ProSolid *p_solid;
    ProError status;
//    FILE *simp_rep_fp;
    char filename[] = "simp_rep.inf";
    wchar_t wfilename[PRO_LINE_SIZE];
    ProInfoWindowLocation   win_location = { 0.0, 0.0 };
    ProInfoWindowSize	    win_size = { 25, 80 };
	
	//status = ProMdlCurrentGet(&owner);
	owner = global_mdl;
	p_solid = &owner;

    /*if ( (simp_rep_fp = PTApplsUnicodeFopen(filename,"w")) == NULL)
    {
    ProTKFprintf(stderr,"Error opening file for writing\n");
        return -1;
    }*/
    status = ProSolidSimprepVisit(*p_solid, NULL,
             (ProGeomitemAction)ProTestSRepVisitInfo, (ProAppData)simp_rep_fp);
    /**/Log("ProSolidSimprepVisit()  --ProTestSRepInfo() status %d ",
            status);/**/

    //fclose(simp_rep_fp);

    //status = ProInfoWindowDisplay( ProStringToWstring(wfilename, filename),
	//			    &win_location, &win_size );
    /*Log( "ProInfoWindowDisplay() -- ProTestSRepInfo() status not good file simp_rep.inf %d ",
			status);*/


    return 0;
}

/*====================================================================*\
FUNCTION : ProTestSRepVisitInfo
PURPOSE  : Display info window of an assembly's simplified reps
\*====================================================================*/
ProError ProTestSRepVisitInfo(
    ProSimprep *simp_rep,
    ProError err, 
    ProAppData tmp_fp)
{
    ProError status;
    wchar_t  wname[PRO_NAME_SIZE];
    char     name[PRO_PATH_SIZE];
    char     str[30];
    ProSimprepActionType def_action;
    ProSimprepdata *data;
    FILE *fp = (FILE *)tmp_fp;
	
	global_simp_rep = NULL;

    if (simp_rep == NULL || fp == NULL)
    {
    status = PRO_TK_GENERAL_ERROR;
    }

    status = ProSimprepdataGet(simp_rep, &data);
    /**/Log("ProSimprepdataGet() -- ProTestSRepVisitInfo() status %d ",
                status);/**/

    if (status == PRO_TK_NO_ERROR) 
    {
    status = ProSimprepdataNameGet(data, wname);
    /*Log("ProSimprepdataNameGet() -- ProTestSRepVisitInfo() status %d ",
                    status);*/
    }
       
    if (status == PRO_TK_NO_ERROR) 
    {
    status = ProSimprepdataDefltGet(data, &def_action);
    /*Log("ProSimprepdataDefltGet() -- ProTestSRepVisitInfo() status %d ",
                    status);*/
    }    

    ProWstringToString(name, wname);
	
	if (strstr(name,"SPOOL")) {
		Log(" will try to draw %s ", name);
		global_simp_rep = simp_rep;
		NewDwgSR();
	}
	else
		Log(" will not draw %s ", name);
	
	return status;

    if (status == PRO_TK_NO_ERROR)
    {
    switch (def_action)
    {
    case PRO_SIMPREP_INCLUDE:
        //ProTKSprintf (str, "Include");
		sprintf(str,"%s", "Include");
        break;
    case PRO_SIMPREP_EXCLUDE:
        //ProTKSprintf (str, "Exclude");
		sprintf(str,"%s", "Exclude");
        break;
    case PRO_SIMPREP_GEOM:
        //ProTKSprintf (str, "Geometry");
		sprintf(str,"%s", "Geometry");
        break;
    case PRO_SIMPREP_GRAPHICS:
        //ProTKSprintf (str, "Graphics");
		sprintf(str,"%s", "Graphics");
        break;
    case PRO_SIMPREP_SUBSTITUTE:
 	//ProTKSprintf (str, "Substitute");
	sprintf(str,"%s", "Substitute");
	break;
    default:
        //ProTKSprintf (str, "unknown");
		sprintf(str,"%s", "unknown");
        break;
    }
    //ProTKFprintf(fp, "%s - %s components as default rule\n", 
	Log("%s - %s components as default rule\n", name, str);
	//fprintf(/*fp*/simp_rep_fp, "%s - %s components as default rule\n", name, str);
	Log("simp_rep_fp stage %d",1);
    //ProTKFprintf(fp, "Item info:\n");
	//fprintf(/*fp*/simp_rep_fp, "Item info:\n");
	Log("Item info:\n");
	Log("simp_rep_fp stage %d",2);
       //fflush(/*fp*/simp_rep_fp);
	Log("simp_rep_fp stage %d",3);	   
           
    status = ProTestSRepItemInfo ( simp_rep, fp );
    }    

    return status ;
}

/*====================================================================*\
FUNCTION : ProTestSRepItemInfo 
PURPOSE  : Print out information about each simp rep 
\*====================================================================*/
ProError ProTestSRepItemInfo(
    ProSimprep *simp_rep,
    FILE *fp)
{
    ProSimprepdata *data;
    char name[PRO_PATH_SIZE];
    char filename[] = "srep_info.inf";
    wchar_t wfilename[PRO_LINE_SIZE];
    ProError status;
    SolidFpData sfp_data;
    int num = 0, local_file = 0;
    ProInfoWindowLocation   win_location = { 0.0, 0.0 };
    ProInfoWindowSize	    win_size = { 25, 80 };
    char str[30];
    ProSimprepitem    *simprepitems;
    int simprepitems_num, i;
    
    /*if (fp == NULL)
    {
        if ( (fp = PTApplsUnicodeFopen(filename,"w")) == NULL)
        {
            ProTKFprintf(stderr,"Error opening file for writing\n");
            return PRO_TK_GENERAL_ERROR;
        }

        local_file = 1;
    }*/

    status = ProSimprepdataGet(simp_rep, &data);
    Log("ProSimprepdataGet() -- ProTestSRepItemInfo() status %d ",
        status);

    if (status == PRO_TK_NO_ERROR && data != NULL)
    {
        status = ProArraySizeGet((ProArray)(data->items),&num);
        Log("ProArraySizeGet() -- ProTestSRepItemInfo() status %d ",
                    status);
        switch (data->deflt)
        {
        case PRO_SIMPREP_INCLUDE:
            ProTKSprintf (str, "Include");
            break;
        case PRO_SIMPREP_EXCLUDE:
            ProTKSprintf (str, "Exclude");
            break;
        case PRO_SIMPREP_GEOM:
            ProTKSprintf (str, "Geometry");
            break;
        case PRO_SIMPREP_GRAPHICS:
            ProTKSprintf (str, "Graphics");
            break;
        case PRO_SIMPREP_SUBSTITUTE:
            ProTKSprintf (str, "Substitute");
            break;
        default:
            ProTKSprintf (str, "unknown");
            break;
        }
        //ProTKFprintf(fp, "Name      : %s\nTemp      : %s\nDef rule  : %s\nItem cnt  : %d\n", 
		Log( "Name      : %s\nTemp      : %s\nDef rule  : %s\nItem cnt  : %d\n", 
                 ProWstringToString(name, data->name),
                 data->temp == PRO_B_TRUE ? "True" : "False",
                 str, num);


        sfp_data.solid = (ProSolid *)&(simp_rep->owner);
        sfp_data.fp    = fp; 

        status = ProUtilCollectSimprepsdataitems (data, &simprepitems);
        if (status == PRO_TK_NO_ERROR)
        {
            status = ProArraySizeGet ((ProArray)simprepitems, &simprepitems_num);
            Log( "ProArraySizeGet() -- ProTestSRepItemInfo() status %d ", 
            status);
            for (i = 0; i < simprepitems_num; i++)
            {
                status = ProTestSRepItemsVisit (simprepitems+i,
     	            PRO_TK_NO_ERROR,( SolidFpData*) &sfp_data);
            }
            status = ProArrayFree ((ProArray*)&simprepitems);
            Log( "ProArrayFree() -- ProTestSRepItemInfo() status %d ", 
                status);
        }
    }

    /*if (local_file == 1)
    {
        fclose(fp);
        status = ProInfoWindowDisplay( ProStringToWstring(wfilename, filename),
            &win_location, &win_size );
        TEST_CALL_REPORT( "ProInfoWindowDisplay()", "ProTestSRepItemInfo()",
			status, status != PRO_TK_NO_ERROR);
    }
    else
    {
        fflush(fp);
    }*/

    if (data) 
    {
        status = ProSimprepdataFree(&data);
        Log("ProSimprepdataFree() -- ProTestSRepItemInfo() status %d ",
            status);
    } 

    return (PRO_TK_NO_ERROR);
}


/*====================================================================*\
FUNCTION : ProTestSRepItemsVisit
PURPOSE  : Print out info about each item visited
\*====================================================================*/
ProError ProTestSRepItemsVisit (
    ProSimprepitem *item,
    ProError          err,
    SolidFpData    *fp_data )
{
    wchar_t wname[PRO_NAME_SIZE];
    char     name[PRO_NAME_SIZE];
    ProAsmcomppath comp_path;
    ProMdl    model;
    ProFeature feature;
    ProFeattype type;
    ProBoolean is_visibile;
    ProError status;

    if ( item->item_path.path_size == PRO_VALUE_UNUSED )
    {
/*--------------------------------------------------------------------*\
    Feature simp rep
\*--------------------------------------------------------------------*/
        status = ProFeatureInit(*(fp_data->solid), item->item_path.feat_id, &feature);
    Log("ProFeatureInit() -- ProTestSRepItemsVisit() status %d ",
                status);
    status = ProFeatureTypeGet(&feature, &type);
    
    //ProTKFprintf(fp_data->fp, "Item type : %d\n", type);    
	Log(/*fp_data->fp, */"Item type : %d\n", type);    
    }
    else
    {
/*--------------------------------------------------------------------*\
    Assembly simp rep
\*--------------------------------------------------------------------*/
    status = ProAsmcomppathInit(*(fp_data->solid), item->item_path.comp_path,
                item->item_path.path_size, &comp_path);
    Log("ProAsmcomppathInit() -- ProTestSRepItemsVisit() status %d ",
                status);
    
    status = ProAsmcomppathMdlGet(&comp_path, &model);
    Log("ProAsmcomppathMdlGet() -- ProTestSRepItemsVisit()  status %d ",
                status);

    status = ProMdlNameGet(model, wname);

    //ProTKFprintf(fp_data->fp,"Item name : %s\n", ProWstringToString(name, wname));    
	Log(/*fp_data->fp,*/"Item name : %s\n", ProWstringToString(name, wname));    

    is_visibile = PRO_B_TRUE;
    status = ProAsmcompVisibilityGet( &comp_path, NULL, &is_visibile );
	/*
	~ Update `sfmgrnote` `ExtNoteLayout.NoteTextArea` `try2pcf`
~ Activate `sfmgrnote` `NoteOKBtn`

ProAnnotationByViewShow()
PRO_NOTE
ProNoteTextGet
*/
    Log("ProAsmcompVisibilityGet() -- ProTestSRepItemsVisit() status %d ",
                status/*, status != PRO_TK_NO_ERROR &&
                status != PRO_TK_BAD_CONTEXT*/);
    if( status == PRO_TK_NO_ERROR )
	//ProTKFprintf( fp_data->fp,"Item visibility : %s\n", 
	Log( /*fp_data->fp,*/ "Item visibility : %s\n", 
		   is_visibile == PRO_B_TRUE ? "Visible" : "Invisible" );
    }
    return PRO_TK_NO_ERROR;
}




/*=========================================================================*\
    Function:	ProUtilCollect2ParamDBVisitActionR()
    Purpose:	Add any object given by pointer to the Collection
    Returns:	PRO_TK_NO_ERROR - success;
\*=========================================================================*/
ProError ProUtilCollect2ParamDBVisitActionR(
    void	    *p_object,	/* In:	The pointer to the object 
					being visited */
    ProAppData	    app_data)	/* In:	In fact it's ProArray** */
{
    ProError status; 
    ProArray *p_array;
    
    p_array = (ProArray*)((void**)app_data)[0];

    /*TEST_CALL_REPORT( p_visit_action_type, "ProUtilCollect2ParamDBVisitAction",
	PRO_TK_NO_ERROR, 0 );*/
	Log(" calling ProUtilCollect2ParamDBVisitActionR");

    status = ProArrayObjectAdd(p_array, PRO_VALUE_UNUSED, 1, p_object );
    return (status);
}

/*=========================================================================*\
    Function:	ProUtilCollect3ParamDBVisitActionR()
    Purpose:	Add any object given by pointer to the Collection
    Returns:	PRO_TK_NO_ERROR - success;
\*=========================================================================*/
ProError ProUtilCollect3ParamDBVisitActionR(
    void	    *p_object,	/* In:	The pointer to the object 
					being visited */
    ProError	    status,	/* In:  The status returned by filter func */
    ProAppData	    app_data)	/* In:	In fact it's ProArray** */
{
    return (ProUtilCollect2ParamDBVisitActionR(p_object, app_data));
}


ProError ProUtilDefaultFilter()
{
    /*TEST_CALL_REPORT( p_filter_action_type, "ProUtilDefaultFilter", 
        PRO_TK_NO_ERROR, 0 );*/

    return (PRO_TK_NO_ERROR);
}
/*=========================================================================*\
    Function:	ProUtilCollectSimprepsdataitems()
    Purpose:	Return a list of simplified representations in the solid
    Returns:	PRO_TK_NO_ERROR - success;
		PRO_TK_BAD_INPUTS - invalid parameters
\*=========================================================================*/
ProError ProUtilCollectSimprepsdataitems( 
    ProSimprepdata   *p_simprepdata,/* In:  The simprepdata handle */
    ProSimprepitem    **p_simprepitems    /* Out: ProArray with collected simp reps
					    items. The function allocates 
					    memory for this argument, but 
					    you must free it. To free 
					    the memory, call the function 
					    ProArrayFree() */
)
{
// # i fn d e f PT_PRODUCTS_BUILD

    ProError	    status;

    if( p_simprepitems != NULL )
    {
	status = ProArrayAlloc(0,sizeof(ProSimprepitem), 1, (ProArray*)p_simprepitems);
	Log("ProArrayAlloc() - ProUtilCollectSolidSimpreps() status %d ",
					    status);
	if( status == PRO_TK_NO_ERROR )
	{
	    //ACTION_TYPE( "ProFunction", "ProFunction" )
	    status = ProSimprepdataitemsVisit( p_simprepdata, 
                (ProFunction)ProUtilDefaultFilter,
		(ProFunction)ProUtilCollect3ParamDBVisitActionR,
                (ProAppData)&p_simprepitems );
	    Log("ProSolidSimprepVisit() -- ProUtilCollectSolidSimpreps() status %d ", status/*,  status != PRO_TK_NO_ERROR && status != PRO_TK_E_NOT_FOUND*/);
	    if( status != PRO_TK_NO_ERROR )
	    {
		ProArrayFree( (ProArray*)p_simprepitems );
		*p_simprepitems = NULL;
	    }
	}
    }
    else
	status = PRO_TK_BAD_INPUTS;

    return (status);

//# e n d i f
}



/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////


/*--------------------------------------------------------------------*\ 
    Data structure for information needed about datum points 
\*--------------------------------------------------------------------*/ 
typedef struct point_t {
     ProFeature feature;
     ProVector  position;
     ProName    name;
 } Point_t;

int UsrPointsCollect();
int UsrTableTextAdd();
/*====================================================================*\ 
FUNCTION : UsrPointTable() 
PURPOSE  : Command to create a table of datum points 
\*====================================================================*/ 
int UsrPointTable ()
{
     ProError status;
     ProSelection *sel;
     int n_sel, n_points, p;
     ProSolid solid;
     ProCharName name, type, csys_name;
     ProName wname;
     ProGeomitem csys_geom;
     ProAsmcomppath csys_comppath;
     ProMatrix from_csys, to_csys, trf;
     ProGeomitemdata *gdata;
     ProMouseButton button;
     ProVector pos;
     Point_t *points;
     ProDwgtabledata tdata;
     double widths[] = {8.0, 8.0, 10.0, 10.0, 10.0};
     ProHorzJust justs[] = {
                            PROHORZJUST_LEFT,
                            PROHORZJUST_LEFT,
                            PROHORZJUST_LEFT,
                            PROHORZJUST_LEFT,
                            PROHORZJUST_LEFT};
     double *heights;
     int last_feat_row;
     ProDrawing drawing;
     ProDwgtable table;
     ProMdldata mdata;
     ProCharLine line;
     ProFileName msgfil;

     ProStringToWstring (msgfil, "msg_ugdrawing.txt");

/*--------------------------------------------------------------------*\ 
    Select a coordinate system. This defines the model (the top one
     in that view), and the reference for the datum point positions. 
\*--------------------------------------------------------------------*/ 
     ProMessageDisplay(msgfil,"USER Select csys");
     status = ProSelect("csys",1,NULL,NULL,NULL,NULL,&sel,&n_sel);
     if(status != PRO_TK_NO_ERROR || n_sel < 1)
         return(0);

/*--------------------------------------------------------------------*\ 
    Extract the csys handle, and assembly path. 
\*--------------------------------------------------------------------*/ 
     ProSelectionModelitemGet(sel[0], &csys_geom);
     ProSelectionAsmcomppathGet(sel[0], &csys_comppath);

/*--------------------------------------------------------------------*\ 
    Extract the csys location 
\*--------------------------------------------------------------------*/ 
     ProGeomitemdataGet(&csys_geom, &gdata);
     ProMatrixInit(gdata->data.p_csys_data->x_vector,
                   gdata->data.p_csys_data->y_vector,
                   gdata->data.p_csys_data->z_vector,
                   gdata->data.p_csys_data->origin,
                         from_csys);

     ProUtilMatrixInvert(from_csys, to_csys);
     ProGeomitemdataFree(&gdata);

/*--------------------------------------------------------------------*\ 
    Extract the csys name 
\*--------------------------------------------------------------------*/ 
     ProModelitemNameGet(&csys_geom, wname);
     ProWstringToString(csys_name, wname);

/*--------------------------------------------------------------------*\ 
    Get the root solid, and the transform from the root to the
     component owning the csys 
\*--------------------------------------------------------------------*/ 
    
     if(csys_comppath.table_num > 0)
     {         
	solid = csys_comppath.owner;
        ProAsmcomppathTrfGet(&csys_comppath, PRO_B_FALSE, trf);
     }     	
     else
     {         
	solid = csys_geom.owner;
        ProUtilMatrixCopy(NULL, trf);
     }

/*--------------------------------------------------------------------*\ 
    Get a list of datum points in the model 
\*--------------------------------------------------------------------*/ 
     UsrPointsCollect(solid, &points);
     ProArraySizeGet(points, &n_points);
     if(n_points < 1)
         return(0);

/*--------------------------------------------------------------------*\ 
    Get the user to select the table position 
\*--------------------------------------------------------------------*/ 
     ProMessageDisplay(msgfil,"USER Pick table position");
     if(ProMousePickGet(PRO_ANY_BUTTON, &button, pos) != PRO_TK_NO_ERROR)
         return(0);

/*--------------------------------------------------------------------*\ 
    Setup the table data 
\*--------------------------------------------------------------------*/ 
     ProDwgtabledataAlloc(&tdata);
     ProDwgtabledataOriginSet(tdata, pos);
     ProDwgtabledataSizetypeSet(tdata, PRODWGTABLESIZE_CHARACTERS);
     ProDwgtabledataColumnsSet(tdata, 5, widths, justs);

     heights = (double*)calloc(n_points+2, sizeof(double));
     for(p=0;p<n_points+2;p++)
         heights[p] = 1.0;
     ProDwgtabledataRowsSet(tdata, n_points+2, heights);
     free(heights);

/*--------------------------------------------------------------------*\ 
    Create the table 
\*--------------------------------------------------------------------*/ 
     ProMdlCurrentGet((ProMdl*)&drawing);
     ProDrawingTableCreate(drawing, tdata, PRO_B_FALSE, &table);

/*--------------------------------------------------------------------*\ 
    Merge the top row cells to form the header 
\*--------------------------------------------------------------------*/ 
     ProDwgtableCellsMerge(&table, 1, 1, 5, 1, PRO_B_FALSE);

/*--------------------------------------------------------------------*\ 
    Write header text specifying model and csys 
\*--------------------------------------------------------------------*/ 
     ProMdlDataGet(solid, &mdata);
     ProWstringToString(name, mdata.name);
     ProWstringToString(type, mdata.type);

     ProTKSprintf(line, "Datum points for %s.%s, w.r.t csys %s\n",
                 name, type, csys_name);

     UsrTableTextAdd(&table, 1, 1, line);

/*--------------------------------------------------------------------*\ 
    Add subheadings to columns 
\*--------------------------------------------------------------------*/ 
     UsrTableTextAdd(&table, 1, 2, "Feat id");
     UsrTableTextAdd(&table, 2, 2, "Point");
     UsrTableTextAdd(&table, 3, 2, "X");
     UsrTableTextAdd(&table, 4, 2, "Y");
     UsrTableTextAdd(&table, 5, 2, "Z");

/*--------------------------------------------------------------------*\ 
    For each datum point... 
\*--------------------------------------------------------------------*/ 
    for(p=0;p<n_points;p++)
     { 
/*--------------------------------------------------------------------*\ 
        If the owning feature is the same as the last one, just
         merge column 1 with the cell above, else enter the feature id 
\*--------------------------------------------------------------------*/ 
        if(p == 0 || points[p].feature.id != points[p-1].feature.id)
         {
             ProTKSprintf(name, "%d", points[p].feature.id);
             UsrTableTextAdd(&table, 1, p+3, name);
             last_feat_row = p+3;
         }

         else
             ProDwgtableCellsMerge(&table, 1, last_feat_row, 1, p+3,
                                    PRO_B_FALSE);

/*--------------------------------------------------------------------*\ 
        Add the point name to column 2 
\*--------------------------------------------------------------------*/ 
         ProWstringToString(name, points[p].name);
         UsrTableTextAdd(&table, 2, p+3, name);

/*--------------------------------------------------------------------*\ 
        Transform the location w.r.t to the csys 
\*--------------------------------------------------------------------*/ 
         ProPntTrfEval(points[p].position, trf,     points[p].position);
         ProPntTrfEval(points[p].position, to_csys, points[p].position);

/*--------------------------------------------------------------------*\ 
        Add the XYZ to column 3,4,5 
\*--------------------------------------------------------------------*/ 
         ProTKSprintf(name,"%8.3f", points[p].position[0]);
         UsrTableTextAdd(&table, 3, p+3, name);
         ProTKSprintf(name,"%8.3f", points[p].position[1]);
         UsrTableTextAdd(&table, 4, p+3, name);
         ProTKSprintf(name,"%8.3f", points[p].position[2]);
         UsrTableTextAdd(&table, 5, p+3, name);     
}

/*--------------------------------------------------------------------*\ 
    Display the table 
\*--------------------------------------------------------------------*/ 
    ProDwgtableDisplay(&table);

    return(1);
 }

/*====================================================================*\ 
FUNCTION : UsrTableTextAdd() 
PURPOSE  : Utility to add one text line to a table cell 
\*====================================================================*/ 
int UsrTableTextAdd(
     ProDwgtable *table,
     int col,
     int row,
     char *text)
 {
     ProWstring *lines;
     ProArrayAlloc(1, sizeof(ProWstring), 1, (ProArray*)&lines);
     lines[0] = (wchar_t*)calloc(strlen(text) + 1, sizeof(wchar_t));
     ProStringToWstring(lines[0], text);
     ProDwgtableTextEnter(table, col, row, lines);
     ProArrayFree((ProArray*)&lines);
 }

/*====================================================================*\ 
FUNCTION : UsrPointAction() 
PURPOSE  : Visit action function called for each datum point 
\*====================================================================*/ 
ProError UsrPointAction(
     ProGeomitem *geomitem,
     ProError filt_status,
     ProAppData data)
 {
     Point_t point;
     ProPoint p;
/*--------------------------------------------------------------------*\ 
    Find out which feature the datum point belongs to 
\*--------------------------------------------------------------------*/ 
    ProGeomitemFeatureGet(geomitem, &point.feature);

/*--------------------------------------------------------------------*\ 
    Get the point position 
\*--------------------------------------------------------------------*/ 
    ProPointInit(geomitem->owner, geomitem->id, &p);
    ProPointCoordGet(p, point.position);

/*--------------------------------------------------------------------*\ 
    Get the point name 
\*--------------------------------------------------------------------*/ 
    ProModelitemNameGet(geomitem, point.name);

/*--------------------------------------------------------------------*\ 
    Add the point to the array 
\*--------------------------------------------------------------------*/ 
    ProArrayObjectAdd((ProArray*)data, -1, 1, &point);

    return(PRO_TK_NO_ERROR);
 }

/*====================================================================*\ 
FUNCTION : UsrFeatureAction() 
PURPOSE  : Visit action function called for each feature
\*====================================================================*/ 
ProError UsrFeatureAction(
     ProFeature *feature,
     ProError filt_status,
     ProAppData data)
 {
     ProFeatStatus fstatus;

/*--------------------------------------------------------------------*\ 
    If the feature is not active, skip it 
\*--------------------------------------------------------------------*/ 
     ProFeatureStatusGet(feature, &fstatus);
     if(fstatus != PRO_FEAT_ACTIVE)
         return(PRO_TK_NO_ERROR);

/*--------------------------------------------------------------------*\ 
    Visit the datum points in the feature 
\*--------------------------------------------------------------------*/ 
    ProFeatureGeomitemVisit(feature, PRO_POINT, UsrPointAction, 
                              NULL, data);

    return(PRO_TK_NO_ERROR);
 }

/*====================================================================*\ 
FUNCTION : UsrPointsCollect() 
PURPOSE  : Collect an array of datum points in the solid 
\*====================================================================*/ 
int UsrPointsCollect(
     ProSolid solid,
     Point_t **points) { 
/*--------------------------------------------------------------------*\ 
    Allocate the array 
\*--------------------------------------------------------------------*/ 
    ProArrayAlloc(0, sizeof(Point_t), 1, (ProArray*)points);

/*--------------------------------------------------------------------*\ 
    Visit the features 
\*--------------------------------------------------------------------*/ 
    ProSolidFeatVisit(solid, UsrFeatureAction, NULL, points);
 }


/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/////////////////    dimensions /////////////////////////////////
/////////////////////////////////////////////////////////////////

int UsrPointGeomitemsCollect(ProSolid solid, ProGeomitem **points);

/*====================================================================*\ 
FUNCTION: UsrDimPoints() 
PURPOSE  : Command to create a table of datum points 
\*====================================================================*/ 
int UsrDimPoints() {
     ProError status;
     ProSelection *sel, csys_sel;
     int n_sel, n_points, p;
     ProSolid solid;
     ProGeomitem csys_geom;
     ProAsmcomppath csys_comppath;
     ProMatrix trf;
     ProVector csys_pos, csys_3dpos, pnt_pos, dim_pos, outline[2];
     ProGeomitem *points;
     ProDrawing drawing;
     ProSelection *attachments;
     ProDimSense *senses;
     ProDimension dimension, vbase_dim, hbase_dim;
     ProPoint point;
     ProView view;
     ProFileName msgfil;

     ProStringToWstring (msgfil, "msg_ugdrawing.txt");
    
     ProMdlCurrentGet((ProMdl*)&drawing);

/*--------------------------------------------------------------------*\ 
    Select a coordinate system. This defines the model (the top one
     in that view), and the common attachments for the dimensions 
\*--------------------------------------------------------------------*/ 
     ProMessageDisplay(msgfil,"USER Select csys");
     status = ProSelect("csys",1,NULL,NULL,NULL,NULL,&sel,&n_sel);
     if(status != PRO_TK_NO_ERROR || n_sel < 1)
         return(0);

     ProSelectionCopy(sel[0], &csys_sel);
     ProSelectionModelitemGet(csys_sel, &csys_geom);
     ProSelectionAsmcomppathGet(csys_sel, &csys_comppath);

/*--------------------------------------------------------------------*\ 
    Get the root solid 
\*--------------------------------------------------------------------*/ 
     if(csys_comppath.table_num > 0)
         solid = csys_comppath.owner;

     else
         solid = csys_geom.owner;

/*--------------------------------------------------------------------*\ 
    Get a list of datum points in the model 
\*--------------------------------------------------------------------*/ 
     UsrPointGeomitemsCollect(solid, &points);
     ProArraySizeGet(points, &n_points);
     if(n_points < 1)
         return(0);

/*--------------------------------------------------------------------*\ 
    Calculate where the csys is located on the drawing 
\*--------------------------------------------------------------------*/ 
     ProSelectionPoint3dGet(csys_sel, csys_pos);
     if(csys_comppath.table_num > 0)
     {
         ProAsmcomppathTrfGet(&csys_comppath, PRO_B_TRUE, trf);
         ProPntTrfEval(csys_pos, trf, csys_pos);
     }

     memcpy(csys_3dpos, csys_pos, sizeof(ProVector));     
     ProSelectionViewGet(csys_sel, &view);     
     ProDrawingViewTransformGet(drawing, view, PRO_B_TRUE, trf);     
     ProPntTrfEval(csys_pos, trf, csys_pos);

/*--------------------------------------------------------------------*\ 
    Get the view outline 
\*--------------------------------------------------------------------*/ 
     ProDrawingViewOutlineGet(drawing, view, outline);

/*--------------------------------------------------------------------*\ 
    Allocate the attachment arrays 
\*--------------------------------------------------------------------*/ 
     ProArrayAlloc(2, sizeof(ProSelection), 1, (ProArray*)&attachments);
     ProArrayAlloc(2, sizeof(ProDimSense), 1, (ProArray*)&senses);

/*--------------------------------------------------------------------*\ 
    For each datum point... 
\*--------------------------------------------------------------------*/ 
    for(p=0;p<n_points;p++)
     { 
/*--------------------------------------------------------------------*\ 
        Calculate the position of the point on the drawing 
\*--------------------------------------------------------------------*/ 
         ProPointInit(points[p].owner, points[p].id, &point);
         ProPointCoordGet(point, pnt_pos);
         ProPntTrfEval(pnt_pos, trf, pnt_pos);

/*--------------------------------------------------------------------*\ 
        Set up the "sense" information for the point attachment
         (Specify a vertical dimension) 
\*--------------------------------------------------------------------*/ 
         senses[0].type = PRO_DIM_SNS_TYP_PNT;
         senses[0].sense = PRO_POINT_TYP_CENTER;
         senses[0].orient_hint = PRO_DIM_ORNT_VERT;

/*--------------------------------------------------------------------*\ 
        Set up the "sense" information for the csys attachment 
\*--------------------------------------------------------------------*/ 
         senses[1].type = PRO_DIM_SNS_TYP_PNT;
         senses[1].sense = PRO_POINT_TYP_CENTER;
         senses[1].orient_hint = PRO_DIM_ORNT_NONE;

/*--------------------------------------------------------------------*\ 
        Set the attachment information 
\*--------------------------------------------------------------------*/ 
         ProSelectionAlloc(NULL, &points[p], &attachments[0]);
         ProSelectionViewSet(view, &attachments[0]);
         ProSelectionCopy(csys_sel, &attachments[1]);

/*--------------------------------------------------------------------*\ 
        Calculate the dim position to be just to the left of the
         drawing view, midway between the point and csys 
\*--------------------------------------------------------------------*/ 
         dim_pos[0] = outline[0][0] - 20.0;
         dim_pos[1] = (csys_pos[1] + pnt_pos[1]) / 2.0;
         dim_pos[2] = 0.0;

/*--------------------------------------------------------------------*\ 
        Create and display the dimension 
\*--------------------------------------------------------------------*/ 
         ProDrawingDimCreate(drawing, attachments, senses, dim_pos,
                         PRO_B_FALSE, &dimension);

         ProAnnotationShow ((ProAnnotation*)&dimension, NULL, view);

/*--------------------------------------------------------------------*\ 
        If this is the first vertical dim, create an ordinate base
        line from it, else just convert it to ordinate 
\*--------------------------------------------------------------------*/ 
         if(p==0)
             ProDrawingOrdbaselineCreate(drawing, &dimension,
                         csys_3dpos, &vbase_dim);
         else
             ProDrawingDimToOrdinate(drawing, &dimension, &vbase_dim);

/*--------------------------------------------------------------------*\ 
        Set this dimension to be horizontal 
\*--------------------------------------------------------------------*/ 
         senses[0].orient_hint = PRO_DIM_ORNT_HORIZ;

/*--------------------------------------------------------------------*\ 
        Calculate the dim position to be just to the bottom of the
        drawing view, midway between the point and csys 
\*--------------------------------------------------------------------*/ 
         dim_pos[0] = (csys_pos[0] + pnt_pos[0]) / 2.0;
         dim_pos[1] = outline[0][1] - 20.0;

/*--------------------------------------------------------------------*\ 
        Create and display the dimension 
\*--------------------------------------------------------------------*/ 
         ProDrawingDimCreate(drawing, attachments, senses,dim_pos,
                         PRO_B_FALSE, &dimension);

         ProAnnotationShow ((ProAnnotation*)&dimension, NULL, view);

/*--------------------------------------------------------------------*\ 
        If this is the first horizontal dim, create an ordinate base line
         from it, else just convert it to ordinate 
\*--------------------------------------------------------------------*/ 
         if(p==0)
             ProDrawingOrdbaselineCreate(drawing, &dimension,
                         csys_3dpos, &hbase_dim);

         else
             ProDrawingDimToOrdinate(drawing, &dimension, &hbase_dim);

/*--------------------------------------------------------------------*\ 
        Free the attachment selection objects 
\*--------------------------------------------------------------------*/ 
         ProSelectionFree(&attachments[0]);
         ProSelectionFree(&attachments[1]);
     }

    return(1);
 }

/*====================================================================*\ 
FUNCTION : UsrPointAddAction() 
PURPOSE  : Visit action function called for each datum point 
\*====================================================================*/ 
ProError UsrPointAddAction(
     ProGeomitem *geomitem,
     ProError filt_status,
     ProAppData data) 
{ 
/*--------------------------------------------------------------------*\ 
    Add the point to the array 
\*--------------------------------------------------------------------*/ 
    ProArrayObjectAdd((ProArray*)data, -1, 1, geomitem);
    return(PRO_TK_NO_ERROR);
}

/*====================================================================*\ 
FUNCTION : UsrFeatureGetPointsAction() 
PURPOSE: Visit action function called for each feature 
\*====================================================================*/ 
ProError UsrFeatureGetPointsAction(
     ProFeature *feature,
     ProError filt_status,
     ProAppData data)
 {
     ProFeatStatus fstatus;

/*--------------------------------------------------------------------*\ 
    If the feature is not active, skip it 
\*--------------------------------------------------------------------*/ 
     ProFeatureStatusGet(feature, &fstatus);
     if(fstatus != PRO_FEAT_ACTIVE)
         return(PRO_TK_NO_ERROR);

/*--------------------------------------------------------------------*\ 
    Visit the datum points in the feature 
\*--------------------------------------------------------------------*/ 
     ProFeatureGeomitemVisit(feature, PRO_POINT, UsrPointAddAction, NULL,
                              data);

     return(PRO_TK_NO_ERROR);
 }

/*====================================================================*\ 
FUNCTION : UsrPointGeomitemsCollect() 
PURPOSE: Collect an array of datum points in the solid 
\*====================================================================*/ 
int UsrPointGeomitemsCollect(
     ProSolid solid,
     ProGeomitem **points)
 { 
   /*--------------------------------------------------------------------*\ 
    Allocate the array 
   \*--------------------------------------------------------------------*/ 
    ProArrayAlloc(0, sizeof(ProGeomitem), 1, (ProArray*)points);

   /*--------------------------------------------------------------------*\ 
    Visit the features 
   \*--------------------------------------------------------------------*/ 
    ProSolidFeatVisit(solid, UsrFeatureGetPointsAction, NULL, points);
 }
/*
from UgDimLocationUtils.c:
       status = ProSolidDimensionVisit (solid,
				       PRO_B_FALSE,
				       UserDimensionShow,
				       UserDimensionFilterByVector,
					 &data);  
*/

 
typedef struct feat_find_data
{
    ProName     	 name;
    ProFeature  	 feat;
    ProBoolean  	 found;
    ProFeattype      type;
} FeatFind_data;
////////////////////////////////////////////////////////////////////////
 ProError UsrFeatFilterAction ( ProFeature* p_feature,ProAppData app_data )
  {
  ProFeattype      type;
  FeatFind_data   *feat_data = (FeatFind_data*)  app_data;

 //ERR_INFO(ProFeatureTypeGet(p_feature,&(type)))
 ProFeatureTypeGet(p_feature,&(type));
 //if(USE_LOG)
	 //Log("Feature id = %d type = %d",p_feature->id,type);

 if(type !=feat_data->type) return (PRO_TK_CONTINUE);
 else
 {
 //if(USE_LOG) 
	 //Log("UsrFeatFilterAction type foune =%d",feat_data->type);
 return (PRO_TK_NO_ERROR);}

 }

 /*--------------------------------------------------------------------*\
     Action function for finding the Plane datums
 \*--------------------------------------------------------------------*/
 ProError UsrFeatFindAction(ProFeature *feat,ProError  filter_status,
                                                    ProAppData  data)
 {
     FeatFind_data   *feat_data=(FeatFind_data*)data;
     int              feat_id;
     ProName          name;
     ProError status;
 /*--------------------------------------------------------------------*\
     Get the name of this dtm
 \*--------------------------------------------------------------------*/

     status =ProModelitemNameGet (feat, name);
     if(status ==PRO_TK_E_NOT_FOUND ) return (PRO_TK_NO_ERROR);
	 
	 fprintf(fpG,"name = %S\n", name);
 /*--------------------------------------------------------------------*\
     If it is the name you want, set the data and stop visiting.
 \*--------------------------------------------------------------------*/
     if (!ProUtilWstrCmp (name, feat_data->name))
     {
 		//if(USE_LOG)
			//Log("UsrFeatFindAction Name found !");
         feat_data->found = PRO_B_TRUE;
         //ERR(ProFeatureInit(feat->owner, feat->id, &(feat_data->feat) ) )
		 ProFeatureInit(feat->owner, feat->id, &(feat_data->feat) );
         return (PRO_TK_E_FOUND);
     }
     return (PRO_TK_NO_ERROR);
 }

 /*--------------------------------------------------------------------*\
     Find a coordinate system datum by name.
 \*--------------------------------------------------------------------*/
 ProError UsrFeatFindbyname (
     ProSolid       solid,
     char           *name, ProFeattype   type,
     ProFeature     *feat)
 {
     FeatFind_data  data;

 /*--------------------------------------------------------------------*\
     Initialize the search data.
 \*--------------------------------------------------------------------*/
     ProStringToWstring (data.name, name);
     data.found = PRO_B_FALSE;
     data.type=type;
 /*--------------------------------------------------------------------*\
     Visit all the coordinate systems.
 \*--------------------------------------------------------------------*/
     ProSolidFeatVisit (solid, UsrFeatFindAction, UsrFeatFilterAction,
         (ProAppData)&data);
 /*--------------------------------------------------------------------*\
     If found, set the output argument.
 \*--------------------------------------------------------------------*/
     if (data.found)
     {
         memcpy (feat, &data.feat, sizeof(ProModelitem));
         return (PRO_TK_NO_ERROR);
     }
     return (PRO_TK_E_NOT_FOUND);
 }
/////////////////////////////////////////////////////////////////////