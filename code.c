for(int i=1;i<=n;i++)  //for each task Ti submitted to the schedule queue do (n tasks)
{
	for(int j=1;j<=m;j++)  //for each node Nj in the cluster do  (m nodes)
	{
		x=0;
		for(int k=1;k<i;k++)
		{
			x+= ek+ cka_ska + cki_ski + ckc_skc; //cka_ska authentication overhead,cki_ski integrity overhead,ckc_skc communicaton overhead
		}
		esj_Ti = rj+ x; //Use Equation 12 to compute esj(Ti), the earliest start time of task Ti on node Nj;
		cimin= cka_minska + cki_minski + ckc_minskc;//Use Equation 13 to obtain the minimal security overhead c min of task Ti;
--------if((esj_Ti+ei+cimin ≤ di) && (∃ Tk  ∈ N j , dk  > di:   esj (Tk )+ei+ci(Nj) ≤ dk))
		{
------------//Sort the security service weights in a decreasing order of their values, e.g., wiv1 <wiv2 <wiv3 ,wherevl∈{a,c,g},1≤l≤3;
			for(int l=1;l<=3;l++)
			{
				sivl =min(Sivl);
			} 
			for(int l=1;l<=3;l++)
			{
				while(sivl <max(Sivl))
				{
--------------------//Increase security level sivl 
--------------------//Use Equation 11 to calculate security overhead ci(Nj) and weight wtij and wmij of Ti on Nj;
--------------------if ((esj_Ti+ei+ci> di)&& (∃Tk ∈Nj, dk > di: esj (Tk)+ei+ ci (Nj) > dk ) &&(resource checking cond))
					{
------------------------//decrease security level sivl 
						break;
					}

				}
			}
			for(int e=1;e<=q;e++)//Obtain the security level of Ti on Nj using Equation 1 
			{
				SLij+= wi(e)*si(e);
			}
			
		}
		else
		{
			SLij=0;//Set the security level to 0 because Ti has no feasible schedule on Nj
		}

	}
----if(∃ N j ∈N : SLij >0 )
	{
		yi=1;//Accept task Ti 
--------//Find node Nk for Ti, subject to: SL ik = max1≤ j≤n  {SLij };
--------//dispatch task Ti to Nk according to the schedule generated above;
	}
	else
	{
		yi=0;
	}
}