#include<stdio.h>
#include<string.h>

int main()
{ 
    printf("                  ***WELCOME TO  SRPC SUPER MART***                 \n");
    printf("====================================================================\n");
    printf("====================================================================\n");
    
    int customer_id;
    char customer_name[50],customer_number[10];
    int i=0;
    
    printf("ENTER NAME : ");
    gets(customer_name);
    printf("ENTER A NUMBER : ");
    gets(customer_number);
    printf("ENTER CUSTOMER ID : ");
    scanf("%d",&customer_id);
    
    
    //GROCERYY
    int grocery_total=0;
    int oil,rice,sugar,milkpd,tomatokchp,atta,turmaric,maggie;
    int oilt=0,ricet=0,sugart=0,milkpdt=0,tomatokchpt=0,attat=0,turmarict=0,maggiet=0;
    //STATIONERY
    int stationery_total=0;
    int book,note_copy,pen,colour_pencile,geometry,paper,eraser,files;
    int bookt=0,notet=0,pent=0,colourt=0,geometryt=0,papert=0,erasert=0,filest=0;
    //FOOD
    int food_total=0;
    int ice_cream,chocolate,mixture,bread,fruit_jam,horlicks,chips,cake;
    int ice_creamt=0,chocolatet=0,mixturet=0,breadt=0,fruit_jamt=0,horlickst=0,chipst=0,caket=0;
    //BEVERAGES
    int beverages_total=0;
    int sprite,cocacola,maaza,fruite,real,thumsup,cold_coffee,pepsi;
    int spritet=0,cocacolat=0,thumsupt=0,fruitet=0,pepsit=0,realt=0,cold_coffeet=0,maazat=0;
    
    for(i=1;i<100;i++)
    {
        int catagory;
        printf("CATAGORY\n");
        printf("1 : GROCERY\n2 : STATIONERY\n3 : FOOD\n4 : BEVERAGES\n");
        printf("ENTER '0' FOR FINAL BILL\n");
        printf("ENTER YOUR CATAGORY AS NUMBER : ");
        scanf("%d",&catagory);
   
        switch (catagory)
        {
        case 1:
            printf("SI NO.     PRODUCT          QUANTTY            PRICE\n");
            printf("======================================================\n");
            printf("1>    |     OIL             |  1L        |       150$\n");
            printf("2>    |     RICE            |  1kg       |       40$\n");
            printf("3>    |     ATTA            |  1kg       |       52$\n");
            printf("4>    |     SUGAR           |  1kg       |       68$\n");
            printf("5>    |     MILK POWDER     |  1kg       |       650$\n");
            printf("6>    |     TURMARIC POWDER |  100g      |       20$\n");
            printf("7>    |     MAGGIE          |  1pac      |       60$\n");
            printf("8>    |     TOMATO KETCHUP  |  1L        |       75$\n");
            printf("======================================================\n");
            printf("ENTER OIL QUANTITY : ");
            scanf("%d",&oil);
            oilt=oil*150;
            printf("ENTER RICE QUANTITY : ");
            scanf("%d",&rice);
            ricet=rice*40;
            printf("ENTER ATTA QUANTITY : ");
            scanf("%d",&atta);
            attat=atta*52;
            printf("ENTER SUGAR QUANTITY : ");
            scanf("%d",&sugar);
            sugart=sugar*68;
            printf("ENTER MILK POWDER QUANTITY : ");
            scanf("%d",&milkpd);
            milkpdt=milkpd*650;
            printf("ENTER TURMARIC POWDER QUANTITY : ");
            scanf("%d",&turmaric);
            turmarict=turmaric*20;
            printf("ENTER MAGGI QUANTITY : ");
            scanf("%d",&maggie);
            maggiet=maggie*60;
            printf("ENTER TOMATO KETCHUP QUANTITY : ");
            scanf("%d",&tomatokchp);
            tomatokchpt=tomatokchp*75;
            grocery_total=oilt+attat+ricet+sugart+milkpdt+turmarict+tomatokchpt+maggiet;
            break;
         
        case 2:
            printf("SI NO.        PRODUCT          QUANTTY            PRICE\n");
            printf("=========================================================\n");
            printf("1>     |       BOOK           |   1pic      |       60$\n");
            printf("2>     |       NOTE COPY      |   1pic      |       40$\n");
            printf("3>     |       PEN            |   1pac      |       20$\n");
            printf("4>     |       COLOUR PENCILE |   1pac      |       68$\n");
            printf("5>     |       GEOMETRY BOX   |   1pic      |       65$\n");
            printf("6>     |       PAPER          |   1rill     |       120$\n");
            printf("7>     |       FILES          |   1pic      |       60$\n");
            printf("8>     |       ERASER         |   1pic      |       10$\n");
            printf("=========================================================\n");
            printf("ENTER BOOK QUANTITY : ");
            scanf("%d",&book);
            bookt=book*60;
            printf("ENTER NOTE COPY QUANTITY : ");
            scanf("%d",&note_copy);
            notet=note_copy*40;
            printf("ENTER PEN QUANTITY : ");
            scanf("%d",&pen);
            pent=pen*20;
            printf("ENTER COLOUR PENCILlE QUANTITY : ");
            scanf("%d",&colour_pencile);
            colourt=colour_pencile*68;
            printf("ENTER GEOMETRY BOX QUANTITY : ");
            scanf("%d",&geometry);
            geometryt=geometry*65;
            printf("ENTER PAPER QUANTITY : ");
            scanf("%d",&paper);
            papert=paper*120;
            printf("ENTER FILES QUANTITY : ");
            scanf("%d",&files);
            filest=files*60;
            printf("ENTER ERASER QUANTITY : ");
            scanf("%d",&eraser);
            erasert=eraser*10;
            stationery_total=bookt+pent+papert+colourt+filest+geometryt+erasert+notet;
            break;

        case 3:
            printf("SI NO.        PRODUCT          QUANTTY            PRICE\n");
            printf("=========================================================\n");
            printf("1>     |       ICE CREAM    |     1pac     |        60$\n");
            printf("2>     |       CHOCOLATE    |     1pac     |        40$\n");
            printf("3>     |       MIXTURE      |     1pac     |        67$\n");
            printf("4>     |       BREAD        |     1pac     |        40$\n");
            printf("5>     |       FRUIT JAM    |     1pac     |        65$\n");
            printf("6>     |       CAKE         |     1pac     |        120$\n");
            printf("7>     |       HORLICKS     |     1pac     |        500$\n");
            printf("8>     |       CHIPS        |     1pac     |        10$\n");
            printf("=========================================================\n");
            printf("ENTER ICE CREAM QUANTITY : ");
            scanf("%d",&ice_cream);
            ice_creamt=ice_cream*60;
            printf("ENTER CHOCOLATE QUANTITY : ");
            scanf("%d",&chocolate);
            chocolatet=chocolate*40;
            printf("ENTER MIXTURE QUANTITY : ");
            scanf("%d",&mixture);
            mixturet=mixture*67;
            printf("ENTER BREAD QUANTITY : ");
            scanf("%d",&bread);
            breadt=bread*40;
            printf("ENTER FRUIT JAM QUANTITY : ");
            scanf("%d",&fruit_jam);
            fruit_jamt=fruit_jam*65;
            printf("ENTER CAKE QUANTITY : ");
            scanf("%d",&cake);
            caket=cake*120;
            printf("ENTER HORLICKS  QUANTITY : ");
            scanf("%d",&horlicks);
            horlickst=horlicks*500;
            printf("ENTER CHIPS QUANTITY : ");
            scanf("%d",&chips);
            chipst=chips*10;\
            food_total=chocolatet+caket+chipst+ice_creamt+mixturet+breadt+horlickst+fruit_jamt;
            break;

        case 4:
            printf("SI NO.        PRODUCT          QUANTTY            PRICE\n");
            printf("=========================================================\n");
            printf("1>      |     SPRITE      |      1L      |       60$\n");
            printf("2>      |     COCACOLA    |      1L      |       60$\n");
            printf("3>      |     MAAZA       |      1L      |       67$\n");
            printf("4>      |     FRUITE      |      1L      |       72$\n");
            printf("5>      |     PEPSI       |      1L      |       65$\n");
            printf("6>      |     THUMS UP    |      1L      |       65$\n");
            printf("7>      |     COLD COFFEE |      1L      |       120$\n");
            printf("8>      |     REAL        |      1L      |       100$\n");
            printf("=========================================================\n");
            printf("ENTER SPRITE QUANTITY : ");
            scanf("%d",&sprite);
            spritet=sprite*60;
            printf("ENTER COCACOLA QUANTITY : ");
            scanf("%d",&cocacola);
            cocacolat=cocacola*60;
            printf("ENTER MAAZA QUANTITY : ");
            scanf("%d",&maaza);
            maazat=maaza*67;
            printf("ENTER FRUITE QUANTITY : ");
            scanf("%d",&fruite);
            fruitet=fruite*72;
            printf("ENTER PEPSI QUANTITY : ");
            scanf("%d",&pepsi);
            pepsit=pepsi*65;
            printf("ENTER THUMS UP QUANTITY : ");
            scanf("%d",&thumsup);
            thumsupt=thumsup*65;
            printf("ENTER COLD COFFEE  QUANTITY : ");
            scanf("%d",&cold_coffee);
            cold_coffeet=cold_coffee*60;
            printf("ENTER REAL QUANTITY : ");
            scanf("%d",&real);
            realt=real*10;
            beverages_total=cocacolat+cold_coffeet+pepsit+spritet+thumsupt+realt+maazat+fruitet;
            break;
        default :
        	 if(catagory==0)
           {
            printf("\n\n\n");
            break;
           }     
            printf("INVALID CHOICE\n");
            break;
        }
         if(catagory==0)
           {
            printf("\n\n\n");
            break;
           }     
    }
    printf("******************''SRPC''******************\n");
    printf("               FINAL BILL               \n");
    printf("         GSTIN NO : 84888774877         \n");
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("CUSTOMER NAME : %s\n",customer_name);
    printf("CUSTOMER NUMBER : %s\n",customer_number);
    printf("CUSTOMER ID : %d\n",customer_id);
    printf("########################################\n\n");
    printf("########################################\n\n");
    printf("     PRODUCT               TOTAL      \n");
    printf("--------------------------------------\n");
    
    if(oilt != 0)
        printf("OIL TOTAL             =    %d$\n",oilt);
    if(ricet != 0)
        printf("RICE TOTAL            =    %d$\n",ricet);
    if(attat != 0)
        printf("ATTA TOTAL            =    %d$\n",attat); 
    if(sugart != 0)
        printf("SUGAR TOTAL           =    %d$\n",sugart);
    if(milkpdt != 0)
        printf("MILK POWDER TOTAL     =    %d$\n",milkpdt);
    if(turmarict!=0)
        printf("TURMARIC POWDER TOTAL =    %d$\n",turmarict);
    if (maggiet != 0) 
        printf("MAGGIE TOTAL          =    %d$\n",maggiet); 
    if (tomatokchpt != 0)
        printf("TOMATO KETCHUP TOTAL  =    %d$\n",tomatokchpt);
   
    if(grocery_total!=0){
        printf("-----------------------------------------------\n");
        printf("TOTAL GROCERY         =    %d$\n",grocery_total);   
        printf("-----------------------------------------------\n"); 
    } 

    if(bookt != 0)
        printf("BOOK TOTAL            =    %d$\n",bookt);    
    if(notet != 0)
        printf("NOTE COPY TOTAL       =    %d$\n",notet);       
    if(pent != 0)
        printf("PEN TOTAL             =    %d$\n",pent); 
    if(colourt != 0)
        printf("COLOUR PENCIL TOTAL   =    %d$\n",colourt);
    if (geometryt != 0)
        printf("GEOMETRY BOX TOTAL    =    %d$\n",geometryt);
    if(papert != 0)
        printf("PAPER TOTAL           =    %d$\n",papert);
    if(filest != 0)
        printf("FILES TOTAL           =    %d$\n",filest);
    if(erasert != 0)
        printf("ERASER TOTAL          =    %d$\n",erasert);
        
    
    if(stationery_total!=0){
        printf("-----------------------------------------------\n");
        printf("TOTAL STATIONERY      =    %d$\n",stationery_total);
        printf("-----------------------------------------------\n");
    }

    if(ice_creamt != 0)
        printf("ICE CREAM TOTAL       =    %d$\n",ice_creamt);
    if(chocolatet!=0)
        printf("CHOCOLATE TOTAL       =    %d$\n",chocolatet);
    if(mixturet != 0)
        printf("MIXTURE TOTAL         =    %d$\n",mixturet);
    if(breadt != 0)
        printf("BREAD TOTAL           =    %d$\n",breadt);
    if(fruit_jamt != 0)
        printf("FRUIT JAM TOTAL       =    %d$\n",fruit_jamt);
    if(caket != 0)
        printf("CAKE TOTAL            =    %d$\n",caket);
    if(horlickst != 0)
        printf("HORLICKS TOTAL        =    %d$\n",horlickst);
    if(chipst != 0) 
        printf("CHIPS TOTAL           =    %d$\n",chipst);
    
    if(food_total!=0){
        printf("-----------------------------------------------\n");
        printf("TOTAL FOOD            =    %d$\n",food_total);
        printf("-----------------------------------------------\n");
    }
        
    
    if(spritet != 0)
        printf("SPRITE TOTAL          =    %d$\n",spritet);
    if(cocacolat != 0)
        printf("COCACOLA TOTAL        =    %d$\n",cocacolat);
    if(maazat != 0)
        printf("MAAZA TOTAL           =    %d$\n",maazat);
    if(fruitet != 0)
        printf("FRIUTE TOTAL          =    %d$\n",fruitet);
    if(pepsit != 0)
        printf("PEPSI TOTAL           =    %d$\n",pepsit);
    if(thumsupt != 0) 
        printf("THUMSUP TOTAL         =    %d$\n",thumsupt);
    if(cold_coffeet != 0)
        printf("COLD COFFEE TOTAL     =    %d$\n",cold_coffeet);
    if(realt != 0)    
        printf("REAL TOTAL            =    %d$\n",realt);
   
    if(beverages_total!=0){
        printf("-----------------------------------------------\n");
        printf("TOTAL BEVERAGES       =    %d$\n",beverages_total);
        printf("-----------------------------------------------\n");
    }

    int grand_total=0;
    grand_total=grocery_total+stationery_total+food_total+beverages_total;
    printf("GRAND TOTAL           =        %d$\n",grand_total);
    printf("===================================================\n");
    printf("***************************************************\n");
    printf("                        THANK  YOU                 \n");
    printf("                        VISIT AGAIN                \n");
    printf("***************************************************\n");    
}
