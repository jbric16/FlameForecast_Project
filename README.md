# Phoenix Eye: Rising Above Wildfire Through Prediction


<p align="center">
  <img src="images/logo_oficial-removebg-preview.png" alt="Image Alt Text" width="800">
</p>




Team: [Phoenix Aviators](https://www.spaceappschallenge.org/2023/find-a-team/rocket-hacks/)



A resilient Machine Learning system for forecasting future time-lapsed wildfire events and providing vital notifications to underserved regions with limited internet and power access. This pioneering solution harnesses LoRa communication technology to deliver timely alerts, fortifying community safety.

## Map of Contents
1. [About the project](#About-the-project)
2. [Introduction](#Introduction)
3. [Video](#Video)
4. [Fire Prediction Visualization](#Fire-Prediction-Visualization)
5. [Prototype](#Prototype)
6. [Dataset preparation](#Dataset-preparation)  
7. [Instructions to Run Models](#Instructions-to-Run-Models)
8. [Models Comparisson](#Models-Comparisson)
9. [LoRa communication](#LoRa-Communication)
10. [Business Model](#Business-Model)
11. [File Descriptions](#File-Descriptions)
12. [Document or report](#Document-or-report)
13. [Languages, frameworks, platforms, APIs, & other technologies used](#Languages,-frameworks,-platforms,-APIs,-&-other-technologies-used)
14. [Team members & their contributions](#Team-members-&-their-contributions)

## About the project
Submission for the https://www.spaceappschallenge.org/2023/challenges/managing-fire-increasing-community-based-fire-management-opportunities/


In response to the ongoing global trend of increasing temperatures leading to a higher frequency of wildfires, the region of Sonora, Mexico, has emerged as one of the top ten areas within Mexico grappling with substantial wildfire-related challenges. Due to this critical situation, we are developing a computer program designed to predict the path of wildfires effectively. This program operates as an intelligent predictive tool and harnesses the capabilities of Convolutional Neural Networks, a well-established and highly effective method for such predictive tasks.

Recognizing that reliable internet or cellular connectivity may be limited, particularly in remote areas, we are incorporating a specialized alert system that functions independently of the internet. This system relies on LoRaWAN technology, which facilitates long-distance alert transmission without the need for internet connectivity.

Furthermore, our project includes the creation of a website featuring a 3D map displaying the current wildfire location and its potential trajectory. This map also indicates the areas where alerts have been dispatched. This resource serves as a valuable decision-making tool for various stakeholders, including firefighters, local authorities, and the general public seeking up-to-date information.

Our objective is to employ advanced computer tools and specialized alert systems to notify individuals when an impending fire is approaching their location, particularly in remote and challenging-to-access areas.

<p align="center">
<img src="https://www.meganoticias.mx/uploads/noticias/incendio-en-imuris-con-mas-de-100-personas-sigue-encendido-433407.jpeg" alt="Texto Alternativo" width="400"/>
</p>


<p align="center">Above: Wildfire in Imuris, Sonora on June. 16 2023</p>







In addition to these high-tech solutions, it's important to note that some communities in Sonora do not rely on any formal predictive systems for wildfires. Consequently, our approach also includes the development of analytical tools that utilize locally available objects and knowledge to forecast fire risks. This way, we can offer a more inclusive solution that caters to the diverse needs of the region. Adding to the previous context, an ecologist from the state of Sonora who specializes in wildfires, has stated: 

> "We do not use any system to predict fires; everything we do is based purely on expert judgment."
> Juan Mario Cirett Gálan
<p align="center">
  <a href="https://www.nmas.com.mx/nmas-local/programas/las-noticias-sonora/videos/impacto-incendios-forestales-medio-ambiente-sonora">
    <img src="images/marioFuego.jpg" alt="Texto Alternativo" width="400"/>
  </a>
</p>




This underscores the need for our project to also consider and incorporate traditional and expert-based methods of wildfire prediction. This will ensure that our advanced tools and specialized alert systems are complemented by the wealth of existing local knowledge, offering a more comprehensive and adaptable solution for wildfire prediction and management in Sonora. We are aiming to exapnd into the whole world not only in Sonora.

## Introduction
The rising number of forest fires has been significantly worsened by elevated global temperatures, largely attributed to human activities. Within this framework, the state of Sonora, Mexico, has become particularly susceptible, ranking among the top ten most fire-affected areas nationally. Due to this trend, the urgent need for effective predictive models that can prognosticate fire expansion and thereby facilitate timely alerts for at-risk populations. 

<p align="center">
<img src="https://cdn.unotv.com/images/2023/06/incendios-forestales-en-sonora-siguen-activos-animales-estan-muriendo-093141.jpg" alt="Texto Alternativo" width="400"/>
</p>

<p align="center">
Above: Wildfire in Imuris, Sonora on June. 23 2023
</p>

To address this critical issue, this project proposes two predictive models. The first model is based on Convolutional Neural Networks (CNNs) and Long Short-Term Memory (LSTM) networks to estimate wildfire spread. The second model utilizes Random Forest, which is a machine learning algorithm that employs decision trees to make predictions. These machine learning approaches provide highly accurate estimations of wildfire spread, thus facilitating timely alerts for populations most at risk. 

Moreover, recognizing the infrastructural limitations of remote communities, we integrated a LoRaWAN-based alert system. This system is strategically designed to reach isolated or internet-deficient areas, effectively maximizing alert coverage in regions critically impacted by wildfires. 

In addition to the alert system, we have developed a web interface intended for use by researchers and assisting groups, such as firefighters, to facilitate a more in-depth analysis of the predictive data.

<p align="center">
<img src="images/AntenasPhoenix.png" alt="Texto Alternativo" width="400"/>
</p>

## Video

<p align="center">
  <a href="https://youtu.be/IwxJKA0R6RQ">
    <img src="https://img.youtube.com/vi/IwxJKA0R6RQ/0.jpg" alt="Nombre del Video" width="900">
  </a>
</p>


## Fire Prediction Visualization

<p align="center">
  <a href="https://youtu.be/u4Ig2gYqvuU">
    <img src="https://img.youtube.com/vi/u4Ig2gYqvuU/0.jpg" alt="Nombre del Video" width="900">
  </a>
</p>






## Prototype

In the prototype phase, we utilized Shapr3D to create a 3D model of our device, which takes the shape of a rectangular box. Housed within this box are a LoRa communication module and its corresponding antenna, responsible for receiving data. Additionally, the device is equipped with an auditory alarm system, activated by a buzzer, to alert users in the event of an approaching fire. A push button is also integrated into the design, allowing users to manually deactivate the alarm. Given that the target market for this product comprises communities without access to electrical infrastructure, the device incorporates a solar panel for energy harvesting and recharging. This ensures continuous operation by harnessing sunlight for power, converting it into stored energy, and facilitating effortless recharging of the device. 

<p align="center">
<img src="images/prototype.png" alt="Texto Alternativo" width="400"/>
</p>


## Dataset preparation

Data sources are mostly from https://firms.modaps.eosdis.nasa.gov/

| Data source           | Description  |
| --------------------- | ------------ |
| [MODIS](https://modis.gsfc.nasa.gov/)                 | The Moderate Resolution Imaging Spectroradiometer (MODIS) MCD43A4 Version 6 Nadir Bidirectional Reflectance Distribution Function (BRDF)-Adjusted Reflectance (NBAR) dataset is produced daily using 16 days of Terra and Aqua MODIS data at 500 meter (m) resolution. |
|  [Mateomatics API ](https://www.meteomatics.com/en/weather-api/?ppc_keyword=meterological%20api&utm_term=meterological%20api&utm_campaign=API+meteo+(ES)&utm_source=adwords&utm_medium=ppc&hsa_acc=5001518620&hsa_cam=9635976224&hsa_grp=100215817118&hsa_ad=434708210612&hsa_src=g&hsa_tgt=kwd-1201933814859&hsa_kw=meterological%20api&hsa_mt=p&hsa_net=adwords&hsa_ver=3&gclid=CjwKCAjwp8OpBhAFEiwAG7NaEq-V1ESSXXNOJ1XH_BgrMDWIYdz85rLabfjejVCP15mr3NMZNFlUuRoCtp4QAvD_BwE) | The Meteomatics Weather API provides a comprehensive range of weather data including current conditions, historical data, short-term and seasonal forecasts, as well as marine, environmental, and climate data. It offers tailored solutions with an emphasis on accuracy, speed, and ease of access, catering to a broad range of industry needs​. |
| [FIRMS active fire data](https://firms.modaps.eosdis.nasa.gov/) | The Fire Information for Resource Management System (FIRMS) distributes Near Real-Time (NRT) active fire data within 3 hours of satellite observation from the Visible Infrared Imaging Radiometer Suite (VIIRS) aboard S-NPP and NOAA 20 at 375 meter (m) resolution. |
| [Copernicus DEM](https://registry.opendata.aws/copernicus-dem/) | Digital Surface Model (DSM) which represents the surface of the Earth including buildings, infrastructure and vegetation.. |



## Instructions to Run Models  


### How to run [Convolutional Neural Network + LSTM Model](https://github.com/jbric16/FlameForecast_Project/tree/main/deep_learning)

1. The notebook is executable on Google Colab, a cloud computing platform that offers a free Jupyter Notebooks environment. No additional configuration is needed for most cases, as Google Colab comes pre-installed with many data science and machine learning libraries.
2. [DataSets](https://github.com/jbric16/FlameForecast_Project/tree/main/deep_learning/Datasets) for the notebook to work correctly, you only need to load two specific data sets. You can do this using Google Colab's file import capabilities or upload them from Google Drive if they are stored there.


#### Area to be analyzed 
The notebook is designed to predict the path of fires in a specific area of ​​Nogales, Sonora, covering a sampling area of ​​64 km x 64 km, as you can see in figure 1. The data, which ranges from 2016 to 2023, comes from the FIRMS system (Fire Information for Resource Management System). Popular Python libraries such as matplotlib, seaborn, pandas, and numpy are used for data analysis and visualization. Additionally, the machine learning model implements convolutional neural networks (CNN) and long short-term memory networks (LSTM). The notebook starts by importing these libraries and loading the data set from a CSV file. The data is then binned into 6-hour time intervals to facilitate subsequent analysis.


<p align="center">
Figure 1. Nogales Zone
</p>


<p align="center"><img src="images/lugar.png" alt="Texto Alternativo" width="600"/></p>

### Data quality


In the study of fires and climate conditions, certain variables show considerable variation, making them potentially important factors to consider. For instance, 'Brightness' and 'FRP (Fire Radiative Power)' in the fire dataset, along with 'Apparent Temperature', 'Heat Index', and 'Humidity' in the climate dataset, exhibit a wide range of values, suggesting they could be good indicators of fire intensity and atmospheric conditions, respectively. Conversely, variables like 'Scan' and 'Track' in the fire dataset, as well as 'Precipitation' in the climate dataset, display less variation, possibly indicating their limited utility in differentiating fires or assessing their likelihood. Meanwhile, variables such as 'Confidence' and 'Temperature' in the fire data, along with 'Wind Speed' and 'Wind Direction' in the climate data, also show notable variation, hinting at their relevance in evaluating the confidence level in fire detection and understanding fire spread.

<p align="center"><img src="images/IMAGENESCOMPLETAS.png" alt="Texto Alternativo" width="1000"/></p>

The model pays special attention to the most recent information, as evidenced by the relationship between "Original Time 4" and "Actual Prediction 5." This feature is essential in situations where the most recent data is the most relevant for making predictions. The model's prediction, as seen in "Actual Prediction 5", appears to filter out and smooth out some of the noise present in the original images. This can be useful in identifying areas of primary interest and eliminating potential false alarms.




<p align="center"><img src="images/Prediction.png" alt="Texto Alternativo" width="1000"/></p>


### Future

- Integrate LEO and also GEO satellites
- We created that its expandable exonomics in term that we can ingest data into the machine learning model form LEO to GEO.









### How to run [Random Forest Model](https://github.com/jbric16/FlameForecast_Project/tree/main/Notebooks)

1. [Download data set](https://www.kaggle.com/datasets/fantineh/next-day-wildfire-spread) This dataset is a comprehensive, multivariate compilation of historical wildfires in the United States over nearly a decade. It merges two-dimensional fire data with a rich set of explanatory variables like topography, weather, and vegetation, making it an ideal resource for machine learning applications. It comprises 18,445 samples, each representing a 64 km x 64 km region where a fire occurred. The dataset includes 'fire' vs. 'no fire' labels, with an extra category for uncertain labels. To study fire propagation, it contains both the previous day's fire mask and the current day's fire mask. Using Google Earth Engine, data from various sources are collated and layered with relevant variables for wildfire prediction, including elevation, temperature, humidity, and more. This dataset is invaluable for developing wildfire propagation models based on remote sensing data with a one-day lead time.

Examples from the data set as variables

![Examples](images/dataSetExamples.png)

### How to run Cell2Fire Simulator


## Models Comparisson



| Metric        | Fire Precision | Fire Recall | No-Fire Precision | No-Fire Recall |
|---------------|---------------|------------|-------------------|----------------|
| ConvLSTM      | 0.92          | 0.75       | 0.99              | 0.99           |
| RandomForest       | 0.30          | 0.44       | 0.98              | 0.97           |
| Cell2Fire Simulator       | 0.30          | 0.44       | 0.98              | 0.97           |






## LoRa Communication

<p align="center">
  <img src="images/Screenshot 2023-10-19 at 4.02.16.png" alt="Image Alt Text">
</p>

First, let's clarify the distinction between LoRa and LoRaWAN:

LoRa is a wireless modulation technique derived from Chirp Spread Spectrum (CSS) technology, which encodes information into radio waves.
<p align="center">
  <img src="images/Screenshot 2023-10-19 at 4.52.02.png" alt="Image Alt Text">
</p>

LoRaWAN, on the other hand, is a Medium Access Control (MAC) layer built on top of LoRa. It serves as a network architecture that enables interconnection, bidirectional communication, and scalability.

When we combine these two technologies, we create a communication system that operates without the need for an internet connection. LoRa gateways and end devices make this possible. Within the gateway's range, a bidirectional message can be transmitted via LoRa radio waves. Subsequently, the gateway operates through LoRaWAN to facilitate the transmission or reception of information to and from the network and application server.

The LoRa architecture seamlessly enables communication with our end node, which functions as an alert receiver equipped with an Arduino, operating within the 863-923 MHz frequency range. Within this operational framework, our application server efficiently manages the processing of HTTP requests generated by our model, directing them to the network server. The LoRaWAN network server establishes a communication channel with a LoRa gateway. This gateway exclusively employs LoRa RF radio waves, utilizing chirp pulses, and plays a pivotal role in transmitting messages.

To further enhance our non-Internet communication capabilities, we've implemented a network of three LoRa Gateways, effectively serving as signal repeaters. These gateways collaborate to extend the reach of Node End devices, acting as receivers, allowing them to transmit messages across distances of up to 45 kilometers without reliance on an internet connection, solely harnessing the capabilities of LoRa RF technology.


## Business Model
Click to check business model: https://miro.com/welcomeonboard/QWl0OWd2UUFpNGNvZGNyc2VWYXE2eWloV0gySkljT3NVSlFpb3RPeXpqcXhrMTI5UWFtamN3dXc4TGxiWFhVc3wzMDc0NDU3MzUwNTYyMDUwNTE4fDI=?share_link_id=428474196356


## File Descriptions 
* [LoRa](https://github.com/jbric16/FlameForecast_Project/tree/main/LoRa): This section is dedicated to the implementation of LoRa technology in conjunction with Arduino and the Helium network. Its primary function is to serve as an alert receiver. Within this directory, you will find two key files: a .ino file designed for Arduino simulation, and another .ino file tailored for the implementation of LoRa WAN connectivity via the Helium network.

* [Notebooks](https://github.com/jbric16/FlameForecast_Project/tree/main/Notebooks): This section comprises two pivotal notebook files, each designed for specific tasks. One is engineered to execute next-day fire predictions using the Random Forest model, while the other is tailored for the implementation of Convolutional Neural Networks (CNN) combined with Long Short-Term Memory (LSTM) models for advanced forecasting.


## Document or report 


## Languages, frameworks, platforms, APIs, & other technologies used

- Python 3 used for processing, modelling and visualisation
- Scikit for feature importance visualisation
- Deep learning used Keras/tensorflow
- https://firms.modaps.eosdis.nasa.gov/ for VIIRS fire data
- https://eod-catalog-svc-prod.astraea.earth/ for MODIS data
- Git & github used for version control of code



## Team members & their contributions

Note that each team member helped in contribuitng with all this. 

![Examples](images/Team.jpg)




